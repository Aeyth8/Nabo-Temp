#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SocialPartyMemberInteraction

#include "Basic.hpp"

#include "WI_SocialPartyMemberInteraction_classes.hpp"
#include "WI_SocialPartyMemberInteraction_parameters.hpp"


namespace SDK
{

// Function WI_SocialPartyMemberInteraction.WI_SocialPartyMemberInteraction_C.BndEvt__WI_SocialPartyMemberInteraction_KickButton_K2Node_ComponentBoundEvent_0_OnLoadGuardButtonClickedDelegate__DelegateSignature
// (BlueprintEvent)

void UWI_SocialPartyMemberInteraction_C::BndEvt__WI_SocialPartyMemberInteraction_KickButton_K2Node_ComponentBoundEvent_0_OnLoadGuardButtonClickedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialPartyMemberInteraction_C", "BndEvt__WI_SocialPartyMemberInteraction_KickButton_K2Node_ComponentBoundEvent_0_OnLoadGuardButtonClickedDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_SocialPartyMemberInteraction.WI_SocialPartyMemberInteraction_C.BndEvt__WI_SocialPartyMemberInteraction_PromoteButton_K2Node_ComponentBoundEvent_1_OnLoadGuardButtonClickedDelegate__DelegateSignature
// (BlueprintEvent)

void UWI_SocialPartyMemberInteraction_C::BndEvt__WI_SocialPartyMemberInteraction_PromoteButton_K2Node_ComponentBoundEvent_1_OnLoadGuardButtonClickedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialPartyMemberInteraction_C", "BndEvt__WI_SocialPartyMemberInteraction_PromoteButton_K2Node_ComponentBoundEvent_1_OnLoadGuardButtonClickedDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_SocialPartyMemberInteraction.WI_SocialPartyMemberInteraction_C.ExecuteUbergraph_WI_SocialPartyMemberInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_SocialPartyMemberInteraction_C::ExecuteUbergraph_WI_SocialPartyMemberInteraction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialPartyMemberInteraction_C", "ExecuteUbergraph_WI_SocialPartyMemberInteraction");

	Params::WI_SocialPartyMemberInteraction_C_ExecuteUbergraph_WI_SocialPartyMemberInteraction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_SocialPartyMemberInteraction.WI_SocialPartyMemberInteraction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_SocialPartyMemberInteraction_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_SocialPartyMemberInteraction_C", "PreConstruct");

	Params::WI_SocialPartyMemberInteraction_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

