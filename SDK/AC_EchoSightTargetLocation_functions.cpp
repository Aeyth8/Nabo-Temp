#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_EchoSightTargetLocation

#include "Basic.hpp"

#include "AC_EchoSightTargetLocation_classes.hpp"
#include "AC_EchoSightTargetLocation_parameters.hpp"


namespace SDK
{

// Function AC_EchoSightTargetLocation.AC_EchoSightTargetLocation_C.ExecuteUbergraph_AC_EchoSightTargetLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_EchoSightTargetLocation_C::ExecuteUbergraph_AC_EchoSightTargetLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_EchoSightTargetLocation_C", "ExecuteUbergraph_AC_EchoSightTargetLocation");

	Params::AC_EchoSightTargetLocation_C_ExecuteUbergraph_AC_EchoSightTargetLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AC_EchoSightTargetLocation.AC_EchoSightTargetLocation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UAC_EchoSightTargetLocation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_EchoSightTargetLocation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

