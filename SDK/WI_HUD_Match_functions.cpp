#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_HUD_Match

#include "Basic.hpp"

#include "WI_HUD_Match_classes.hpp"
#include "WI_HUD_Match_parameters.hpp"


namespace SDK
{

// Function WI_HUD_Match.WI_HUD_Match_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWI_HUD_Match_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_HUD_Match_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_HUD_Match.WI_HUD_Match_C.ExecuteUbergraph_WI_HUD_Match
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_HUD_Match_C::ExecuteUbergraph_WI_HUD_Match(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_HUD_Match_C", "ExecuteUbergraph_WI_HUD_Match");

	Params::WI_HUD_Match_C_ExecuteUbergraph_WI_HUD_Match Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_HUD_Match.WI_HUD_Match_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWI_HUD_Match_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_HUD_Match_C", "BP_GetDesiredFocusTarget");

	Params::WI_HUD_Match_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

