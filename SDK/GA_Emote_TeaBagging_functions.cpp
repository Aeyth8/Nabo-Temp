#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Emote_TeaBagging

#include "Basic.hpp"

#include "GA_Emote_TeaBagging_classes.hpp"
#include "GA_Emote_TeaBagging_parameters.hpp"


namespace SDK
{

// Function GA_Emote_TeaBagging.GA_Emote_TeaBagging_C.ExecuteUbergraph_GA_Emote_TeaBagging
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Emote_TeaBagging_C::ExecuteUbergraph_GA_Emote_TeaBagging(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Emote_TeaBagging_C", "ExecuteUbergraph_GA_Emote_TeaBagging");

	Params::GA_Emote_TeaBagging_C_ExecuteUbergraph_GA_Emote_TeaBagging Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Emote_TeaBagging.GA_Emote_TeaBagging_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Emote_TeaBagging_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Emote_TeaBagging_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Emote_TeaBagging.GA_Emote_TeaBagging_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Emote_TeaBagging_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Emote_TeaBagging_C", "K2_OnEndAbility");

	Params::GA_Emote_TeaBagging_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

