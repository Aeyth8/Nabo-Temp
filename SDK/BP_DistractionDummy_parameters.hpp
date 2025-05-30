#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DistractionDummy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DistractionDummy.BP_DistractionDummy_C.Balloon Pop Cosmetics
// 0x0018 (0x0018 - 0x0000)
struct BP_DistractionDummy_C_Balloon_Pop_Cosmetics final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_Balloon_Pop_Cosmetics) == 0x000008, "Wrong alignment on BP_DistractionDummy_C_Balloon_Pop_Cosmetics");
static_assert(sizeof(BP_DistractionDummy_C_Balloon_Pop_Cosmetics) == 0x000018, "Wrong size on BP_DistractionDummy_C_Balloon_Pop_Cosmetics");
static_assert(offsetof(BP_DistractionDummy_C_Balloon_Pop_Cosmetics, Location) == 0x000000, "Member 'BP_DistractionDummy_C_Balloon_Pop_Cosmetics::Location' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature final
{
public:
	float                                         InterpolatedValue;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature");
static_assert(sizeof(BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature) == 0x000004, "Wrong size on BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature");
static_assert(offsetof(BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature, InterpolatedValue) == 0x000000, "Member 'BP_DistractionDummy_C_BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature::InterpolatedValue' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F
// 0x0040 (0x0040 - 0x0000)
struct BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                         NewValue;                                          // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldValue;                                          // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F) == 0x000008, "Wrong alignment on BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F");
static_assert(sizeof(BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F) == 0x000040, "Wrong size on BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F");
static_assert(offsetof(BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F, Attribute) == 0x000000, "Member 'BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F::Attribute' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F, NewValue) == 0x000038, "Member 'BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F::NewValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F, OldValue) == 0x00003C, "Member 'BP_DistractionDummy_C_Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F::OldValue' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.ExecuteUbergraph_BP_DistractionDummy
// 0x02A8 (0x02A8 - 0x0000)
struct BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                     K2Node_CustomEvent_Attribute;                      // 0x0028(0x0038)(HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_OldValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable;                                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_MathExpression_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                     Temp_struct_Variable;                              // 0x0090(0x0038)(HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAsync_WaitAttributeChanged*     CallFunc_WaitForAttributeChanged_ReturnValue;      // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface;           // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_SabotagingActor;                      // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_InterpolatedValue;      // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0148(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_MathExpression_CurrentHealth_ImplicitCast;  // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy) == 0x000008, "Wrong alignment on BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy");
static_assert(sizeof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy) == 0x0002A8, "Wrong size on BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, EntryPoint) == 0x000000, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_CustomEvent_Attribute) == 0x000028, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_CustomEvent_Attribute' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_CustomEvent_NewValue) == 0x000060, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_CustomEvent_OldValue) == 0x000064, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, Temp_real_Variable) == 0x000078, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, Temp_real_Variable_1) == 0x00007C, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_MathExpression_ReturnValue) == 0x000080, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, Temp_struct_Variable) == 0x000090, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_Round_ReturnValue) == 0x0000C8, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_WaitForAttributeChanged_ReturnValue) == 0x0000D0, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_WaitForAttributeChanged_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, Temp_byte_Variable) == 0x0000D9, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_DynamicCast_AsTeamable_Interface) == 0x0000E0, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_DynamicCast_AsTeamable_Interface' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_GetTeamID_ReturnValue) == 0x0000F1, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_Event_SabotagingActor) == 0x0000F8, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_Event_SabotagingActor' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_CustomEvent_Location) == 0x000100, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_ComponentBoundEvent_InterpolatedValue) == 0x000118, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_ComponentBoundEvent_InterpolatedValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_Lerp_ReturnValue) == 0x000120, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000128, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_MakeVector_ReturnValue) == 0x000130, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000148, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000240, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000258, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_SpawnSystemAtLocation_ReturnValue_2) == 0x000270, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_SpawnSystemAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_HasAuthority_ReturnValue) == 0x000278, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000280, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, K2Node_MathExpression_CurrentHealth_ImplicitCast) == 0x000298, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::K2Node_MathExpression_CurrentHealth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0002A0, "Member 'BP_DistractionDummy_C_ExecuteUbergraph_BP_DistractionDummy::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.GetTurretTargetHighPriority
// 0x0001 (0x0001 - 0x0000)
struct BP_DistractionDummy_C_GetTurretTargetHighPriority final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_GetTurretTargetHighPriority) == 0x000001, "Wrong alignment on BP_DistractionDummy_C_GetTurretTargetHighPriority");
static_assert(sizeof(BP_DistractionDummy_C_GetTurretTargetHighPriority) == 0x000001, "Wrong size on BP_DistractionDummy_C_GetTurretTargetHighPriority");
static_assert(offsetof(BP_DistractionDummy_C_GetTurretTargetHighPriority, Return) == 0x000000, "Member 'BP_DistractionDummy_C_GetTurretTargetHighPriority::Return' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.GetTurretTargetSceneComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_DistractionDummy_C_GetTurretTargetSceneComponent final
{
public:
	class USceneComponent*                        Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_GetTurretTargetSceneComponent) == 0x000008, "Wrong alignment on BP_DistractionDummy_C_GetTurretTargetSceneComponent");
static_assert(sizeof(BP_DistractionDummy_C_GetTurretTargetSceneComponent) == 0x000008, "Wrong size on BP_DistractionDummy_C_GetTurretTargetSceneComponent");
static_assert(offsetof(BP_DistractionDummy_C_GetTurretTargetSceneComponent, Return) == 0x000000, "Member 'BP_DistractionDummy_C_GetTurretTargetSceneComponent::Return' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.IsValidTurretTarget
// 0x0001 (0x0001 - 0x0000)
struct BP_DistractionDummy_C_IsValidTurretTarget final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_IsValidTurretTarget) == 0x000001, "Wrong alignment on BP_DistractionDummy_C_IsValidTurretTarget");
static_assert(sizeof(BP_DistractionDummy_C_IsValidTurretTarget) == 0x000001, "Wrong size on BP_DistractionDummy_C_IsValidTurretTarget");
static_assert(offsetof(BP_DistractionDummy_C_IsValidTurretTarget, IsValid) == 0x000000, "Member 'BP_DistractionDummy_C_IsValidTurretTarget::IsValid' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.OnRep_BalloonsVisible
// 0x0190 (0x0190 - 0x0000)
struct BP_DistractionDummy_C_OnRep_BalloonsVisible final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetInstanceTransform_OutInstanceTransform; // 0x0070(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInstanceTransform_ReturnValue;         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateInstanceTransform_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_OnRep_BalloonsVisible) == 0x000010, "Wrong alignment on BP_DistractionDummy_C_OnRep_BalloonsVisible");
static_assert(sizeof(BP_DistractionDummy_C_OnRep_BalloonsVisible) == 0x000190, "Wrong size on BP_DistractionDummy_C_OnRep_BalloonsVisible");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, Temp_int_Variable) == 0x000060, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_GetInstanceTransform_OutInstanceTransform) == 0x000070, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_GetInstanceTransform_OutInstanceTransform' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_GetInstanceTransform_ReturnValue) == 0x0000D0, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_GetInstanceTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_BreakTransform_Location) == 0x0000D8, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_BreakTransform_Rotation) == 0x0000F0, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_BreakTransform_Scale) == 0x000108, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000120, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_GetUpVector_ReturnValue) == 0x000128, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000140, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000158, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_UpdateInstanceTransform_ReturnValue) == 0x000170, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_UpdateInstanceTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_OnRep_BalloonsVisible, CallFunc_Add_VectorVector_ReturnValue) == 0x000178, "Member 'BP_DistractionDummy_C_OnRep_BalloonsVisible::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.Sabotage
// 0x0008 (0x0008 - 0x0000)
struct BP_DistractionDummy_C_Sabotage final
{
public:
	class AActor*                                 SabotagingActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_Sabotage) == 0x000008, "Wrong alignment on BP_DistractionDummy_C_Sabotage");
