class CfgPatches
{
	class ZenExpansionAudioAI_SoundSets
	{
		requiredVersion = 0.1;
		units[] = {};
		requiredAddons[] = { "DZ_Data" };
	};
};

class CfgMods
{
	class ZenExpansionAudioAI_SoundSets
	{
		dir = "ZenExpansionAudioAI_SoundSets";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenExpansionAudioAI_SoundSets";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
	};
};

class CfgSoundShaders
{
    class ZenExpansionAudio_SoundShaderBase
    {
        samples[] = {};
        frequency = 1;
        range = 100; // Voices are client-side only so range doesn't really matter so long as it's loud enough to hear a few meters away
        volume = 0.5; // Speechify volume is quite high so by default I attenuate by 50%
    };

	// Quest NPC greetings
	class Zen_ExpansionQuestHello_1_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\1_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_2_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\2_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_3_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\3_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_4_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\4_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_5_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\5_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_6_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\6_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_7_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\7_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_8_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\8_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_9_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\9_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_10_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\10_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_11_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\11_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_12_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\12_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_13_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\13_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_14_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\14_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_15_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\15_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_16_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\16_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_17_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\17_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_18_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\18_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_19_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\19_6", 1 }
		}; 
	};
	class Zen_ExpansionQuestHello_20_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\quests\hello\20_6", 1 }
		}; 
	};

	// Trader generic greetings
	class Zen_ExpansionTraderGenericMale_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericMale_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderGenericMale_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericMale_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderGenericFemale_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\generic\ExpansionTraderGenericFemale_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderGenericFemale_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\generic\ExpansionTraderGenericFemale_6", 1 }
		}; 
	};
	// Trader specific object type greetings & quest required
	class Zen_ExpansionTraderBoris_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderBoris_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderBoris_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderBoris_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderNaomi_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderNaomi_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderNaomi_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderNaomi_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderDenis_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderDenis_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderDenis_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderDenis_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderCyril_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderCyril_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderCyril_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderCyril_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderLinda_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderLinda_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderLinda_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderLinda_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderOliver_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderOliver_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderOliver_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderOliver_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderElias_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\hello\ExpansionTraderElias_6", 1 }
		}; 
	};
	class Zen_ExpansionTraderElias_QuestRequired_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\traders\questrequired\ExpansionTraderElias_6", 1 }
		}; 
	};

	// Expansion AI Generic Hello Voice
	class Zen_ExpansionAIHelloGenericMale_1_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_6", 1 }
		}; 
	};
	class Zen_ExpansionAIHelloGenericMale_2_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_2_6", 1 }
		}; 
	};
	class Zen_ExpansionAIHelloGenericMale_3_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_3_6", 1 }
		}; 
	};
	class Zen_ExpansionAIHelloGenericFemale_1_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_6", 1 }
		}; 
	};
	class Zen_ExpansionAIHelloGenericFemale_2_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_2_6", 1 }
		}; 
	};
	class Zen_ExpansionAIHelloGenericFemale_3_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_3_6", 1 }
		}; 
	};

	// Expansion AI Threatened Voice
	class Zen_ExpansionAIThreatGenericMale_1_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_1_6", 1 }
		}; 
	};
	class Zen_ExpansionAIThreatGenericMale_2_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_2_6", 1 }
		}; 
	};
	class Zen_ExpansionAIThreatGenericMale_3_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericMale_3_6", 1 }
		}; 
	};
	class Zen_ExpansionAIThreatGenericFemale_1_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_1_6", 1 }
		}; 
	};
	class Zen_ExpansionAIThreatGenericFemale_2_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_2_6", 1 }
		}; 
	};
	class Zen_ExpansionAIThreatGenericFemale_3_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\threat\ExpansionAIThreat_GenericFemale_3_6", 1 }
		}; 
	};

	// Specific Expansion AI soundsets example
	class Zen_eAI_SurvivorF_Irena_Hello_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_6", 1 }
		}; 
	};
	class Zen_eAI_SurvivorF_Irena_Threat_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericFemale_1_6", 1 }
		}; 
	};

	class Zen_Sanctuary_Test_Hello_Male_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_6", 1 }
		}; 
	};
	class Zen_Sanctuary_Test_Threat_Male_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_6", 1 }
		}; 
	};

	class Zen_Sanctuary_Test_Hello_Female_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_6", 1 }
		}; 
	};
	class Zen_Sanctuary_Test_Threat_Female_SoundShader : ZenExpansionAudio_SoundShaderBase 
	{ 
		samples[] = 
		{ 
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_1", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_2", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_3", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_4", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_5", 1 },
			{ "ZenExpansionAudioAI_SoundSets\data\audio\ai\generic\hello\ExpansionAIHello_GenericMale_1_6", 1 }
		}; 
	};

	// Quest ExpansionQuestState.NONE / Quest ExpansionQuestState.STARTED:
    class Zen_ExpansionQuest_SoundShader_1_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\1_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_2_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\2_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_3_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\3_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_4_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\4_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_5_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\5_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_6_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\6_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_7_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\7_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_8_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\8_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_9_1  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\9_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_10_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\10_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_11_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\11_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_12_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\12_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_13_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\13_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_14_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\14_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_15_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\15_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_16_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\16_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_17_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\17_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_18_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\18_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_19_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\19_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_20_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\20_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_21_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\21_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_22_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\22_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_23_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\23_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_24_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\24_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_25_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\25_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_26_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\26_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_27_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\27_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_28_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\28_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_29_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\29_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_30_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\30_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_31_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\31_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_32_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\32_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_33_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\33_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_34_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\34_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_35_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\35_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_36_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\36_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_37_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\37_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_38_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\38_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_39_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\39_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_40_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\40_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_41_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\41_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_42_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\42_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_43_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\43_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_44_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\44_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_45_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\45_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_46_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\46_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_47_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\47_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_48_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\48_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_49_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\49_start", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_50_1 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\50_start", 1 } }; };

	// Quest ExpansionQuestState.CAN_TURNIN:
	class Zen_ExpansionQuest_SoundShader_1_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\1_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_2_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\2_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_3_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\3_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_4_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\4_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_5_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\5_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_6_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\6_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_7_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\7_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_8_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\8_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_9_2  : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\9_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_10_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\10_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_11_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\11_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_12_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\12_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_13_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\13_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_14_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\14_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_15_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\15_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_16_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\16_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_17_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\17_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_18_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\18_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_19_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\19_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_20_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\20_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_21_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\21_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_22_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\22_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_23_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\23_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_24_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\24_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_25_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\25_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_26_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\26_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_27_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\27_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_28_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\28_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_29_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\29_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_30_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\30_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_31_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\31_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_32_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\32_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_33_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\33_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_34_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\34_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_35_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\35_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_36_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\36_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_37_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\37_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_38_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\38_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_39_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\39_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_40_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\40_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_41_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\41_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_42_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\42_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_43_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\43_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_44_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\44_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_45_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\45_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_46_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\46_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_47_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\47_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_48_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\48_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_49_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\49_complete", 1 } }; };
	class Zen_ExpansionQuest_SoundShader_50_2 : ZenExpansionAudio_SoundShaderBase { samples[] = { { "ZenExpansionAudioAI_SoundSets\data\audio\quests\dialogue\50_complete", 1 } }; };
}

