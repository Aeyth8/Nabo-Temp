#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AimWeapon

#include "Basic.hpp"

#include "GA_AimWeapon_classes.hpp"
#include "GA_AimWeapon_parameters.hpp"


namespace SDK
{

// Function GA_AimWeapon.GA_AimWeapon_C.AimOverrideSensitivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_AimWeapon_C::AimOverrideSensitivity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "AimOverrideSensitivity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AimWeapon.GA_AimWeapon_C.ExecuteUbergraph_GA_AimWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AimWeapon_C::ExecuteUbergraph_GA_AimWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "ExecuteUbergraph_GA_AimWeapon");

	Params::GA_AimWeapon_C_ExecuteUbergraph_GA_AimWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AimWeapon.GA_AimWeapon_C.GetCameraFOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  FOV                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AimWeapon_C::GetCameraFOV(double* FOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "GetCameraFOV");

	Params::GA_AimWeapon_C_GetCameraFOV Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;
}


// Function GA_AimWeapon.GA_AimWeapon_C.HideCannonMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_AimWeapon_C::HideCannonMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "HideCannonMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AimWeapon.GA_AimWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AimWeapon_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AimWeapon.GA_AimWeapon_C.K2_OnAbilityAdded
// (Event, Protected, BlueprintEvent)

void UGA_AimWeapon_C::K2_OnAbilityAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "K2_OnAbilityAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AimWeapon.GA_AimWeapon_C.OnUnequipped
// (BlueprintCallable, BlueprintEvent)

void UGA_AimWeapon_C::OnUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "OnUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AimWeapon.GA_AimWeapon_C.PlayCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CameraShake                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AimWeapon_C::PlayCameraShake(class UClass* CameraShake, double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "PlayCameraShake");

	Params::GA_AimWeapon_C_PlayCameraShake Parms{};

	Parms.CameraShake = CameraShake;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AimWeapon.GA_AimWeapon_C.ResetCameraFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AimWeapon_C::ResetCameraFOV(double Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "ResetCameraFOV");

	Params::GA_AimWeapon_C_ResetCameraFOV Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AimWeapon.GA_AimWeapon_C.SetCameraFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           OptionalCameraShake                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AimWeapon_C::SetCameraFOV(double Amount, double Speed, class UClass* OptionalCameraShake, double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AimWeapon_C", "SetCameraFOV");

	Params::GA_AimWeapon_C_SetCameraFOV Parms{};

	Parms.Amount = Amount;
	Parms.Speed = Speed;
	Parms.OptionalCameraShake = OptionalCameraShake;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}

}

