#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ForceDroppedObject

#include "Basic.hpp"

#include "WI_ForceDroppedObject_classes.hpp"
#include "WI_ForceDroppedObject_parameters.hpp"


namespace SDK
{

// Function WI_ForceDroppedObject.WI_ForceDroppedObject_C.ExecuteUbergraph_WI_ForceDroppedObject
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ForceDroppedObject_C::ExecuteUbergraph_WI_ForceDroppedObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ForceDroppedObject_C", "ExecuteUbergraph_WI_ForceDroppedObject");

	Params::WI_ForceDroppedObject_C_ExecuteUbergraph_WI_ForceDroppedObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ForceDroppedObject.WI_ForceDroppedObject_C.Finished_186226844A52CBFD59FB5EAD4C1A61E2
// (BlueprintCallable, BlueprintEvent)

void UWI_ForceDroppedObject_C::Finished_186226844A52CBFD59FB5EAD4C1A61E2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ForceDroppedObject_C", "Finished_186226844A52CBFD59FB5EAD4C1A61E2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ForceDroppedObject.WI_ForceDroppedObject_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ForceDroppedObject_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ForceDroppedObject_C", "PreConstruct");

	Params::WI_ForceDroppedObject_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

