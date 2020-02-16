// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerScript.h"

// Sets default values
APlayerScript::APlayerScript()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f);
	CameraComponent->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void APlayerScript::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerScript::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent)

	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
}

