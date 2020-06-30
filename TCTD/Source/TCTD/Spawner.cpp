// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

class AEnemy;
// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mainmesh"));

}


// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
    Super::BeginPlay();
    
    UWorld* world = GetWorld();
    
    FTimerHandle handle;
	
    world->GetTimerManager().SetTimer(handle,this,&ASpawner::SpawnEnemy,5.0f,false);
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::SpawnEnemy()
{
	SpawnEnemyPosition = GetActorLocation() + SpawnEnemyPosition;
	FRotator m_Rotator = GetActorRotation();

	AEnemy_Base* m_EnemyToSpawn;

	m_EnemyToSpawn = Cast<AEnemy_Base>(GetWorld()->SpawnActor<AActor>(Enemy_Standard, SpawnEnemyPosition, m_Rotator));

	if(m_EnemyToSpawn == nullptr)
	{
		return;
	}
	
	m_EnemyToSpawn->SetWaypoints(Waypoints);
}

