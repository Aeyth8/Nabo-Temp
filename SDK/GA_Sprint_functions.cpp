#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Sprint

#include "Basic.hpp"

#include "GA_Sprint_classes.hpp"
#include "GA_Sprint_parameters.hpp"


namespace SDK
{

// Function GA_Sprint.GA_Sprint_C.Add on Screen Effect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          TargetASC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Sprint_C::Add_on_Screen_Effect(class UAbilitySystemComponent* TargetASC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "Add on Screen Effect");

	Params::GA_Sprint_C_Add_on_Screen_Effect Parms{};

	Parms.TargetASC = TargetASC;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Sprint.GA_Sprint_C.EnsureCharacterIsNotSprinting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Sprint_C::EnsureCharacterIsNotSprinting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "EnsureCharacterIsNotSprinting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Sprint_C::ExecuteUbergraph_GA_Sprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "ExecuteUbergraph_GA_Sprint");

	Params::GA_Sprint_C_ExecuteUbergraph_GA_Sprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Sprint_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Sprint.GA_Sprint_C.K2_OnAbilityAdded
// (Event, Protected, BlueprintEvent)

void UGA_Sprint_C::K2_OnAbilityAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "K2_OnAbilityAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Sprint.GA_Sprint_C.K2_OnAbilityFailed
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            FailureReason                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Sprint_C::K2_OnAbilityFailed(const struct FGameplayTagContainer& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "K2_OnAbilityFailed");

	Params::GA_Sprint_C_K2_OnAbilityFailed Parms{};

	Parms.FailureReason = std::move(FailureReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Sprint_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "K2_OnEndAbility");

	Params::GA_Sprint_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Sprint.GA_Sprint_C.OnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Sprint_C::OnDead(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "OnDead");

	Params::GA_Sprint_C_OnDead Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Sprint.GA_Sprint_C.OnStarted_4A5B122E46347D685457938546311772
// (BlueprintCallable, BlueprintEvent)

void UGA_Sprint_C::OnStarted_4A5B122E46347D685457938546311772()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "OnStarted_4A5B122E46347D685457938546311772");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Sprint.GA_Sprint_C.RemoveOnScreenEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          TargetASC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Sprint_C::RemoveOnScreenEffect(class UAbilitySystemComponent* TargetASC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "RemoveOnScreenEffect");

	Params::GA_Sprint_C_RemoveOnScreenEffect Parms{};

	Parms.TargetASC = TargetASC;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Sprint.GA_Sprint_C.ToggleHeadbob
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Sprint_C::ToggleHeadbob(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Sprint_C", "ToggleHeadbob");

	Params::GA_Sprint_C_ToggleHeadbob Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

