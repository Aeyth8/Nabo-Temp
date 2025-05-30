#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_FanOfNeedlesFire

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_FanOfNeedlesFire.GCN_FanOfNeedlesFire_C.ExecuteUbergraph_GCN_FanOfNeedlesFire
// 0x0200 (0x0200 - 0x0000)
struct GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_TraceFrom_C>        K2Node_DynamicCast_AsI_Trace_From;                 // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTraceFrom_Location;                    // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetTraceFrom_Rotation;                    // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_TransformRotation_ReturnValue;            // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0180(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FanOfNeedleCosmeticProjectile_C*    CallFunc_FinishSpawningActor_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire) == 0x000010, "Wrong alignment on GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire");
static_assert(sizeof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire) == 0x000200, "Wrong size on GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, EntryPoint) == 0x000000, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, K2Node_DynamicCast_AsI_Trace_From) == 0x000020, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::K2Node_DynamicCast_AsI_Trace_From' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_GetTraceFrom_Location) == 0x000048, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_GetTraceFrom_Location' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_GetTraceFrom_Rotation) == 0x000060, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_GetTraceFrom_Rotation' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000078, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000080, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000098, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B0, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000C8, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000140, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_RandomFloatInRange_ReturnValue) == 0x000148, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_MakeRotator_ReturnValue) == 0x000150, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_TransformRotation_ReturnValue) == 0x000168, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_TransformRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_MakeTransform_ReturnValue_1) == 0x000180, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001E0, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001E8, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0001F0, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0001F4, "Member 'GCN_FanOfNeedlesFire_C_ExecuteUbergraph_GCN_FanOfNeedlesFire::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function GCN_FanOfNeedlesFire.GCN_FanOfNeedlesFire_C.PlaySmokeBomb
// 0x00F8 (0x00F8 - 0x0000)
struct GCN_FanOfNeedlesFire_C_PlaySmokeBomb final
{
public:
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0008(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0030(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0050(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb) == 0x000008, "Wrong alignment on GCN_FanOfNeedlesFire_C_PlaySmokeBomb");
static_assert(sizeof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb) == 0x0000F8, "Wrong size on GCN_FanOfNeedlesFire_C_PlaySmokeBomb");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000000, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000004, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000008, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000020, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000028, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000030, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000050, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_Location) == 0x000070, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_Normal) == 0x000088, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0000A0, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0000A8, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0000B0, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0000B8, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0000C0, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0000C4, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0000C8, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000D0, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D8, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_PlaySmokeBomb, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000F0, "Member 'GCN_FanOfNeedlesFire_C_PlaySmokeBomb::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function GCN_FanOfNeedlesFire.GCN_FanOfNeedlesFire_C.SetStealth
// 0x00F8 (0x00F8 - 0x0000)
struct GCN_FanOfNeedlesFire_C_SetStealth final
{
public:
	bool                                          StealthActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0010(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0038(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0058(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class II_Stealth_C>          K2Node_DynamicCast_AsI_Stealth;                    // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_FanOfNeedlesFire_C_SetStealth) == 0x000008, "Wrong alignment on GCN_FanOfNeedlesFire_C_SetStealth");
static_assert(sizeof(GCN_FanOfNeedlesFire_C_SetStealth) == 0x0000F8, "Wrong size on GCN_FanOfNeedlesFire_C_SetStealth");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, StealthActive) == 0x000000, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::StealthActive' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000004, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000008, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000010, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000028, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000030, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000038, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000058, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_Location) == 0x000078, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_Normal) == 0x000090, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0000A8, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0000B0, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0000B8, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0000C0, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0000C8, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0000CC, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0000D0, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000D8, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, K2Node_DynamicCast_AsI_Stealth) == 0x0000E0, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::K2Node_DynamicCast_AsI_Stealth' has a wrong offset!");
static_assert(offsetof(GCN_FanOfNeedlesFire_C_SetStealth, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GCN_FanOfNeedlesFire_C_SetStealth::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

