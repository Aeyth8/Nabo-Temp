#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BalloonCrate_BeartrapLauncher

#include "Basic.hpp"

#include "BP_BalloonCrate_BeartrapLauncher_classes.hpp"
#include "BP_BalloonCrate_BeartrapLauncher_parameters.hpp"


namespace SDK
{

// Function BP_BalloonCrate_BeartrapLauncher.BP_BalloonCrate_BeartrapLauncher_C.ExecuteUbergraph_BP_BalloonCrate_BeartrapLauncher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BalloonCrate_BeartrapLauncher_C::ExecuteUbergraph_BP_BalloonCrate_BeartrapLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonCrate_BeartrapLauncher_C", "ExecuteUbergraph_BP_BalloonCrate_BeartrapLauncher");

	Params::BP_BalloonCrate_BeartrapLauncher_C_ExecuteUbergraph_BP_BalloonCrate_BeartrapLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BalloonCrate_BeartrapLauncher.BP_BalloonCrate_BeartrapLauncher_C.LaunchTrap
// (BlueprintCallable, BlueprintEvent)

void ABP_BalloonCrate_BeartrapLauncher_C::LaunchTrap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonCrate_BeartrapLauncher_C", "LaunchTrap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BalloonCrate_BeartrapLauncher.BP_BalloonCrate_BeartrapLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BalloonCrate_BeartrapLauncher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonCrate_BeartrapLauncher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BalloonCrate_BeartrapLauncher.BP_BalloonCrate_BeartrapLauncher_C.Server_LaunchTraps
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BalloonCrate_BeartrapLauncher_C::Server_LaunchTraps(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonCrate_BeartrapLauncher_C", "Server_LaunchTraps");

	Params::BP_BalloonCrate_BeartrapLauncher_C_Server_LaunchTraps Parms{};

	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BalloonCrate_BeartrapLauncher.BP_BalloonCrate_BeartrapLauncher_C.SetDirections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BalloonCrate_BeartrapLauncher_C::SetDirections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonCrate_BeartrapLauncher_C", "SetDirections");

	UObject::ProcessEvent(Func, nullptr);
}

}

