#ifdef EXPANSIONMODMARKET
modded class ExpansionTraderNPCBase
{
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

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

	override void PlayVoiceAudioZen(ZENTRADERAUDIO type)
	{
		string voiceSoundSet;

		if (type == ZENTRADERAUDIO.HELLO)
		{
			voiceSoundSet = "Zen_" + GetType() + "_Hello_SoundSet";
		}
		else 
		if (type == ZENTRADERAUDIO.QUESTREQ)
		{
			voiceSoundSet = "Zen_" + GetType() + "_QuestRequired_SoundSet";
		}

		if (!GetGame().ConfigIsExisting("CfgSoundSets " + voiceSoundSet))
		{
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Soundset " + voiceSoundSet + " not found. Checking for generic soundset: " + GetType() + " @ " + GetPosition());

			// Scan generic NPC config types
			bool useGenericVoice = false;
			string checkType = GetType();
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

			if (IsMale())
			{
				if (type == ZENTRADERAUDIO.HELLO)
					voiceSoundSet = "Zen_ExpansionTraderGenericMale_Hello_SoundSet";
				else
				if (type == ZENTRADERAUDIO.QUESTREQ)
					voiceSoundSet = "Zen_ExpansionTraderGenericMale_QuestRequired_SoundSet";
			}
			else
			{
				if (type == ZENTRADERAUDIO.HELLO)
					voiceSoundSet = "Zen_ExpansionTraderGenericFemale_Hello_SoundSet";
				else
				if (type == ZENTRADERAUDIO.QUESTREQ)
					voiceSoundSet = "Zen_ExpansionTraderGenericFemale_QuestRequired_SoundSet";
			}
		}

		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + GetType() + "] Playing soundset: " + voiceSoundSet + " @ " + GetPosition());

		EffectSound voiceEffect = SEffectManager.PlaySoundOnObject(voiceSoundSet, this);
		if (!voiceEffect)
			return;

		// RPC -> server talk animation duration in miliseconds
		SetNpcTalkingClient(voiceEffect.ZenExpAI_GetAbstractWave().GetLength());
		voiceEffect.SetSoundAutodestroy(true);
	}
}
#endif