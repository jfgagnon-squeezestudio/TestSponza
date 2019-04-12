#pragma once

#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "GlobalFuncs.generated.h"

UCLASS(meta = (ScriptName = "GlobalFuncs"))
class TESTSPONZA_API UGlobalFuncs : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void ToggleRaytraceGI(APostProcessVolume* PostProcessVolume);

	UFUNCTION(BlueprintCallable)
	static void ToggleRaytraceReflections(APostProcessVolume* PostProcessVolume);
};