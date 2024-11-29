// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class SimpleFileStreams : ModuleRules
{
	public SimpleFileStreams(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //PublicIncludePaths.AddRange(
        //	new string[] {
        //		// ... add public include paths required here ...
        //	}
        //	);
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "ofifstream.h"));


        //PrivateIncludePaths.AddRange(
        //	new string[] {
        //		// ... add other private include paths required here ...
        //	}
        //	);


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "ofifstream.lib"));


        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		//DynamicallyLoadedModuleNames.AddRange(
		//	new string[]
		//	{
		//		// ... add any modules that your module loads dynamically here ...
		//	}
		//	);
	}
}
