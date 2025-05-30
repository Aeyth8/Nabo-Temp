#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_OverlayBlurSpinner

#include "Basic.hpp"

#include "WI_OverlayBlurSpinner_classes.hpp"
#include "WI_OverlayBlurSpinner_parameters.hpp"


namespace SDK
{

// Function WI_OverlayBlurSpinner.WI_OverlayBlurSpinner_C.ExecuteUbergraph_WI_OverlayBlurSpinner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_OverlayBlurSpinner_C::ExecuteUbergraph_WI_OverlayBlurSpinner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_OverlayBlurSpinner_C", "ExecuteUbergraph_WI_OverlayBlurSpinner");

	Params::WI_OverlayBlurSpinner_C_ExecuteUbergraph_WI_OverlayBlurSpinner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_OverlayBlurSpinner.WI_OverlayBlurSpinner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_OverlayBlurSpinner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_OverlayBlurSpinner_C", "PreConstruct");

	Params::WI_OverlayBlurSpinner_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_OverlayBlurSpinner.WI_OverlayBlurSpinner_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message_0                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_OverlayBlurSpinner_C::SetMessage(const class FText& Message_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_OverlayBlurSpinner_C", "SetMessage");

	Params::WI_OverlayBlurSpinner_C_SetMessage Parms{};

	Parms.Message_0 = std::move(Message_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

