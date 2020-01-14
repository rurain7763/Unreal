// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorEvent.h"
#include "GameFramework//Actor.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDoorEvent::UDoorEvent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UDoorEvent::BeginPlay()
{
	Super::BeginPlay();
	owner = GetOwner();
}


// Called every frame
void UDoorEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GetTotalMassOfActorsOnPlate() > triggerMass) 
	{
		onOpen.Broadcast();
	}

	else
	{
		onClose.Broadcast();
	}
}

float UDoorEvent::GetTotalMassOfActorsOnPlate()
{
	float totalMass = 0.f;
	TArray<AActor*> actors;
	
	if (!pressurePlate) return 0.f;

	pressurePlate->GetOverlappingActors(OUT actors);

	for(const auto& actor : actors)
	{
		totalMass += actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return totalMass;
}

