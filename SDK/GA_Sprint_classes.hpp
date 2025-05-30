#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Sprint

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GASIW_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Sprint.GA_Sprint_C
// 0x0070 (0x04D0 - 0x0460)
class UGA_Sprint_C final : public UGameplayAbilityIW
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            SprintHandle;                                      // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SprintDurationInSec;                               // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   PerkAbilityWidget;                                 // 0x0478(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        InitialCooldown;                                   // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWI_PerkAbilityContainer_C*             PerkAbilityContainer;                              // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        TimeAdded;                                         // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWI_HUD_Match_C*                        HUDMatch;                                          // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PerkAbilityClass;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	bool Add_on_Screen_Effect(class UAbilitySystemComponent* TargetASC);
	void EnsureCharacterIsNotSprinting();
	void ExecuteUbergraph_GA_Sprint(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnAbilityAdded();
	void K2_OnAbilityFailed(const struct FGameplayTagContainer& FailureReason);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDead(class ACharacter* Character);
	void OnStarted_4A5B122E46347D685457938546311772();
	bool RemoveOnScreenEffect(class UAbilitySystemComponent* TargetASC);
	void ToggleHeadbob(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Sprint_C">();
	}
	static class UGA_Sprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Sprint_C>();
	}
};
static_assert(alignof(UGA_Sprint_C) == 0x000010, "Wrong alignment on UGA_Sprint_C");
static_assert(sizeof(UGA_Sprint_C) == 0x0004D0, "Wrong size on UGA_Sprint_C");
static_assert(offsetof(UGA_Sprint_C, UberGraphFrame) == 0x000460, "Member 'UGA_Sprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, SprintHandle) == 0x000468, "Member 'UGA_Sprint_C::SprintHandle' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, SprintDurationInSec) == 0x000470, "Member 'UGA_Sprint_C::SprintDurationInSec' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, PerkAbilityWidget) == 0x000478, "Member 'UGA_Sprint_C::PerkAbilityWidget' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, InitialCooldown) == 0x0004A0, "Member 'UGA_Sprint_C::InitialCooldown' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, PerkAbilityContainer) == 0x0004A8, "Member 'UGA_Sprint_C::PerkAbilityContainer' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, TimeAdded) == 0x0004B0, "Member 'UGA_Sprint_C::TimeAdded' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, HUDMatch) == 0x0004B8, "Member 'UGA_Sprint_C::HUDMatch' has a wrong offset!");
static_assert(offsetof(UGA_Sprint_C, PerkAbilityClass) == 0x0004C0, "Member 'UGA_Sprint_C::PerkAbilityClass' has a wrong offset!");

}

