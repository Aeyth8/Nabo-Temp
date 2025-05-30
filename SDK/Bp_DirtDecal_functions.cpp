#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_DirtDecal

#include "Basic.hpp"

#include "Bp_DirtDecal_classes.hpp"
#include "Bp_DirtDecal_parameters.hpp"


namespace SDK
{

// Function Bp_DirtDecal.Bp_DirtDecal_C.ExecuteUbergraph_Bp_DirtDecal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_DirtDecal_C::ExecuteUbergraph_Bp_DirtDecal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_DirtDecal_C", "ExecuteUbergraph_Bp_DirtDecal");

	Params::Bp_DirtDecal_C_ExecuteUbergraph_Bp_DirtDecal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bp_DirtDecal.Bp_DirtDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABp_DirtDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_DirtDecal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bp_DirtDecal.Bp_DirtDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABp_DirtDecal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_DirtDecal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

