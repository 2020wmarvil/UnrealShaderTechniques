// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderTechniquesGameMode.h"
#include "ShaderTechniquesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderTechniquesGameMode::AShaderTechniquesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
