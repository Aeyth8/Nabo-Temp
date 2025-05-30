#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetTargetLocationToDogHouse

#include "Basic.hpp"

#include "BTT_SetTargetLocationToDogHouse_classes.hpp"
#include "BTT_SetTargetLocationToDogHouse_parameters.hpp"


namespace SDK
{

// Function BTT_SetTargetLocationToDogHouse.BTT_SetTargetLocationToDogHouse_C.ExecuteUbergraph_BTT_SetTargetLocationToDogHouse
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetTargetLocationToDogHouse_C::ExecuteUbergraph_BTT_SetTargetLocationToDogHouse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetTargetLocationToDogHouse_C", "ExecuteUbergraph_BTT_SetTargetLocationToDogHouse");

	Params::BTT_SetTargetLocationToDogHouse_C_ExecuteUbergraph_BTT_SetTargetLocationToDogHouse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetTargetLocationToDogHouse.BTT_SetTargetLocationToDogHouse_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetTargetLocationToDogHouse_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetTargetLocationToDogHouse_C", "ReceiveExecuteAI");

	Params::BTT_SetTargetLocationToDogHouse_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

