#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NeighborsController

#include "Basic.hpp"

#include "BP_NeighborsController_classes.hpp"
#include "BP_NeighborsController_parameters.hpp"


namespace SDK
{

// Function BP_NeighborsController.BP_NeighborsController_C.ExecuteUbergraph_BP_NeighborsController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NeighborsController_C::ExecuteUbergraph_BP_NeighborsController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NeighborsController_C", "ExecuteUbergraph_BP_NeighborsController");

	Params::BP_NeighborsController_C_ExecuteUbergraph_BP_NeighborsController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NeighborsController.BP_NeighborsController_C.OnMessageReceived_049353D746FB272C71135295B562F9EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_NeighborsController_C::OnMessageReceived_049353D746FB272C71135295B562F9EE(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NeighborsController_C", "OnMessageReceived_049353D746FB272C71135295B562F9EE");

	Params::BP_NeighborsController_C_OnMessageReceived_049353D746FB272C71135295B562F9EE Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NeighborsController.BP_NeighborsController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NeighborsController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NeighborsController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

