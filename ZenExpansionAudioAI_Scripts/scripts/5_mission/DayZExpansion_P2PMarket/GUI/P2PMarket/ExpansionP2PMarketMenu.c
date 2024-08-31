#ifdef EXPANSIONMODP2PMARKET
modded class ExpansionP2PMarketMenu
{
	protected EffectSound m_VoiceAudioZen;

	override void SetTraderItems(array<ref ExpansionP2PMarketListing> listings, int traderID, string traderName = string.Empty, string iconName = string.Empty, TStringArray currencies = null, int displayCurrencyValue = 1, string displayCurrencyName = string.Empty)
	{
		super.SetTraderItems(listings, traderID, traderName, iconName, currencies, displayCurrencyValue, displayCurrencyName);

		Object npc = GetNearestQuestNpcZen();
		if (npc)
			PlayVoiceAudioZen(npc);
	};

	protected Object GetNearestQuestNpcZen()
	{
		array<Object> nearbyObjects = new array<Object>;
		GetGame().GetObjectsAtPosition3D(GetGame().GetPlayer().GetPosition(), 2.5, nearbyObjects, NULL);

		foreach (Object obj : nearbyObjects)
		{
			if (obj.IsInherited(ExpansionP2PMarketTraderStatic))
				continue;

			#ifdef EXPANSIONMODAI
			if (ExpansionP2PMarketTraderNPCAI.Cast(obj))
				return obj;
			#endif

			if (ExpansionP2PMarketTraderNPC.Cast(obj))
				return obj;
		}

		return NULL;
	}

	protected void PlayVoiceAudioZen(Object npc)
	{
		string voiceSoundSet = "Zen_" + npc.GetType() + "_Hello_SoundSet";
		
		// If soundset for NPC type doesn't exist, check for generic male/female soundset
		if (!GetGame().ConfigIsExisting("CfgSoundSets " + voiceSoundSet))
		{
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + npc.GetType() + "] Soundset " + voiceSoundSet + " not found. Checking for generic soundset: " + npc.GetType() + " @ " + npc.GetPosition());

			// Scan generic NPC config types
			bool useGenericVoice = false;
			string checkType = npc.GetType();
			checkType.ToLower();

			foreach (string s : GetZenExpansionAudioAIConfig().GenericAudioTypes)
			{
				if (checkType.Contains(s))
				{
					useGenericVoice = true;
					break;
				}
			}

			// If type is not found, don't play generic voice hello
			if (!useGenericVoice)
				return;

			string genericSoundSet = "";
			#ifdef EXPANSIONMODAI
			ExpansionP2PMarketTraderNPCAI npcAI = ExpansionP2PMarketTraderNPCAI.Cast(npc);
			if (npcAI)
			{
				if (npcAI.IsMale())
					genericSoundSet = "Zen_ExpansionTraderGenericMale_Hello_SoundSet";
				else
					genericSoundSet = "Zen_ExpansionTraderGenericFemale_Hello_SoundSet";
			}
			#endif

			if (genericSoundSet == "")
			{
				ExpansionP2PMarketTraderNPC npcExp = ExpansionP2PMarketTraderNPC.Cast(npc);
				if (npcExp)
				{
					if (npcExp.IsMale())
						genericSoundSet = "Zen_ExpansionTraderGenericMale_Hello_SoundSet";
					else
						genericSoundSet = "Zen_ExpansionTraderGenericFemale_Hello_SoundSet";
				}
			}

			if (genericSoundSet == "")
			{
				ExpansionNPCBase npcBase = ExpansionNPCBase.Cast(npc);
				if (!npcBase)
					return;

				if (npcBase.IsMale())
					voiceSoundSet = "Zen_ExpansionTraderGenericMale_Hello_SoundSet";
				else
					voiceSoundSet = "Zen_ExpansionTraderGenericFemale_Hello_SoundSet";
			}

			if (genericSoundSet != "")
				voiceSoundSet = genericSoundSet;
		}

		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + npc.GetType() + "] Playing soundset: " + voiceSoundSet + " @ " + npc.GetPosition());

		SoundParams soundParams = new SoundParams(voiceSoundSet);
		SoundObjectBuilder soundObjectBuilder = new SoundObjectBuilder(soundParams);	
		if (!soundObjectBuilder)
			return;

		SoundObject soundObject = soundObjectBuilder.BuildSoundObject();	
		if (!soundObject)
			return;

		soundObject.SetPosition(npc.GetPosition());
		AbstractWave wave = GetGame().GetSoundScene().Play3D(soundObject, soundObjectBuilder);
		if (!wave)
			return;

		ExpansionNPCBase npcTalker = ExpansionNPCBase.Cast(npc);
		if (npcTalker)
			npcTalker.SetNpcTalkingClient(wave.GetLength());
	}
}
#endif