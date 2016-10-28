// Copyright 2015 Michael Allar. All Rights Reserved.

#pragma once
#include "StereoscopicRenderBlueprintLibrary.Generated.h"


// Library of helper functions for UMGEx Widgets
UCLASS()
class EXPORTOBJECTPLUGIN_API UStereoscopicRenderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Online")
	static bool ExportFromRenderTarget(class UTextureRenderTarget2D* TextureTarget, const FString ImagePath, const FLinearColor ClearColour);

	UFUNCTION(BlueprintCallable, Category = "Online")
	static UTexture2D* CreateTextureBuffer(class UTextureRenderTargetCube* TexCube);

	UFUNCTION(BlueprintCallable, Category = "Online")
	static UTexture2D* UnwrapCubemapTarget(class UTextureRenderTargetCube* TexCube, UTexture2D* TextureObject);

	UFUNCTION(BlueprintCallable, Category = "Online")
	static bool ExportObjectToPath(class UObject* ObjectToExport, FString SaveFileName, FString FileNameAppendage);
};
