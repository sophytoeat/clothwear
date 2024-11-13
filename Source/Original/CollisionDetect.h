// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C:/Program Files/Epic Games/UE_5.4/Engine/Plugins/ChaosClothAsset/Source/ChaosClothAsset/Public/ChaosClothAsset/CollectionClothFacade.h"
#include "CollisionDetect.generated.h"

//FIsland 構造体の定義を直接ここに書く
struct FIsland {
	TArray<int32> Indices;
	TArray<FVector2f> Positions2D;
	TArray<FVector3f> Positions3D;  // メインのデータ
	TArray<int32> PositionToSourceIndex;

	// Getter関数を定義
	const TArray<FVector3f>& GetPositions3D() const {
		return Positions3D;
	}
};

UCLASS()
class ORIGINAL_API ACollisionDetect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollisionDetect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// FIsland 構造体のインスタンスを作成
	FIsland IslandData;
};


