// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdPawnBase.h"

// Sets default values
ABirdPawnBase::ABirdPawnBase()
	: m_isJump(false)
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABirdPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABirdPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABirdPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
bool ABirdPawnBase::IsJump()
{
	return m_isJump;
}

void ABirdPawnBase::ToggleJump()
{
	m_isJump = !m_isJump;
}