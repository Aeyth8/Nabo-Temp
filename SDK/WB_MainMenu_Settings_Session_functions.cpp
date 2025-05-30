#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MainMenu_Settings_Session

#include "Basic.hpp"

#include "WB_MainMenu_Settings_Session_classes.hpp"
#include "WB_MainMenu_Settings_Session_parameters.hpp"


namespace SDK
{

// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.BndEvt__WB_HCB_Lan_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_Settings_Session_C::BndEvt__WB_HCB_Lan_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(class FName NewSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "BndEvt__WB_HCB_Lan_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");

	Params::WB_MainMenu_Settings_Session_C_BndEvt__WB_HCB_Lan_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature Parms{};

	Parms.NewSelection = NewSelection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.BndEvt__WB_HCB_NumConnections_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_Settings_Session_C::BndEvt__WB_HCB_NumConnections_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(class FName NewSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "BndEvt__WB_HCB_NumConnections_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	Params::WB_MainMenu_Settings_Session_C_BndEvt__WB_HCB_NumConnections_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature Parms{};

	Parms.NewSelection = NewSelection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.BndEvt__WB_MainMenu_Settings_Session_TextBox_IP_One_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MainMenu_Settings_Session_C::BndEvt__WB_MainMenu_Settings_Session_TextBox_IP_One_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "BndEvt__WB_MainMenu_Settings_Session_TextBox_IP_One_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WB_MainMenu_Settings_Session_C_BndEvt__WB_MainMenu_Settings_Session_TextBox_IP_One_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_MainMenu_Settings_Session_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.ExecuteUbergraph_WB_MainMenu_Settings_Session
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_Settings_Session_C::ExecuteUbergraph_WB_MainMenu_Settings_Session(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "ExecuteUbergraph_WB_MainMenu_Settings_Session");

	Params::WB_MainMenu_Settings_Session_C_ExecuteUbergraph_WB_MainMenu_Settings_Session Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.TruncateString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   MaxLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Truncated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MainMenu_Settings_Session_C::TruncateString(const class FText& InText, int32 MaxLength, class FString* String, bool* Truncated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "TruncateString");

	Params::WB_MainMenu_Settings_Session_C_TruncateString Parms{};

	Parms.InText = std::move(InText);
	Parms.MaxLength = MaxLength;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (Truncated != nullptr)
		*Truncated = Parms.Truncated;
}


// Function WB_MainMenu_Settings_Session.WB_MainMenu_Settings_Session_C.Update Server Name
// (BlueprintCallable, BlueprintEvent)

void UWB_MainMenu_Settings_Session_C::Update_Server_Name()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MainMenu_Settings_Session_C", "Update Server Name");

	UObject::ProcessEvent(Func, nullptr);
}

}

