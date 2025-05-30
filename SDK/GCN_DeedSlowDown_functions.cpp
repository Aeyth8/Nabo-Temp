#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_DeedSlowDown

#include "Basic.hpp"

#include "GCN_DeedSlowDown_classes.hpp"
#include "GCN_DeedSlowDown_parameters.hpp"


namespace SDK
{

// Function GCN_DeedSlowDown.GCN_DeedSlowDown_C.ExecuteUbergraph_GCN_DeedSlowDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_DeedSlowDown_C::ExecuteUbergraph_GCN_DeedSlowDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_DeedSlowDown_C", "ExecuteUbergraph_GCN_DeedSlowDown");

	Params::GCN_DeedSlowDown_C_ExecuteUbergraph_GCN_DeedSlowDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_DeedSlowDown.GCN_DeedSlowDown_C.Local_Add
// (BlueprintCallable, BlueprintEvent)

void AGCN_DeedSlowDown_C::Local_Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_DeedSlowDown_C", "Local_Add");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_DeedSlowDown.GCN_DeedSlowDown_C.Local_Remove
// (BlueprintCallable, BlueprintEvent)

void AGCN_DeedSlowDown_C::Local_Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_DeedSlowDown_C", "Local_Remove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_DeedSlowDown.GCN_DeedSlowDown_C.Other_Add
// (BlueprintCallable, BlueprintEvent)

void AGCN_DeedSlowDown_C::Other_Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_DeedSlowDown_C", "Other_Add");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_DeedSlowDown.GCN_DeedSlowDown_C.Other_Remove
// (BlueprintCallable, BlueprintEvent)

void AGCN_DeedSlowDown_C::Other_Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_DeedSlowDown_C", "Other_Remove");

	UObject::ProcessEvent(Func, nullptr);
}

}

