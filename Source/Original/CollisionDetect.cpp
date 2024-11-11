// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionDetect.h"
#include "C:/Program Files/Epic Games/UE_5.4/Engine/Plugins/ChaosClothAsset/Source/ChaosClothAsset/Public/ChaosClothAsset/ClothGeometryTools.h"
#include "Kismet/KismetSystemLibrary.h"
#include "C:/Program Files/Epic Games/UE_5.4/Engine/Source/Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "C:/Program Files/Epic Games/UE_5.4/Engine/Plugins/ChaosClothAsset/Source/ChaosClothAsset/Public/ChaosClothAsset/CollectionClothFacade.h"

// Sets default values
ACollisionDetect::ACollisionDetect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACollisionDetect::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, "C++ Hello World! Warm Welcome!", true, true, FColor::Cyan, 2.f, TEXT("None"));
	
}

// Called every frame
void ACollisionDetect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TSharedPtr<FManagedArrayCollection> ACollisionDetect::GetClothCollection()
{
	TSharedPtr<FManagedArrayCollection> Collection = MakeShared<FManagedArrayCollection>();
	return Collection;
}

