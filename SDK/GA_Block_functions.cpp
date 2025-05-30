#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Block

#include "Basic.hpp"

#include "GA_Block_classes.hpp"
#include "GA_Block_parameters.hpp"


namespace SDK
{

// Function GA_Block.GA_Block_C.AddArmorToUser
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Block_C::AddArmorToUser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "AddArmorToUser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.AnimSetBlocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Blocking                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::AnimSetBlocking(bool Blocking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "AnimSetBlocking");

	Params::GA_Block_C_AnimSetBlocking Parms{};

	Parms.Blocking = Blocking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.AttackBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Incoming_Damage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Block_C::AttackBlocked(int32 Incoming_Damage, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "AttackBlocked");

	Params::GA_Block_C_AttackBlocked Parms{};

	Parms.Incoming_Damage = Incoming_Damage;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.Blocked_Cosmetics
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Block_C::Blocked_Cosmetics(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "Blocked_Cosmetics");

	Params::GA_Block_C_Blocked_Cosmetics Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.CacheStaminaValues
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Block_C::CacheStaminaValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "CacheStaminaValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.CanUseStamina
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Block_C::CanUseStamina()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "CanUseStamina");

	Params::GA_Block_C_CanUseStamina Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Block.GA_Block_C.Drain Stamina
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::Drain_Stamina(double Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "Drain Stamina");

	Params::GA_Block_C_Drain_Stamina Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.EndBlock_Cosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BlockingVolume_C*             Shield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::EndBlock_Cosmetics(class ABP_BlockingVolume_C* Shield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "EndBlock_Cosmetics");

	Params::GA_Block_C_EndBlock_Cosmetics Parms{};

	Parms.Shield = Shield;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.ExecuteUbergraph_GA_Block
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::ExecuteUbergraph_GA_Block(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "ExecuteUbergraph_GA_Block");

	Params::GA_Block_C_ExecuteUbergraph_GA_Block Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.GetBlockedSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Return                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::GetBlockedSound(class USoundBase** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "GetBlockedSound");

	Params::GA_Block_C_GetBlockedSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function GA_Block.GA_Block_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Block_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.K2_OnAbilityAdded
// (Event, Protected, BlueprintEvent)

void UGA_Block_C::K2_OnAbilityAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "K2_OnAbilityAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.K2_OnAbilityRemoved
// (Event, Public, BlueprintEvent)

void UGA_Block_C::K2_OnAbilityRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "K2_OnAbilityRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "K2_OnEndAbility");

	Params::GA_Block_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.OnFinished_9DF805E54703CE52FD56988106538E29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ActionNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::OnFinished_9DF805E54703CE52FD56988106538E29(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "OnFinished_9DF805E54703CE52FD56988106538E29");

	Params::GA_Block_C_OnFinished_9DF805E54703CE52FD56988106538E29 Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.OnPerformAction_9DF805E54703CE52FD56988106538E29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ActionNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::OnPerformAction_9DF805E54703CE52FD56988106538E29(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "OnPerformAction_9DF805E54703CE52FD56988106538E29");

	Params::GA_Block_C_OnPerformAction_9DF805E54703CE52FD56988106538E29 Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.OnRelease_EA52071646837E0779D40BA884955F14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeHeld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::OnRelease_EA52071646837E0779D40BA884955F14(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "OnRelease_EA52071646837E0779D40BA884955F14");

	Params::GA_Block_C_OnRelease_EA52071646837E0779D40BA884955F14 Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.SpawnBlockingVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Block_C::SpawnBlockingVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "SpawnBlockingVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.StopStaminaReg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Block_C::StopStaminaReg()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "StopStaminaReg");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Block.GA_Block_C.ToggleStaminaBarVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Block_C::ToggleStaminaBarVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "ToggleStaminaBarVisibility");

	Params::GA_Block_C_ToggleStaminaBarVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Block.GA_Block_C.UpdateBlockingVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Block_C::UpdateBlockingVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Block_C", "UpdateBlockingVolume");

	UObject::ProcessEvent(Func, nullptr);
}

}

