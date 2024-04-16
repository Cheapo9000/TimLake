// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimLakeGameMode.h"
#include "TimLakeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimLakeGameMode::ATimLakeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
