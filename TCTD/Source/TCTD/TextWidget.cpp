// Fill out your copyright notice in the Description page of Project Settings.


#include "TextWidget.h"



/** Retrieves FText value currently held in DisplayText */
FText UTextWidget::GetDisplayText() const {
    return DisplayText;
 
}
 
/** Assigns passed FText to DisplayText */
void UTextWidget::SetDisplayText(const FText& NewDisplayText) {
    DisplayText = NewDisplayText;
 
}
