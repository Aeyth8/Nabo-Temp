#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PingableComponent

#include "Basic.hpp"

#include "BP_PingableComponent_classes.hpp"
#include "BP_PingableComponent_parameters.hpp"


namespace SDK
{

// Function BP_PingableComponent.BP_PingableComponent_C.GetPingDataBP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerJP_Match*        InPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPingData                        ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FPingData UBP_PingableComponent_C::GetPingDataBP(class APlayerControllerJP_Match* InPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PingableComponent_C", "GetPingDataBP");

	Params::BP_PingableComponent_C_GetPingDataBP Parms{};

	Parms.InPC = InPC;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

