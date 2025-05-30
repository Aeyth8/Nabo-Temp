#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_RemoveGameplayAbilitiesOnPossess

#include "Basic.hpp"

#include "PA_RemoveGameplayAbilitiesOnPossess_classes.hpp"
#include "PA_RemoveGameplayAbilitiesOnPossess_parameters.hpp"


namespace SDK
{

// Function PA_RemoveGameplayAbilitiesOnPossess.PA_RemoveGameplayAbilitiesOnPossess_C.RemoveGameplayAbilities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPA_RemoveGameplayAbilitiesOnPossess_C::RemoveGameplayAbilities(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PA_RemoveGameplayAbilitiesOnPossess_C", "RemoveGameplayAbilities");

	Params::PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}

}

