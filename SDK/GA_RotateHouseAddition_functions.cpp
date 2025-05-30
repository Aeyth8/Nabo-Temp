#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_RotateHouseAddition

#include "Basic.hpp"

#include "GA_RotateHouseAddition_classes.hpp"
#include "GA_RotateHouseAddition_parameters.hpp"


namespace SDK
{

// Function GA_RotateHouseAddition.GA_RotateHouseAddition_C.ExecuteUbergraph_GA_RotateHouseAddition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RotateHouseAddition_C::ExecuteUbergraph_GA_RotateHouseAddition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RotateHouseAddition_C", "ExecuteUbergraph_GA_RotateHouseAddition");

	Params::GA_RotateHouseAddition_C_ExecuteUbergraph_GA_RotateHouseAddition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RotateHouseAddition.GA_RotateHouseAddition_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_RotateHouseAddition_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RotateHouseAddition_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

