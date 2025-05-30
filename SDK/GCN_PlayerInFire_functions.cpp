#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_PlayerInFire

#include "Basic.hpp"

#include "GCN_PlayerInFire_classes.hpp"
#include "GCN_PlayerInFire_parameters.hpp"


namespace SDK
{

// Function GCN_PlayerInFire.GCN_PlayerInFire_C.ExecuteUbergraph_GCN_PlayerInFire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_PlayerInFire_C::ExecuteUbergraph_GCN_PlayerInFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "ExecuteUbergraph_GCN_PlayerInFire");

	Params::GCN_PlayerInFire_C_ExecuteUbergraph_GCN_PlayerInFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_PlayerInFire.GCN_PlayerInFire_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_PlayerInFire_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "K2_HandleGameplayCue");

	Params::GCN_PlayerInFire_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_PlayerInFire.GCN_PlayerInFire_C.OnApplication
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_PlayerInFire_C::OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "OnApplication");

	Params::GCN_PlayerInFire_C_OnApplication Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_PlayerInFire.GCN_PlayerInFire_C.OnLoopingStart
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_PlayerInFire_C::OnLoopingStart(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "OnLoopingStart");

	Params::GCN_PlayerInFire_C_OnLoopingStart Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_PlayerInFire.GCN_PlayerInFire_C.OnRecurring
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_PlayerInFire_C::OnRecurring(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "OnRecurring");

	Params::GCN_PlayerInFire_C_OnRecurring Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_PlayerInFire.GCN_PlayerInFire_C.OnRemoval
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayCueNotify_SpawnResult   SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_PlayerInFire_C::OnRemoval(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_PlayerInFire_C", "OnRemoval");

	Params::GCN_PlayerInFire_C_OnRemoval Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

}

