#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_CheatCommand

#include "Basic.hpp"

#include "WI_CheatCommand_classes.hpp"
#include "WI_CheatCommand_parameters.hpp"


namespace SDK
{

// Function WI_CheatCommand.WI_CheatCommand_C.BndEvt__WI_CheatFloatField_Commit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWI_CheatCommand_C::BndEvt__WI_CheatFloatField_Commit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatCommand_C", "BndEvt__WI_CheatFloatField_Commit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_CheatCommand.WI_CheatCommand_C.ExecuteUbergraph_WI_CheatCommand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_CheatCommand_C::ExecuteUbergraph_WI_CheatCommand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatCommand_C", "ExecuteUbergraph_WI_CheatCommand");

	Params::WI_CheatCommand_C_ExecuteUbergraph_WI_CheatCommand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_CheatCommand.WI_CheatCommand_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_CheatCommand_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_CheatCommand_C", "PreConstruct");

	Params::WI_CheatCommand_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

