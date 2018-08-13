// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "konkursGameMode.h"
#include "konkursCharacter.h"

AkonkursGameMode::AkonkursGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AkonkursCharacter::StaticClass();	
}
