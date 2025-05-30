#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Leloi_PostProcess_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Leloi_PostProcess_AnimBP.Leloi_PostProcess_AnimBP_C
// 0x14D0 (0x1840 - 0x0370)
class ULeloi_PostProcess_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03A8(0x00B8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0460(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x04E0(0x0028)()
	uint8                                         Pad_508[0x8];                                      // 0x0508(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x0510(0x0970)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E80(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0EA0(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0EC0(0x0970)()
	float                                         Tail_PostProcessAlpha;                             // 0x1830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void AnimNotify_FootstepAnimNotify();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Leloi_PostProcess_AnimBP_AnimGraphNode_RigidBody_C998CD9A4229E70978B7BDB9E5213719();
	void ExecuteUbergraph_Leloi_PostProcess_AnimBP(int32 EntryPoint);
	void UpdateLayerData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Leloi_PostProcess_AnimBP_C">();
	}
	static class ULeloi_PostProcess_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeloi_PostProcess_AnimBP_C>();
	}
};
static_assert(alignof(ULeloi_PostProcess_AnimBP_C) == 0x000010, "Wrong alignment on ULeloi_PostProcess_AnimBP_C");
static_assert(sizeof(ULeloi_PostProcess_AnimBP_C) == 0x001840, "Wrong size on ULeloi_PostProcess_AnimBP_C");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, UberGraphFrame) == 0x000370, "Member 'ULeloi_PostProcess_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'ULeloi_PostProcess_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'ULeloi_PostProcess_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_Root) == 0x000388, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0003A8, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000460, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0004E0, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_RigidBody_1) == 0x000510, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000E80, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000EA0, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, AnimGraphNode_RigidBody) == 0x000EC0, "Member 'ULeloi_PostProcess_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(ULeloi_PostProcess_AnimBP_C, Tail_PostProcessAlpha) == 0x001830, "Member 'ULeloi_PostProcess_AnimBP_C::Tail_PostProcessAlpha' has a wrong offset!");

}

