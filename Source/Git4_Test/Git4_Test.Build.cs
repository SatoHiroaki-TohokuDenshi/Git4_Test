// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Git4_Test : ModuleRules
{
	public Git4_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
