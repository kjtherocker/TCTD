// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "Enemy_Base.generated.h"

class ATurret;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDeath, FString , Enemyname);


UCLASS()
class TCTD_API AEnemy_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy_Base();
	virtual void MoveToWaypoint(float aDeltaTime);

	virtual void GoToNextWaypoint();

	virtual void SetWaypoints(TArray<FVector> aWaypointList);

	virtual void EnemyGotToGoal();
	
protected:
            // Called when the game starts or when spawned
    virtual void BeginPlay() override;
	

	
	virtual void Tick(float DeltaTime) override;



	virtual void DeActivate();

	virtual void Activate();

	virtual void SetUpHealthbar();
	
	virtual float CalculateDistanceFromStartToEnd();
    
    UWidgetComponent* Healthbar;
	UProgressBar* ProgressBar;	
	

public:	


	
	UPROPERTY()
	FEnemyDeath EnemyDeathEvent;

	float MaxHealth;
	
    UPROPERTY(VisibleAnywhere)
    float CurrentHealth;
	
	UPROPERTY(VisibleAnywhere)
	TArray<FVector> Waypoints;

	UPROPERTY(VisibleAnywhere)
	float DistanceToNextWaypoint;
	
	
	UPROPERTY(EditAnywhere)
    FVector GoToWaypoint;

	UPROPERTY(EditAnywhere)
    float EnemySpeed;
			
	UPROPERTY(VisibleAnywhere)
     UStaticMeshComponent* BaseMesh;
	
    float AngleToWaypoint;
	
	UPROPERTY(VisibleAnywhere)
	float AllWaypointDistances;
	
	UPROPERTY(VisibleAnywhere)
    float DistanceLeftInLevel;

	bool WaypointsAreSet;
	
	UFUNCTION()
    virtual void TakeDamage(int aDamageTaken);
	


};
