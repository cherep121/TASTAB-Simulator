// Fill out your copyright notice in the Description page of Project Settings.


#include "MainEcosys.h"
#include <fstream>

// Sets default values
AMainEcosys::AMainEcosys()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	emptyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy root component"));
	RootComponent = emptyRoot;
	nonEmpty = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static thing"));
	FAttachmentTransformRules t = FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, false);
	nonEmpty->AttachToComponent(emptyRoot, t);
}

// Called when the game starts or when spawned
void AMainEcosys::BeginPlay()
{
	Super::BeginPlay();
	
	std::ifstream readSave;
	readSave.open("save.dat", std::ios::binary);
	if (readSave.is_open())
		readSave.close();
	
}

// Called every frame
//void AMainEcosys::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}