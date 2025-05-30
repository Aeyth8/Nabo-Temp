#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DefenceUpgrade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AC_DefenceUpgrade.AC_DefenceUpgrade_C
// 0x0020 (0x00C0 - 0x00A0)
class UAC_DefenceUpgrade_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 UpgradePlanToSpawn;                                // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         TeamId;                                            // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           UpgradeGroup;                                      // 0x00B4(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          Disabled;                                          // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AC_DefenceUpgrade(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SpawnUpgradePlan();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AC_DefenceUpgrade_C">();
	}
	static class UAC_DefenceUpgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAC_DefenceUpgrade_C>();
	}
};
static_assert(alignof(UAC_DefenceUpgrade_C) == 0x000008, "Wrong alignment on UAC_DefenceUpgrade_C");
static_assert(sizeof(UAC_DefenceUpgrade_C) == 0x0000C0, "Wrong size on UAC_DefenceUpgrade_C");
static_assert(offsetof(UAC_DefenceUpgrade_C, UberGraphFrame) == 0x0000A0, "Member 'UAC_DefenceUpgrade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAC_DefenceUpgrade_C, UpgradePlanToSpawn) == 0x0000A8, "Member 'UAC_DefenceUpgrade_C::UpgradePlanToSpawn' has a wrong offset!");
static_assert(offsetof(UAC_DefenceUpgrade_C, TeamId) == 0x0000B0, "Member 'UAC_DefenceUpgrade_C::TeamId' has a wrong offset!");
static_assert(offsetof(UAC_DefenceUpgrade_C, UpgradeGroup) == 0x0000B4, "Member 'UAC_DefenceUpgrade_C::UpgradeGroup' has a wrong offset!");
static_assert(offsetof(UAC_DefenceUpgrade_C, Disabled) == 0x0000BC, "Member 'UAC_DefenceUpgrade_C::Disabled' has a wrong offset!");

}

