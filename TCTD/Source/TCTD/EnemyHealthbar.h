// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "Enemy_Base.h"
#include "EnemyHealthbar.generated.h"

/**
 * 
 */
UCLASS()
class TCTD_API UEnemyHealthbar : public UWidgetComponent
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;
	
	
};
