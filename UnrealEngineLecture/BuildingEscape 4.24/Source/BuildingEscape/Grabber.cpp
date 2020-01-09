// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework//Actor.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Grabber!"));

	FindPhysicsComponent();
	SetupInputComponent();
}


void UGrabber::FindPhysicsComponent() {
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (physicsHandle)
	{

	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("There is no PhysicsHandleComponent in %s !"),
			*GetOwner()->GetName());
	}

}

void UGrabber::SetupInputComponent()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (inputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input Componet found in %s !"),
			*GetOwner()->GetName());

		inputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		inputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("There is no InputComponet in %s !"),
			*GetOwner()->GetName());
	}
}

const FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
	FVector playerViewPointPos;
	FRotator playerViewPointRot;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointPos,
		OUT playerViewPointRot
	);

	//Draw Vector
	FVector lineTraceEnd = playerViewPointPos + (playerViewPointRot.Vector() * reach);

	FHitResult hit;
	FCollisionQueryParams traceParameters(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		OUT hit,
		playerViewPointPos,
		lineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		traceParameters
	);

	AActor* actorHit = hit.GetActor();

	if (actorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Collision: %s"), *actorHit->GetName());
	}

	return hit;
}

void UGrabber::Grab() {
	UE_LOG(LogTemp, Warning, TEXT("Grab Pressed!"),
		*GetOwner()->GetName());

	auto hitResult = GetFirstPhysicsBodyInReach();

	auto componentToGrab = hitResult.GetComponent();

	auto actorHit = hitResult.GetActor();

	if (actorHit) 
	{
		physicsHandle->GrabComponent(
			componentToGrab,
			NAME_None,
			componentToGrab->GetOwner()->GetActorLocation(),
			true
		);
	}
}

void UGrabber::Release() {
	UE_LOG(LogTemp, Warning, TEXT("Grab Release!"),
		*GetOwner()->GetName());

	//TODO release physics handle
	physicsHandle->ReleaseComponent();
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

	//Draw Vector
	FVector lineTraceEnd = playerViewPointPos + (playerViewPointRot.Vector() * reach);

	if (physicsHandle->GrabbedComponent) 
	{
		physicsHandle->SetTargetLocation(lineTraceEnd);
	}
}

