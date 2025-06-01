#ifdef EXPANSIONMODMARKET
modded class ExpansionActionOpenTraderMenu
{
	#ifdef EXPANSIONMODQUESTS
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		#ifdef SERVER 
		ExpansionTraderObjectBase traderObj = ExpansionMarketModule.GetTraderFromObject(target.GetObject(), false);
		if (!player || !player.GetIdentity())
			return false;

		// This is the least obtrusive way I can currently find to check quest requirement server-side
		if (traderObj && GetExpansionSettings().GetQuest().EnableQuests)
		{
			int questID = traderObj.GetTraderMarket().RequiredCompletedQuestID;
			if (questID > -1)
			{
				//! Check if player has completed required quest
				if (!ExpansionQuestModule.GetModuleInstance().HasCompletedQuest(questID, player.GetIdentity().GetId()))
				{
					ExpansionQuestConfig questConig = ExpansionQuestModule.GetModuleInstance().GetQuestConfigByID(questID);
					if (questConig)
					{
						ExpansionTraderNPCBase traderNPC = ExpansionTraderNPCBase.Cast(traderObj.GetTraderEntity());

						if (traderNPC)
							traderNPC.ZenExpansionAudio_TriggerQuestRequiredVoice(player.GetIdentity());
					}
				}
			}
		}
		#endif

		return super.ActionCondition(player, target, item);
	}
	#endif
}
#endif