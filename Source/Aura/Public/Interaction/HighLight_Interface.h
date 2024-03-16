// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HighLight_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHighLight_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IHighLight_Interface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighlightActor() =0;
	virtual void UnHighlightActor() =0;
};
