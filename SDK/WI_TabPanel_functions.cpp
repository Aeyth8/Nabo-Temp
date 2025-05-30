#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TabPanel

#include "Basic.hpp"

#include "WI_TabPanel_classes.hpp"
#include "WI_TabPanel_parameters.hpp"


namespace SDK
{

// Function WI_TabPanel.WI_TabPanel_C.ApplyViewModel
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FJPTabPanelViewModel             InViewModel                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWI_TabPanel_C::ApplyViewModel(const struct FJPTabPanelViewModel& InViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TabPanel_C", "ApplyViewModel");

	Params::WI_TabPanel_C_ApplyViewModel Parms{};

	Parms.InViewModel = std::move(InViewModel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TabPanel.WI_TabPanel_C.BndEvt__WI_TabPanel_NextTab_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_TabPanel_C::BndEvt__WI_TabPanel_NextTab_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TabPanel_C", "BndEvt__WI_TabPanel_NextTab_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WI_TabPanel_C_BndEvt__WI_TabPanel_NextTab_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TabPanel.WI_TabPanel_C.BndEvt__WI_TabPanel_PrevTab_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_TabPanel_C::BndEvt__WI_TabPanel_PrevTab_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TabPanel_C", "BndEvt__WI_TabPanel_PrevTab_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WI_TabPanel_C_BndEvt__WI_TabPanel_PrevTab_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TabPanel.WI_TabPanel_C.ExecuteUbergraph_WI_TabPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TabPanel_C::ExecuteUbergraph_WI_TabPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TabPanel_C", "ExecuteUbergraph_WI_TabPanel");

	Params::WI_TabPanel_C_ExecuteUbergraph_WI_TabPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TabPanel.WI_TabPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TabPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TabPanel_C", "PreConstruct");

	Params::WI_TabPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

