// Copyright Dream Awake Solutions LLC

#pragma once

#include "CoreMinimal.h"
#include "DaPickupItem.h"
#include "DaPickup_Ability.generated.h"

class UDaAbilitySet;

UCLASS()
class GAMEPLAYFRAMEWORK_API ADaPickup_Ability : public ADaPickupItem
{
	GENERATED_BODY()

public:

	virtual void Interact_Implementation(APawn* InstigatorPawn) override;

	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) override;

protected:

	UPROPERTY(EditDefaultsOnly, Category="AbilitySystem")
	TObjectPtr<UDaAbilitySet> AbilitySetToGrant;
	
};
