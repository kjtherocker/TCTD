// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ProjectileSpeed = 500.0f;
	ProjectileDamage = 4;
	m_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mainmesh"));
	SetActorTickEnabled(false);
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	m_Mesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnBeginOverlap);
	

}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GoToEnemy(DeltaTime);
}

void AProjectile::GoToEnemy(float aDeltatime)
{
	if(EnemyToAttack == nullptr)
	{
		Deactivate();
		return;
	}
	
	FVector CurrentPosition = GetActorLocation();

	FVector EnemyPosition = EnemyToAttack->GetActorLocation();
	
	float deltaX = EnemyPosition.X - CurrentPosition.X;
	float deltaY = EnemyPosition.Y - CurrentPosition.Y;

	float AngleToWaypoint = atan2(deltaX,deltaY);
	
	CurrentPosition.X += sin(AngleToWaypoint) * ProjectileSpeed * aDeltatime;
	CurrentPosition.Y += cos(AngleToWaypoint) * ProjectileSpeed * aDeltatime;
	
	
	SetActorLocation(CurrentPosition);
}

void AProjectile::Activate(AEnemy_Base* aEnemy)
{

	EnemyToAttack = aEnemy;
	
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);
	ProjectileState = true;
}

void AProjectile::Deactivate()
{
	EnemyToAttack = nullptr;
	SetActorHiddenInGame(true);
	ProjectileState = false;
	SetActorTickEnabled(false);
}

void AProjectile::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if(ProjectileState == false)
	{
		return;
	}

	if(OtherActor != EnemyToAttack)
	{
		return;
	}


	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		
		Cast<AEnemy_Base>(OtherActor)->TakeDamage(ProjectileDamage);
		Deactivate();
	}

}

