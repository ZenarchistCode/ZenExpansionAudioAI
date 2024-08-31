modded class eAIBase
{
	static const int ZEN_EXPANSION_AUDIO_HELLO_COOLDOWN = 120000;
	static const int ZEN_EXPANSION_AUDIO_THREAT_COOLDOWN = 10000;
	static const int ZEN_EXPANSION_AUDIO_TICK = 1000; // All milisecs
	static const float ZEN_EXPANSION_AUDIO_THREAT_THRESHOLD = 0.2;

	static int m_ZenExpansionAudioMaleSoundSetID_Tracker = 1;
	static int m_ZenExpansionAudioFemaleSoundSetID_Tracker = 1;
	int m_ZenExpansionAudioGenericSoundSetID = -1;

	float m_ZenExpansionAudioHelloLastTime;
	float m_ZenExpansionAudioThreatLastTime;
	float m_ZenExpansionAudioLastSpoke;
	float m_ZenExpansionAudioLastAggro;

	bool m_ZenExpansionAudioIsThreatenedLast;
	bool m_ZenExpansionAudioIsThreatened;

	string m_ZenExpansionAudioGroupName;

	PlayerBase m_ZenExpansionAudioClientPlayer;
	EffectSound m_VoiceAudioZen;

	void eAIBase()
	{
		// Server & client vars
		m_ZenExpansionAudioIsThreatenedLast = false;
		m_ZenExpansionAudioIsThreatened = false;
		RegisterNetSyncVariableBool("m_ZenExpansionAudioIsThreatened");

		// Stop here on server
		if (GetGame().IsDedicatedServer())
			return;

		// Client-side only vars
		m_ZenExpansionAudioHelloLastTime = GetGame().GetTime() - ZEN_EXPANSION_AUDIO_HELLO_COOLDOWN;
		m_ZenExpansionAudioLastSpoke = GetGame().GetTime() - ZEN_EXPANSION_AUDIO_HELLO_COOLDOWN;
		m_ZenExpansionAudioClientPlayer = PlayerBase.Cast(GetGame().GetPlayer());

		Zen_SetUniqueAudioSoundsetID();

		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Zen_Client_RequestGroupName, 1000, false);
	}

	//! TODO: A hacky-but-works attempt to make generic voices somewhat unique
	// Increment counter each time a new NPC is spawned. That way each NPC cycles through possible voices
	// Maybe there's a better less-convoluted way, I'm too dumb to think of one. Maybe use maps?
	void Zen_SetUniqueAudioSoundsetID()
	{
		if (IsMale())
		{
			m_ZenExpansionAudioGenericSoundSetID = m_ZenExpansionAudioMaleSoundSetID_Tracker;
			m_ZenExpansionAudioMaleSoundSetID_Tracker++;
			if (m_ZenExpansionAudioMaleSoundSetID_Tracker > ZenExpansionAudioAIConfig.GenericMaleAISoundSets)
				m_ZenExpansionAudioMaleSoundSetID_Tracker = 1;
		}
		else
		{
			m_ZenExpansionAudioGenericSoundSetID = m_ZenExpansionAudioFemaleSoundSetID_Tracker;
			m_ZenExpansionAudioFemaleSoundSetID_Tracker++;
			if (m_ZenExpansionAudioFemaleSoundSetID_Tracker > ZenExpansionAudioAIConfig.GenericFemaleAISoundSets)
				m_ZenExpansionAudioFemaleSoundSetID_Tracker = 1;
		}
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if (m_ZenExpansionAudioIsThreatened != m_ZenExpansionAudioIsThreatenedLast)
		{
			m_ZenExpansionAudioIsThreatenedLast = m_ZenExpansionAudioIsThreatened;

			if (m_ZenExpansionAudioIsThreatened)
			{
				m_ZenExpansionAudioHelloLastTime = GetGame().GetTime() - ZEN_EXPANSION_AUDIO_TICK; // Force voice check
				m_ZenExpansionAudioThreatLastTime = GetGame().GetTime();

				GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] NPC Feels Threatened @ " + GetPosition());
			}
		}
	}

	// Client -> ask server which patrol group this AI belongs to
	private void Zen_Client_RequestGroupName()
	{
		Param1<bool> params = new Param1<bool>(true);
		RPCSingleParam(ZENEXPANSIONAUDIORPC.CLIENT_REQUEST_GROUPNAME, params, true, NULL);
	}

	// Server receives request from client to tell it what patrol group this NPC belongs to (JSON config), sends the info to client
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

		if (sender && rpc_type == ZENEXPANSIONAUDIORPC.CLIENT_REQUEST_GROUPNAME)
		{
			Param1<string> server_send_data = new Param1<string>(m_ZenExpansionAudioGroupName);
			RPCSingleParam(ZENEXPANSIONAUDIORPC.SERVER_SEND_GROUPNAME, server_send_data, true, sender);
			return;
		}

		if (sender && rpc_type == ZENEXPANSIONAUDIORPC.CLIENT_REQUEST_NPC_SPEAK)
		{
			Param1<float> server_receives_data;
			if (!ctx.Read(server_receives_data))
				return;

			// Trigger talk animation for param1 miliseconds
			SetNpcTalkingServer(server_receives_data.param1);
		}

		if (GetGame().IsClient() && rpc_type == ZENEXPANSIONAUDIORPC.SERVER_SEND_GROUPNAME)
		{
			Param1<string> client_receive_data = new Param1<string>("");
			if (!ctx.Read(client_receive_data))
				return;

			m_ZenExpansionAudioGroupName = client_receive_data.param1;
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Group: " + m_ZenExpansionAudioGroupName + " SoundSetID=" + m_ZenExpansionAudioGenericSoundSetID);
		}
	}

	void Zen_SetGroupName(string name)
	{
		m_ZenExpansionAudioGroupName = name;
	}

	// Server -> client sync when threatened
	override void ReactToThreatChange(float pDt, EntityAI entityInHands = null)
	{
		super.ReactToThreatChange(pDt);

		if (m_eAI_CurrentThreatToSelf >= ZEN_EXPANSION_AUDIO_THREAT_THRESHOLD) // This threat level triggers AI to be cranky with player
			m_ZenExpansionAudioIsThreatened = true;
		else
			m_ZenExpansionAudioIsThreatened = false;

		if (m_ZenExpansionAudioIsThreatenedLast != m_ZenExpansionAudioIsThreatened)
		{
			m_ZenExpansionAudioIsThreatenedLast = m_ZenExpansionAudioIsThreatened;
			SetSynchDirty();
		}
	}

	// If player recently pissed off AI or their aggression cooldown is triggered, then change voice from 'Hello' to 'Threat'
	bool ZenExpansionAudio_IsAggro(float time)
	{
		return ((time - m_ZenExpansionAudioThreatLastTime) < 1000) || (m_ZenExpansionAudioClientPlayer && m_ZenExpansionAudioClientPlayer.eAI_GetLastAggressionCooldown() > 0);
	}

	// Haven't found an efficient way to check when AI is looking at us client-side yet, so this will do for now - scans nearby area to see if player should be spoken to
	override void eAI_ClientUpdate()
	{
		super.eAI_ClientUpdate();

		// Check client player exists
		if (!m_ZenExpansionAudioClientPlayer || !IsAlive() || IsUnconscious())
			return;

		float gameTime = GetGame().GetTime();

		// Check aggro cooldown
		if (ZenExpansionAudio_IsAggro(gameTime))
		{
			// If we have spoken a threat soundset recently, stop
			if (gameTime - m_ZenExpansionAudioLastAggro < ZEN_EXPANSION_AUDIO_THREAT_COOLDOWN)
				return;
		}
		else
		{
			// If we have said hello recently, stop
			if (gameTime - m_ZenExpansionAudioLastSpoke < ZEN_EXPANSION_AUDIO_HELLO_COOLDOWN)
				return;
		}

		// Check update tick
		if (gameTime - m_ZenExpansionAudioHelloLastTime < ZEN_EXPANSION_AUDIO_TICK)
			return;

		m_ZenExpansionAudioHelloLastTime = gameTime;

		// Check if AI is paying attention to us - extend range if aggro'd
		float distance = 5.0;

		if (ZenExpansionAudio_IsAggro(gameTime))
			distance = 30.0;

		if (vector.Distance(m_ZenExpansionAudioClientPlayer.GetPosition(), GetPosition()) > distance)
			return;

		if (ZenExpansionAudio_IsAggro(gameTime))
		{
			Zen_PlayVoiceAudio(true);
			return;
		}

		Zen_PlayVoiceAudio();
	}

	private bool Zen_UseGenericVoice()
	{
		string checkType = m_ZenExpansionAudioGroupName;
		checkType.ToLower();

		foreach (string s : GetZenExpansionAudioAIConfig().GenericAudioTypes)
		{
			if (checkType.Contains(s))
				return true;
		}

		return false;
	}

	private bool Zen_UseGenericThreatVoice()
	{
		string checkType = m_ZenExpansionAudioGroupName;
		checkType.ToLower();

		foreach (string s : GetZenExpansionAudioAIConfig().GenericThreatTypes)
		{
			if (checkType.Contains(s))
				return true;
		}

		return false;
	}

	protected void Zen_PlayVoiceAudio(bool threat = false)
	{
		string voiceSoundSet;
		string oldSoundSet = voiceSoundSet;

		if (threat)
			voiceSoundSet = "Zen_" + GetType() + "_Threat_SoundSet";
		else
			voiceSoundSet = "Zen_" + GetType() + "_Hello_SoundSet";

		// Check for classname-specific soundset first. If not found, check for group-specific soundet
		if (!GetGame().ConfigIsExisting("CfgSoundSets " + voiceSoundSet))
		{
			oldSoundSet = voiceSoundSet;

			if (IsMale())
			{
				if (threat)
				{
					voiceSoundSet = "Zen_" + m_ZenExpansionAudioGroupName + "_Threat_Male_SoundSet";
				}
				else
				{
					voiceSoundSet = "Zen_" + m_ZenExpansionAudioGroupName + "_Threat_Female_SoundSet";
				}
			}
			else
			{
				if (threat)
				{
					voiceSoundSet = "Zen_" + m_ZenExpansionAudioGroupName + "_Hello_Male_SoundSet";
				}
				else
				{
					voiceSoundSet = "Zen_" + m_ZenExpansionAudioGroupName + "_Hello_Female_SoundSet";
				}
			}

			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Soundset " + oldSoundSet + " not found.");
		}
		
		// If class and group soundset for NPC type doesn't exist, check for generic male/female soundset
		if (!GetGame().ConfigIsExisting("CfgSoundSets " + voiceSoundSet))
		{
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Soundset " + voiceSoundSet + " not found.");

			// If NPC type/group is not found on either list, don't play generic voice
			if (!Zen_UseGenericVoice() && !Zen_UseGenericThreatVoice())
				return;

			string genericSoundSet;

			if (threat)
			{
				if (IsMale())
					genericSoundSet = "Zen_ExpansionAIThreatGenericMale_" + m_ZenExpansionAudioGenericSoundSetID.ToString() + "_SoundSet";
				else
					genericSoundSet = "Zen_ExpansionAIThreatGenericFemale_" + m_ZenExpansionAudioGenericSoundSetID.ToString() + "_SoundSet";

				voiceSoundSet = genericSoundSet;
			}
			else
			{
				// This is for bandits etc - don't say Hello to players, we're not friendly
				if (!Zen_UseGenericVoice())
					return;

				if (IsMale())
					genericSoundSet = "Zen_ExpansionAIHelloGenericMale_" + m_ZenExpansionAudioGenericSoundSetID.ToString() + "_SoundSet";
				else
					genericSoundSet = "Zen_ExpansionAIHelloGenericFemale_" + m_ZenExpansionAudioGenericSoundSetID.ToString() + "_SoundSet";

				voiceSoundSet = genericSoundSet;
			}
		}

		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Play soundset: " + voiceSoundSet);

		SoundParams soundParams = new SoundParams(voiceSoundSet);
		SoundObjectBuilder soundObjectBuilder = new SoundObjectBuilder(soundParams);	
		if (!soundObjectBuilder)
			return;

		SoundObject soundObject = soundObjectBuilder.BuildSoundObject();	
		if (!soundObject)
			return;

		soundObject.SetPosition(GetPosition());
		AbstractWave wave = GetGame().GetSoundScene().Play3D(soundObject, soundObjectBuilder);
		if (!wave)
			return;

		// RPC -> server talk sound duration in miliseconds
		SetNpcTalkingClient(wave.GetLength());

		if (threat) // This makes it so AI can order player to drop weapon etc more often than it says Hello
		{
			if (m_ZenExpansionAudioClientPlayer && m_ZenExpansionAudioClientPlayer.eAI_GetLastAggressionCooldown() > 0)
			{
				// If player aggro'd this NPC, don't talk for 10+ minutes (600k ms)
				m_ZenExpansionAudioLastSpoke = GetGame().GetTime() + 600000;
				m_ZenExpansionAudioLastAggro = GetGame().GetTime() + 600000;
				return;
			}

			m_ZenExpansionAudioLastAggro = GetGame().GetTime();
		}

		m_ZenExpansionAudioLastSpoke = GetGame().GetTime();
	}

	// TALKING CODE (COPIED FROM ExpansionNPCBase -> TODO: FIND A WAY TO MERGE THESE TWO CLASS'S CODE FOR THIS!)
	float m_ZenTalkDuration;
	float m_ZenTalkDelta;

	void ZenExpansionAudio_TriggerQuestRequiredVoice(PlayerIdentity id)
	{
		Param1<bool> server_send_data = new Param1<bool>(true);
		RPCSingleParam(ZENEXPANSIONAUDIORPC.SERVER_SEND_QUESTREQ, server_send_data, true, id);
	}

	// Tell server to CommandHandler talk animate for X miliseconds (shave off .5 second to account for latency and to sync lips better)
	void SetNpcTalkingServer(float p_talkDuration)
	{
		m_ZenTalkDuration = p_talkDuration - 0.5;
	}

	// Send RPC to server to tell it to make this NPC 'speak'
	void SetNpcTalkingClient(float p_talkDuration)
	{
		Param1<float> params = new Param1<float>(p_talkDuration);
		RPCSingleParam(ZENEXPANSIONAUDIORPC.CLIENT_REQUEST_NPC_SPEAK, params, true, NULL);
		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] RPC->Server TalkDuration=" + p_talkDuration);
	}

	// Trigger talking animation (server-side)
	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)
	{
		super.CommandHandler(pDt, pCurrentCommandID, pCurrentCommandFinished);

		HumanCommandAdditives ad = GetCommandModifier_Additives();
		if (!ad)
			return;

		if (m_ZenTalkDuration > 0)
		{
			ad.SetTalking(true);

			m_ZenTalkDelta += pDt;
			if (m_ZenTalkDelta >= m_ZenTalkDuration)
			{
				m_ZenTalkDuration = 0;
				m_ZenTalkDelta = 0;
			}
		}
		else
		{
			ad.SetTalking(false);
		}
	}
}
