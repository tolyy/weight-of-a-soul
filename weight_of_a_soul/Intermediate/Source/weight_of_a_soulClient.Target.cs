using UnrealBuildTool;

public class weight_of_a_soulClientTarget : TargetRules
{
	public weight_of_a_soulClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("weight_of_a_soul");
	}
}
