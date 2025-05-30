#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SlingProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ProjectileBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SlingProjectile.BP_SlingProjectile_C
// 0x0018 (0x0540 - 0x0528)
class ABP_SlingProjectile_C : public ABP_ProjectileBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SlingProjectile_C;               // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Bounces;                                           // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534[0x4];                                      // 0x0534(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ProjectileTimeoutHandle;                           // 0x0538(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SlingProjectile(int32 EntryPoint);
	void ProjectileTimeout();
	void DeactivatePooledActor();
	void HandleBounce(const struct FHitResult& Hit, const struct FVector& Impact_Velocity);
	void PooledBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SlingProjectile_C">();
	}
	static class ABP_SlingProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SlingProjectile_C>();
	}
};
static_assert(alignof(ABP_SlingProjectile_C) == 0x000008, "Wrong alignment on ABP_SlingProjectile_C");
static_assert(sizeof(ABP_SlingProjectile_C) == 0x000540, "Wrong size on ABP_SlingProjectile_C");
static_assert(offsetof(ABP_SlingProjectile_C, UberGraphFrame_BP_SlingProjectile_C) == 0x000528, "Member 'ABP_SlingProjectile_C::UberGraphFrame_BP_SlingProjectile_C' has a wrong offset!");
static_assert(offsetof(ABP_SlingProjectile_C, Bounces) == 0x000530, "Member 'ABP_SlingProjectile_C::Bounces' has a wrong offset!");
static_assert(offsetof(ABP_SlingProjectile_C, ProjectileTimeoutHandle) == 0x000538, "Member 'ABP_SlingProjectile_C::ProjectileTimeoutHandle' has a wrong offset!");

}

