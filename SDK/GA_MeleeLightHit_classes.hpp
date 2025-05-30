#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MeleeLightHit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_Bash_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MeleeLightHit.GA_MeleeLightHit_C
// 0x0030 (0x07C0 - 0x0790)
#pragma pack(push, 0x1)
class alignas(0x10) UGA_MeleeLightHit_C : public UGA_Bash_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MeleeLightHit_C;                 // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           DamageTag;                                         // 0x0798(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            StaminaHandle;                                     // 0x07A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_DamageDealt;                                    // 0x07A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Check_on_Cooldown_Cue(const struct FGameplayTagContainer& Gameplay_Tags);
	void ExecuteUbergraph_GA_MeleeLightHit(int32 EntryPoint);
	void K2_OnAbilityFailed(const struct FGameplayTagContainer& FailureReason);
	void On_DamageDealt__DelegateSignature();
	void GetDamageToShield(const struct FHitResult& HitResult, class UAbilitySystemComponentIW* HitActorASC, int32* Damage);
	void Hit_Actor(const struct FHitResult& HitResult, class UAbilitySystemComponentIW* HitActorASC);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

	double GetLightSwingDamage(class UAbilitySystemComponentIW* HitActorASC) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MeleeLightHit_C">();
	}
	static class UGA_MeleeLightHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MeleeLightHit_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UGA_MeleeLightHit_C) == 0x000010, "Wrong alignment on UGA_MeleeLightHit_C");
static_assert(sizeof(UGA_MeleeLightHit_C) == 0x0007C0, "Wrong size on UGA_MeleeLightHit_C");
static_assert(offsetof(UGA_MeleeLightHit_C, UberGraphFrame_GA_MeleeLightHit_C) == 0x000790, "Member 'UGA_MeleeLightHit_C::UberGraphFrame_GA_MeleeLightHit_C' has a wrong offset!");
static_assert(offsetof(UGA_MeleeLightHit_C, DamageTag) == 0x000798, "Member 'UGA_MeleeLightHit_C::DamageTag' has a wrong offset!");
static_assert(offsetof(UGA_MeleeLightHit_C, StaminaHandle) == 0x0007A0, "Member 'UGA_MeleeLightHit_C::StaminaHandle' has a wrong offset!");
static_assert(offsetof(UGA_MeleeLightHit_C, On_DamageDealt) == 0x0007A8, "Member 'UGA_MeleeLightHit_C::On_DamageDealt' has a wrong offset!");

}

