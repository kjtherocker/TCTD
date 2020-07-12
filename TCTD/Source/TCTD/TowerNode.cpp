// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerNode.h"

// Sets default values
ATowerNode::ATowerNode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	m_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mainmesh"));
	TurretSpotOccupied = false;
}

// Called when the game starts or when spawned
void ATowerNode::BeginPlay()
{
	Super::BeginPlay();

	TurretSpotOccupied = false;
	
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents<UStaticMeshComponent>(StaticMeshComponents);

	if(StaticMeshComponents.IsValidIndex(1))
	{
		Selector = StaticMeshComponents[1];
		//Selector->SetVisibility(false);
	}
}

// Called every frame
void ATowerNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATowerNode::SpawnTurret(TSubclassOf<AActor> aTurret)
{
	UWorld* world = GetWorld();

	if(world)
	{
		FVector NodePosition = GetActorLocation();

		NodePosition.Z = 90;
		FRotator Rotator = GetActorRotation();

		ATurret* m_EnemyToSpawn;
		m_EnemyToSpawn = Cast<ATurret>(world->SpawnActor<AActor>(aTurret, NodePosition, Rotator));
		m_EnemyToSpawn->SetActorLocation(NodePosition);

		TurretSpotOccupied = true;
	}
	
	
}

void ATowerNode::TurnSelectorOn()
{
	Selector->SetVisibility(true);
}

void ATowerNode::TurnSelectorOff()
{
	Selector->SetVisibility(false);	
}

bool ATowerNode::CheckIfNodeIsFree()
{
	if(TurretSpotOccupied == true)
	{
		return false;
	}

	return true;	
}
