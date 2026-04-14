// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"
#include "Interactable_Actor.generated.h"

UCLASS()
class TASK4_WEEK5_API AInteractable_Actor : public AActor, public IMyInterface
{
	GENERATED_BODY()
	
public:	

	virtual bool CanInteract(AActor* Interactor) const override { return true; } //Allows it to be interacted with and it returns true
	virtual void Interact(AActor* Interactor) override; //the function that will run when interacted with. 
	// Sets default values for this actor's properties
	AInteractable_Actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
