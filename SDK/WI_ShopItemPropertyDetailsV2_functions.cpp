#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ShopItemPropertyDetailsV2

#include "Basic.hpp"

#include "WI_ShopItemPropertyDetailsV2_classes.hpp"
#include "WI_ShopItemPropertyDetailsV2_parameters.hpp"


namespace SDK
{

// Function WI_ShopItemPropertyDetailsV2.WI_ShopItemPropertyDetailsV2_C.ExecuteUbergraph_WI_ShopItemPropertyDetailsV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ShopItemPropertyDetailsV2_C::ExecuteUbergraph_WI_ShopItemPropertyDetailsV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopItemPropertyDetailsV2_C", "ExecuteUbergraph_WI_ShopItemPropertyDetailsV2");

	Params::WI_ShopItemPropertyDetailsV2_C_ExecuteUbergraph_WI_ShopItemPropertyDetailsV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ShopItemPropertyDetailsV2.WI_ShopItemPropertyDetailsV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ShopItemPropertyDetailsV2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopItemPropertyDetailsV2_C", "PreConstruct");

	Params::WI_ShopItemPropertyDetailsV2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ShopItemPropertyDetailsV2.WI_ShopItemPropertyDetailsV2_C.Update Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   ActiveStarsAmount_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ShopItemPropertyDetailsV2_C::Update_Widget(const class FText& Text_0, int32 ActiveStarsAmount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopItemPropertyDetailsV2_C", "Update Widget");

	Params::WI_ShopItemPropertyDetailsV2_C_Update_Widget Parms{};

	Parms.Text_0 = std::move(Text_0);
	Parms.ActiveStarsAmount_0 = ActiveStarsAmount_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ShopItemPropertyDetailsV2.WI_ShopItemPropertyDetailsV2_C.UpdateActiveStarsAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_ShopItemPropertyDetailsV2_C::UpdateActiveStarsAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopItemPropertyDetailsV2_C", "UpdateActiveStarsAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ShopItemPropertyDetailsV2.WI_ShopItemPropertyDetailsV2_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_ShopItemPropertyDetailsV2_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopItemPropertyDetailsV2_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}

