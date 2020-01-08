// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework//Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Grabber!"));
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector playerViewPointPos;
	FRotator playerViewPointRot;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointPos, 
		OUT playerViewPointRot
	);

	//Log out
	/*UE_LOG(LogTemp, Warning, TEXT("pos: %s rot: %s"),
		*playerViewPointPos.ToString(),
		*playerViewPointRot.ToString()
	);*/

	//Draw Vector
	FVector lineTraceEnd = playerViewPointPos + (playerViewPointRot.Vector() * reach);

	DrawDebugLine(
		GetWorld(),
		playerViewPointPos,
		lineTraceEnd,
		FColor(255, 0, 0),
		false,
		0.f,
		0.f,
		10.f
	);
}

