// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C:/Program Files/Epic Games/UE_5.4/Engine/Plugins/ChaosClothAsset/Source/ChaosClothAsset/Public/ChaosClothAsset/CollectionClothFacade.h"
#include "CollisionDetect.generated.h"

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

	// Get the cloth collection reference
	TSharedPtr<FManagedArrayCollection> GetClothCollection(); // <- ‚±‚±‚ÅŠÖ”‚ðéŒ¾

};
