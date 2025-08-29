using UnrealBuildTool;

public class weight_of_a_soulEditorTarget : TargetRules
{
	public weight_of_a_soulEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("weight_of_a_soul");
	}
}
