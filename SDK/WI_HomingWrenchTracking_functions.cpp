#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_HomingWrenchTracking

#include "Basic.hpp"

#include "WI_HomingWrenchTracking_classes.hpp"
#include "WI_HomingWrenchTracking_parameters.hpp"


namespace SDK
{

// Function WI_HomingWrenchTracking.WI_HomingWrenchTracking_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_HomingWrenchTracking_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_HomingWrenchTracking_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_HomingWrenchTracking.WI_HomingWrenchTracking_C.ExecuteUbergraph_WI_HomingWrenchTracking
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_HomingWrenchTracking_C::ExecuteUbergraph_WI_HomingWrenchTracking(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_HomingWrenchTracking_C", "ExecuteUbergraph_WI_HomingWrenchTracking");

	Params::WI_HomingWrenchTracking_C_ExecuteUbergraph_WI_HomingWrenchTracking Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

