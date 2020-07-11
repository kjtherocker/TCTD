// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "Enemy_Base.h"


// Sets default values
AEnemy_Base::AEnemy_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyStaticMesh"));

	WaypointsAreSet = false;

	DistanceToNextWaypoint = 9999999999999.0f;
	AllWaypointDistances = 9999999999999.0f;
	
}

// Called when the game starts or when spawned
void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();
	SetUpHealthbar();
}

void AEnemy_Base::MoveToWaypoint(float aDeltaTime)
{
	if(WaypointsAreSet == false)
	{
		return;
	}

	DistanceToNextWaypoint = FVector::Dist(GetActorLocation(), GoToWaypoint);
	DistanceLeftInLevel = DistanceToNextWaypoint + AllWaypointDistances;
	if(DistanceToNextWaypoint < 20.5f )
	{
		GoToNextWaypoint();
	}

	FVector CurrentPosition = GetActorLocation();

	float deltaX = GoToWaypoint.X - CurrentPosition.X;
	float deltaY = GoToWaypoint.Y - CurrentPosition.Y;

	AngleToWaypoint = atan2(deltaX,deltaY);
	
	CurrentPosition.X += sin(AngleToWaypoint) * EnemySpeed * aDeltaTime;
	CurrentPosition.Y += cos(AngleToWaypoint) * EnemySpeed * aDeltaTime;
	
	SetActorLocation(CurrentPosition);
}

void AEnemy_Base::GoToNextWaypoint()
{
	if(Waypoints.Num() == 0)
	{
		EnemyGotToGoal();
		return;
	}

	AllWaypointDistances = CalculateDistanceFromStartToEnd();
	GoToWaypoint = Waypoints[0];
	Waypoints.RemoveAt(0);

}

void AEnemy_Base::SetWaypoints(TArray<FVector> aWaypointList)
{
	Waypoints = aWaypointList;
	FVector CurrentPosition = GetActorLocation();

	AllWaypointDistances = CalculateDistanceFromStartToEnd();
	
	GoToWaypoint = Waypoints[0];
	
	Waypoints.RemoveAt(0);

	WaypointsAreSet = true;
	
}

void AEnemy_Base::EnemyGotToGoal()
{
	PrimaryActorTick.bCanEverTick = false;
	//Death();
}



// Called every frame
void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToWaypoint(DeltaTime);
}



void AEnemy_Base::DeActivate()
{

	EnemyDeathEvent.Broadcast(GetName());
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	for(int i = Waypoints.Num() - 1 ; i < 0;i--)
	{
		Waypoints.RemoveAt(i);
	}
}

void AEnemy_Base::Activate()
{
	DistanceToNextWaypoint = 9999999999999.0f;
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);
}

void AEnemy_Base::SetUpHealthbar()
{
	TArray<UWidgetComponent*> EnemyUi;
	GetComponents<UWidgetComponent>(EnemyUi);

	if(EnemyUi.IsValidIndex(0) == true)
	{
		Healthbar = EnemyUi[0];
		if(UUserWidget* widget = Healthbar->GetUserWidgetObject())
		{
			ProgressBar = Cast<UProgressBar>(widget->GetWidgetFromName("EnemyHealthbar"));
			ProgressBar->SetPercent(1.0f);
		}

	}
}

void AEnemy_Base::TakeDamage(int aDamageTaken)
{

	CurrentHealth -= aDamageTaken;
	
	float PercentageOfHealthRemaining = CurrentHealth/ MaxHealth;


	if(ProgressBar != nullptr)
	{
		ProgressBar->SetPercent(PercentageOfHealthRemaining);
	}	

	if(CurrentHealth <= 0)
	{
		DeActivate();
	}
}


float AEnemy_Base::CalculateDistanceFromStartToEnd()
{
	
	TArray<FVector> TempWaypoints = Waypoints;
	float TempDistance = 0;

	if(!TempWaypoints.IsValidIndex(0) ||!TempWaypoints.IsValidIndex(1) )
	{
		return 0;
	}

	for(int i = 0; i < TempWaypoints.Num() - 1;i++)
	{
		if(TempWaypoints.IsValidIndex(i + 1))
		{
			TempDistance +=  FVector::Dist(TempWaypoints[i], TempWaypoints[i + 1]);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,
            FString::Printf(TEXT("the index is not valid %d"), i + 1));
		}
	}
	
	return TempDistance;
}
