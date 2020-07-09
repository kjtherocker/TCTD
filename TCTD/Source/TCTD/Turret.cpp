// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"


// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
	Cost = 40;
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();

	EnemyDeathEvent.AddDynamic(this, &ATurret::EnemyWasKilled);
	
	SphereTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATurret::OnBeginOverlap);
	SphereTrigger->OnComponentEndOverlap.AddDynamic(this, &ATurret::OnEndOverlap);
	
	FTimerHandle handle;
    GetWorld()->GetTimerManager().SetTimer(handle,this,&ATurret::ShootAtEnemy,2.5f,true);
	ProjectileSpawnOffset = 76;

	NumberOfProjectiles = 2;
	
	for(int i = 0 ; i < NumberOfProjectiles;i++)
	{
		ProjectilePool.Add(AddProjectileToPool());
	}
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AProjectile* ATurret::GetProjectileFormPool()
{

	for(int i = 0; i < ProjectilePool.Num(); i++)
	{
		if(ProjectilePool[i]->ProjectileState == false)
		{
			return ProjectilePool[i];
		}
	}
	
	ProjectilePool.Add(AddProjectileToPool());
	return ProjectilePool[ProjectilePool.Num()];
}

void ATurret::DeActivateProjectile()
{
	for(int i = 0; i < ProjectilePool.Num(); i++)
	{
		ProjectilePool[i]->Deactivate();
	}
}



AProjectile* ATurret::AddProjectileToPool()
{
	AProjectile* ProjectileTemp;
	
	FVector SpawnPosition = GetActorLocation();
	FRotator m_Rotator = GetActorRotation();
	
	SpawnPosition.Z += ProjectileSpawnOffset;
	
	ProjectileTemp =  
    Cast<AProjectile>(GetWorld()->SpawnActor<AActor>(ProjectileRef, SpawnPosition, m_Rotator));
	ProjectileTemp->Deactivate();

	return ProjectileTemp;
}

void ATurret::ShootAtEnemy()
{
	if(EnemyInRange.Num() <= 0)
	{
		return;
	}

	if(EnemyToAttack == nullptr)
	{
		return;
	}
	
	FVector SpawnPosition = GetActorLocation();
	FRotator Rotator = GetActorRotation();
	
	SpawnPosition.Z += ProjectileSpawnOffset;

	AProjectile* ProjectileTemp;
        
	ProjectileTemp =  GetProjectileFormPool();
	ProjectileTemp->SetActorLocation(SpawnPosition);

	
	ProjectileTemp->Activate(EnemyToAttack);

}

void ATurret::EnemyWasKilled(FString aName)
{

	for (int i = 0 ; i < EnemyInRange.Num() ; i++)
	{
		if(EnemyInRange[i]->GetName() == aName)
		{
			EnemyInRange.RemoveAt(i);

			if(EnemyToAttack->GetName() == aName)
			{
				EnemyToAttack = nullptr;
			}
		}
	}

	if(EnemyInRange.IsValidIndex(0) == false)
	{
		return;
	}
	
	if(EnemyToAttack == nullptr)
	{
		DeActivateProjectile();
		CalculateClosestEnemy();
		EnemyToAttack->EnemyDeathEvent.AddDynamic(this, &ATurret::EnemyWasKilled);
	}
}

void ATurret::CalculateClosestEnemy()
{
	if(!EnemyInRange.IsValidIndex(0))
	{
		return;
	}
	
	AEnemy_Base* EnemyTemp = Cast<AEnemy_Base>(EnemyInRange[0]);
	
	if(EnemyInRange.Num() > 1)
	{
		for (int i = 0; i < EnemyInRange.Num(); i++)
		{
			AEnemy_Base* IterativeEnemy = Cast<AEnemy_Base>(EnemyInRange[i]);


			float EnemyA = abs(IterativeEnemy->DistanceLeftInLevel);
			float EnemyB = abs(EnemyTemp->DistanceLeftInLevel);
			
			if(EnemyA < EnemyB )
			{
				EnemyTemp = IterativeEnemy;
			}
		}
	}
	
	EnemyToAttack = EnemyTemp;
	EnemyToAttack->EnemyDeathEvent.AddDynamic(this, &ATurret::EnemyWasKilled);
}

void ATurret::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		AEnemy_Base* Enemy = Cast<AEnemy_Base>(OtherActor);
		if(Enemy == nullptr)
		{
			return;
		}
	
		AddEnemyInRange(Enemy);
		Enemy->EnemyDeathEvent.AddDynamic(this, &ATurret::EnemyWasKilled);
		CalculateClosestEnemy();
	}
}


void ATurret::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		for (int i = 0 ; i < EnemyInRange.Num() ; i++)
		{
			if(EnemyInRange[i]->GetName() == OtherActor->GetName())
			{
				EnemyInRange.RemoveAt(i);
			}
		}
		CalculateClosestEnemy();
	}
}

void ATurret::AddEnemyInRange(AEnemy_Base* Enemy)
{
	if(EnemyInRange.Num() != 0)
	{
		for (int i = 0 ; i < EnemyInRange.Num() ; i++)
		{
			if(EnemyInRange[i]->GetName() == Enemy->GetName())
			{
				return;
			}
		}
	}

	EnemyInRange.Add(Enemy);
	
}
