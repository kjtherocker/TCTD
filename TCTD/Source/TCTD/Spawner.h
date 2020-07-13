// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "UObject/ObjectMacros.h"
#include "Enemy_Base.h"
#include "PlayerPawn.h"

#include "Spawner.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWave);


UCLASS()
class TCTD_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawner();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//setting these varaibles as const since they wont be changed during runtime
	const float TimeBeforeNextWave = 40.0f;
	const float TimeBeforeEnemySpawns = 5.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	UPROPERTY(VisibleAnywhere)
	 UStaticMeshComponent* m_Mesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Standard;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Large;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Speed;


	TArray<TSubclassOf<AActor>> WaveList;

  	UPROPERTY(EditAnywhere)
    TArray<FVector> Waypoints;

	UPROPERTY(EditAnywhere)
	FVector SpawnEnemyPosition;

	UPROPERTY(EditAnywhere)
	APlayerPawn* PlayerPawn; 


	
	UPROPERTY()
	FWave CurrentWave;
	

	void StartNextWave();
	
	UFUNCTION()
	virtual void SpawnEnemy();

	
	UFUNCTION()
	virtual void Wave1();

	UFUNCTION()
	virtual void Wave2();

	UFUNCTION()
	virtual void Wave3();
	

};
