#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_HouseEssentialActor

#include "Basic.hpp"

#include "BPI_HouseEssentialActor_classes.hpp"
#include "BPI_HouseEssentialActor_parameters.hpp"


namespace SDK
{

// Function BPI_HouseEssentialActor.BPI_HouseEssentialActor_C.GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// double                                  CurrentHealth                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HouseEssentialActor_C::GetHealth(double* CurrentHealth) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_HouseEssentialActor_C", "GetHealth");

	Params::BPI_HouseEssentialActor_C_GetHealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentHealth != nullptr)
		*CurrentHealth = Parms.CurrentHealth;
}


// Function BPI_HouseEssentialActor.BPI_HouseEssentialActor_C.GetMaxHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// double                                  MaxHealth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HouseEssentialActor_C::GetMaxHealth(double* MaxHealth) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_HouseEssentialActor_C", "GetMaxHealth");

	Params::BPI_HouseEssentialActor_C_GetMaxHealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;
}

}

