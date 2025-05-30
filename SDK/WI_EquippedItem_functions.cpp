#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_EquippedItem

#include "Basic.hpp"

#include "WI_EquippedItem_classes.hpp"
#include "WI_EquippedItem_parameters.hpp"


namespace SDK
{

// Function WI_EquippedItem.WI_EquippedItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_EquippedItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_EquippedItem.WI_EquippedItem_C.EnableBrokenItemOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::EnableBrokenItemOverlay(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "EnableBrokenItemOverlay");

	Params::WI_EquippedItem_C_EnableBrokenItemOverlay Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Equipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentInstance*               Equipment_Instance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::Equipped(class UEquipmentInstance* Equipment_Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Equipped");

	Params::WI_EquippedItem_C_Equipped Parms{};

	Parms.Equipment_Instance = Equipment_Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.ExecuteUbergraph_WI_EquippedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::ExecuteUbergraph_WI_EquippedItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "ExecuteUbergraph_WI_EquippedItem");

	Params::WI_EquippedItem_C_ExecuteUbergraph_WI_EquippedItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Get Actual Ammo Percentage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWI_EquippedItem_C::Get_Actual_Ammo_Percentage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Get Actual Ammo Percentage");

	Params::WI_EquippedItem_C_Get_Actual_Ammo_Percentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.Get Ammo Type Attributes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (Parm, OutParm, HasGetValueTypeHash)
// struct FGameplayAttribute               MaxAttribute                                           (Parm, OutParm, HasGetValueTypeHash)

void UWI_EquippedItem_C::Get_Ammo_Type_Attributes(struct FGameplayAttribute* Attribute, struct FGameplayAttribute* MaxAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Get Ammo Type Attributes");

	Params::WI_EquippedItem_C_Get_Ammo_Type_Attributes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attribute != nullptr)
		*Attribute = std::move(Parms.Attribute);

	if (MaxAttribute != nullptr)
		*MaxAttribute = std::move(Parms.MaxAttribute);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Get Displayed Durability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWI_EquippedItem_C::Get_Displayed_Durability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Get Displayed Durability");

	Params::WI_EquippedItem_C_Get_Displayed_Durability Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.Get Percent For Equipped Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWI_EquippedItem_C::Get_Percent_For_Equipped_Item()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Get Percent For Equipped Item");

	Params::WI_EquippedItem_C_Get_Percent_For_Equipped_Item Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.Get_ProgressBar_Durability_FillColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWI_EquippedItem_C::Get_ProgressBar_Durability_FillColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Get_ProgressBar_Durability_FillColorAndOpacity");

	Params::WI_EquippedItem_C_Get_ProgressBar_Durability_FillColorAndOpacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.GetAmmoCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWI_EquippedItem_C::GetAmmoCountText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "GetAmmoCountText");

	Params::WI_EquippedItem_C_GetAmmoCountText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.GetDisplayAmmoPercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWI_EquippedItem_C::GetDisplayAmmoPercentage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "GetDisplayAmmoPercentage");

	Params::WI_EquippedItem_C_GetDisplayAmmoPercentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.IsOverheating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWI_EquippedItem_C::IsOverheating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "IsOverheating");

	Params::WI_EquippedItem_C_IsOverheating Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_EquippedItem.WI_EquippedItem_C.LerpDisplayAmmoPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::LerpDisplayAmmoPercentage(double Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "LerpDisplayAmmoPercentage");

	Params::WI_EquippedItem_C_LerpDisplayAmmoPercentage Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.LerpDisplayDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::LerpDisplayDurability(double Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "LerpDisplayDurability");

	Params::WI_EquippedItem_C_LerpDisplayDurability Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.OnEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentInstance*               Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::OnEquipped(class UEquipmentInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "OnEquipped");

	Params::WI_EquippedItem_C_OnEquipped Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.OnUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentInstance*               Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::OnUnequipped(class UEquipmentInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "OnUnequipped");

	Params::WI_EquippedItem_C_OnUnequipped Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            OldPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            NewPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::Reconstruct(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Reconstruct");

	Params::WI_EquippedItem_C_Reconstruct Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.SetRelevantResourceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemInstance*                    Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::SetRelevantResourceType(class UItemInstance* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "SetRelevantResourceType");

	Params::WI_EquippedItem_C_SetRelevantResourceType Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_EquippedItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Tick");

	Params::WI_EquippedItem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_EquippedItem.WI_EquippedItem_C.Unequipped
// (BlueprintCallable, BlueprintEvent)

void UWI_EquippedItem_C::Unequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_EquippedItem_C", "Unequipped");

	UObject::ProcessEvent(Func, nullptr);
}

}

