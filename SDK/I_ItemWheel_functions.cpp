#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ItemWheel

#include "Basic.hpp"

#include "I_ItemWheel_classes.hpp"
#include "I_ItemWheel_parameters.hpp"


namespace SDK
{

// Function I_ItemWheel.I_ItemWheel_C.GetItemWheelComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterItemWheelComponent_C*   Return                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void II_ItemWheel_C::GetItemWheelComponent(class UCharacterItemWheelComponent_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_ItemWheel_C", "GetItemWheelComponent");

	Params::I_ItemWheel_C_GetItemWheelComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

