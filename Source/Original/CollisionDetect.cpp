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
	
}

// Called every frame
void ACollisionDetect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// IslandData の Positions3D にデータを追加 (例)
	IslandData.Positions3D.Add(FVector3f(10.0f, 20.0f, 30.0f));

	// Positions3D の内容を使用してメッセージを出力
	for (const FVector3f& Position : IslandData.GetPositions3D())
	{
		FString PositionString = FString::Printf(TEXT("Position: (%f, %f, %f)"), Position.X, Position.Y, Position.Z);
		UKismetSystemLibrary::PrintString(this, PositionString, true, true, FColor::Green, 2.f, TEXT("None"));
	}

}


