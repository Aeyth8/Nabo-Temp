#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Chad_Default_PP

#include "Basic.hpp"

#include "ABP_Chad_Default_PP_classes.hpp"
#include "ABP_Chad_Default_PP_parameters.hpp"


namespace SDK
{

// Function ABP_Chad_Default_PP.ABP_Chad_Default_PP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Chad_Default_PP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Chad_Default_PP_C", "AnimGraph");

	Params::ABP_Chad_Default_PP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Chad_Default_PP.ABP_Chad_Default_PP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Chad_Default_PP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Chad_Default_PP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Chad_Default_PP.ABP_Chad_Default_PP_C.ExecuteUbergraph_ABP_Chad_Default_PP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Chad_Default_PP_C::ExecuteUbergraph_ABP_Chad_Default_PP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Chad_Default_PP_C", "ExecuteUbergraph_ABP_Chad_Default_PP");

	Params::ABP_Chad_Default_PP_C_ExecuteUbergraph_ABP_Chad_Default_PP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

