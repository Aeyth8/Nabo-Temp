#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsListEntry_KBMBinding

#include "Basic.hpp"

#include "W_SettingsListEntry_KBMBinding_classes.hpp"
#include "W_SettingsListEntry_KBMBinding_parameters.hpp"


namespace SDK
{

// Function W_SettingsListEntry_KBMBinding.W_SettingsListEntry_KBMBinding_C.ExecuteUbergraph_W_SettingsListEntry_KBMBinding
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsListEntry_KBMBinding_C::ExecuteUbergraph_W_SettingsListEntry_KBMBinding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingsListEntry_KBMBinding_C", "ExecuteUbergraph_W_SettingsListEntry_KBMBinding");

	Params::W_SettingsListEntry_KBMBinding_C_ExecuteUbergraph_W_SettingsListEntry_KBMBinding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingsListEntry_KBMBinding.W_SettingsListEntry_KBMBinding_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_SettingsListEntry_KBMBinding_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingsListEntry_KBMBinding_C", "GetPrimaryGamepadFocusWidget");

	Params::W_SettingsListEntry_KBMBinding_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_SettingsListEntry_KBMBinding.W_SettingsListEntry_KBMBinding_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingsListEntry_KBMBinding_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingsListEntry_KBMBinding_C", "OnMouseEnter");

	Params::W_SettingsListEntry_KBMBinding_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingsListEntry_KBMBinding.W_SettingsListEntry_KBMBinding_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingsListEntry_KBMBinding_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingsListEntry_KBMBinding_C", "OnMouseLeave");

	Params::W_SettingsListEntry_KBMBinding_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}

