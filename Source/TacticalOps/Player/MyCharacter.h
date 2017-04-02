// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class TACTICALOPS_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
private:

	// Health of a soldier (0-100), replicated
	UPROPERTY(EditDefaultsOnly, Category = Solider, ReplicatedUsing = OnRep_Health)
		float Health;

	UFUNCTION()
		void OnRep_Health();

	UPROPERTY(EditAnyWhere)
		USkeletalMesh * CharacterMesh;

};
