#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainDoor_Destroyed

#include "Basic.hpp"

#include "BP_MainDoor_Destroyed_classes.hpp"
#include "BP_MainDoor_Destroyed_parameters.hpp"


namespace SDK
{

// Function BP_MainDoor_Destroyed.BP_MainDoor_Destroyed_C.ExecuteUbergraph_BP_MainDoor_Destroyed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainDoor_Destroyed_C::ExecuteUbergraph_BP_MainDoor_Destroyed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainDoor_Destroyed_C", "ExecuteUbergraph_BP_MainDoor_Destroyed");

	Params::BP_MainDoor_Destroyed_C_ExecuteUbergraph_BP_MainDoor_Destroyed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MainDoor_Destroyed.BP_MainDoor_Destroyed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MainDoor_Destroyed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainDoor_Destroyed_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

