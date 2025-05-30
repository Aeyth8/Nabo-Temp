#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QueryContextEQSDogHouseOnProperty

#include "Basic.hpp"

#include "QueryContextEQSDogHouseOnProperty_classes.hpp"
#include "QueryContextEQSDogHouseOnProperty_parameters.hpp"


namespace SDK
{

// Function QueryContextEQSDogHouseOnProperty.QueryContextEQSDogHouseOnProperty_C.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ResultingActor                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UQueryContextEQSDogHouseOnProperty_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QueryContextEQSDogHouseOnProperty_C", "ProvideSingleActor");

	Params::QueryContextEQSDogHouseOnProperty_C_ProvideSingleActor Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;
}

}

