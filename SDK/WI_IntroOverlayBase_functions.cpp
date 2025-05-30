#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_IntroOverlayBase

#include "Basic.hpp"

#include "WI_IntroOverlayBase_classes.hpp"
#include "WI_IntroOverlayBase_parameters.hpp"


namespace SDK
{

// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.Animate In
// (BlueprintCallable, BlueprintEvent)

void UWI_IntroOverlayBase_C::Animate_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "Animate In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_IntroOverlayBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.ExecuteUbergraph_WI_IntroOverlayBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_IntroOverlayBase_C::ExecuteUbergraph_WI_IntroOverlayBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "ExecuteUbergraph_WI_IntroOverlayBase");

	Params::WI_IntroOverlayBase_C_ExecuteUbergraph_WI_IntroOverlayBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_IntroOverlayBase_C::InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0");

	Params::WI_IntroOverlayBase_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.InputPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWI_IntroOverlayBase_C::InputPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "InputPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.PopulateMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_IntroOverlayBase_C::PopulateMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "PopulateMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_IntroOverlayBase.WI_IntroOverlayBase_C.ShowRelatedWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_IntroType                             Intro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_IntroOverlayBase_C::ShowRelatedWidget(E_IntroType Intro)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_IntroOverlayBase_C", "ShowRelatedWidget");

	Params::WI_IntroOverlayBase_C_ShowRelatedWidget Parms{};

	Parms.Intro = Intro;

	UObject::ProcessEvent(Func, &Parms);
}

}