class CfgSoundSets
{
	// Trader greetings
	class Zen_ExpansionTraderGenericMale_Hello_SoundSet		{ soundShaders[] = { "Zen_ExpansionTraderGenericMale_Hello_SoundShader"		}; };
	class Zen_ExpansionTraderGenericFemale_Hello_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderGenericFemale_Hello_SoundShader"	}; };
	class Zen_ExpansionTraderBoris_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderBoris_Hello_SoundShader"  }; };
	class Zen_ExpansionTraderNaomi_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderNaomi_Hello_SoundShader"  }; };
	class Zen_ExpansionTraderDenis_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderDenis_Hello_SoundShader"  }; };
	class Zen_ExpansionTraderCyril_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderCyril_Hello_SoundShader"  }; };
	class Zen_ExpansionTraderLinda_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderLinda_Hello_SoundShader"  }; };
	class Zen_ExpansionTraderOliver_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderOliver_Hello_SoundShader" }; };
	class Zen_ExpansionTraderElias_Hello_SoundSet			{ soundShaders[] = { "Zen_ExpansionTraderElias_Hello_SoundShader"  }; };

	// Trader quest required
	class Zen_ExpansionTraderGenericMale_QuestRequired_SoundSet		{ soundShaders[] = { "Zen_ExpansionTraderGenericMale_QuestRequired_SoundShader"		}; };
	class Zen_ExpansionTraderGenericFemale_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderGenericFemale_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderBoris_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderBoris_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderNaomi_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderNaomi_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderDenis_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderDenis_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderCyril_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderCyril_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderLinda_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderLinda_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderOliver_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderOliver_QuestRequired_SoundShader"	}; };
	class Zen_ExpansionTraderElias_QuestRequired_SoundSet	{ soundShaders[] = { "Zen_ExpansionTraderElias_QuestRequired_SoundShader"	}; };
	
