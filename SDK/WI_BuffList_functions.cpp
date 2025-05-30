#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_BuffList

#include "Basic.hpp"

#include "WI_BuffList_classes.hpp"
#include "WI_BuffList_parameters.hpp"


namespace SDK
{

// Function WI_BuffList.WI_BuffList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_BuffList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_BuffList.WI_BuffList_C.ExecuteUbergraph_WI_BuffList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_BuffList_C::ExecuteUbergraph_WI_BuffList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "ExecuteUbergraph_WI_BuffList");

	Params::WI_BuffList_C_ExecuteUbergraph_WI_BuffList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_BuffList.WI_BuffList_C.InpActEvt_IA_UpgradeOverview_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_BuffList_C::InpActEvt_IA_UpgradeOverview_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "InpActEvt_IA_UpgradeOverview_K2Node_EnhancedInputActionEvent_0");

	Params::WI_BuffList_C_InpActEvt_IA_UpgradeOverview_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_BuffList.WI_BuffList_C.OnMessageReceived_EE349EB94D78DBC4E6B5C79B898BA7DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_BuffList_C::OnMessageReceived_EE349EB94D78DBC4E6B5C79B898BA7DC(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "OnMessageReceived_EE349EB94D78DBC4E6B5C79B898BA7DC");

	Params::WI_BuffList_C_OnMessageReceived_EE349EB94D78DBC4E6B5C79B898BA7DC Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_BuffList.WI_BuffList_C.UpdateAllBuffs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_BuffList_C::UpdateAllBuffs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "UpdateAllBuffs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_BuffList.WI_BuffList_C.UpdateBuffs
// (BlueprintCallable, BlueprintEvent)

void UWI_BuffList_C::UpdateBuffs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_BuffList_C", "UpdateBuffs");

	UObject::ProcessEvent(Func, nullptr);
}

}

