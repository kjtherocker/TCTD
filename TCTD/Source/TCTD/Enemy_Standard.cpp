// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Standard.h"

// Sets default values
AEnemy_Standard::AEnemy_Standard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AEnemy_Standard::BeginPlay()
{
	Super::BeginPlay();
	MaxHealth = 25;
	CurrentHealth = MaxHealth;

	MoneyOnDeath = 25.0f;

	EnemySpeed = 45.0f;
}

// Called every frame
void AEnemy_Standard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