	// Quest NPC greetings
	class Zen_ExpansionQuestHello_1_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_1_SoundShader" }; };
	class Zen_ExpansionQuestHello_2_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_2_SoundShader" }; };
	class Zen_ExpansionQuestHello_3_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_3_SoundShader" }; };
	class Zen_ExpansionQuestHello_4_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_4_SoundShader" }; };
	class Zen_ExpansionQuestHello_5_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_5_SoundShader" }; };
	class Zen_ExpansionQuestHello_6_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_6_SoundShader" }; };
	class Zen_ExpansionQuestHello_7_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_7_SoundShader" }; };
	class Zen_ExpansionQuestHello_8_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_8_SoundShader" }; };
	class Zen_ExpansionQuestHello_9_SoundSet  { soundShaders[] = { "Zen_ExpansionQuestHello_9_SoundShader" }; };
	class Zen_ExpansionQuestHello_10_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_10_SoundShader" }; };
	class Zen_ExpansionQuestHello_11_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_11_SoundShader" }; };
	class Zen_ExpansionQuestHello_12_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_12_SoundShader" }; };
	class Zen_ExpansionQuestHello_13_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_13_SoundShader" }; };
	class Zen_ExpansionQuestHello_14_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_14_SoundShader" }; };
	class Zen_ExpansionQuestHello_15_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_15_SoundShader" }; };
	class Zen_ExpansionQuestHello_16_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_16_SoundShader" }; };
	class Zen_ExpansionQuestHello_17_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_17_SoundShader" }; };
	class Zen_ExpansionQuestHello_18_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_18_SoundShader" }; };
	class Zen_ExpansionQuestHello_19_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_19_SoundShader" }; };
	class Zen_ExpansionQuestHello_20_SoundSet { soundShaders[] = { "Zen_ExpansionQuestHello_20_SoundShader" }; };

	// Expansion AI greetings
	class Zen_ExpansionAIHelloGenericMale_1_SoundSet   { soundShaders[] = { "Zen_ExpansionAIHelloGenericMale_1_SoundShader"  }; };
	class Zen_ExpansionAIHelloGenericMale_2_SoundSet   { soundShaders[] = { "Zen_ExpansionAIHelloGenericMale_2_SoundShader"  }; };
	class Zen_ExpansionAIHelloGenericMale_3_SoundSet   { soundShaders[] = { "Zen_ExpansionAIHelloGenericMale_3_SoundShader"  }; };
	class Zen_ExpansionAIHelloGenericFemale_1_SoundSet { soundShaders[] = { "Zen_ExpansionAIHelloGenericFemale_1_SoundShader"  }; };
	class Zen_ExpansionAIHelloGenericFemale_2_SoundSet { soundShaders[] = { "Zen_ExpansionAIHelloGenericFemale_2_SoundShader"  }; };
	class Zen_ExpansionAIHelloGenericFemale_3_SoundSet { soundShaders[] = { "Zen_ExpansionAIHelloGenericFemale_3_SoundShader"  }; };

	// Expansion AI Threatened
	class Zen_ExpansionAIThreatGenericMale_1_SoundSet   { soundShaders[] = { "Zen_ExpansionAIThreatGenericMale_1_SoundShader"  }; };
	class Zen_ExpansionAIThreatGenericMale_2_SoundSet   { soundShaders[] = { "Zen_ExpansionAIThreatGenericMale_2_SoundShader"  }; };
	class Zen_ExpansionAIThreatGenericMale_3_SoundSet   { soundShaders[] = { "Zen_ExpansionAIThreatGenericMale_3_SoundShader"  }; };
	class Zen_ExpansionAIThreatGenericFemale_1_SoundSet { soundShaders[] = { "Zen_ExpansionAIThreatGenericFemale_1_SoundShader"  }; };
	class Zen_ExpansionAIThreatGenericFemale_2_SoundSet { soundShaders[] = { "Zen_ExpansionAIThreatGenericFemale_2_SoundShader"  }; };
	class Zen_ExpansionAIThreatGenericFemale_3_SoundSet { soundShaders[] = { "Zen_ExpansionAIThreatGenericFemale_3_SoundShader"  }; };

