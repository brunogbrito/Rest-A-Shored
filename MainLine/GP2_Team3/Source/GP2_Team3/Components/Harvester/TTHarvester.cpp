#include "TTHarvester.h"
#include "TTHarvestable.h"
#include "Engine/World.h"
#include "Components/ActorComponent.h"
#include "Components/Equipment/TTEquiperComponent.h"
void UTTHarvester::BeginPlay()
{
	Super::BeginPlay();
	CurrentHarvestTime = 0;	
	// En float �r 0 automatiskt (om inget annat v�rde har blivit assignat)
	// Plus att du assignar v�rdet i headern redan :)
}

// N�got missledande namn. Den h�r triggar complete eventet. I mitt huvud s� skulle den ge tillbaka en bool eller n�got f�r att
// se om harvesten �r f�rdig
void UTTHarvester::GetHarvestedComplete()
{
	OnHarvesterComplete.Broadcast();
}

void UTTHarvester::ResetHarvest()
{
	CurrentHarvestTime = 0;
}

AActor* UTTHarvester::Harvest(AActor* HarvestTarget, UTTEquiperComponent* CurrentToolEquiped)
{
	return nullptr;
}