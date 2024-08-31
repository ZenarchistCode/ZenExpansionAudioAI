modded class eAIDynamicPatrol
{
	// Seems necessary to sync group name to client so they can specify 
	// which patrols use generic voices as group name is not sync'd by expansion? TODO: Amiwrong? Maybe group ID is sync'd some other way?
	override private eAIBase SpawnAI(vector pos)
	{
		eAIBase spawnedAI = super.SpawnAI(pos);
		spawnedAI.Zen_SetGroupName(GetNameForLog());
		return spawnedAI;
	}
}