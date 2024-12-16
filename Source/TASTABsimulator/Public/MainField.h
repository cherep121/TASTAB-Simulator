// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"

#include "MainField.generated.h"
UCLASS()
class TASTABSIMULATOR_API AMainField : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainField();
	~AMainField() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void KeyPressed(FKey key);

	void KeyReleased(FKey key);

	UPROPERTY(EditAnywhere)
	class USceneComponent* gridBase;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* mainCamera;

	UPROPERTY(EditAnywhere)
	TArray<class UStaticMeshComponent*> gridTiles;

	UPROPERTY(EditAnywhere)
	TArray<class UStaticMesh*> tileMeshes;

	UPROPERTY(EditAnywhere)
	TArray<class UMaterialInterface*> tileMaterials;

	UPROPERTY()
	unsigned int worldData[1168];

	UPROPERTY()
	unsigned int theState;

	UPROPERTY()
	unsigned int tempGarbache[2];

	UPROPERTY()
	unsigned int tilesToUpdate[4];

	UPROPERTY()
	unsigned int playerPos[4];

	UPROPERTY()
	unsigned int inputData[4];//QWEASD

	UPROPERTY()
	float timeTreshold;

	UPROPERTY()
	unsigned int isLoading;//QWEASD
};
