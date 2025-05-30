#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ShopPurchaseFeedbackV2

#include "Basic.hpp"

#include "WI_ShopPurchaseFeedbackV2_classes.hpp"
#include "WI_ShopPurchaseFeedbackV2_parameters.hpp"


namespace SDK
{

// Function WI_ShopPurchaseFeedbackV2.WI_ShopPurchaseFeedbackV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_ShopPurchaseFeedbackV2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopPurchaseFeedbackV2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ShopPurchaseFeedbackV2.WI_ShopPurchaseFeedbackV2_C.ExecuteUbergraph_WI_ShopPurchaseFeedbackV2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ShopPurchaseFeedbackV2_C::ExecuteUbergraph_WI_ShopPurchaseFeedbackV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopPurchaseFeedbackV2_C", "ExecuteUbergraph_WI_ShopPurchaseFeedbackV2");

	Params::WI_ShopPurchaseFeedbackV2_C_ExecuteUbergraph_WI_ShopPurchaseFeedbackV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ShopPurchaseFeedbackV2.WI_ShopPurchaseFeedbackV2_C.Play Purchase Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ItemIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEconomyDefinition*               ItemViewModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_ShopPurchaseFeedbackV2_C::Play_Purchase_Animation(class UTexture2D* ItemIcon, class UEconomyDefinition* ItemViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ShopPurchaseFeedbackV2_C", "Play Purchase Animation");

	Params::WI_ShopPurchaseFeedbackV2_C_Play_Purchase_Animation Parms{};

	Parms.ItemIcon = ItemIcon;
	Parms.ItemViewModel = ItemViewModel;

	UObject::ProcessEvent(Func, &Parms);
}

}

