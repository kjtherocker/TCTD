// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_Base.h"
#include "Turret.h"
#include "GameFramework/Actor.h"
#include "TowerNode.generated.h"

UCLASS()
class TCTD_API ATowerNode : public AActor
{
	GENERATED_BODY()
	
public:	
    // Sets default values for this actor's properties
    ATowerNode();

	protected:
        // Called when the game starts or when spawned
        virtual void BeginPlay() override;

	public:

        UPROPERTY(VisibleAnywhere)
     UStaticMeshComponent* m_Mesh;


	UPROPERTY(EditAnywhere)
     UStaticMeshComponent* Selector;

	bool TurretSpotOccupied;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void TurnSelectorOn();
	virtual void TurnSelectorOff();
	
	virtual void SpawnTurret(TSubclassOf<AActor> aTurret);

};
