// Copyright Epic Games, Inc. All Rights Reserved.

#include "PosterRoomSandboxGameMode.h"
#include "PosterRoomSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

APosterRoomSandboxGameMode::APosterRoomSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
