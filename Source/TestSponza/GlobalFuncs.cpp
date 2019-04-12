#include "GlobalFuncs.h"
#include "Engine/Scene.h"

UGlobalFuncs::UGlobalFuncs(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UGlobalFuncs::ToggleRaytraceGI(APostProcessVolume* PostProcessVolume)
{
	PostProcessVolume->Settings.bOverride_RayTracingGI = true;
	PostProcessVolume->Settings.RayTracingGI = !PostProcessVolume->Settings.RayTracingGI;

	if (PostProcessVolume->Settings.RayTracingGI)
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, "RayTracingGI: ON");
	else
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, "RayTracingGI: OFF");
}

void UGlobalFuncs::ToggleRaytraceReflections(APostProcessVolume* PostProcessVolume)
{
	PostProcessVolume->Settings.bOverride_ReflectionsType = true;
	PostProcessVolume->Settings.ReflectionsType = PostProcessVolume->Settings.ReflectionsType == EReflectionsType::ScreenSpace ? EReflectionsType::RayTracing : EReflectionsType::ScreenSpace;

	if (PostProcessVolume->Settings.ReflectionsType == EReflectionsType::ScreenSpace)
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, "ReflectionsType: ScreenSpace");
	else
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, "ReflectionsType: RayTracing");
}
