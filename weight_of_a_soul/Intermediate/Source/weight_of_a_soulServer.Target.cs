using UnrealBuildTool;

public class weight_of_a_soulServerTarget : TargetRules
{
	public weight_of_a_soulServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("weight_of_a_soul");
	}
}
