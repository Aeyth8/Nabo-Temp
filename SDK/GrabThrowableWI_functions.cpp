#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrabThrowableWI

#include "Basic.hpp"

#include "GrabThrowableWI_classes.hpp"
#include "GrabThrowableWI_parameters.hpp"


namespace SDK
{

// Function GrabThrowableWI.GrabThrowableWI_C.ExecuteUbergraph_GrabThrowableWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrabThrowableWI_C::ExecuteUbergraph_GrabThrowableWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GrabThrowableWI_C", "ExecuteUbergraph_GrabThrowableWI");

	Params::GrabThrowableWI_C_ExecuteUbergraph_GrabThrowableWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GrabThrowableWI.GrabThrowableWI_C.Set Held
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Held                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrabThrowableWI_C::Set_Held(bool Held)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GrabThrowableWI_C", "Set Held");

	Params::GrabThrowableWI_C_Set_Held Parms{};

	Parms.Held = Held;

	UObject::ProcessEvent(Func, &Parms);
}

}

