#ifdef EXPANSIONMODMARKET
modded class ExpansionMarketMenu
{
	override void InitMarketCategories()
	{
		super.InitMarketCategories();

		if (GetTraderObject() && GetTraderObject().GetTraderEntity() && !GetTraderObject().GetTraderEntity().IsInherited(ExpansionTraderStaticBase))
		{
			ExpansionTraderNPCBase traderNPC = ExpansionTraderNPCBase.Cast(GetTraderObject().GetTraderEntity());
			if (traderNPC)
				traderNPC.PlayVoiceAudioZen(ZENTRADERAUDIO.HELLO);
		}
	};
}
#endif