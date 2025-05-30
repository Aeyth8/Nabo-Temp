#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrashCanLidBash

#include "Basic.hpp"

#include "GA_TrashCanLidBash_classes.hpp"
#include "GA_TrashCanLidBash_parameters.hpp"


namespace SDK
{

// Function GA_TrashCanLidBash.GA_TrashCanLidBash_C.GetPercentageCharged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Percentage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TrashCanLidBash_C::GetPercentageCharged(double* Percentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrashCanLidBash_C", "GetPercentageCharged");

	Params::GA_TrashCanLidBash_C_GetPercentageCharged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;
}

}

