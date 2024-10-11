// Fill out your copyright notice in the Description page of Project Settings.
// 2021105594 ¹Ú¿µ¿ì
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_Custom_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GEB_SECOND_API ACPP_Custom_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACPP_Custom_PlayerController();

protected:
	virtual void BeginPlay() override;

private:
	void PossessNextCharacter();

	TArray<ACharacter*> Characters;

	FTimerHandle TimerHandle;

	int32 Index;
	
};
