#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_XPBar

#include "Basic.hpp"

#include "WI_XPBar_classes.hpp"
#include "WI_XPBar_parameters.hpp"


namespace SDK
{

// Function WI_XPBar.WI_XPBar_C.AnimateToTargetValue
// (BlueprintCallable, BlueprintEvent)

void UWI_XPBar_C::AnimateToTargetValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "AnimateToTargetValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_XPBar.WI_XPBar_C.AnimTick
// (BlueprintCallable, BlueprintEvent)

void UWI_XPBar_C::AnimTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "AnimTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_XPBar.WI_XPBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_XPBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_XPBar.WI_XPBar_C.ExecuteUbergraph_WI_XPBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::ExecuteUbergraph_WI_XPBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "ExecuteUbergraph_WI_XPBar");

	Params::WI_XPBar_C_ExecuteUbergraph_WI_XPBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.GetPercentageAsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Percentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::GetPercentageAsValue(double Percentage, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "GetPercentageAsValue");

	Params::WI_XPBar_C_GetPercentageAsValue Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function WI_XPBar.WI_XPBar_C.GetValueAsPercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Percentage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::GetValueAsPercentage(int32 Value, double* Percentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "GetValueAsPercentage");

	Params::WI_XPBar_C_GetValueAsPercentage Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;
}


// Function WI_XPBar.WI_XPBar_C.OnReachedTargetValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWI_XPBar_C::OnReachedTargetValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "OnReachedTargetValue__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_XPBar.WI_XPBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "PreConstruct");

	Params::WI_XPBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetAnimatingValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AnimatingValue_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetAnimatingValue(int32 AnimatingValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetAnimatingValue");

	Params::WI_XPBar_C_SetAnimatingValue Parms{};

	Parms.AnimatingValue_0 = AnimatingValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetBarPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetBarPercentage(double InputPin, class UWidget* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetBarPercentage");

	Params::WI_XPBar_C_SetBarPercentage Parms{};

	Parms.InputPin = InputPin;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetPreviouslyGrantedXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreviouslyGrantedXP_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetPreviouslyGrantedXP(int32 PreviouslyGrantedXP_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetPreviouslyGrantedXP");

	Params::WI_XPBar_C_SetPreviouslyGrantedXP Parms{};

	Parms.PreviouslyGrantedXP_0 = PreviouslyGrantedXP_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetStartingValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StartingValue_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetStartingValue(int32 StartingValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetStartingValue");

	Params::WI_XPBar_C_SetStartingValue Parms{};

	Parms.StartingValue_0 = StartingValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetTargetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TargetValue_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetTargetValue(int32 TargetValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetTargetValue");

	Params::WI_XPBar_C_SetTargetValue Parms{};

	Parms.TargetValue_0 = TargetValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   XP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetTextValue(int32 XP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetTextValue");

	Params::WI_XPBar_C_SetTextValue Parms{};

	Parms.XP = XP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.SetValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LowerBound_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UpperBound_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PreviouslyGrantedXP_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StartingValue_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TargetValue_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::SetValues(int32 LowerBound_0, int32 UpperBound_0, int32 PreviouslyGrantedXP_0, int32 StartingValue_0, int32 TargetValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "SetValues");

	Params::WI_XPBar_C_SetValues Parms{};

	Parms.LowerBound_0 = LowerBound_0;
	Parms.UpperBound_0 = UpperBound_0;
	Parms.PreviouslyGrantedXP_0 = PreviouslyGrantedXP_0;
	Parms.StartingValue_0 = StartingValue_0;
	Parms.TargetValue_0 = TargetValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_XPBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "Tick");

	Params::WI_XPBar_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_XPBar.WI_XPBar_C.UpdateTextValue
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_XPBar_C::UpdateTextValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_XPBar_C", "UpdateTextValue");

	UObject::ProcessEvent(Func, nullptr);
}

}

