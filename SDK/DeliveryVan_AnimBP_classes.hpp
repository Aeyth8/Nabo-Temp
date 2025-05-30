#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeliveryVan_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass DeliveryVan_AnimBP.DeliveryVan_AnimBP_C
// 0x0A30 (0x0DA0 - 0x0370)
class UDeliveryVan_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03D0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x03F8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0440(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0460(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0480(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0548(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x05C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x05F0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0618(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0660(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0680(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x06A0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0768(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x07E8(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x08D8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0900(0x00F0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x09F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0A18(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0A40(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0A88(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0AA8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0AC8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0B90(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0C10(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0C38(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0C80(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0D70(0x0028)()
	bool                                          bDoorsState;                                       // 0x0D98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void DoorsState(bool Open);
	void ExecuteUbergraph_DeliveryVan_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeliveryVan_AnimBP_C">();
	}
	static class UDeliveryVan_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeliveryVan_AnimBP_C>();
	}
};
static_assert(alignof(UDeliveryVan_AnimBP_C) == 0x000010, "Wrong alignment on UDeliveryVan_AnimBP_C");
static_assert(sizeof(UDeliveryVan_AnimBP_C) == 0x000DA0, "Wrong size on UDeliveryVan_AnimBP_C");
static_assert(offsetof(UDeliveryVan_AnimBP_C, UberGraphFrame) == 0x000370, "Member 'UDeliveryVan_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UDeliveryVan_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UDeliveryVan_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_Root) == 0x000388, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x0003A8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0003D0, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0003F8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult_5) == 0x000440, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000460, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x000480, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x000548, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0005C8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0005F0, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000618, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000660, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000680, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x0006A0, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x000768, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_LayeredBoneBlend_2) == 0x0007E8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0008D8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000900, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0009F0, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000A18, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000A40, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000A88, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateResult) == 0x000AA8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_StateMachine) == 0x000AC8, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000B90, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000C10, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000C38, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x000C80, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000D70, "Member 'UDeliveryVan_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDeliveryVan_AnimBP_C, bDoorsState) == 0x000D98, "Member 'UDeliveryVan_AnimBP_C::bDoorsState' has a wrong offset!");

}

