#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_CheatGASField

#include "Basic.hpp"

#include "WI_CheatGASField_classes.hpp"
#include "WI_CheatGASField_parameters.hpp"


namespace SDK
{

// Function WI_CheatGASField.WI_CheatGASField_C.BndEvt__WI_CheatGASField_Commit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWI_CheatGASField_C::BndEvt__WI_CheatGASField_Commit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatGASField_C", "BndEvt__WI_CheatGASField_Commit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_CheatGASField.WI_CheatGASField_C.BndEvt__WI_CheatGASField_Next_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWI_CheatGASField_C::BndEvt__WI_CheatGASField_Next_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatGASField_C", "BndEvt__WI_CheatGASField_Next_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_CheatGASField.WI_CheatGASField_C.ExecuteUbergraph_WI_CheatGASField
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_CheatGASField_C::ExecuteUbergraph_WI_CheatGASField(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatGASField_C", "ExecuteUbergraph_WI_CheatGASField");

	Params::WI_CheatGASField_C_ExecuteUbergraph_WI_CheatGASField Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

