#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AutoEquipHandsComponent

#include "Basic.hpp"

#include "BP_AutoEquipHandsComponent_classes.hpp"
#include "BP_AutoEquipHandsComponent_parameters.hpp"


namespace SDK
{

// Function BP_AutoEquipHandsComponent.BP_AutoEquipHandsComponent_C.EquipHands
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AutoEquipHandsComponent_C::EquipHands()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutoEquipHandsComponent_C", "EquipHands");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AutoEquipHandsComponent.BP_AutoEquipHandsComponent_C.ExecuteUbergraph_BP_AutoEquipHandsComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AutoEquipHandsComponent_C::ExecuteUbergraph_BP_AutoEquipHandsComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutoEquipHandsComponent_C", "ExecuteUbergraph_BP_AutoEquipHandsComponent");

	Params::BP_AutoEquipHandsComponent_C_ExecuteUbergraph_BP_AutoEquipHandsComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AutoEquipHandsComponent.BP_AutoEquipHandsComponent_C.OnRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentInstance*               Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AutoEquipHandsComponent_C::OnRemoved(class UEquipmentInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutoEquipHandsComponent_C", "OnRemoved");

	Params::BP_AutoEquipHandsComponent_C_OnRemoved Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AutoEquipHandsComponent.BP_AutoEquipHandsComponent_C.QueryEquipHands
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AutoEquipHandsComponent_C::QueryEquipHands()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutoEquipHandsComponent_C", "QueryEquipHands");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AutoEquipHandsComponent.BP_AutoEquipHandsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AutoEquipHandsComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AutoEquipHandsComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

