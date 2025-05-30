#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PartyLeaderLeftPostMatchCountdown

#include "Basic.hpp"

#include "WI_PartyLeaderLeftPostMatchCountdown_classes.hpp"
#include "WI_PartyLeaderLeftPostMatchCountdown_parameters.hpp"


namespace SDK
{

// Function WI_PartyLeaderLeftPostMatchCountdown.WI_PartyLeaderLeftPostMatchCountdown_C.ExecuteUbergraph_WI_PartyLeaderLeftPostMatchCountdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PartyLeaderLeftPostMatchCountdown_C::ExecuteUbergraph_WI_PartyLeaderLeftPostMatchCountdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PartyLeaderLeftPostMatchCountdown_C", "ExecuteUbergraph_WI_PartyLeaderLeftPostMatchCountdown");

	Params::WI_PartyLeaderLeftPostMatchCountdown_C_ExecuteUbergraph_WI_PartyLeaderLeftPostMatchCountdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PartyLeaderLeftPostMatchCountdown.WI_PartyLeaderLeftPostMatchCountdown_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  LeaveTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PartyLeaderLeftPostMatchCountdown_C::Start(double LeaveTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PartyLeaderLeftPostMatchCountdown_C", "Start");

	Params::WI_PartyLeaderLeftPostMatchCountdown_C_Start Parms{};

	Parms.LeaveTime = LeaveTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PartyLeaderLeftPostMatchCountdown.WI_PartyLeaderLeftPostMatchCountdown_C.StartDisplayTick
// (BlueprintCallable, BlueprintEvent)

void UWI_PartyLeaderLeftPostMatchCountdown_C::StartDisplayTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PartyLeaderLeftPostMatchCountdown_C", "StartDisplayTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_PartyLeaderLeftPostMatchCountdown.WI_PartyLeaderLeftPostMatchCountdown_C.UpdateTimerText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_PartyLeaderLeftPostMatchCountdown_C::UpdateTimerText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PartyLeaderLeftPostMatchCountdown_C", "UpdateTimerText");

	UObject::ProcessEvent(Func, nullptr);
}

}

