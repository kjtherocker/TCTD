// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Speed.h"

// Sets default values
AEnemy_Speed::AEnemy_Speed()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AEnemy_Speed::BeginPlay()
{
	Super::BeginPlay();

	MaxHealth = 100;
	CurrentHealth = MaxHealth;

	MoneyOnDeath = 40.0f;

	EnemySpeed = 125.0f;
}


// Called every frame
void AEnemy_Speed::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

