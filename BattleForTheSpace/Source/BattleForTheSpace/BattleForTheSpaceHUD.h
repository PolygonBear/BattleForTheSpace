// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BattleForTheSpaceHUD.generated.h"

UCLASS()
class ABattleForTheSpaceHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABattleForTheSpaceHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

