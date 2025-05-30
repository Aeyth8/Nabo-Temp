#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeEndCondition

#include "Basic.hpp"

#include "TimeEndCondition_classes.hpp"
#include "TimeEndCondition_parameters.hpp"


namespace SDK
{

// Function TimeEndCondition.TimeEndCondition_C.CreateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ATimeEndCondition_C::CreateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "CreateWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimeEndCondition.TimeEndCondition_C.ExecuteUbergraph_TimeEndCondition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimeEndCondition_C::ExecuteUbergraph_TimeEndCondition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "ExecuteUbergraph_TimeEndCondition");

	Params::TimeEndCondition_C_ExecuteUbergraph_TimeEndCondition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimeEndCondition.TimeEndCondition_C.OnRep_EndTime
// (BlueprintCallable, BlueprintEvent)

void ATimeEndCondition_C::OnRep_EndTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "OnRep_EndTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimeEndCondition.TimeEndCondition_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATimeEndCondition_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimeEndCondition.TimeEndCondition_C.SetEndTime
// (Public, BlueprintCallable, BlueprintEvent)

void ATimeEndCondition_C::SetEndTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "SetEndTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimeEndCondition.TimeEndCondition_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATimeEndCondition_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeEndCondition_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

