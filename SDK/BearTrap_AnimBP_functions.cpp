#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BearTrap_AnimBP

#include "Basic.hpp"

#include "BearTrap_AnimBP_classes.hpp"
#include "BearTrap_AnimBP_parameters.hpp"


namespace SDK
{

// Function BearTrap_AnimBP.BearTrap_AnimBP_C.Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*                    Sequence_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBearTrap_AnimBP_C::Active(bool Condition, class UAnimSequence* Sequence_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "Active");

	Params::BearTrap_AnimBP_C_Active Parms{};

	Parms.Condition = Condition;
	Parms.Sequence_0 = Sequence_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BearTrap_AnimBP.BearTrap_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBearTrap_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "AnimGraph");

	Params::BearTrap_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function BearTrap_AnimBP.BearTrap_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BearTrap_AnimBP_AnimGraphNode_TransitionResult_589CCE3B47DC92E0A682A198C6DF0E86
// (BlueprintEvent)

void UBearTrap_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BearTrap_AnimBP_AnimGraphNode_TransitionResult_589CCE3B47DC92E0A682A198C6DF0E86()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BearTrap_AnimBP_AnimGraphNode_TransitionResult_589CCE3B47DC92E0A682A198C6DF0E86");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BearTrap_AnimBP.BearTrap_AnimBP_C.ExecuteUbergraph_BearTrap_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBearTrap_AnimBP_C::ExecuteUbergraph_BearTrap_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "ExecuteUbergraph_BearTrap_AnimBP");

	Params::BearTrap_AnimBP_C_ExecuteUbergraph_BearTrap_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BearTrap_AnimBP.BearTrap_AnimBP_C.Hit
// (Public, BlueprintCallable, BlueprintEvent)

void UBearTrap_AnimBP_C::Hit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "Hit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BearTrap_AnimBP.BearTrap_AnimBP_C.Step
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBearTrap_AnimBP_C::Step(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BearTrap_AnimBP_C", "Step");

	Params::BearTrap_AnimBP_C_Step Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}

}

