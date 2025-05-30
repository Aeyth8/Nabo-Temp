#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_WinscreenNamePlate

#include "Basic.hpp"

#include "WC_WinscreenNamePlate_classes.hpp"
#include "WC_WinscreenNamePlate_parameters.hpp"


namespace SDK
{

// Function WC_WinscreenNamePlate.WC_WinscreenNamePlate_C.ExecuteUbergraph_WC_WinscreenNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_WinscreenNamePlate_C::ExecuteUbergraph_WC_WinscreenNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_WinscreenNamePlate_C", "ExecuteUbergraph_WC_WinscreenNamePlate");

	Params::WC_WinscreenNamePlate_C_ExecuteUbergraph_WC_WinscreenNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WC_WinscreenNamePlate.WC_WinscreenNamePlate_C.SetPortraitAndName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWC_WinscreenNamePlate_C::SetPortraitAndName(TSoftObjectPtr<class UTexture2D> Texture, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_WinscreenNamePlate_C", "SetPortraitAndName");

	Params::WC_WinscreenNamePlate_C_SetPortraitAndName Parms{};

	Parms.Texture = Texture;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WC_WinscreenNamePlate.WC_WinscreenNamePlate_C.SetTalkingVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTalking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_WinscreenNamePlate_C::SetTalkingVisibility(bool IsTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_WinscreenNamePlate_C", "SetTalkingVisibility");

	Params::WC_WinscreenNamePlate_C_SetTalkingVisibility Parms{};

	Parms.IsTalking = IsTalking;

	UObject::ProcessEvent(Func, &Parms);
}

}

