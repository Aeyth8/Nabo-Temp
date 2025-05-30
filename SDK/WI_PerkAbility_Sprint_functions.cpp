#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PerkAbility_Sprint

#include "Basic.hpp"

#include "WI_PerkAbility_Sprint_classes.hpp"
#include "WI_PerkAbility_Sprint_parameters.hpp"


namespace SDK
{

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_PerkAbility_Sprint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.ExecuteUbergraph_WI_PerkAbility_Sprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PerkAbility_Sprint_C::ExecuteUbergraph_WI_PerkAbility_Sprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "ExecuteUbergraph_WI_PerkAbility_Sprint");

	Params::WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_PerkAbility_Sprint_C::InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0");

	Params::WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_PerkAbility_Sprint_C::OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262");

	Params::WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PerkAbility_Sprint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "PreConstruct");

	Params::WI_PerkAbility_Sprint_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_PerkAbility_Sprint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_PerkAbility_Sprint_C", "Tick");

	Params::WI_PerkAbility_Sprint_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

