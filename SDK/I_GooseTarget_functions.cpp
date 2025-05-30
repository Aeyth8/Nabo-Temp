#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_GooseTarget

#include "Basic.hpp"

#include "I_GooseTarget_classes.hpp"
#include "I_GooseTarget_parameters.hpp"


namespace SDK
{

// Function I_GooseTarget.I_GooseTarget_C.IsGooseTargetAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_GooseTarget_C::IsGooseTargetAlive(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_GooseTarget_C", "IsGooseTargetAlive");

	Params::I_GooseTarget_C_IsGooseTargetAlive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

