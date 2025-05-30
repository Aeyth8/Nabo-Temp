#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ObjectContext

#include "Basic.hpp"

#include "WI_ObjectContext_classes.hpp"
#include "WI_ObjectContext_parameters.hpp"


namespace SDK
{

// Function WI_ObjectContext.WI_ObjectContext_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_ObjectContext_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ObjectContext.WI_ObjectContext_C.ExecuteUbergraph_WI_ObjectContext
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ObjectContext_C::ExecuteUbergraph_WI_ObjectContext(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "ExecuteUbergraph_WI_ObjectContext");

	Params::WI_ObjectContext_C_ExecuteUbergraph_WI_ObjectContext Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ObjectContext.WI_ObjectContext_C.FocusGained
// (BlueprintCallable, BlueprintEvent)

void UWI_ObjectContext_C::FocusGained()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "FocusGained");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ObjectContext.WI_ObjectContext_C.FocusLost
// (BlueprintCallable, BlueprintEvent)

void UWI_ObjectContext_C::FocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "FocusLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ObjectContext.WI_ObjectContext_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWI_ObjectContext_C::GetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "GetText");

	Params::WI_ObjectContext_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WI_ObjectContext.WI_ObjectContext_C.ToggleActive
// (BlueprintCallable, BlueprintEvent)

void UWI_ObjectContext_C::ToggleActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ObjectContext_C", "ToggleActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

