#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Chad_Default_PP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Chad_Default_PP.ABP_Chad_Default_PP_C.AnimBlueprintGeneratedConstantData
// 0x030F (0x0310 - 0x0001)
struct ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_34;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_35;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_36;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x00D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0100(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                     // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Constraint_2;                        // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Constraint_1;                        // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Constraint;                          // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyCurve;                         // 0x0280(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedAnimGraph_1;                   // 0x02B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedAnimGraph;                     // 0x02E0(0x0030)()
};
static_assert(alignof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData) == 0x000310, "Wrong size on ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, __NameProperty_34) == 0x000004, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::__NameProperty_34' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, __NameProperty_35) == 0x00000C, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::__NameProperty_35' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, __StructProperty_36) == 0x000018, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::__StructProperty_36' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000D0, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x000100, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000130, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000160, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000190, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x0001C0, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Constraint_2) == 0x0001F0, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Constraint_2' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Constraint_1) == 0x000220, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Constraint_1' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Constraint) == 0x000250, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyCurve) == 0x000280, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyCurve' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedAnimGraph_1) == 0x0002B0, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedAnimGraph_1' has a wrong offset!");
static_assert(offsetof(ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedAnimGraph) == 0x0002E0, "Member 'ABP_Chad_Default_PP::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");

}

