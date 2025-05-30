#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_JP_AimOffset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "JP_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_JP_AimOffset.ABP_JP_AimOffset_C
// 0x0D70 (0x10E0 - 0x0370)
class UABP_JP_AimOffset_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x03A8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x04D0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x05F8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0720(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0848(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0970(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0A98(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0AB8(0x0128)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0BE0(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C98(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D18(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0D40(0x0080)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0DC0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0DE0(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E08(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0E28(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0E48(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0F70(0x0128)()
	double                                        Pitch;                                             // 0x1098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemsJP                                      Overlay_State;                                     // 0x10A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Thirdperson;                                       // 0x10A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A2[0x6];                                     // 0x10A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Root_Yaw_Offset;                                   // 0x10A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Grabbing;                                          // 0x10B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B1[0x7];                                     // 0x10B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Look;                                              // 0x10B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        NewVar;                                            // 0x10D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, bool Thirdperson_0, EItemsJP OverlayState, double Pitch_0, double RootYawOffset, bool Grabbing_0, struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_00EE7E3E41F654FD610521B60318C277();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_15D801464071DE54ED4DB38DE5036224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_335175594EA35E3F70A8F2B4BEC018F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_4DC8C1924912FFCCFB1902B0429939AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_60A7802945480ACD3929B8AF8A15263B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_650CECD34A38D42980EB53BD995862F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_B101D2604D5121A4563016A08B4FABAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_E68BDCA646183DC964F9F59F310D77D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JP_AimOffset_AnimGraphNode_ModifyBone_FE10790C4C2214B9BFBE4DB9DA0F34A5();
	void ExecuteUbergraph_ABP_JP_AimOffset(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_JP_AimOffset_C">();
	}
	static class UABP_JP_AimOffset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_JP_AimOffset_C>();
	}
};
static_assert(alignof(UABP_JP_AimOffset_C) == 0x000010, "Wrong alignment on UABP_JP_AimOffset_C");
static_assert(sizeof(UABP_JP_AimOffset_C) == 0x0010E0, "Wrong size on UABP_JP_AimOffset_C");
static_assert(offsetof(UABP_JP_AimOffset_C, UberGraphFrame) == 0x000370, "Member 'UABP_JP_AimOffset_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UABP_JP_AimOffset_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UABP_JP_AimOffset_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_Root) == 0x000388, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_8) == 0x0003A8, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_7) == 0x0004D0, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_6) == 0x0005F8, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_5) == 0x000720, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_4) == 0x000848, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_3) == 0x000970, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000A98, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_2) == 0x000AB8, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_LinkedInputPose) == 0x000BE0, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_SaveCachedPose_1) == 0x000C98, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_UseCachedPose_1) == 0x000D18, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_SaveCachedPose) == 0x000D40, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000DC0, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_UseCachedPose) == 0x000DE0, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_LocalToComponentSpace) == 0x000E08, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E28, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone_1) == 0x000E48, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, AnimGraphNode_ModifyBone) == 0x000F70, "Member 'UABP_JP_AimOffset_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Pitch) == 0x001098, "Member 'UABP_JP_AimOffset_C::Pitch' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Overlay_State) == 0x0010A0, "Member 'UABP_JP_AimOffset_C::Overlay_State' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Thirdperson) == 0x0010A1, "Member 'UABP_JP_AimOffset_C::Thirdperson' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Root_Yaw_Offset) == 0x0010A8, "Member 'UABP_JP_AimOffset_C::Root_Yaw_Offset' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Grabbing) == 0x0010B0, "Member 'UABP_JP_AimOffset_C::Grabbing' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, Look) == 0x0010B8, "Member 'UABP_JP_AimOffset_C::Look' has a wrong offset!");
static_assert(offsetof(UABP_JP_AimOffset_C, NewVar) == 0x0010D0, "Member 'UABP_JP_AimOffset_C::NewVar' has a wrong offset!");

}

