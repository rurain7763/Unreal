// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"
#include "GameFramework//Actor.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	owner = GetOwner();
}

void UOpenDoor::OpenDoor()
{
	owner->SetActorRotation(FRotator(0.f, openAngle, 0.f));
}

void UOpenDoor::CloseDoor()
{
	owner->SetActorRotation(FRotator(0.f, 0.f, 0.f));
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GetTotalMassOfActorsOnPlate() > 30.f) 
	{
		OpenDoor();
		lastDoorOpenTime = GetWorld()->GetTimeSeconds();
	}

	if (GetWorld()->GetTimeSeconds() - lastDoorOpenTime >= doorCloseDelay) 
	{
		CloseDoor();
	}
}

float UOpenDoor::GetTotalMassOfActorsOnPlate()
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

