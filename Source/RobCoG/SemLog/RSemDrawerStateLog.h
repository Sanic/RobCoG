// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "RSemDrawerStateLog.generated.h"

UCLASS()
class ROBCOG_API ARSemDrawerStateLog : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARSemDrawerStateLog();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Close drawers
	void CloseDrawers();

	// Check drawer states
	void CheckDrawerStates();

	// Drawer state check update rate (seconds)
	UPROPERTY(EditAnywhere, Category = "Drawer State Logger")
	float UpdateRate;

	// Array of constraints to watch
	TArray<UPhysicsConstraintComponent*> Constraints;

	// Timer handle
	FTimerHandle TimerHandle;
};