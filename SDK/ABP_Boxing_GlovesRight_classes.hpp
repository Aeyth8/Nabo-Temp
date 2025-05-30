#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Boxing_GlovesRight

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "ABP_Boxing_GlovesRight_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GASIW_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Boxing_GlovesRight.ABP_Boxing_GlovesRight_C
// 0x00E0 (0x0450 - 0x0370)
class UABP_Boxing_GlovesRight_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Boxing_GlovesRight::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0378(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0388(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0390(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0398(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03B8(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0400(0x0040)()
	class UAnimSequenceBase*                      Sequence;                                          // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Thirdperson;                                       // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Boxing_GlovesRight(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Boxing_GlovesRight_C">();
	}
	static class UABP_Boxing_GlovesRight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Boxing_GlovesRight_C>();
	}
};
static_assert(alignof(UABP_Boxing_GlovesRight_C) == 0x000010, "Wrong alignment on UABP_Boxing_GlovesRight_C");
static_assert(sizeof(UABP_Boxing_GlovesRight_C) == 0x000450, "Wrong size on UABP_Boxing_GlovesRight_C");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, UberGraphFrame) == 0x000370, "Member 'UABP_Boxing_GlovesRight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, __AnimBlueprintMutables) == 0x000378, "Member 'UABP_Boxing_GlovesRight_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, AnimBlueprintExtension_PropertyAccess) == 0x000388, "Member 'UABP_Boxing_GlovesRight_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, AnimBlueprintExtension_Base) == 0x000390, "Member 'UABP_Boxing_GlovesRight_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, AnimGraphNode_Root) == 0x000398, "Member 'UABP_Boxing_GlovesRight_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, AnimGraphNode_Slot) == 0x0003B8, "Member 'UABP_Boxing_GlovesRight_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, AnimGraphNode_SequenceEvaluator) == 0x000400, "Member 'UABP_Boxing_GlovesRight_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, Sequence) == 0x000440, "Member 'UABP_Boxing_GlovesRight_C::Sequence' has a wrong offset!");
static_assert(offsetof(UABP_Boxing_GlovesRight_C, Thirdperson) == 0x000448, "Member 'UABP_Boxing_GlovesRight_C::Thirdperson' has a wrong offset!");

}

