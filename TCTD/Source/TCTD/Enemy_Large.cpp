// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Large.h"

// Sets default values
AEnemy_Large::AEnemy_Large()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AEnemy_Large::BeginPlay()
{
	Super::BeginPlay();
	MaxHealth = 400;
	CurrentHealth = MaxHealth;


	EnemySpeed = 30.0f;
}

// Called every frame
void AEnemy_Large::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

