#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_VacuumFire

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_VacuumFire.GCN_VacuumFire_C.OnExecute
// 0x01C8 (0x01C8 - 0x0000)
struct GCN_VacuumFire_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x00F0(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0118(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0138(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_VacuumFire_C_OnExecute) == 0x000008, "Wrong alignment on GCN_VacuumFire_C_OnExecute");
static_assert(sizeof(GCN_VacuumFire_C_OnExecute) == 0x0001C8, "Wrong size on GCN_VacuumFire_C_OnExecute");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_VacuumFire_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_VacuumFire_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, ReturnValue) == 0x0000E0, "Member 'GCN_VacuumFire_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000E1, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000E4, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E8, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000F0, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000108, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000110, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000118, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000138, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000158, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000170, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000188, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000190, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000198, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001A0, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001A8, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001AC, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001B0, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001B8, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_VacuumFire_C_OnExecute, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0001C0, "Member 'GCN_VacuumFire_C_OnExecute::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

}

