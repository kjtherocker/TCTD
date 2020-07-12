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

	CurrentWave.AddDynamic(this,	&ASpawner::Wave1);
	CurrentWave.Broadcast();
	
    UWorld* world = GetWorld();


	//Setting up some default values



	
    FTimerHandle handle;

    world->GetTimerManager().SetTimer(handle,this,&ASpawner::SpawnEnemy,TimeBeforeEnemySpawns,true);
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::StartNextWave()
{
	CurrentWave.Broadcast();
}

void ASpawner::SpawnEnemy()
{

	if(!WaveList.IsValidIndex(0))
	{
		return;
	}
	
	FVector ActorSpawnPosition = GetActorLocation() + SpawnEnemyPosition;
	FRotator m_Rotator = GetActorRotation();

	AEnemy_Base* m_EnemyToSpawn;

	m_EnemyToSpawn = Cast<AEnemy_Base>(GetWorld()->SpawnActor<AActor>(WaveList[0], ActorSpawnPosition, m_Rotator));

	if(m_EnemyToSpawn == nullptr)
	{
		return;
	}

	WaveList.RemoveAt(0);
	m_EnemyToSpawn->SetWaypoints(Waypoints);

	
	//GetWorld()->GetTimerManager().SetTimer(handle,this,&ASpawner::SpawnEnemy,TimeBeforeEnemySpawns,false);
}


void ASpawner::Wave1()
{
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Speed);



	CurrentWave.RemoveDynamic(this,&ASpawner::Wave1);
	CurrentWave.AddDynamic(this,&ASpawner::Wave2);
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle,
		this,&ASpawner::StartNextWave,WaveList.Num() * TimeBeforeEnemySpawns + TimeBeforeNextWave,false);
}


void ASpawner::Wave2()
{
	
	WaveList.Add(Enemy_Speed);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Speed);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Standard);
	WaveList.Add(Enemy_Large);

	
	CurrentWave.RemoveDynamic(this,&ASpawner::Wave2);
	CurrentWave.AddDynamic(this,&ASpawner::Wave3);
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle,
        this,&ASpawner::StartNextWave,WaveList.Num() * TimeBeforeEnemySpawns + TimeBeforeNextWave,false);
}

void ASpawner::Wave3()
{
}
