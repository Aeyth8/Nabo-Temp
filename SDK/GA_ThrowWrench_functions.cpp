#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThrowWrench

#include "Basic.hpp"

#include "GA_ThrowWrench_classes.hpp"
#include "GA_ThrowWrench_parameters.hpp"


namespace SDK
{

// Function GA_ThrowWrench.GA_ThrowWrench_C.AddCooldownGameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::AddCooldownGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "AddCooldownGameplayCue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.AnimSetBlocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Blocking                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::AnimSetBlocking(bool Blocking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "AnimSetBlocking");

	Params::GA_ThrowWrench_C_AnimSetBlocking Parms{};

	Parms.Blocking = Blocking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.DisableTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::DisableTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "DisableTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.Enable Charge Shake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::Enable_Charge_Shake(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "Enable Charge Shake");

	Params::GA_ThrowWrench_C_Enable_Charge_Shake Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.EnableTrajectory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::EnableTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "EnableTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.ExecuteUbergraph_GA_ThrowWrench
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::ExecuteUbergraph_GA_ThrowWrench(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "ExecuteUbergraph_GA_ThrowWrench");

	Params::GA_ThrowWrench_C_ExecuteUbergraph_GA_ThrowWrench Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ThrowWrench_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "K2_OnEndAbility");

	Params::GA_ThrowWrench_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.LookForTargetsInFront
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       FirstCharacterFound                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::LookForTargetsInFront(class ACharacter** FirstCharacterFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "LookForTargetsInFront");

	Params::GA_ThrowWrench_C_LookForTargetsInFront Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FirstCharacterFound != nullptr)
		*FirstCharacterFound = Parms.FirstCharacterFound;
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.OnReleaseMontageEvent
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::OnReleaseMontageEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "OnReleaseMontageEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.Play Charge Camera Shake
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::Play_Charge_Camera_Shake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "Play Charge Camera Shake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.Reset FOV
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::Reset_FOV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "Reset FOV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.Reset Multigate for CS
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowWrench_C::Reset_Multigate_for_CS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "Reset Multigate for CS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.SetOnCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::SetOnCooldown(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "SetOnCooldown");

	Params::GA_ThrowWrench_C_SetOnCooldown Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.TryHomeTowardsCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*             Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowWrench_C::TryHomeTowardsCharacter(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "TryHomeTowardsCharacter");

	Params::GA_ThrowWrench_C_TryHomeTowardsCharacter Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThrowWrench.GA_ThrowWrench_C.GetDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGA_ThrowWrench_C::GetDamage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThrowWrench_C", "GetDamage");

	Params::GA_ThrowWrench_C_GetDamage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

