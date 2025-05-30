#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vacuum_Default_Equipable

#include "Basic.hpp"

#include "BP_Equipable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vacuum_Default_Equipable.BP_Vacuum_Default_Equipable_C
// 0x0020 (0x02E0 - 0x02C0)
class ABP_Vacuum_Default_Equipable_C : public ABP_Equipable_C
{
public:
	class USceneComponent*                        Scene_Muzzle;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MuzzleComponent_C*                  BP_MuzzleComponent;                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetMuzzleSceneComponent(class USceneComponent** Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vacuum_Default_Equipable_C">();
	}
	static class ABP_Vacuum_Default_Equipable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vacuum_Default_Equipable_C>();
	}
};
static_assert(alignof(ABP_Vacuum_Default_Equipable_C) == 0x000008, "Wrong alignment on ABP_Vacuum_Default_Equipable_C");
static_assert(sizeof(ABP_Vacuum_Default_Equipable_C) == 0x0002E0, "Wrong size on ABP_Vacuum_Default_Equipable_C");
static_assert(offsetof(ABP_Vacuum_Default_Equipable_C, Scene_Muzzle) == 0x0002C0, "Member 'ABP_Vacuum_Default_Equipable_C::Scene_Muzzle' has a wrong offset!");
static_assert(offsetof(ABP_Vacuum_Default_Equipable_C, BP_MuzzleComponent) == 0x0002C8, "Member 'ABP_Vacuum_Default_Equipable_C::BP_MuzzleComponent' has a wrong offset!");
static_assert(offsetof(ABP_Vacuum_Default_Equipable_C, SkeletalMesh) == 0x0002D0, "Member 'ABP_Vacuum_Default_Equipable_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Vacuum_Default_Equipable_C, StaticMesh) == 0x0002D8, "Member 'ABP_Vacuum_Default_Equipable_C::StaticMesh' has a wrong offset!");

}

