// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "UnrealNetwork.h"
#include "rcPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API ArcPlayerState : public APlayerState
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = PlayerDeets)
	FString MY_PLAYER_NAME;
	
};
