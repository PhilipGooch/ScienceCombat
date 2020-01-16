// Fill out your copyright notice in the Description page of Project Settings.


#include "Scientist.h"
#include "Engine.h"

// Sets default values
AScientist::AScientist()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMEsh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MEsh"));
	MyMEsh->AttachTo(RootComponent);


}

void AScientist::PlayerRotation(float deltaSeconds)
{
	float LeftRight = GetInputAxisValue("LeftRight");
	float UpDown = GetInputAxisValue("UPdown");
	if (UpDown != 0.f || LeftRight != 0.f)
	{
		direction = FVector(LeftRight, UpDown, 0);
		roatater = direction.Rotation();
		MyMEsh->SetWorldRotation(FMath::Lerp(MyMEsh->GetComponentRotation(), roatater, deltaSeconds*Mult));
	}
}

// Called when the game starts or when spawned
void AScientist::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AScientist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void AScientist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}