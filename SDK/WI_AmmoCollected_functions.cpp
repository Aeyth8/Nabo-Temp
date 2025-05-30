#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_AmmoCollected

#include "Basic.hpp"

#include "WI_AmmoCollected_classes.hpp"
#include "WI_AmmoCollected_parameters.hpp"


namespace SDK
{

// Function WI_AmmoCollected.WI_AmmoCollected_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_AmmoCollected_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AmmoCollected_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_AmmoCollected.WI_AmmoCollected_C.ExecuteUbergraph_WI_AmmoCollected
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_AmmoCollected_C::ExecuteUbergraph_WI_AmmoCollected(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AmmoCollected_C", "ExecuteUbergraph_WI_AmmoCollected");

	Params::WI_AmmoCollected_C_ExecuteUbergraph_WI_AmmoCollected Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_AmmoCollected.WI_AmmoCollected_C.SetValues
// (BlueprintCallable, BlueprintEvent)

void UWI_AmmoCollected_C::SetValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AmmoCollected_C", "SetValues");

	UObject::ProcessEvent(Func, nullptr);
}

}

