#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPConfirmationDialogBase

#include "Basic.hpp"

#include "WI_JPConfirmationDialogBase_classes.hpp"
#include "WI_JPConfirmationDialogBase_parameters.hpp"


namespace SDK
{

// Function WI_JPConfirmationDialogBase.WI_JPConfirmationDialogBase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWI_JPConfirmationDialogBase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPConfirmationDialogBase_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_JPConfirmationDialogBase.WI_JPConfirmationDialogBase_C.ExecuteUbergraph_WI_JPConfirmationDialogBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_JPConfirmationDialogBase_C::ExecuteUbergraph_WI_JPConfirmationDialogBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPConfirmationDialogBase_C", "ExecuteUbergraph_WI_JPConfirmationDialogBase");

	Params::WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPConfirmationDialogBase.WI_JPConfirmationDialogBase_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWI_JPConfirmationDialogBase_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPConfirmationDialogBase_C", "BP_GetDesiredFocusTarget");

	Params::WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

