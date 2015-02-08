// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "rcPlayerState.h"


void ArcPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	DOREPLIFETIME(ArcPlayerState, MY_PLAYER_NAME);
}
