#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DeathPlaneInterface

#include "Basic.hpp"

#include "BPI_DeathPlaneInterface_classes.hpp"


namespace SDK
{

// Function BPI_DeathPlaneInterface.BPI_DeathPlaneInterface_C.BelowDeathPlane
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_DeathPlaneInterface_C::BelowDeathPlane()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_DeathPlaneInterface_C", "BelowDeathPlane");

	UObject::ProcessEvent(Func, nullptr);
}

}

