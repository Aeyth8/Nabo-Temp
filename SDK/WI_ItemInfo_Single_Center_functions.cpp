#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ItemInfo_Single_Center

#include "Basic.hpp"

#include "WI_ItemInfo_Single_Center_classes.hpp"
#include "WI_ItemInfo_Single_Center_parameters.hpp"


namespace SDK
{

// Function WI_ItemInfo_Single_Center.WI_ItemInfo_Single_Center_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_ItemInfo_Single_Center_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ItemInfo_Single_Center_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ItemInfo_Single_Center.WI_ItemInfo_Single_Center_C.ExecuteUbergraph_WI_ItemInfo_Single_Center
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ItemInfo_Single_Center_C::ExecuteUbergraph_WI_ItemInfo_Single_Center(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ItemInfo_Single_Center_C", "ExecuteUbergraph_WI_ItemInfo_Single_Center");

	Params::WI_ItemInfo_Single_Center_C_ExecuteUbergraph_WI_ItemInfo_Single_Center Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ItemInfo_Single_Center.WI_ItemInfo_Single_Center_C.SetAbilityData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     InputAction_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Description_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_ItemInfo_Single_Center_C::SetAbilityData(class UInputAction* InputAction_0, const class FText& Description_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ItemInfo_Single_Center_C", "SetAbilityData");

	Params::WI_ItemInfo_Single_Center_C_SetAbilityData Parms{};

	Parms.InputAction_0 = InputAction_0;
	Parms.Description_0 = std::move(Description_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

