#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlungerGun_Equipable

#include "Basic.hpp"

#include "BP_PlungerGun_Equipable_classes.hpp"
#include "BP_PlungerGun_Equipable_parameters.hpp"


namespace SDK
{

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InterpolatedValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlungerGun_Equipable_C::BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature(float InterpolatedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature");

	Params::BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature Parms{};

	Parms.InterpolatedValue = InterpolatedValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_1_OnCurveInterpolationComplete__DelegateSignature
// (BlueprintEvent)

void ABP_PlungerGun_Equipable_C::BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_1_OnCurveInterpolationComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_1_OnCurveInterpolationComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.EnableTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlungerGun_Equipable_C::EnableTrail(bool Enable, double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "EnableTrail");

	Params::BP_PlungerGun_Equipable_C_EnableTrail Parms{};

	Parms.Enable = Enable;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.ExecuteUbergraph_BP_PlungerGun_Equipable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlungerGun_Equipable_C::ExecuteUbergraph_BP_PlungerGun_Equipable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "ExecuteUbergraph_BP_PlungerGun_Equipable");

	Params::BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.GetMuzzleSceneComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Return                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlungerGun_Equipable_C::GetMuzzleSceneComponent(class USceneComponent** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "GetMuzzleSceneComponent");

	Params::BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.OnHandleViewMode
// (Event, Public, BlueprintEvent)
// Parameters:
// EEquipmentViewMode                      ViewMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlungerGun_Equipable_C::OnHandleViewMode(EEquipmentViewMode ViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "OnHandleViewMode");

	Params::BP_PlungerGun_Equipable_C_OnHandleViewMode Parms{};

	Parms.ViewMode = ViewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.Play Plunger Cosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          EndLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlungerGun_Equipable_C::Play_Plunger_Cosmetics(const struct FVector& EndLocation, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "Play Plunger Cosmetics");

	Params::BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics Parms{};

	Parms.EndLocation = std::move(EndLocation);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlungerGun_Equipable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlungerGun_Equipable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

