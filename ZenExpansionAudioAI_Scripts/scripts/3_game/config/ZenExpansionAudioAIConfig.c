class ZenExpansionAudioAIConfig
{
	// Config location
	private const static string zenModFolder = "$profile:\\ExpansionMod\\Settings\\";
	private const static string zenConfigName = "ZenExpansionAudioAI.json";
	private const static string CURRENT_VERSION = "2";
	string CONFIG_VERSION = "";

	// General AI soundset Settings
	static int GenericMaleAISoundSets = 0;
	static int GenericFemaleAISoundSets = 0;
	static int GenericMale_BadGuy_AISoundSets = 0;
	static int GenericFemale_BadGuy_AISoundSets = 0;

	// Settings data
	bool DebugOn;
	ref array<string> GenericAudioTypes;
	ref array<string> GenericThreatTypes;

	ref array<string> GenericAudioTypes_BadGuys;
	ref array<string> GenericThreatTypes_BadGuys;

	void Load()
	{
		GenericAudioTypes = new array<string>;
		GenericThreatTypes = new array<string>;
		GenericAudioTypes_BadGuys = new array<string>;
		GenericThreatTypes_BadGuys = new array<string>;

		LoadGenericSoundSetCount();
		LoadGenericSoundSetCount_BadGuys();

		Print("[ZenExpansionAudioAI] Loaded " + GenericMaleAISoundSets + " generic male good guy soundsets.");
		Print("[ZenExpansionAudioAI] Loaded " + GenericFemaleAISoundSets + " generic female good guy soundsets.");
		Print("[ZenExpansionAudioAI] Loaded " + GenericMale_BadGuy_AISoundSets + " generic male bad guy soundsets.");
		Print("[ZenExpansionAudioAI] Loaded " + GenericFemale_BadGuy_AISoundSets + " generic male bad guy soundsets.");

		// Don't load JSON on server
		if (!GetGame().IsDedicatedServer())
			return;

		if (FileExist(zenModFolder + zenConfigName))
		{
			JsonFileLoader<ZenExpansionAudioAIConfig>.JsonLoadFile(zenModFolder + zenConfigName, this);

			if (CONFIG_VERSION != CURRENT_VERSION)
			{
				// Mismatch, back up old version
				JsonFileLoader<ZenExpansionAudioAIConfig>.JsonSaveFile(zenModFolder + zenConfigName + "_old", this);
			}
			else
			{
				// Config exists and version matches, stop here.
				Save();
				return;
			}
		}

		CONFIG_VERSION = CURRENT_VERSION;

		DebugOn = false;

		GenericAudioTypes.Clear();
		GenericAudioTypes.Insert("ExpansionP2PTrader");
		GenericAudioTypes.Insert("ExpansionTrader");
		GenericAudioTypes.Insert("Sanctuary_Guards");

		GenericThreatTypes.Clear();
		GenericThreatTypes.Insert("Bunker_Bandits_Level01");

		GenericAudioTypes_BadGuys.Clear();
		GenericAudioTypes_BadGuys.Insert("YellowKing");

		GenericThreatTypes_BadGuys.Clear();
		GenericThreatTypes_BadGuys.Insert("YellowKing");

		Save();
	}

	void Save()
	{
		if (!FileExist(zenModFolder))
		{
			MakeDirectory(zenModFolder);
		}

		JsonFileLoader<ZenExpansionAudioAIConfig>.JsonSaveFile(zenModFolder + zenConfigName, this);
	}

	// Print a client-side white text message
	void DebugMessage(string message)
	{
		if (DebugOn && GetGame())
		{
			Print("[ZENAUDIOAIDEBUG] " + message);
			GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCDirect, "", message, ""));
		}
	}

	// Check for soundset config. Done this way to simplify adding new soundsets without needing to hard-code anything other than soundsets
	void LoadGenericSoundSetCount()
	{
		int i;

		// Check male AI generic soundsets count
		for (i = 1; i < 1000; ++i)
		{
			if(!GetGame().ConfigIsExisting("CfgSoundSets Zen_ExpansionAIHelloGenericMale_" + i.ToString() + "_SoundSet"))
				break;
		}

		GenericMaleAISoundSets = i - 1;

		// Check female AI generic soundsets count
		for (i = 1; i < 1000; ++i)
		{
			if(!GetGame().ConfigIsExisting("CfgSoundSets Zen_ExpansionAIHelloGenericFemale_" + i.ToString() + "_SoundSet"))
				break;
		}

		GenericFemaleAISoundSets = i - 1;
	}

	void LoadGenericSoundSetCount_BadGuys()
	{
		int i;

		// Check male AI generic soundsets count
		for (i = 1; i < 1000; ++i)
		{
			if(!GetGame().ConfigIsExisting("CfgSoundSets Zen_ExpansionAIHelloGenericMale_BadGuy_" + i.ToString() + "_SoundSet"))
				break;
		}

		GenericMale_BadGuy_AISoundSets = i - 1;

		// Check female AI generic soundsets count
		for (i = 1; i < 1000; ++i)
		{
			if(!GetGame().ConfigIsExisting("CfgSoundSets Zen_ExpansionAIHelloGenericFemale_BadGuy_" + i.ToString() + "_SoundSet"))
				break;
		}

		GenericFemale_BadGuy_AISoundSets = i - 1;
	}
}

ref ZenExpansionAudioAIConfig m_ZenExpansionAudioAIConfig;

static ZenExpansionAudioAIConfig GetZenExpansionAudioAIConfig()
{
	if (!m_ZenExpansionAudioAIConfig)
	{
		m_ZenExpansionAudioAIConfig = new ZenExpansionAudioAIConfig;
		m_ZenExpansionAudioAIConfig.Load();
	}

	return m_ZenExpansionAudioAIConfig;
};