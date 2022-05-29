// Fill out your copyright notice in the Description page of Project Settings.


#include "Raycast.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/Engine.h"
#include "Engine/Public/DrawDebugHelpers.h"

// Sets default values
ARaycast::ARaycast()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARaycast::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARaycast::Raycast()
{
	FHitResult* OutHit = new FHitResult();
	//UPrimitiveComponent* startPoint;
	FVector Start = GetActorLocation();
	//FVector forward = UGameplaystatist

}

// Called every frame
void ARaycast::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARaycast::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Raycast", IE_Pressed, this, &ARaycast::Raycast);
}

