#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PlungerGunHookTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MeleeLightHit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_PlungerGunHookTarget.GA_PlungerGunHookTarget_C
// 0x0010 (0x07D0 - 0x07C0)
class UGA_PlungerGunHookTarget_C : public UGA_MeleeLightHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_PlungerGunHookTarget_C;          // 0x07B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CorkBullet;                                        // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HookTarget;                                        // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddCableCue(const struct FHitResult& Hit);
	void Bash_With_Hit_Delay();
	void CheckForAchievement(class AActor* Target);
	void ExecuteFireCue();
	void ExecuteUbergraph_GA_PlungerGunHookTarget(int32 EntryPoint);
	void GetHoldingPopGun(class ABP_PopGun_Equipable_C** HoldingPopGun);
	void Hit_Actor(const struct FHitResult& HitResult, class UAbilitySystemComponentIW* HitActorASC);
	void HitNonASCActor(class AActor* HitActor, const struct FHitResult& Hit);
	void HitTarget(bool NewParam);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_7B102E1C4C71EEF1BEC00AA23E67414D();
	void Try_Spawn_Hit_Decal(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_PlungerGunHookTarget_C">();
	}
	static class UGA_PlungerGunHookTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PlungerGunHookTarget_C>();
	}
};
static_assert(alignof(UGA_PlungerGunHookTarget_C) == 0x000010, "Wrong alignment on UGA_PlungerGunHookTarget_C");
static_assert(sizeof(UGA_PlungerGunHookTarget_C) == 0x0007D0, "Wrong size on UGA_PlungerGunHookTarget_C");
static_assert(offsetof(UGA_PlungerGunHookTarget_C, UberGraphFrame_GA_PlungerGunHookTarget_C) == 0x0007B8, "Member 'UGA_PlungerGunHookTarget_C::UberGraphFrame_GA_PlungerGunHookTarget_C' has a wrong offset!");
static_assert(offsetof(UGA_PlungerGunHookTarget_C, CorkBullet) == 0x0007C0, "Member 'UGA_PlungerGunHookTarget_C::CorkBullet' has a wrong offset!");
static_assert(offsetof(UGA_PlungerGunHookTarget_C, HookTarget) == 0x0007C8, "Member 'UGA_PlungerGunHookTarget_C::HookTarget' has a wrong offset!");

}

