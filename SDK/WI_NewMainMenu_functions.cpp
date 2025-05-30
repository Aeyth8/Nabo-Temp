#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_NewMainMenu

#include "Basic.hpp"

#include "WI_NewMainMenu_classes.hpp"
#include "WI_NewMainMenu_parameters.hpp"


namespace SDK
{

// Function WI_NewMainMenu.WI_NewMainMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWI_NewMainMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.ExecuteUbergraph_WI_NewMainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::ExecuteUbergraph_WI_NewMainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "ExecuteUbergraph_WI_NewMainMenu");

	Params::WI_NewMainMenu_C_ExecuteUbergraph_WI_NewMainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.GetJPTabs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWI_JPHorizontalTabList_C*        JPTabs                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::GetJPTabs(class UWI_JPHorizontalTabList_C** JPTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "GetJPTabs");

	Params::WI_NewMainMenu_C_GetJPTabs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JPTabs != nullptr)
		*JPTabs = Parms.JPTabs;
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.GetLocalPlayerPartySlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWI_PartySlot_C*                  LocalPlayerPartySlotWidget                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::GetLocalPlayerPartySlotWidget(class UWI_PartySlot_C** LocalPlayerPartySlotWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "GetLocalPlayerPartySlotWidget");

	Params::WI_NewMainMenu_C_GetLocalPlayerPartySlotWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocalPlayerPartySlotWidget != nullptr)
		*LocalPlayerPartySlotWidget = Parms.LocalPlayerPartySlotWidget;
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.GetSettingsButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWI_SettingsButton_C*             SettingsButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::GetSettingsButton(class UWI_SettingsButton_C** SettingsButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "GetSettingsButton");

	Params::WI_NewMainMenu_C_GetSettingsButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SettingsButton != nullptr)
		*SettingsButton = Parms.SettingsButton;
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.HandleTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::HandleTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "HandleTabSelected");

	Params::WI_NewMainMenu_C_HandleTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_NewMainMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.OnMessageReceived_413B7E074EEBEF2F1CE802971AEA143A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::OnMessageReceived_413B7E074EEBEF2F1CE802971AEA143A(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "OnMessageReceived_413B7E074EEBEF2F1CE802971AEA143A");

	Params::WI_NewMainMenu_C_OnMessageReceived_413B7E074EEBEF2F1CE802971AEA143A Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.OnResult_5EDDE5DA4A4CEFB35DFE46AD66B28BCF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonMessagingResult                  Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::OnResult_5EDDE5DA4A4CEFB35DFE46AD66B28BCF(ECommonMessagingResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "OnResult_5EDDE5DA4A4CEFB35DFE46AD66B28BCF");

	Params::WI_NewMainMenu_C_OnResult_5EDDE5DA4A4CEFB35DFE46AD66B28BCF Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.OnResult_B15C5E114F2BBA3417B87FA3CDE03AA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonMessagingResult                  Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_NewMainMenu_C::OnResult_B15C5E114F2BBA3417B87FA3CDE03AA9(ECommonMessagingResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "OnResult_B15C5E114F2BBA3417B87FA3CDE03AA9");

	Params::WI_NewMainMenu_C_OnResult_B15C5E114F2BBA3417B87FA3CDE03AA9 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.GetTabDescriptors
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FLyraTabDescriptor>       ExistingTabDescriptors                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FLyraTabDescriptor>       ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<struct FLyraTabDescriptor> UWI_NewMainMenu_C::GetTabDescriptors(const TArray<struct FLyraTabDescriptor>& ExistingTabDescriptors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "GetTabDescriptors");

	Params::WI_NewMainMenu_C_GetTabDescriptors Parms{};

	Parms.ExistingTabDescriptors = std::move(ExistingTabDescriptors);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_NewMainMenu.WI_NewMainMenu_C.IsTabDisabled
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             TabName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWI_NewMainMenu_C::IsTabDisabled(const class FName TabName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewMainMenu_C", "IsTabDisabled");

	Params::WI_NewMainMenu_C_IsTabDisabled Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

