#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssisterTrackingComponent

#include "Basic.hpp"

#include "AssisterTrackingComponent_classes.hpp"
#include "AssisterTrackingComponent_parameters.hpp"


namespace SDK
{

// Function AssisterTrackingComponent.AssisterTrackingComponent_C.Add Heal Assisters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatParticipant               Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FCombatParticipant>       AssisterArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCombatParticipant>       Modified                                               (Parm, OutParm)

void UAssisterTrackingComponent_C::Add_Heal_Assisters(const struct FCombatParticipant& Killer, TArray<struct FCombatParticipant>& AssisterArray, TArray<struct FCombatParticipant>* Modified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssisterTrackingComponent_C", "Add Heal Assisters");

	Params::AssisterTrackingComponent_C_Add_Heal_Assisters Parms{};

	Parms.Killer = std::move(Killer);
	Parms.AssisterArray = std::move(AssisterArray);

	UObject::ProcessEvent(Func, &Parms);

	AssisterArray = std::move(Parms.AssisterArray);

	if (Modified != nullptr)
		*Modified = std::move(Parms.Modified);
}


// Function AssisterTrackingComponent.AssisterTrackingComponent_C.Add Kill Assisters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCombatParticipant               Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAbilitySystemComponentIW*        VictimASC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCombatParticipant>       AssisterArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCombatParticipant>       Modified                                               (Parm, OutParm)

void UAssisterTrackingComponent_C::Add_Kill_Assisters(const struct FCombatParticipant& Killer, class UAbilitySystemComponentIW* VictimASC, TArray<struct FCombatParticipant>& AssisterArray, TArray<struct FCombatParticipant>* Modified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssisterTrackingComponent_C", "Add Kill Assisters");

	Params::AssisterTrackingComponent_C_Add_Kill_Assisters Parms{};

	Parms.Killer = std::move(Killer);
	Parms.VictimASC = VictimASC;
	Parms.AssisterArray = std::move(AssisterArray);

	UObject::ProcessEvent(Func, &Parms);

	AssisterArray = std::move(Parms.AssisterArray);

	if (Modified != nullptr)
		*Modified = std::move(Parms.Modified);
}

}

