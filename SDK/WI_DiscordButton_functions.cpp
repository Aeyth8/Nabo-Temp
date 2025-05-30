#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_DiscordButton

#include "Basic.hpp"

#include "WI_DiscordButton_classes.hpp"
#include "WI_DiscordButton_parameters.hpp"


namespace SDK
{

// Function WI_DiscordButton.WI_DiscordButton_C.AcceptDiscordServerInvite
// (BlueprintCallable, BlueprintEvent)

void UWI_DiscordButton_C::AcceptDiscordServerInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "AcceptDiscordServerInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UWI_DiscordButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UWI_DiscordButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UWI_DiscordButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UWI_DiscordButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWI_DiscordButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_DiscordButton.WI_DiscordButton_C.ExecuteUbergraph_WI_DiscordButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_DiscordButton_C::ExecuteUbergraph_WI_DiscordButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_DiscordButton_C", "ExecuteUbergraph_WI_DiscordButton");

	Params::WI_DiscordButton_C_ExecuteUbergraph_WI_DiscordButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

