// Fill out your copyright notice in the Description page of Project Settings.


#include "csvExport.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UcsvExport::SaveArrayText(FString saveDirectory, FString fileName, TArray<FString> saveText, bool overwrite = false) {

	saveDirectory += "\\";
	saveDirectory += fileName;

	if (!overwrite) {
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*saveDirectory)) {
			return false;
		}
	}

	FString finalString = "";
	for (FString& Each : saveText) {
		finalString += Each;
		finalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(finalString, *saveDirectory);
}
