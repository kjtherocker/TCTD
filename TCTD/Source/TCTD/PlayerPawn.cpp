// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

#include <string>

#include "Engine/World.h"
#include "ChaosInterfaceWrapperCore.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	GameHasEnded = false;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	CurrentMoney = 100;
	
	PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true; 
		PlayerController->bEnableClickEvents = true; 
		PlayerController->bEnableMouseOverEvents = true;
	}

	
	TArray<UWidgetComponent*> TextWidgets;
	GetComponents<UWidgetComponent>(TextWidgets);
	TextWidget = TextWidgets[0];

	if(UUserWidget* widget = TextWidget->GetUserWidgetObject())
	{
		MoneyText = Cast<UTextBlock>(widget->GetWidgetFromName("Money"));
		MoneyText->SetText(ConvertFStringToFText(FString::Printf(TEXT("%d"), CurrentMoney)));

		DisplayText = Cast<UTextBlock>(widget->GetWidgetFromName("DisplayText"));
		DisplayText->SetText(ConvertFStringToFText(FString::Printf(TEXT(""))));
	}
	
	GetWorld()->GetGameViewport()->GetMousePosition(CurrentPosition);

	OldPosition = CurrentPosition;

	FTimerHandle handle;

	GetWorld()->GetTimerManager().SetTimer(handle,this,&APlayerPawn::MoneyAddTimer,5.0f,true);
	
}

FText APlayerPawn::ConvertFStringToFText(FString Text)
{
	FString TempMoney = Text;
	FText Money = FText::FromString(TempMoney);
	return Money;
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//InputComponent->BindAxis("MoveUp", this, &ACharacter::MoveUp);
	//InputComponent->BindAxis("MoveRight", this, );S
	InputComponent->BindAction("Spawn", IE_Pressed, this, &APlayerPawn::RaycastToCheckIfNodeIsFree);
	InputComponent->BindAction("Reset", IE_Pressed, this, &APlayerPawn::ResetGame);

}

void APlayerPawn::EnemyWon()
{
	DisplayText->SetText(ConvertFStringToFText(FString::Printf(TEXT("Enemy Has won press R to restart"))));
	GameHasEnded = true;
}

void APlayerPawn::ResetGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));
}



void APlayerPawn::UpdateMoney()
{
		FString TempMoney = FString::Printf(TEXT("%d"), CurrentMoney);
		FText Money = FText::FromString(TempMoney);
		MoneyText->SetText(Money);
}

void APlayerPawn::MoneyAddTimer()
{
	AddMoney(5);
	
}

void APlayerPawn::AddMoney(float IncrementMoney)
{
	CurrentMoney += IncrementMoney;
	UpdateMoney();
}

void APlayerPawn::RaycastToCheckIfNodeIsFree()
{
	//GEngine->AddOnScreenDebugMessage(-1,5.f, FColor::Green,  TEXT("MouseClicked"));

	if(GameHasEnded)
	{
		return;
	}

	
	UWorld* world = GetWorld();

    FVector WorldLocation;
	FVector WorldDirection;
	float DistanceAboveGround = 10.0f;

	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection); 

	FVector PlaneOrigin(0.0f, 0.0f, DistanceAboveGround);


	FHitResult* hitResult = new FHitResult();
	FVector StartPoint = GetActorLocation();

	
	FVector EndPoint = FMath::LinePlaneIntersection(
                WorldLocation,
                WorldLocation + WorldDirection,
                PlaneOrigin,
                FVector::UpVector);

	FCollisionQueryParams * TraceParams = new FCollisionQueryParams();

	const FName TraceTag("MyTraceTag");
 
	world->DebugDrawTraceTag = TraceTag;
	
	TraceParams->TraceTag = TraceTag;

	if(world->LineTraceSingleByChannel(*hitResult, StartPoint, EndPoint, ECC_Visibility, * TraceParams))
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,
			FString::Printf(TEXT("You Hit: %s"), *hitResult->Actor->GetName()));

		AActor* tempActor = hitResult->GetActor();
		
		if(CurrentMoney >= 50)
		{
			ATowerNode* TowerNodeTemp =  Cast<ATowerNode>(tempActor);
			if(TowerNodeTemp != nullptr)
			{
				if(TowerNodeTemp->CheckIfNodeIsFree())
				{
					TowerNodeTemp->SpawnTurret(ToSpawn);
					CurrentMoney -= 50;
					UpdateMoney();
				}
			}
		}	
	
	}
}


