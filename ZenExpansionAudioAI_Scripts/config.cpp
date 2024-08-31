// For those wondering, I'm not an egomaniac 
// I put 'Zen' in front of everything to prevent any potential conflicts with future Expansion updates
// I'm also not a professional games programmer so please forgive any transgressions made here
// I'm just a humble DayZ player who enjoys coding and I'm doing my best with what I know!

class CfgPatches
{
	class ZenExpansionAudioAI_Scripts
	{
		requiredVersion = 0.1;
		units[] = {};
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"DayZExpansion_Core_Scripts",
			"ZenExpansionAudioAI_SoundSets"
		};
	};
};

class CfgMods
{
	class ZenExpansionAudioAI_Scripts
	{
		dir = "ZenExpansionAudioAI_Scripts";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenExpansionAudioAI_Scripts";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = { "ZenExpansionAudioAI_Scripts/scripts/3_game" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenExpansionAudioAI_Scripts/scripts/4_World" };
			};
			class missionScriptModule
			{
				value = "";
				files[] = { "ZenExpansionAudioAI_Scripts/scripts/5_mission" };
			};
		};
	};
};
