#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_ReplaceAbilitiesOnEquip

#include "Basic.hpp"

#include "PA_ReplaceAbilitiesOnEquip_classes.hpp"
#include "PA_ReplaceAbilitiesOnEquip_parameters.hpp"


namespace SDK
{

// Function PA_ReplaceAbilitiesOnEquip.PA_ReplaceAbilitiesOnEquip_C.ReplaceAbilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponentIW*        ASC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UEquipmentInstance*               Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPA_ReplaceAbilitiesOnEquip_C::ReplaceAbilities(class UAbilitySystemComponentIW* ASC, class UEquipmentInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PA_ReplaceAbilitiesOnEquip_C", "ReplaceAbilities");

	Params::PA_ReplaceAbilitiesOnEquip_C_ReplaceAbilities Parms{};

	Parms.ASC = ASC;
	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}

}

