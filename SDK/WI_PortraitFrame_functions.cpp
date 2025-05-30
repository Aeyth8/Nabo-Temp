#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PortraitFrame

#include "Basic.hpp"

#include "WI_PortraitFrame_classes.hpp"
#include "WI_PortraitFrame_parameters.hpp"


namespace SDK
{

// Function WI_PortraitFrame.WI_PortraitFrame_C.ExecuteUbergraph_WI_PortraitFrame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PortraitFrame_C::ExecuteUbergraph_WI_PortraitFrame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PortraitFrame_C", "ExecuteUbergraph_WI_PortraitFrame");

	Params::WI_PortraitFrame_C_ExecuteUbergraph_WI_PortraitFrame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PortraitFrame.WI_PortraitFrame_C.GetScaledPadding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMargin                          Padding_0                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          ScaledPadding                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWI_PortraitFrame_C::GetScaledPadding(const struct FMargin& Padding_0, double Scale, struct FMargin* ScaledPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PortraitFrame_C", "GetScaledPadding");

	Params::WI_PortraitFrame_C_GetScaledPadding Parms{};

	Parms.Padding_0 = std::move(Padding_0);
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (ScaledPadding != nullptr)
		*ScaledPadding = std::move(Parms.ScaledPadding);
}


// Function WI_PortraitFrame.WI_PortraitFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PortraitFrame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PortraitFrame_C", "PreConstruct");

	Params::WI_PortraitFrame_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

