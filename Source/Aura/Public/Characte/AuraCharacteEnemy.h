// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characte/AuraCharacte.h"
#include "Interaction/HighLight_Interface.h"
#include "AuraCharacteEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacteEnemy : public AAuraCharacte,public IHighLight_Interface
{
	GENERATED_BODY()
public:
	AAuraCharacteEnemy();
	
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};