	// Quest ExpansionQuestState.NONE / Quest ExpansionQuestState.STARTED:
    class Zen_ExpansionQuest_SoundSet_1_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_1_1"  }; };
	class Zen_ExpansionQuest_SoundSet_2_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_2_1"  }; };
	class Zen_ExpansionQuest_SoundSet_3_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_3_1"  }; };
	class Zen_ExpansionQuest_SoundSet_4_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_4_1"  }; };
	class Zen_ExpansionQuest_SoundSet_5_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_5_1"  }; };
	class Zen_ExpansionQuest_SoundSet_6_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_6_1"  }; };
	class Zen_ExpansionQuest_SoundSet_7_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_7_1"  }; };
	class Zen_ExpansionQuest_SoundSet_8_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_8_1"  }; };
	class Zen_ExpansionQuest_SoundSet_9_1  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_9_1"  }; };
	class Zen_ExpansionQuest_SoundSet_10_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_10_1" }; };
	class Zen_ExpansionQuest_SoundSet_11_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_11_1" }; };
	class Zen_ExpansionQuest_SoundSet_12_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_12_1" }; };
	class Zen_ExpansionQuest_SoundSet_13_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_13_1" }; };
	class Zen_ExpansionQuest_SoundSet_14_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_14_1" }; };
	class Zen_ExpansionQuest_SoundSet_15_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_15_1" }; };
	class Zen_ExpansionQuest_SoundSet_16_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_16_1" }; };
	class Zen_ExpansionQuest_SoundSet_17_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_17_1" }; };
	class Zen_ExpansionQuest_SoundSet_18_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_18_1" }; };
	class Zen_ExpansionQuest_SoundSet_19_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_19_1" }; };
	class Zen_ExpansionQuest_SoundSet_20_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_20_1" }; };
	class Zen_ExpansionQuest_SoundSet_21_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_21_1" }; };
	class Zen_ExpansionQuest_SoundSet_22_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_22_1" }; };
	class Zen_ExpansionQuest_SoundSet_23_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_23_1" }; };
	class Zen_ExpansionQuest_SoundSet_24_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_24_1" }; };
	class Zen_ExpansionQuest_SoundSet_25_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_25_1" }; };
	class Zen_ExpansionQuest_SoundSet_26_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_26_1" }; };
	class Zen_ExpansionQuest_SoundSet_27_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_27_1" }; };
	class Zen_ExpansionQuest_SoundSet_28_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_28_1" }; };
	class Zen_ExpansionQuest_SoundSet_29_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_29_1" }; };
	class Zen_ExpansionQuest_SoundSet_30_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_30_1" }; };
	class Zen_ExpansionQuest_SoundSet_31_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_31_1" }; };
	class Zen_ExpansionQuest_SoundSet_32_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_32_1" }; };
	class Zen_ExpansionQuest_SoundSet_33_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_33_1" }; };
	class Zen_ExpansionQuest_SoundSet_34_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_34_1" }; };
	class Zen_ExpansionQuest_SoundSet_35_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_35_1" }; };
	class Zen_ExpansionQuest_SoundSet_36_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_36_1" }; };
	class Zen_ExpansionQuest_SoundSet_37_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_37_1" }; };
	class Zen_ExpansionQuest_SoundSet_38_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_38_1" }; };
	class Zen_ExpansionQuest_SoundSet_39_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_39_1" }; };
	class Zen_ExpansionQuest_SoundSet_40_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_40_1" }; };
	class Zen_ExpansionQuest_SoundSet_41_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_41_1" }; };
	class Zen_ExpansionQuest_SoundSet_42_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_42_1" }; };
	class Zen_ExpansionQuest_SoundSet_43_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_43_1" }; };
	class Zen_ExpansionQuest_SoundSet_44_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_44_1" }; };
	class Zen_ExpansionQuest_SoundSet_45_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_45_1" }; };
	class Zen_ExpansionQuest_SoundSet_46_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_46_1" }; };
	class Zen_ExpansionQuest_SoundSet_47_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_47_1" }; };
	class Zen_ExpansionQuest_SoundSet_48_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_48_1" }; };
	class Zen_ExpansionQuest_SoundSet_49_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_49_1" }; };
	class Zen_ExpansionQuest_SoundSet_50_1 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_50_1" }; };

