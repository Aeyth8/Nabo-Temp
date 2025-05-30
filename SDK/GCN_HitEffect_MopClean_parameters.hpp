#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_HitEffect_MopClean

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_HitEffect_MopClean.GCN_HitEffect_MopClean_C.PlayBashItemSpecificParticle
// 0x0128 (0x0128 - 0x0000)
struct GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0018(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0040(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0060(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         K2Node_Select_Default;                             // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle) == 0x000008, "Wrong alignment on GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle");
static_assert(sizeof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle) == 0x000128, "Wrong size on GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, Temp_bool_Variable) == 0x000000, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, Temp_object_Variable) == 0x000008, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000010, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000014, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000018, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000030, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000038, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000040, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000060, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_Location) == 0x000080, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_Normal) == 0x000098, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0000B0, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0000B8, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0000C0, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0000C8, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0000D0, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0000D4, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0000D8, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000E0, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_MakeRotFromX_ReturnValue) == 0x0000E8, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, K2Node_DynamicCast_AsCharacter) == 0x000100, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, K2Node_Select_Default) == 0x000110, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000118, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000120, "Member 'GCN_HitEffect_MopClean_C_PlayBashItemSpecificParticle::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function GCN_HitEffect_MopClean.GCN_HitEffect_MopClean_C.PlayPhysMatParticle
// 0x0128 (0x0128 - 0x0000)
struct GCN_HitEffect_MopClean_C_PlayPhysMatParticle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0020(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0048(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0068(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         K2Node_Select_Default;                             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle) == 0x000008, "Wrong alignment on GCN_HitEffect_MopClean_C_PlayPhysMatParticle");
static_assert(sizeof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle) == 0x000128, "Wrong size on GCN_HitEffect_MopClean_C_PlayPhysMatParticle");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, Temp_bool_Variable) == 0x000000, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, Temp_object_Variable) == 0x000008, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, Temp_object_Variable_1) == 0x000010, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000018, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00001C, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000020, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000038, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000040, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000048, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000068, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_Location) == 0x000088, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_Normal) == 0x0000A0, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0000B8, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0000C0, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0000C8, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0000D0, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0000D8, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0000DC, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0000E0, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000E8, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_MakeRotFromZ_ReturnValue) == 0x0000F0, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, K2Node_DynamicCast_AsCharacter) == 0x000108, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, K2Node_Select_Default) == 0x000118, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_MopClean_C_PlayPhysMatParticle, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000120, "Member 'GCN_HitEffect_MopClean_C_PlayPhysMatParticle::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

}

