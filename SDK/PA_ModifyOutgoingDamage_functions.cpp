#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_ModifyOutgoingDamage

#include "Basic.hpp"

#include "PA_ModifyOutgoingDamage_classes.hpp"
#include "PA_ModifyOutgoingDamage_parameters.hpp"


namespace SDK
{

// Function PA_ModifyOutgoingDamage.PA_ModifyOutgoingDamage_C.ModifyOutgoingDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  OutgoingDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ModifiedOutgoingDamage                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPA_ModifyOutgoingDamage_C::ModifyOutgoingDamage(double OutgoingDamage, double* ModifiedOutgoingDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PA_ModifyOutgoingDamage_C", "ModifyOutgoingDamage");

	Params::PA_ModifyOutgoingDamage_C_ModifyOutgoingDamage Parms{};

	Parms.OutgoingDamage = OutgoingDamage;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedOutgoingDamage != nullptr)
		*ModifiedOutgoingDamage = Parms.ModifiedOutgoingDamage;
}


// Function PA_ModifyOutgoingDamage.PA_ModifyOutgoingDamage_C.CanModifyFromTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAbilitySystemComponent*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPA_ModifyOutgoingDamage_C::CanModifyFromTags(class UAbilitySystemComponent* Target) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PA_ModifyOutgoingDamage_C", "CanModifyFromTags");

	Params::PA_ModifyOutgoingDamage_C_CanModifyFromTags Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

