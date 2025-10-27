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

        Param5<bool, ref array<string>, ref array<string>, ref array<string>, ref array<string>> data;
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

        foreach (string s3 : data.param4)
        {
            s3.ToLower();
            GetZenExpansionAudioAIConfig().GenericAudioTypes_BadGuys.Insert(s3);
        }

        foreach (string s4 : data.param5)
        {
            s4.ToLower();
            GetZenExpansionAudioAIConfig().GenericThreatTypes_BadGuys.Insert(s4);
        }

        GetZenExpansionAudioAIConfig().DebugMessage("[CLIENT] GenericMaleAISoundSetCount= " + ZenExpansionAudioAIConfig.GenericMaleAISoundSets + " / GenericFemaleAISoundSetCount=" + ZenExpansionAudioAIConfig.GenericFemaleAISoundSets + " GenericMaleAISoundSetBadCount= " + ZenExpansionAudioAIConfig.GenericMale_BadGuy_AISoundSets + " / GenericFemaleAISoundSetBadCount=" + ZenExpansionAudioAIConfig.GenericFemale_BadGuy_AISoundSets);
    }
}