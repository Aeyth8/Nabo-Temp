#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SocialBlockedPlayersList

#include "Basic.hpp"

#include "WI_SocialBlockedPlayersList_classes.hpp"
#include "WI_SocialBlockedPlayersList_parameters.hpp"


namespace SDK
{

// Function WI_SocialBlockedPlayersList.WI_SocialBlockedPlayersList_C.BlueprintOnUnblockPlayerFailed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWI_SocialBlockedPlayersList_C::BlueprintOnUnblockPlayerFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialBlockedPlayersList_C", "BlueprintOnUnblockPlayerFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_SocialBlockedPlayersList.WI_SocialBlockedPlayersList_C.BndEvt__WI_SocialBlockedPlayersList_BaseWidget_K2Node_ComponentBoundEvent_0_OnHeaderClick__DelegateSignature
// (BlueprintEvent)

void UWI_SocialBlockedPlayersList_C::BndEvt__WI_SocialBlockedPlayersList_BaseWidget_K2Node_ComponentBoundEvent_0_OnHeaderClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialBlockedPlayersList_C", "BndEvt__WI_SocialBlockedPlayersList_BaseWidget_K2Node_ComponentBoundEvent_0_OnHeaderClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_SocialBlockedPlayersList.WI_SocialBlockedPlayersList_C.ExecuteUbergraph_WI_SocialBlockedPlayersList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_SocialBlockedPlayersList_C::ExecuteUbergraph_WI_SocialBlockedPlayersList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialBlockedPlayersList_C", "ExecuteUbergraph_WI_SocialBlockedPlayersList");

	Params::WI_SocialBlockedPlayersList_C_ExecuteUbergraph_WI_SocialBlockedPlayersList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_SocialBlockedPlayersList.WI_SocialBlockedPlayersList_C.OnHeaderClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_SocialBlockedPlayersList_C::OnHeaderClick__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialBlockedPlayersList_C", "OnHeaderClick__DelegateSignature");

	Params::WI_SocialBlockedPlayersList_C_OnHeaderClick__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

}

