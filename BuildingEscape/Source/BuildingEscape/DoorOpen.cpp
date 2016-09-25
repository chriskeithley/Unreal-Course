// Copyright Christopher Keithley 2016

#include "BuildingEscape.h"
#include "DoorOpen.h"


// Sets default values for this component's properties
UDoorOpen::UDoorOpen()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDoorOpen::BeginPlay()
{
	Super::BeginPlay();
    
    //Find the owning Actor
    AActor* Owner = GetOwner();
    
    //create a rotator
    FRotator NewRotation = FRotator(0.0f, 60.0f, 0.0f);
    
    //set the door rotation
    Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UDoorOpen::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

