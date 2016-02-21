// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "InteractableActor.generated.h"

UCLASS()
class RND_API AInteractableActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AInteractableActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
        
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Interaction")
    void Interact(AActor* Caller);
	virtual void Interact_Implementation(AActor* Caller);

private:
	UStaticMeshComponent* StaticMesh;
	
};