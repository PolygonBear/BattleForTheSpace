// Copyright Epic Games, Inc. All Rights Reserved.

#include "BattleForTheSpaceGameMode.h"
#include "BattleForTheSpaceHUD.h"
#include "BattleForTheSpaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattleForTheSpaceGameMode::ABattleForTheSpaceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABattleForTheSpaceHUD::StaticClass();
}
