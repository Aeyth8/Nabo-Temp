#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_HealSelfMedkit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_HealSelfMedkit.GCN_HealSelfMedkit_C
// 0x0018 (0x0EB0 - 0x0E98)
class AGCN_HealSelfMedkit_C final : public AGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ResidentCharacter_C*                As_BP_Resident_Character;                          // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0EA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_HealSelfMedkit(int32 EntryPoint);
	void OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnRemoval(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_HealSelfMedkit_C">();
	}
	static class AGCN_HealSelfMedkit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_HealSelfMedkit_C>();
	}
};
static_assert(alignof(AGCN_HealSelfMedkit_C) == 0x000008, "Wrong alignment on AGCN_HealSelfMedkit_C");
static_assert(sizeof(AGCN_HealSelfMedkit_C) == 0x000EB0, "Wrong size on AGCN_HealSelfMedkit_C");
static_assert(offsetof(AGCN_HealSelfMedkit_C, UberGraphFrame) == 0x000E98, "Member 'AGCN_HealSelfMedkit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_HealSelfMedkit_C, As_BP_Resident_Character) == 0x000EA0, "Member 'AGCN_HealSelfMedkit_C::As_BP_Resident_Character' has a wrong offset!");
static_assert(offsetof(AGCN_HealSelfMedkit_C, StaticMesh) == 0x000EA8, "Member 'AGCN_HealSelfMedkit_C::StaticMesh' has a wrong offset!");

}

