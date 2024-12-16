// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "MainField.h"

#include "MainGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TASTABSIMULATOR_API AMainGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	void InitGameState() override;
};
