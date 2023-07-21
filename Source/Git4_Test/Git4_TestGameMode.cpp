// Copyright Epic Games, Inc. All Rights Reserved.

#include "Git4_TestGameMode.h"
#include "Git4_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGit4_TestGameMode::AGit4_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
