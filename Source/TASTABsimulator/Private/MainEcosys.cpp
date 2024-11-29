// Fill out your copyright notice in the Description page of Project Settings.


#include "MainEcosys.h"
//#include <iostream>
//#include <fstream>
//#include <filesystem>
//#include <string>

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
THIRD_PARTY_INCLUDES_START
#include "ThirdParty/ofifstream.h"
THIRD_PARTY_INCLUDES_END
void AMainEcosys::BeginPlay()
{
	Super::BeginPlay();
	
	ViewOFstream writeRat;
	writeRat.open("sav.dat");
	if (writeRat.is_open())
	{
		writeRat.write("Hhiiii!!! This is your save file:)", 34);
		writeRat.close();
	}

	//std::ofstream readSave;
	//readSave.open("save.dat", std::ios::binary);
	//if (readSave.is_open())
	//{
	//	readSave.write("save here", 10);
	//	readSave.close();

	//	std::filesystem::path a = "save.dat";
	//	std::filesystem::path b = std::filesystem::absolute(a);

	//	readSave.open("C:/Users/SLAVA/Desktop/theBigHint.txt", std::ios::binary);
	//	if (readSave.is_open())
	//	{
	//		std::string temp = b.generic_string();
	//		readSave.write(temp.c_str(), temp.length());
	//		readSave.close();
	//	}
	//}
}

// Called every frame
//void AMainEcosys::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}