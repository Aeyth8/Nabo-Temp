#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPCommonSetting_Text

#include "Basic.hpp"

#include "WI_JPCommonSetting_Text_classes.hpp"
#include "WI_JPCommonSetting_Text_parameters.hpp"


namespace SDK
{

// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.BndEvt__WI_JPCommonSetting_Text_EditableText_61_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_JPCommonSetting_Text_C::BndEvt__WI_JPCommonSetting_Text_EditableText_61_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "BndEvt__WI_JPCommonSetting_Text_EditableText_61_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	Params::WI_JPCommonSetting_Text_C_BndEvt__WI_JPCommonSetting_Text_EditableText_61_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.BndEvt__WI_JPCommonSetting_Text_ShowPasswordCheckbox_K2Node_ComponentBoundEvent_4_OnChanged__DelegateSignature
// (BlueprintEvent)

void UWI_JPCommonSetting_Text_C::BndEvt__WI_JPCommonSetting_Text_ShowPasswordCheckbox_K2Node_ComponentBoundEvent_4_OnChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "BndEvt__WI_JPCommonSetting_Text_ShowPasswordCheckbox_K2Node_ComponentBoundEvent_4_OnChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.BndEvt__WI_JPCommonSetting_Text_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWI_JPCommonSetting_Text_C::BndEvt__WI_JPCommonSetting_Text_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "BndEvt__WI_JPCommonSetting_Text_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::WI_JPCommonSetting_Text_C_BndEvt__WI_JPCommonSetting_Text_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.ExecuteUbergraph_WI_JPCommonSetting_Text
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_JPCommonSetting_Text_C::ExecuteUbergraph_WI_JPCommonSetting_Text(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "ExecuteUbergraph_WI_JPCommonSetting_Text");

	Params::WI_JPCommonSetting_Text_C_ExecuteUbergraph_WI_JPCommonSetting_Text Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.GetValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWI_JPCommonSetting_Text_C::GetValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "GetValue");

	Params::WI_JPCommonSetting_Text_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWI_JPCommonSetting_Text_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "OnMouseEnter");

	Params::WI_JPCommonSetting_Text_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWI_JPCommonSetting_Text_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "OnMouseLeave");

	Params::WI_JPCommonSetting_Text_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.OnSettingClicked_1
// (BlueprintCallable, BlueprintEvent)

void UWI_JPCommonSetting_Text_C::OnSettingClicked_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "OnSettingClicked_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_JPCommonSetting_Text_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "PreConstruct");

	Params::WI_JPCommonSetting_Text_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_JPCommonSetting_Text_C::SetValue(const class FText& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "SetValue");

	Params::WI_JPCommonSetting_Text_C_SetValue Parms{};

	Parms.InValue = std::move(InValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_JPCommonSetting_Text.WI_JPCommonSetting_Text_C.UpdateShowPassword
// (BlueprintCallable, BlueprintEvent)

void UWI_JPCommonSetting_Text_C::UpdateShowPassword()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_JPCommonSetting_Text_C", "UpdateShowPassword");

	UObject::ProcessEvent(Func, nullptr);
}

}

