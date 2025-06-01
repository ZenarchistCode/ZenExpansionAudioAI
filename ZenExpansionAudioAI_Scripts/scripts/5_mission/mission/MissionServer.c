modded class MissionServer
{
	override void OnInit()
	{
		super.OnInit();

		Print("[ZenExpansionAudioAI] OnInit");
		GetZenExpansionAudioAIConfig();
	}

	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity) 
	{
		super.InvokeOnConnect(player, identity);

		float delay = 5555; // Let more important config get sent first unless debug is on
		if (GetZenExpansionAudioAIConfig().DebugOn)
			delay = 1;

		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(SendZenExpansionAudioAIConfig, delay, false, player);
	}

	void SendZenExpansionAudioAIConfig(PlayerBase player)
	{
		if (!player || !player.GetIdentity())
			return;

		// Send client config
		ref Param3<bool, ref array<string>, ref array<string>> configParams = new Param3<bool, ref array<string>, ref array<string>>(GetZenExpansionAudioAIConfig().DebugOn, GetZenExpansionAudioAIConfig().GenericAudioTypes, GetZenExpansionAudioAIConfig().GenericThreatTypes);
		GetRPCManager().SendRPC("RPC_ZXAI", "RPC_ReceiveZenExpansionAudioAIConfigOnClient", configParams, true, player.GetIdentity());
	}
};