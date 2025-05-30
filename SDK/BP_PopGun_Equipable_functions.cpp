#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PopGun_Equipable

#include "Basic.hpp"

#include "BP_PopGun_Equipable_classes.hpp"
#include "BP_PopGun_Equipable_parameters.hpp"


namespace SDK
{

// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.EnableTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PopGun_Equipable_C::EnableTrail(bool Enable, double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PopGun_Equipable_C", "EnableTrail");

	Params::BP_PopGun_Equipable_C_EnableTrail Parms{};

	Parms.Enable = Enable;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.ExecuteUbergraph_BP_PopGun_Equipable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PopGun_Equipable_C::ExecuteUbergraph_BP_PopGun_Equipable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PopGun_Equipable_C", "ExecuteUbergraph_BP_PopGun_Equipable");

	Params::BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.GetMuzzleSceneComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Return                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PopGun_Equipable_C::GetMuzzleSceneComponent(class USceneComponent** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PopGun_Equipable_C", "GetMuzzleSceneComponent");

	Params::BP_PopGun_Equipable_C_GetMuzzleSceneComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.OnHandleViewMode
// (Event, Public, BlueprintEvent)
// Parameters:
// EEquipmentViewMode                      ViewMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PopGun_Equipable_C::OnHandleViewMode(EEquipmentViewMode ViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PopGun_Equipable_C", "OnHandleViewMode");

	Params::BP_PopGun_Equipable_C_OnHandleViewMode Parms{};

	Parms.ViewMode = ViewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PopGun_Equipable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PopGun_Equipable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

