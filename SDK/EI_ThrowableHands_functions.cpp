#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EI_ThrowableHands

#include "Basic.hpp"

#include "EI_ThrowableHands_classes.hpp"
#include "EI_ThrowableHands_parameters.hpp"


namespace SDK
{

// Function EI_ThrowableHands.EI_ThrowableHands_C.ExecuteUbergraph_EI_ThrowableHands
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEI_ThrowableHands_C::ExecuteUbergraph_EI_ThrowableHands(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EI_ThrowableHands_C", "ExecuteUbergraph_EI_ThrowableHands");

	Params::EI_ThrowableHands_C_ExecuteUbergraph_EI_ThrowableHands Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EI_ThrowableHands.EI_ThrowableHands_C.K2_OnEquipped
// (Event, Protected, BlueprintEvent)

void UEI_ThrowableHands_C::K2_OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EI_ThrowableHands_C", "K2_OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}

}

