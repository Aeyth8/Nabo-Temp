#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_HealSelfMedkit

#include "Basic.hpp"

#include "GCN_HealSelfMedkit_classes.hpp"
#include "GCN_HealSelfMedkit_parameters.hpp"


namespace SDK
{

// Function GCN_HealSelfMedkit.GCN_HealSelfMedkit_C.ExecuteUbergraph_GCN_HealSelfMedkit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_HealSelfMedkit_C::ExecuteUbergraph_GCN_HealSelfMedkit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HealSelfMedkit_C", "ExecuteUbergraph_GCN_HealSelfMedkit");

	Params::GCN_HealSelfMedkit_C_ExecuteUbergraph_GCN_HealSelfMedkit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_HealSelfMedkit.GCN_HealSelfMedkit_C.OnApplication
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_HealSelfMedkit_C::OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HealSelfMedkit_C", "OnApplication");

	Params::GCN_HealSelfMedkit_C_OnApplication Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_HealSelfMedkit.GCN_HealSelfMedkit_C.OnRemoval
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_HealSelfMedkit_C::OnRemoval(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HealSelfMedkit_C", "OnRemoval");

	Params::GCN_HealSelfMedkit_C_OnRemoval Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

}

