#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SpecialAbility_GrappleHookCharge

#include "Basic.hpp"

#include "GCN_SpecialAbility_GrappleHookCharge_classes.hpp"
#include "GCN_SpecialAbility_GrappleHookCharge_parameters.hpp"


namespace SDK
{

// Function GCN_SpecialAbility_GrappleHookCharge.GCN_SpecialAbility_GrappleHookCharge_C.All_Add
// (BlueprintCallable, BlueprintEvent)

void AGCN_SpecialAbility_GrappleHookCharge_C::All_Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_SpecialAbility_GrappleHookCharge_C", "All_Add");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_SpecialAbility_GrappleHookCharge.GCN_SpecialAbility_GrappleHookCharge_C.ExecuteUbergraph_GCN_SpecialAbility_GrappleHookCharge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_SpecialAbility_GrappleHookCharge_C::ExecuteUbergraph_GCN_SpecialAbility_GrappleHookCharge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_SpecialAbility_GrappleHookCharge_C", "ExecuteUbergraph_GCN_SpecialAbility_GrappleHookCharge");

	Params::GCN_SpecialAbility_GrappleHookCharge_C_ExecuteUbergraph_GCN_SpecialAbility_GrappleHookCharge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_SpecialAbility_GrappleHookCharge.GCN_SpecialAbility_GrappleHookCharge_C.Local_Add
// (BlueprintCallable, BlueprintEvent)

void AGCN_SpecialAbility_GrappleHookCharge_C::Local_Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_SpecialAbility_GrappleHookCharge_C", "Local_Add");

	UObject::ProcessEvent(Func, nullptr);
}

}

