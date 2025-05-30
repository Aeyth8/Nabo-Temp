#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RangedWeaponBase

#include "Basic.hpp"

#include "BP_Equipable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RangedWeaponBase.BP_RangedWeaponBase_C
// 0x0010 (0x02D0 - 0x02C0)
class ABP_RangedWeaponBase_C : public ABP_Equipable_C
{
public:
	class UStaticMeshComponent*                   StaticMeshGun;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	struct FTransform GetProjectileSpawnTransform();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RangedWeaponBase_C">();
	}
	static class ABP_RangedWeaponBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RangedWeaponBase_C>();
	}
};
static_assert(alignof(ABP_RangedWeaponBase_C) == 0x000008, "Wrong alignment on ABP_RangedWeaponBase_C");
static_assert(sizeof(ABP_RangedWeaponBase_C) == 0x0002D0, "Wrong size on ABP_RangedWeaponBase_C");
static_assert(offsetof(ABP_RangedWeaponBase_C, StaticMeshGun) == 0x0002C0, "Member 'ABP_RangedWeaponBase_C::StaticMeshGun' has a wrong offset!");
static_assert(offsetof(ABP_RangedWeaponBase_C, Scene) == 0x0002C8, "Member 'ABP_RangedWeaponBase_C::Scene' has a wrong offset!");

}

