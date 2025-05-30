#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Flashbang

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCN_Flashbang.GCN_Flashbang_C.ExecuteUbergraph_GCN_Flashbang
// 0x02B0 (0x02B0 - 0x0000)
struct GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x00E8(0x0058)(ConstParm, ContainsInstancedReference)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0148(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0170(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0190(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0xF];                                      // 0x0221(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0230(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CosmeticFirecracker_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang) == 0x000010, "Wrong alignment on GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang");
static_assert(sizeof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang) == 0x0002B0, "Wrong size on GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, EntryPoint) == 0x000000, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, K2Node_Event_Target) == 0x000008, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, K2Node_Event_Parameters) == 0x000010, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, K2Node_Event_SpawnResults) == 0x0000E8, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::K2Node_Event_SpawnResults' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000140, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000144, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000148, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000160, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000168, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000170, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000190, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_Location) == 0x0001B0, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_Normal) == 0x0001C8, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001E0, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001E8, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001F0, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001F8, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000200, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x000204, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000208, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000210, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000218, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, K2Node_DynamicCast_bSuccess) == 0x000220, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_MakeTransform_ReturnValue) == 0x000230, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000290, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_FinishSpawningActor_ReturnValue) == 0x000298, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang, CallFunc_SetDoublePropertyByName_Value_ImplicitCast) == 0x0002A0, "Member 'GCN_Flashbang_C_ExecuteUbergraph_GCN_Flashbang::CallFunc_SetDoublePropertyByName_Value_ImplicitCast' has a wrong offset!");

// Function GCN_Flashbang.GCN_Flashbang_C.OnBurst
// 0x0138 (0x0138 - 0x0000)
struct GCN_Flashbang_C_OnBurst final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Flashbang_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Flashbang_C_OnBurst");
static_assert(sizeof(GCN_Flashbang_C_OnBurst) == 0x000138, "Wrong size on GCN_Flashbang_C_OnBurst");
static_assert(offsetof(GCN_Flashbang_C_OnBurst, Target) == 0x000000, "Member 'GCN_Flashbang_C_OnBurst::Target' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Flashbang_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Flashbang_C_OnBurst, SpawnResults) == 0x0000E0, "Member 'GCN_Flashbang_C_OnBurst::SpawnResults' has a wrong offset!");

}

