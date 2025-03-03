// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_Base.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "TowerNode.h"
#include "TextWidget.h"
#include "Internationalization/Text.h"
#include "Components/TextBlock.h"
#include "UObject/ObjectMacros.h"

#include "PlayerPawn.generated.h"


UCLASS()
class TCTD_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere)
	bool GameHasEnded;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* TextWidget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ToSpawn;

	UPROPERTY(EditAnywhere)
    AActor* BasicTurret;

	UPROPERTY(EditAnywhere)
	UTextBlock* MoneyText;

	UPROPERTY(EditAnywhere)
	UTextBlock* DisplayText;
	
	UPROPERTY(VisibleAnywhere)
	FVector2D CurrentPosition;
	FVector2D OldPosition; 

	UPROPERTY(EditAnywhere)
	int CurrentMoney;

	APlayerController* PlayerController;
	
	ATowerNode* TowerNodeCursor;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void EnemyWon();

	void ResetGame();

	FText ConvertFStringToFText(FString Text);
	
	//Money
	void UpdateMoney();

	void MoneyAddTimer();


	UFUNCTION()
	void AddMoney(float IncrementMoney);
	
	virtual void RaycastToCheckIfNodeIsFree();

	
};
