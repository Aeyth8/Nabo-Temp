#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Jackhammer_Equipable

#include "Basic.hpp"

#include "BP_Jackhammer_Equipable_classes.hpp"
#include "BP_Jackhammer_Equipable_parameters.hpp"


namespace SDK
{

// Function BP_Jackhammer_Equipable.BP_Jackhammer_Equipable_C.ExecuteUbergraph_BP_Jackhammer_Equipable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Jackhammer_Equipable_C::ExecuteUbergraph_BP_Jackhammer_Equipable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jackhammer_Equipable_C", "ExecuteUbergraph_BP_Jackhammer_Equipable");

	Params::BP_Jackhammer_Equipable_C_ExecuteUbergraph_BP_Jackhammer_Equipable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Jackhammer_Equipable.BP_Jackhammer_Equipable_C.On_Client_TimeOfDayChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InitialState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_TimeOfDay                             TimeOfDay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Jackhammer_Equipable_C::On_Client_TimeOfDayChange_Event(bool InitialState, E_TimeOfDay TimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jackhammer_Equipable_C", "On_Client_TimeOfDayChange_Event");

	Params::BP_Jackhammer_Equipable_C_On_Client_TimeOfDayChange_Event Parms{};

	Parms.InitialState = InitialState;
	Parms.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Jackhammer_Equipable.BP_Jackhammer_Equipable_C.PlayPunchCosmetics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Jackhammer_Equipable_C::PlayPunchCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jackhammer_Equipable_C", "PlayPunchCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Jackhammer_Equipable.BP_Jackhammer_Equipable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Jackhammer_Equipable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jackhammer_Equipable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Jackhammer_Equipable.BP_Jackhammer_Equipable_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Jackhammer_Equipable_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jackhammer_Equipable_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}

