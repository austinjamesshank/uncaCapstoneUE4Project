// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "csvExport.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONETESTING_API UcsvExport : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString saveDirectory, FString fileName, TArray<FString> saveText, bool overwrite);

};
