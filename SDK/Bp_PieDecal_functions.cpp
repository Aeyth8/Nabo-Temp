#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_PieDecal

#include "Basic.hpp"

#include "Bp_PieDecal_classes.hpp"
#include "Bp_PieDecal_parameters.hpp"


namespace SDK
{

// Function Bp_PieDecal.Bp_PieDecal_C.ExecuteUbergraph_Bp_PieDecal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_PieDecal_C::ExecuteUbergraph_Bp_PieDecal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_PieDecal_C", "ExecuteUbergraph_Bp_PieDecal");

	Params::Bp_PieDecal_C_ExecuteUbergraph_Bp_PieDecal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bp_PieDecal.Bp_PieDecal_C.PieDecalScale__FinishedFunc
// (BlueprintEvent)

void ABp_PieDecal_C::PieDecalScale__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_PieDecal_C", "PieDecalScale__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bp_PieDecal.Bp_PieDecal_C.PieDecalScale__UpdateFunc
// (BlueprintEvent)

void ABp_PieDecal_C::PieDecalScale__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_PieDecal_C", "PieDecalScale__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bp_PieDecal.Bp_PieDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABp_PieDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_PieDecal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

