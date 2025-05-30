#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetMovementSpeed

#include "Basic.hpp"

#include "BTT_SetMovementSpeed_classes.hpp"
#include "BTT_SetMovementSpeed_parameters.hpp"


namespace SDK
{

// Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ExecuteUbergraph_BTT_SetMovementSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetMovementSpeed_C::ExecuteUbergraph_BTT_SetMovementSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetMovementSpeed_C", "ExecuteUbergraph_BTT_SetMovementSpeed");

	Params::BTT_SetMovementSpeed_C_ExecuteUbergraph_BTT_SetMovementSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetMovementSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetMovementSpeed_C", "ReceiveExecuteAI");

	Params::BTT_SetMovementSpeed_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

