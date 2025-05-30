#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_AbilityBar

#include "Basic.hpp"

#include "WI_AbilityBar_classes.hpp"
#include "WI_AbilityBar_parameters.hpp"


namespace SDK
{

// Function WI_AbilityBar.WI_AbilityBar_C.CheckExistingAbilities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_AbilityBar_C::CheckExistingAbilities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "CheckExistingAbilities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_AbilityBar.WI_AbilityBar_C.ClearAllWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_AbilityBar_C::ClearAllWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "ClearAllWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_AbilityBar.WI_AbilityBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_AbilityBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_AbilityBar.WI_AbilityBar_C.ExecuteUbergraph_WI_AbilityBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_AbilityBar_C::ExecuteUbergraph_WI_AbilityBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "ExecuteUbergraph_WI_AbilityBar");

	Params::WI_AbilityBar_C_ExecuteUbergraph_WI_AbilityBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_AbilityBar.WI_AbilityBar_C.HandleAbilityGranted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponentJP*        AbilitySystemComponent_0                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle       AbilitySpecHandle                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWI_AbilityBar_C::HandleAbilityGranted(const class UAbilitySystemComponentJP* AbilitySystemComponent_0, const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "HandleAbilityGranted");

	Params::WI_AbilityBar_C_HandleAbilityGranted Parms{};

	Parms.AbilitySystemComponent_0 = AbilitySystemComponent_0;
	Parms.AbilitySpecHandle = std::move(AbilitySpecHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_AbilityBar.WI_AbilityBar_C.HandlePosessedPawnChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            OldPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            NewPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_AbilityBar_C::HandlePosessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "HandlePosessedPawnChanged");

	Params::WI_AbilityBar_C_HandlePosessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_AbilityBar.WI_AbilityBar_C.SetAbilitySystemComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponentJP*        NewAbilitySystemComponent                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_AbilityBar_C::SetAbilitySystemComponent(class UAbilitySystemComponentJP* NewAbilitySystemComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "SetAbilitySystemComponent");

	Params::WI_AbilityBar_C_SetAbilitySystemComponent Parms{};

	Parms.NewAbilitySystemComponent = NewAbilitySystemComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_AbilityBar.WI_AbilityBar_C.Spawn Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbilityIW*               TargetAbility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_AbilityBar_C::Spawn_Widgets(class UGameplayAbilityIW* TargetAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_AbilityBar_C", "Spawn Widgets");

	Params::WI_AbilityBar_C_Spawn_Widgets Parms{};

	Parms.TargetAbility = TargetAbility;

	UObject::ProcessEvent(Func, &Parms);
}

}

