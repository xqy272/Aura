// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerControllerBase.generated.h"


class IHighLight_Interface;
/**
 * 
 */
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class FHighLight_Interface;

UCLASS()
class AURA_API AAuraPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerControllerBase();
	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();
	IHighLight_Interface* LastActor;
	IHighLight_Interface* ThisActor;
};
