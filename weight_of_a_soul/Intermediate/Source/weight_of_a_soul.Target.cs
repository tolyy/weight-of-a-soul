using UnrealBuildTool;

public class weight_of_a_soulTarget : TargetRules
{
	public weight_of_a_soulTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("weight_of_a_soul");
	}
}