static_assert(sizeof(BP_DistractionDummy_C_Sabotage) == 0x000008, "Wrong size on BP_DistractionDummy_C_Sabotage");
static_assert(offsetof(BP_DistractionDummy_C_Sabotage, SabotagingActor) == 0x000000, "Member 'BP_DistractionDummy_C_Sabotage::SabotagingActor' has a wrong offset!");

// Function BP_DistractionDummy.BP_DistractionDummy_C.SetIsValidTurretTarget
// 0x0002 (0x0002 - 0x0000)
struct BP_DistractionDummy_C_SetIsValidTurretTarget final
{
public:
	bool                                          Valid;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Void;                                              // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DistractionDummy_C_SetIsValidTurretTarget) == 0x000001, "Wrong alignment on BP_DistractionDummy_C_SetIsValidTurretTarget");
static_assert(sizeof(BP_DistractionDummy_C_SetIsValidTurretTarget) == 0x000002, "Wrong size on BP_DistractionDummy_C_SetIsValidTurretTarget");
static_assert(offsetof(BP_DistractionDummy_C_SetIsValidTurretTarget, Valid) == 0x000000, "Member 'BP_DistractionDummy_C_SetIsValidTurretTarget::Valid' has a wrong offset!");
static_assert(offsetof(BP_DistractionDummy_C_SetIsValidTurretTarget, Void) == 0x000001, "Member 'BP_DistractionDummy_C_SetIsValidTurretTarget::Void' has a wrong offset!");

}

