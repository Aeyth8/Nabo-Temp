#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DriveByManager

#include "Basic.hpp"

#include "BP_DriveByManager_classes.hpp"
#include "BP_DriveByManager_parameters.hpp"


namespace SDK
{

// Function BP_DriveByManager.BP_DriveByManager_C.ExecuteUbergraph_BP_DriveByManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DriveByManager_C::ExecuteUbergraph_BP_DriveByManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DriveByManager_C", "ExecuteUbergraph_BP_DriveByManager");

	Params::BP_DriveByManager_C_ExecuteUbergraph_BP_DriveByManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DriveByManager.BP_DriveByManager_C.HandleDrivingCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DriveByVan_C*                 DriveByVan                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DriveByManager_C::HandleDrivingCompleted(class ABP_DriveByVan_C* DriveByVan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DriveByManager_C", "HandleDrivingCompleted");

	Params::BP_DriveByManager_C_HandleDrivingCompleted Parms{};

	Parms.DriveByVan = DriveByVan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DriveByManager.BP_DriveByManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DriveByManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DriveByManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DriveByManager.BP_DriveByManager_C.StartDriveBy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   TeamIdThatOrdered                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   TeamIdToAttack                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     OrderingPlayerState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DriveByManager_C::StartDriveBy(uint8 TeamIdThatOrdered, uint8 TeamIdToAttack, class APlayerState* OrderingPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DriveByManager_C", "StartDriveBy");

	Params::BP_DriveByManager_C_StartDriveBy Parms{};

	Parms.TeamIdThatOrdered = TeamIdThatOrdered;
	Parms.TeamIdToAttack = TeamIdToAttack;
	Parms.OrderingPlayerState = OrderingPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}

