// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine//TriggerVolume.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorEvent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UDoorEvent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorEvent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
		FDoorEvent onOpen;
	
	UPROPERTY(BlueprintAssignable)
		FDoorEvent onClose;


private:
	UPROPERTY(EditAnywhere)
		ATriggerVolume* pressurePlate = nullptr;

	float triggerMass = 30.f;

	AActor* owner = nullptr;

	float GetTotalMassOfActorsOnPlate();
};
