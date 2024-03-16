// Fill out your copyright notice in the Description page of Project Settings.


#include "Characte/AuraCharacteBase.h"

// Sets default values
AAuraCharacteBase::AAuraCharacteBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuraCharacteBase::BeginPlay()
{
	Super::BeginPlay();
	
}