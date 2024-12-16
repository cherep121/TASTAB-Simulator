// Fill out your copyright notice in the Description page of Project Settings.


#include "MeshTests.h"

// Sets default values
AMeshTests::AMeshTests()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	gridBase = CreateDefaultSubobject<USceneComponent>(TEXT("Grid Base Component"));
	SetRootComponent(gridBase);
	testMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Testificate Mesh"));
	testMesh->SetupAttachment(gridBase);
	//testMesh->AttachToComponent(gridBase, t);

	testMesh->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	testMesh->SetSimulatePhysics(false);

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> meshToLoad(TEXT("/Game/Models/wall"));
	//tileMesh = meshToLoad.Object.Get();

	//static ConstructorHelpers::FObjectFinder<UMaterialInterface> materialToLoad(TEXT("/Game/Materials/wall1Mat"));
	//tileMaterial = materialToLoad.Object.Get();

	tileMesh = nullptr;

	tileMaterial = nullptr;
}

// Called when the game starts or when spawned
//THIRD_PARTY_INCLUDES_START
//#include "ThirdParty/WorldFStream.h"
//THIRD_PARTY_INCLUDES_END
void AMeshTests::BeginPlay()
{
	Super::BeginPlay();

	if (tileMesh)
		testMesh->SetStaticMesh(tileMesh);

	if (tileMaterial)
		testMesh->SetMaterial(0, tileMaterial);

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Models/wall.wall"));
	//UStaticMesh* Asset = MeshAsset.Object;
	//if (Asset)
	//	testMesh->SetStaticMesh(Asset);

	//if (tileModel && tileMaterial)
	//{
		//testMesh->SetStaticMesh(tileModel);
		//testMesh->SetMaterial(0, tileMaterial);
	//}
}

//// Called every frame
//void AMeshTests::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

