#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_Egg_Projectile

#include "Basic.hpp"

#include "bp_Egg_Projectile_classes.hpp"
#include "bp_Egg_Projectile_parameters.hpp"


namespace SDK
{

// Function bp_Egg_Projectile.bp_Egg_Projectile_C.Apply Hit Effects On Valid Entity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit_Result                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAbilitySystemComponent*          Instigator_ASC                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          HitTarget_ASC                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void Abp_Egg_Projectile_C::Apply_Hit_Effects_On_Valid_Entity(const struct FHitResult& Hit_Result, class UAbilitySystemComponent* Instigator_ASC, class UAbilitySystemComponent* HitTarget_ASC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_Egg_Projectile_C", "Apply Hit Effects On Valid Entity");

	Params::bp_Egg_Projectile_C_Apply_Hit_Effects_On_Valid_Entity Parms{};

	Parms.Hit_Result = std::move(Hit_Result);
	Parms.Instigator_ASC = Instigator_ASC;
	Parms.HitTarget_ASC = HitTarget_ASC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_Egg_Projectile.bp_Egg_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_Egg_Projectile_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_Egg_Projectile_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

