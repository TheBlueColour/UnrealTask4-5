// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstActor.h"
#include "MyInterface.h"

// Sets default values
AFirstActor::AFirstActor()
{
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision")); //creates the sphere collision component
	RootComponent = SphereCollision; 
	SphereCollision->SetSphereRadius(100.0f); //the radius of the sphere collission
	SphereCollision->SetCollisionProfileName(TEXT("Trigger"));  //Names the sphere collission to be called a trigger
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AFirstActor::OnOverlapBegin); //Runs the OnOverlapBegin Function in .h? When it's overlapped with. 

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFirstActor::OnOverlapBegin(UPrimitiveComponent* OverlappingComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this) {
	
		IMyInterface* Target = Cast<IMyInterface>(OtherActor);
	
			if (Target && Target->CanInteract(this)) {
				
				Target->Interact(this);
			}
	}

}

// Called when the game starts or when spawned
void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

