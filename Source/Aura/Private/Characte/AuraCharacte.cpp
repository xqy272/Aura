// Fill out your copyright notice in the Description page of Project Settings.


#include "Characte/AuraCharacte.h"
#include "GameFramework/CharacterMovementComponent.h"

AAuraCharacte::AAuraCharacte()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
