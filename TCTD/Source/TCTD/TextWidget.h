// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextWidget.generated.h"

/**
 * 
 */
UCLASS()
class TCTD_API UTextWidget : public UUserWidget
{
	GENERATED_BODY()
	public:
 
    /** FText value displayed by this widget */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
    FText DisplayText;
 
	/** Retrieves FText value currently held in DisplayText */
	UFUNCTION(BlueprintPure, Category = "Widgets|Text")
    FText GetDisplayText() const;
 
	/** Assigns passed FText to DisplayText */
	UFUNCTION(BlueprintCallable, Category = "Widgets|Text")
    void SetDisplayText(const FText& gmt_NewDisplayText);
};
