#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_Trajectory

#include "Basic.hpp"

#include "Bp_Trajectory_classes.hpp"
#include "Bp_Trajectory_parameters.hpp"


namespace SDK
{

// Function Bp_Trajectory.Bp_Trajectory_C.ExecuteUbergraph_Bp_Trajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_Trajectory_C::ExecuteUbergraph_Bp_Trajectory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_Trajectory_C", "ExecuteUbergraph_Bp_Trajectory");

	Params::Bp_Trajectory_C_ExecuteUbergraph_Bp_Trajectory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bp_Trajectory.Bp_Trajectory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_Trajectory_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_Trajectory_C", "ReceiveTick");

	Params::Bp_Trajectory_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

