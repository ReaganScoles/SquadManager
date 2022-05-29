// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Raycast.generated.h"

UCLASS()
class SQUADMANAGER_API ARaycast : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARaycast();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Raycast();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
