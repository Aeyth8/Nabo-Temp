#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlungerGun_Equipable

#include "Basic.hpp"

#include "GASIW_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature final
{
public:
	float                                         InterpolatedValue;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature");
static_assert(sizeof(BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature) == 0x000004, "Wrong size on BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature");
static_assert(offsetof(BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature, InterpolatedValue) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_BndEvt__BP_PlungerGun_Equipable_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature::InterpolatedValue' has a wrong offset!");

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.EnableTrail
// 0x0010 (0x0010 - 0x0000)
struct BP_PlungerGun_Equipable_C_EnableTrail final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duration;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_EnableTrail) == 0x000008, "Wrong alignment on BP_PlungerGun_Equipable_C_EnableTrail");
static_assert(sizeof(BP_PlungerGun_Equipable_C_EnableTrail) == 0x000010, "Wrong size on BP_PlungerGun_Equipable_C_EnableTrail");
static_assert(offsetof(BP_PlungerGun_Equipable_C_EnableTrail, Enable) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_EnableTrail::Enable' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_EnableTrail, Duration) == 0x000008, "Member 'BP_PlungerGun_Equipable_C_EnableTrail::Duration' has a wrong offset!");

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.ExecuteUbergraph_BP_PlungerGun_Equipable
// 0x0298 (0x0298 - 0x0000)
struct BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipmentViewMode                            Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Enable;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_Duration;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipmentViewMode                            K2Node_Event_ViewMode;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_EndLocation;                    // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_Rotation;                       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_ComponentBoundEvent_InterpolatedValue;      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00A8(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x01A0(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable) == 0x000008, "Wrong alignment on BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable");
static_assert(sizeof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable) == 0x000298, "Wrong size on BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, EntryPoint) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, Temp_byte_Variable) == 0x000004, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, Temp_class_Variable) == 0x000008, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, Temp_class_Variable_1) == 0x000010, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, Temp_class_Variable_2) == 0x000018, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_Event_Enable) == 0x000020, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_Event_Enable' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_Event_Duration) == 0x000028, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_Event_Duration' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_Event_ViewMode) == 0x000030, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_Event_ViewMode' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_Select_Default) == 0x000038, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_CustomEvent_EndLocation) == 0x000040, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_CustomEvent_EndLocation' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_CustomEvent_Rotation) == 0x000058, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, K2Node_ComponentBoundEvent_InterpolatedValue) == 0x000070, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::K2Node_ComponentBoundEvent_InterpolatedValue' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, CallFunc_GetSocketLocation_ReturnValue) == 0x000078, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, CallFunc_VLerp_ReturnValue) == 0x000090, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000A8, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0001A0, "Member 'BP_PlungerGun_Equipable_C_ExecuteUbergraph_BP_PlungerGun_Equipable::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.GetMuzzleSceneComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent final
{
public:
	class USceneComponent*                        Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent) == 0x000008, "Wrong alignment on BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent");
static_assert(sizeof(BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent) == 0x000008, "Wrong size on BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent");
static_assert(offsetof(BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent, Return) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_GetMuzzleSceneComponent::Return' has a wrong offset!");

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.OnHandleViewMode
// 0x0001 (0x0001 - 0x0000)
struct BP_PlungerGun_Equipable_C_OnHandleViewMode final
{
public:
	EEquipmentViewMode                            ViewMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_OnHandleViewMode) == 0x000001, "Wrong alignment on BP_PlungerGun_Equipable_C_OnHandleViewMode");
static_assert(sizeof(BP_PlungerGun_Equipable_C_OnHandleViewMode) == 0x000001, "Wrong size on BP_PlungerGun_Equipable_C_OnHandleViewMode");
static_assert(offsetof(BP_PlungerGun_Equipable_C_OnHandleViewMode, ViewMode) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_OnHandleViewMode::ViewMode' has a wrong offset!");

// Function BP_PlungerGun_Equipable.BP_PlungerGun_Equipable_C.Play Plunger Cosmetics
// 0x0030 (0x0030 - 0x0000)
struct BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics final
{
public:
	struct FVector                                EndLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics) == 0x000008, "Wrong alignment on BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics");
static_assert(sizeof(BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics) == 0x000030, "Wrong size on BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics");
static_assert(offsetof(BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics, EndLocation) == 0x000000, "Member 'BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics::EndLocation' has a wrong offset!");
static_assert(offsetof(BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics, Rotation) == 0x000018, "Member 'BP_PlungerGun_Equipable_C_Play_Plunger_Cosmetics::Rotation' has a wrong offset!");

}

