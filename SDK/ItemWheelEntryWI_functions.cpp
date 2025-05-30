#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemWheelEntryWI

#include "Basic.hpp"

#include "ItemWheelEntryWI_classes.hpp"
#include "ItemWheelEntryWI_parameters.hpp"


namespace SDK
{

// Function ItemWheelEntryWI.ItemWheelEntryWI_C.AmmoTextForItemWithMaxAmmo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Result                                                 (Parm, OutParm)

void UItemWheelEntryWI_C::AmmoTextForItemWithMaxAmmo(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "AmmoTextForItemWithMaxAmmo");

	Params::ItemWheelEntryWI_C_AmmoTextForItemWithMaxAmmo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.CacheIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemWheelEntryWI_C::CacheIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "CacheIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWheelEntryWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.ExecuteUbergraph_ItemWheelEntryWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWheelEntryWI_C::ExecuteUbergraph_ItemWheelEntryWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "ExecuteUbergraph_ItemWheelEntryWI");

	Params::ItemWheelEntryWI_C_ExecuteUbergraph_ItemWheelEntryWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.GetAmmoTypeAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (Parm, OutParm, HasGetValueTypeHash)
// struct FGameplayAttribute               MaxAttribute                                           (Parm, OutParm, HasGetValueTypeHash)

void UItemWheelEntryWI_C::GetAmmoTypeAttribute(struct FGameplayAttribute* Attribute, struct FGameplayAttribute* MaxAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "GetAmmoTypeAttribute");

	Params::ItemWheelEntryWI_C_GetAmmoTypeAttribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attribute != nullptr)
		*Attribute = std::move(Parms.Attribute);

	if (MaxAttribute != nullptr)
		*MaxAttribute = std::move(Parms.MaxAttribute);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UItemWheelEntryWI_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "GetColorAndOpacity_0");

	Params::ItemWheelEntryWI_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.OnEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemDefinition*                  HoveredItemDefinition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UItemWheelEntryWI_C::OnEntryHovered__DelegateSignature(class UItemDefinition* HoveredItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "OnEntryHovered__DelegateSignature");

	Params::ItemWheelEntryWI_C_OnEntryHovered__DelegateSignature Parms{};

	Parms.HoveredItemDefinition = HoveredItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWheelEntryWI_C::OnHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "OnHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWheelEntryWI_C::OnUnhighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "OnUnhighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.Set Damage Multiplier Visibility and Value
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWheelEntryWI_C::Set_Damage_Multiplier_Visibility_and_Value()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "Set Damage Multiplier Visibility and Value");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.SetCategoryCosmetics
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWheelEntryWI_C::SetCategoryCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "SetCategoryCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWheelEntryWI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "Tick");

	Params::ItemWheelEntryWI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelEntryWI.ItemWheelEntryWI_C.GetAmountOfItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemWheelEntryWI_C::GetAmountOfItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelEntryWI_C", "GetAmountOfItem");

	Params::ItemWheelEntryWI_C_GetAmountOfItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

