#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_CosmeticChickenProjectile

#include "Basic.hpp"

#include "GCN_CosmeticChickenProjectile_classes.hpp"
#include "GCN_CosmeticChickenProjectile_parameters.hpp"


namespace SDK
{

// Function GCN_CosmeticChickenProjectile.GCN_CosmeticChickenProjectile_C.CreateKillData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCombatParticipant               ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FCombatParticipant AGCN_CosmeticChickenProjectile_C::CreateKillData(class AActor* Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CosmeticChickenProjectile_C", "CreateKillData");

	Params::GCN_CosmeticChickenProjectile_C_CreateKillData Parms{};

	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_CosmeticChickenProjectile.GCN_CosmeticChickenProjectile_C.ExecuteUbergraph_GCN_CosmeticChickenProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_CosmeticChickenProjectile_C::ExecuteUbergraph_GCN_CosmeticChickenProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CosmeticChickenProjectile_C", "ExecuteUbergraph_GCN_CosmeticChickenProjectile");

	Params::GCN_CosmeticChickenProjectile_C_ExecuteUbergraph_GCN_CosmeticChickenProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_CosmeticChickenProjectile.GCN_CosmeticChickenProjectile_C.OnBurst
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_CosmeticChickenProjectile_C::OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CosmeticChickenProjectile_C", "OnBurst");

	Params::GCN_CosmeticChickenProjectile_C_OnBurst Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

}

