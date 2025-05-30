#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DefenceUpgrade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AC_DefenceUpgrade.AC_DefenceUpgrade_C.ExecuteUbergraph_AC_DefenceUpgrade
// 0x0018 (0x0018 - 0x0000)
struct AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade) == 0x000008, "Wrong alignment on AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade");
static_assert(sizeof(AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade) == 0x000018, "Wrong size on AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade");
static_assert(offsetof(AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade, EntryPoint) == 0x000000, "Member 'AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade::EntryPoint' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'AC_DefenceUpgrade_C_ExecuteUbergraph_AC_DefenceUpgrade::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function AC_DefenceUpgrade.AC_DefenceUpgrade_C.SpawnUpgradePlan
// 0x00B0 (0x00B0 - 0x0000)
struct AC_DefenceUpgrade_C_SpawnUpgradePlan final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGroundskeeperReference*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGroundsKeeper*                         CallFunc_GetGroundsKeeper_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UpgradePlanBase_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_UpgradePlanBase_C*                  CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AC_DefenceUpgrade_C_SpawnUpgradePlan) == 0x000010, "Wrong alignment on AC_DefenceUpgrade_C_SpawnUpgradePlan");
static_assert(sizeof(AC_DefenceUpgrade_C_SpawnUpgradePlan) == 0x0000B0, "Wrong size on AC_DefenceUpgrade_C_SpawnUpgradePlan");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetOwner_ReturnValue_1) == 0x000008, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetGroundsKeeper_ReturnValue) == 0x000020, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetGroundsKeeper_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetOwner_ReturnValue_2) == 0x000028, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000090, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000098, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A0, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AC_DefenceUpgrade_C_SpawnUpgradePlan, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000A8, "Member 'AC_DefenceUpgrade_C_SpawnUpgradePlan::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

}

