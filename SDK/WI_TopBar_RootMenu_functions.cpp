#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TopBar_RootMenu

#include "Basic.hpp"

#include "WI_TopBar_RootMenu_classes.hpp"
#include "WI_TopBar_RootMenu_parameters.hpp"


namespace SDK
{

// Function WI_TopBar_RootMenu.WI_TopBar_RootMenu_C.GetJPTabs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWI_JPHorizontalTabList_C*        JPTabs                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_TopBar_RootMenu_C::GetJPTabs(class UWI_JPHorizontalTabList_C** JPTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TopBar_RootMenu_C", "GetJPTabs");

	Params::WI_TopBar_RootMenu_C_GetJPTabs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JPTabs != nullptr)
		*JPTabs = Parms.JPTabs;
}


// Function WI_TopBar_RootMenu.WI_TopBar_RootMenu_C.GetSettingsButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWI_SettingsButton_C*             SettingsButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_TopBar_RootMenu_C::GetSettingsButton(class UWI_SettingsButton_C** SettingsButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TopBar_RootMenu_C", "GetSettingsButton");

	Params::WI_TopBar_RootMenu_C_GetSettingsButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SettingsButton != nullptr)
		*SettingsButton = Parms.SettingsButton;
}


// Function WI_TopBar_RootMenu.WI_TopBar_RootMenu_C.PlayAnimateIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_TopBar_RootMenu_C::PlayAnimateIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TopBar_RootMenu_C", "PlayAnimateIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TopBar_RootMenu.WI_TopBar_RootMenu_C.PlayAnimateOut
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_TopBar_RootMenu_C::PlayAnimateOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TopBar_RootMenu_C", "PlayAnimateOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

