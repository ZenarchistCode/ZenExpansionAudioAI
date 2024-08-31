modded class ExpansionNPCBase
{
	float m_ZenTalkDuration;
	float m_ZenTalkDelta;

	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

		// Server-side receivers
		if (sender && rpc_type == ZENEXPANSIONAUDIORPC.CLIENT_REQUEST_NPC_SPEAK)
		{
			Param1<float> server_receives_data;
			if (!ctx.Read(server_receives_data))
				return;

			// Trigger talk animation for param1 miliseconds
			SetNpcTalkingServer(server_receives_data.param1);
		}

		// CLient-side receivers
		if (GetGame().IsClient() && rpc_type == ZENEXPANSIONAUDIORPC.SERVER_SEND_QUESTREQ)
		{
			Param1<bool> client_receive_data = new Param1<bool>(false);
			if (!ctx.Read(client_receive_data))
				return;

			if (client_receive_data.param1)
			{
				GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Play Quest Required SoundSet");
				PlayVoiceAudioZen(ZENTRADERAUDIO.QUESTREQ);
			}
		}
	}

	void ZenExpansionAudio_TriggerQuestRequiredVoice(PlayerIdentity id)
	{
		Param1<bool> server_send_data = new Param1<bool>(true);
		RPCSingleParam(ZENEXPANSIONAUDIORPC.SERVER_SEND_QUESTREQ, server_send_data, true, id);
	}

	void PlayVoiceAudioZen(ZENTRADERAUDIO type)
	{
		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] PlayVoiceAudioZen() not @Override!");
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
