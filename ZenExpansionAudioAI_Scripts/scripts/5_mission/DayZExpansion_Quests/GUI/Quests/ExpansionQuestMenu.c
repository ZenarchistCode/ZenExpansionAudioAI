#ifdef EXPANSIONMODQUESTS
modded class ExpansionQuestMenu
{
	bool m_FadeOutVoiceZen;
	protected EffectSound m_VoiceAudioZen;
	protected ExpansionNPCBase m_NpcTalker;

	// Called when player opens quest menu (ie. speaks to NPC)
	override void SetQuests(string npcName = "", string defaultText = "", int questNPCID = -1, int questID = -1, int serverTime = 0)
	{
		super.SetQuests(npcName, defaultText, questNPCID, questID, serverTime);

		Object nearbyQuestObj = GetNearestQuestNpcZen(questNPCID);

		if (nearbyQuestObj)
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + nearbyQuestObj.GetType() + "] Speak to quest object: questNPCID=" + questNPCID + " questID=" + questID);
		else
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [QUEST OBJECT NOT FOUND!] Speak to quest object: questNPCID=" + questNPCID + " questID=" + questID);

		if (questNPCID != -1)
			PlayVoiceAudioZen("Zen_ExpansionQuestHello_" + questNPCID.ToString() + "_SoundSet", nearbyQuestObj, false);
	};

	// Search for nearest quest giver/receiver
	protected Object GetNearestQuestNpcZen(int qid = -1)
	{
		// If no selected quest & npc ID == -1, something went wrong
		if (!m_SelectedQuest && qid == -1)
		{
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] No selected quest or NPC ID is -1.");
			return NULL;
		}

		ExpansionQuestNPCBase m_ExpansionQuestNPC;
		#ifdef ENFUSION_AI_PROJECT
		ExpansionQuestNPCAIBase m_ExpansionQuestNPCAI;
		#endif
		ExpansionQuestStaticObject m_ExpansionQuestStaticObject;

		array<Object> nearbyObjects = new array<Object>;
		GetGame().GetObjectsAtPosition3D(GetGame().GetPlayer().GetPosition(), 5.0, nearbyObjects, NULL);

		foreach (Object obj : nearbyObjects)
		{
			#ifdef ENFUSION_AI_PROJECT
			if (!obj.IsInherited(ExpansionQuestNPCBase) && !obj.IsInherited(ExpansionQuestNPCAIBase) && !obj.IsInherited(ExpansionQuestStaticObject))
				continue;
			#else
			if (!obj.IsInherited(ExpansionQuestNPCBase) && !obj.IsInherited(ExpansionQuestStaticObject))
				continue;
			#endif

			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] Nearby Object: " + obj.GetType() + " (Count=" + nearbyObjects.Count() + ")");

			if (qid != -1) // We have a specific NPC id to speak from
			{
				// Check nearby specific npc ID (used for hello's)
				m_ExpansionQuestNPC = ExpansionQuestNPCBase.Cast(obj);
				if (m_ExpansionQuestNPC && m_ExpansionQuestNPC.GetQuestNPCID() == qid)
					return obj;

				#ifdef ENFUSION_AI_PROJECT
				m_ExpansionQuestNPCAI = ExpansionQuestNPCAIBase.Cast(obj);
				if (m_ExpansionQuestNPCAI && m_ExpansionQuestNPCAI.GetQuestNPCID() == qid)
					return obj;
				#endif

				m_ExpansionQuestStaticObject = ExpansionQuestStaticObject.Cast(obj);
				if (m_ExpansionQuestStaticObject && m_ExpansionQuestStaticObject.GetQuestNPCID() == qid)
					return obj;
			}

			// We have no specific NPC id to speak from - search for one nearby associated with quest
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] No direct object found for " + qid);
			string questGivers = "";

			// Check all nearby quest giver npc IDs
			foreach (int id1 : m_SelectedQuest.QuestGiverIDs)
			{
				m_ExpansionQuestNPC = ExpansionQuestNPCBase.Cast(obj);
				if (m_ExpansionQuestNPC && m_ExpansionQuestNPC.GetQuestNPCID() == id1)
					return obj;

				#ifdef ENFUSION_AI_PROJECT
				m_ExpansionQuestNPCAI = ExpansionQuestNPCAIBase.Cast(obj);
				if (m_ExpansionQuestNPCAI && m_ExpansionQuestNPCAI.GetQuestNPCID() == id1)
					return obj;
				#endif

				questGivers = questGivers + id1 + ",";
			}

			// No givers found
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] No nearby quest giver found for IDs " + questGivers);
			string questReceivers = "";

			// Check all nearby quest receiver npc IDs
			foreach (int id2 : m_SelectedQuest.QuestTurnInIDs)
			{
				m_ExpansionQuestNPC = ExpansionQuestNPCBase.Cast(obj);
				if (m_ExpansionQuestNPC && m_ExpansionQuestNPC.GetQuestNPCID() == id2)
					return obj;

				#ifdef ENFUSION_AI_PROJECT
				m_ExpansionQuestNPCAI = ExpansionQuestNPCAIBase.Cast(obj);
				if (m_ExpansionQuestNPCAI && m_ExpansionQuestNPCAI.GetQuestNPCID() == id2)
					return obj;
				#endif

				questReceivers = questReceivers + id2 + ",";
			}

			// No receivers found
			GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] No nearby quest receiver found for IDs " + questReceivers);
		}

		return NULL;
	}

	// Called when player selects a quest or a quest auto-complete pops up
	override void SetQuest(ExpansionQuestConfig quest)
	{
		super.SetQuest(quest);

		StopZenVoiceAudio();

		if (!GetGame() || !GetGame().GetPlayer() || !m_SelectedQuest)
			return;

		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if (!player)
			return;

		m_PlayerData = ExpansionQuestModule.GetModuleInstance().GetClientQuestData();
		if (m_PlayerData)
			m_CurrentPlayerQuestData = m_PlayerData.GetQuestDataByQuestID(quest.GetID());

		ExpansionQuestState questState = ExpansionQuestState.NONE;
		if (m_CurrentPlayerQuestData)
			questState = m_CurrentPlayerQuestData.State;

		string voiceSoundSet = "";
		switch (questState)
		{
			case ExpansionQuestState.NONE:
			case ExpansionQuestState.STARTED:
				voiceSoundSet = "Zen_ExpansionQuest_SoundSet_" + m_SelectedQuest.ID.ToString() + "_1";
				break;
			case ExpansionQuestState.CAN_TURNIN:
				voiceSoundSet = "Zen_ExpansionQuest_SoundSet_" + m_SelectedQuest.ID.ToString() + "_2";
				break;
		}

		if (voiceSoundSet == "" || !GetGame().ConfigIsExisting("CfgSoundSets " + voiceSoundSet))
			return;

		PlayVoiceAudioZen(voiceSoundSet, GetNearestQuestNpcZen());
	}

	protected void PlayVoiceAudioZen(string voiceSoundSet, Object npc, bool fade = true)
	{
		if (!npc)
			return;

		GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] [" + npc.GetType() + "] Playing soundset: " + voiceSoundSet + " @ " + npc.GetPosition());

		m_VoiceAudioZen = SEffectManager.PlaySoundOnObject(voiceSoundSet, npc);
		if (m_VoiceAudioZen)
		{
			m_FadeOutVoiceZen = fade;
			m_VoiceAudioZen.SetSoundAutodestroy(true);
			if (m_FadeOutVoiceZen)
				m_VoiceAudioZen.SetSoundFadeOut(0.5);

			m_NpcTalker = ExpansionNPCBase.Cast(npc);
			if (m_NpcTalker)
				m_NpcTalker.SetNpcTalkingClient(m_VoiceAudioZen.ZenExpAI_GetAbstractWave().GetLength());
		}
	}

	protected void StopZenVoiceAudio()
	{
		if (m_VoiceAudioZen && m_FadeOutVoiceZen)
		{
			m_VoiceAudioZen.Stop();
			if (m_NpcTalker)
				m_NpcTalker.SetNpcTalkingClient(-1);
		}
	}

	override void OnHide()
	{
		super.OnHide();
		StopZenVoiceAudio();
	}
};
#endif