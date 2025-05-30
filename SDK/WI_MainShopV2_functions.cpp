#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_MainShopV2

#include "Basic.hpp"

#include "WI_MainShopV2_classes.hpp"
#include "WI_MainShopV2_parameters.hpp"


namespace SDK
{

// Function WI_MainShopV2.WI_MainShopV2_C.AddItemToTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopItemViewModel               ShopItemViewModel                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWI_MainShopV2_C::AddItemToTier(const struct FShopItemViewModel& ShopItemViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "AddItemToTier");

	Params::WI_MainShopV2_C_AddItemToTier Parms{};

	Parms.ShopItemViewModel = std::move(ShopItemViewModel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.AddShopItemToTierAndAddToItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopTierV2_C*                 TierWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::AddShopItemToTierAndAddToItemList(class UWI_ShopTierV2_C* TierWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "AddShopItemToTierAndAddToItemList");

	Params::WI_MainShopV2_C_AddShopItemToTierAndAddToItemList Parms{};

	Parms.TierWidget = TierWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BindToHoveredAndPressedEventForItemsInTiers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::BindToHoveredAndPressedEventForItemsInTiers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BindToHoveredAndPressedEventForItemsInTiers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BndEvt__WI_MainShopV2_WI_JPButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::BndEvt__WI_MainShopV2_WI_JPButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BndEvt__WI_MainShopV2_WI_JPButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::WI_MainShopV2_C_BndEvt__WI_MainShopV2_WI_JPButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_1_K2Node_ComponentBoundEvent_2_On_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWI_ShopCategoryButtonV2_C*       Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_1_K2Node_ComponentBoundEvent_2_On_Pressed__DelegateSignature(class UWI_ShopCategoryButtonV2_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_1_K2Node_ComponentBoundEvent_2_On_Pressed__DelegateSignature");

	Params::WI_MainShopV2_C_BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_1_K2Node_ComponentBoundEvent_2_On_Pressed__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_2_K2Node_ComponentBoundEvent_0_On_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWI_ShopCategoryButtonV2_C*       Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_2_K2Node_ComponentBoundEvent_0_On_Pressed__DelegateSignature(class UWI_ShopCategoryButtonV2_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_2_K2Node_ComponentBoundEvent_0_On_Pressed__DelegateSignature");

	Params::WI_MainShopV2_C_BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_2_K2Node_ComponentBoundEvent_0_On_Pressed__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_3_K2Node_ComponentBoundEvent_1_On_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWI_ShopCategoryButtonV2_C*       Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_3_K2Node_ComponentBoundEvent_1_On_Pressed__DelegateSignature(class UWI_ShopCategoryButtonV2_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_3_K2Node_ComponentBoundEvent_1_On_Pressed__DelegateSignature");

	Params::WI_MainShopV2_C_BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_3_K2Node_ComponentBoundEvent_1_On_Pressed__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_K2Node_ComponentBoundEvent_3_On_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWI_ShopCategoryButtonV2_C*       Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_K2Node_ComponentBoundEvent_3_On_Pressed__DelegateSignature(class UWI_ShopCategoryButtonV2_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_K2Node_ComponentBoundEvent_3_On_Pressed__DelegateSignature");

	Params::WI_MainShopV2_C_BndEvt__WI_MainShopV2_WI_ShopCategoryButtonV2_K2Node_ComponentBoundEvent_3_On_Pressed__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.Close Shop
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::Close_Shop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "Close Shop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_MainShopV2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.DeliveryConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ItemGameplayTag                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::DeliveryConfirmed(const struct FGameplayTag& ItemGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "DeliveryConfirmed");

	Params::WI_MainShopV2_C_DeliveryConfirmed Parms{};

	Parms.ItemGameplayTag = std::move(ItemGameplayTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_MainShopV2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.ExecuteUbergraph_WI_MainShopV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::ExecuteUbergraph_WI_MainShopV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "ExecuteUbergraph_WI_MainShopV2");

	Params::WI_MainShopV2_C_ExecuteUbergraph_WI_MainShopV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.FindShopItemWidgetFromItemDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UItemDefinition>   ItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWI_ShopItemEntryV2_C*            ShopEntry                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::FindShopItemWidgetFromItemDefinition(TSoftObjectPtr<class UItemDefinition> ItemDefinition, class UWI_ShopItemEntryV2_C** ShopEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "FindShopItemWidgetFromItemDefinition");

	Params::WI_MainShopV2_C_FindShopItemWidgetFromItemDefinition Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopEntry != nullptr)
		*ShopEntry = Parms.ShopEntry;
}


// Function WI_MainShopV2.WI_MainShopV2_C.HandleGameEnded
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::HandleGameEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "HandleGameEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.InitialSetupControllerNavigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::InitialSetupControllerNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "InitialSetupControllerNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.InputCloseShop
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::InputCloseShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "InputCloseShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.InputNextTab
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::InputNextTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "InputNextTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.InputPreviousTab
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::InputPreviousTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "InputPreviousTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.ItemDropOverlayClose
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::ItemDropOverlayClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "ItemDropOverlayClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.ItemToDropChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemInstance*                    ItemInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ItemGameplayTag                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::ItemToDropChosen(class UItemInstance* ItemInstance, const struct FGameplayTag& ItemGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "ItemToDropChosen");

	Params::WI_MainShopV2_C_ItemToDropChosen Parms{};

	Parms.ItemInstance = ItemInstance;
	Parms.ItemGameplayTag = std::move(ItemGameplayTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.On Shop Item Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopItemEntryV2_C*            ShopItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::On_Shop_Item_Hovered(class UWI_ShopItemEntryV2_C* ShopItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "On Shop Item Hovered");

	Params::WI_MainShopV2_C_On_Shop_Item_Hovered Parms{};

	Parms.ShopItem = ShopItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.On Shop Item Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopItemEntryV2_C*            ShopItemWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::On_Shop_Item_Pressed(class UWI_ShopItemEntryV2_C* ShopItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "On Shop Item Pressed");

	Params::WI_MainShopV2_C_On_Shop_Item_Pressed Parms{};

	Parms.ShopItemWidget = ShopItemWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.On_Dead_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::On_Dead_Event(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "On_Dead_Event");

	Params::WI_MainShopV2_C_On_Dead_Event Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.On_Upgrade Button Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopUpgradeButtonV2_C*        ShopUpgradeButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWI_ShopTierV2_C*                 ShopTier                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::On_Upgrade_Button_Pressed(class UWI_ShopUpgradeButtonV2_C* ShopUpgradeButton, class UWI_ShopTierV2_C* ShopTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "On_Upgrade Button Pressed");

	Params::WI_MainShopV2_C_On_Upgrade_Button_Pressed Parms{};

	Parms.ShopUpgradeButton = ShopUpgradeButton;
	Parms.ShopTier = ShopTier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.OrderDeliveryCanceled
// (BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::OrderDeliveryCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "OrderDeliveryCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.Play Purchase Confirmed Cosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UItemDefinition>   ItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWI_MainShopV2_C::Play_Purchase_Confirmed_Cosmetics(TSoftObjectPtr<class UItemDefinition> ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "Play Purchase Confirmed Cosmetics");

	Params::WI_MainShopV2_C_Play_Purchase_Confirmed_Cosmetics Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.SetActiveCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopItemCategory                       ShopCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CategoryChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::SetActiveCategory(EShopItemCategory ShopCategory, bool* CategoryChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "SetActiveCategory");

	Params::WI_MainShopV2_C_SetActiveCategory Parms{};

	Parms.ShopCategory = ShopCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryChanged != nullptr)
		*CategoryChanged = Parms.CategoryChanged;
}


// Function WI_MainShopV2.WI_MainShopV2_C.SetActiveShopCategoryButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopCategoryButtonV2_C*       CategoryButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::SetActiveShopCategoryButton(class UWI_ShopCategoryButtonV2_C* CategoryButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "SetActiveShopCategoryButton");

	Params::WI_MainShopV2_C_SetActiveShopCategoryButton Parms{};

	Parms.CategoryButton = CategoryButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.SetFocusToFirstShopItemEntryInTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ShopTierV2_C*                 Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::SetFocusToFirstShopItemEntryInTier(class UWI_ShopTierV2_C* Self2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "SetFocusToFirstShopItemEntryInTier");

	Params::WI_MainShopV2_C_SetFocusToFirstShopItemEntryInTier Parms{};

	Parms.Self2 = Self2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.SetInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_MainShopV2_C::SetInitialFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "SetInitialFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MainShopV2.WI_MainShopV2_C.ShowDropChoiceScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ItemBeingBought                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::ShowDropChoiceScreen(const struct FGameplayTag& ItemBeingBought)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "ShowDropChoiceScreen");

	Params::WI_MainShopV2_C_ShowDropChoiceScreen Parms{};

	Parms.ItemBeingBought = std::move(ItemBeingBought);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MainShopV2.WI_MainShopV2_C.ShowOrderDeliveryConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     OrderedDeliveryTag                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_MainShopV2_C::ShowOrderDeliveryConfirmation(const struct FGameplayTag& OrderedDeliveryTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MainShopV2_C", "ShowOrderDeliveryConfirmation");

	Params::WI_MainShopV2_C_ShowOrderDeliveryConfirmation Parms{};

	Parms.OrderedDeliveryTag = std::move(OrderedDeliveryTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