	// Quest ExpansionQuestState.CAN_TURNIN:
    class Zen_ExpansionQuest_SoundSet_1_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_1_2"  }; };
	class Zen_ExpansionQuest_SoundSet_2_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_2_2"  }; };
	class Zen_ExpansionQuest_SoundSet_3_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_3_2"  }; };
	class Zen_ExpansionQuest_SoundSet_4_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_4_2"  }; };
	class Zen_ExpansionQuest_SoundSet_5_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_5_2"  }; };
	class Zen_ExpansionQuest_SoundSet_6_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_6_2"  }; };
	class Zen_ExpansionQuest_SoundSet_7_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_7_2"  }; };
	class Zen_ExpansionQuest_SoundSet_8_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_8_2"  }; };
	class Zen_ExpansionQuest_SoundSet_9_2  { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_9_2"  }; };
	class Zen_ExpansionQuest_SoundSet_10_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_10_2" }; };
	class Zen_ExpansionQuest_SoundSet_11_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_11_2" }; };
	class Zen_ExpansionQuest_SoundSet_12_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_12_2" }; };
	class Zen_ExpansionQuest_SoundSet_13_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_13_2" }; };
	class Zen_ExpansionQuest_SoundSet_14_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_14_2" }; };
	class Zen_ExpansionQuest_SoundSet_15_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_15_2" }; };
	class Zen_ExpansionQuest_SoundSet_16_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_16_2" }; };
	class Zen_ExpansionQuest_SoundSet_17_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_17_2" }; };
	class Zen_ExpansionQuest_SoundSet_18_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_18_2" }; };
	class Zen_ExpansionQuest_SoundSet_19_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_19_2" }; };
	class Zen_ExpansionQuest_SoundSet_20_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_20_2" }; };
	class Zen_ExpansionQuest_SoundSet_21_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_21_2" }; };
	class Zen_ExpansionQuest_SoundSet_22_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_22_2" }; };
	class Zen_ExpansionQuest_SoundSet_23_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_23_2" }; };
	class Zen_ExpansionQuest_SoundSet_24_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_24_2" }; };
	class Zen_ExpansionQuest_SoundSet_25_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_25_2" }; };
	class Zen_ExpansionQuest_SoundSet_26_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_26_2" }; };
	class Zen_ExpansionQuest_SoundSet_27_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_27_2" }; };
	class Zen_ExpansionQuest_SoundSet_28_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_28_2" }; };
	class Zen_ExpansionQuest_SoundSet_29_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_29_2" }; };
	class Zen_ExpansionQuest_SoundSet_30_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_30_2" }; };
	class Zen_ExpansionQuest_SoundSet_31_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_31_2" }; };
	class Zen_ExpansionQuest_SoundSet_32_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_32_2" }; };
	class Zen_ExpansionQuest_SoundSet_33_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_33_2" }; };
	class Zen_ExpansionQuest_SoundSet_34_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_34_2" }; };
	class Zen_ExpansionQuest_SoundSet_35_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_35_2" }; };
	class Zen_ExpansionQuest_SoundSet_36_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_36_2" }; };
	class Zen_ExpansionQuest_SoundSet_37_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_37_2" }; };
	class Zen_ExpansionQuest_SoundSet_38_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_38_2" }; };
	class Zen_ExpansionQuest_SoundSet_39_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_39_2" }; };
	class Zen_ExpansionQuest_SoundSet_40_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_40_2" }; };
	class Zen_ExpansionQuest_SoundSet_41_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_41_2" }; };
	class Zen_ExpansionQuest_SoundSet_42_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_42_2" }; };
	class Zen_ExpansionQuest_SoundSet_43_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_43_2" }; };
	class Zen_ExpansionQuest_SoundSet_44_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_44_2" }; };
	class Zen_ExpansionQuest_SoundSet_45_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_45_2" }; };
	class Zen_ExpansionQuest_SoundSet_46_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_46_2" }; };
	class Zen_ExpansionQuest_SoundSet_47_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_47_2" }; };
	class Zen_ExpansionQuest_SoundSet_48_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_48_2" }; };
	class Zen_ExpansionQuest_SoundSet_49_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_49_2" }; };
	class Zen_ExpansionQuest_SoundSet_50_2 { soundShaders[] = { "Zen_ExpansionQuest_SoundShader_50_2" }; };
};
