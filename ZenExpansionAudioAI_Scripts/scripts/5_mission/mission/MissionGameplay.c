modded class MissionGameplay
{
    void MissionGameplay()
    {
        GetRPCManager().AddRPC("RPC_ZXAI", "RPC_ReceiveZenExpansionAudioAIConfigOnClient", this, SingeplayerExecutionType.Client);
        GetZenExpansionAudioAIConfig();
    }

    void RPC_ReceiveZenExpansionAudioAIConfigOnClient(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type != CallType.Client)
            return;

        Param3<bool, ref array<string>, ref array<string>> data;
        if (!ctx.Read(data))
            return;

        // Data received from server - sync to client config
        GetZenExpansionAudioAIConfig().DebugOn = data.param1;
        foreach (string s1 : data.param2)
        {
            s1.ToLower();
            GetZenExpansionAudioAIConfig().GenericAudioTypes.Insert(s1);
        }

        foreach (string s2 : data.param3)
        {
            s2.ToLower();
            GetZenExpansionAudioAIConfig().GenericThreatTypes.Insert(s2);
        }

        GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] GenericMaleAISoundSetCount= " + ZenExpansionAudioAIConfig.GenericMaleAISoundSets + " / GenericFemaleAISoundSetCount=" + ZenExpansionAudioAIConfig.GenericFemaleAISoundSets);
    }
};
