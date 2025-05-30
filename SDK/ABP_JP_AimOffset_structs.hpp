#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_JP_AimOffset

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_JP_AimOffset.ABP_JP_AimOffset_C.AnimBlueprintGeneratedConstantData
// 0x045F (0x0460 - 0x0001)
struct ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_55;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_56;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_57;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x00D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_8;                        // 0x0100(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_7;                        // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_6;                        // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_5;                        // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_4;                        // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_3;                        // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace_1;             // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_2;                        // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                     // 0x0280(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose_1;                    // 0x02B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose_1;                     // 0x02E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                      // 0x0310(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace_1;             // 0x0340(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                       // 0x0370(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x03A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x03D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;                        // 0x0400(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;                          // 0x0430(0x0030)()
};
static_assert(alignof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData) == 0x000460, "Wrong size on ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, __NameProperty_55) == 0x000004, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::__NameProperty_55' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, __NameProperty_56) == 0x00000C, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::__NameProperty_56' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, __StructProperty_57) == 0x000018, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::__StructProperty_57' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000D0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_8) == 0x000100, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_7) == 0x000130, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_6) == 0x000160, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_5) == 0x000190, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_4) == 0x0001C0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_3) == 0x0001F0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace_1) == 0x000220, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_2) == 0x000250, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000280, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose_1) == 0x0002B0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose_1) == 0x0002E0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x000310, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace_1) == 0x000340, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000370, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x0003A0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x0003D0, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_1) == 0x000400, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone) == 0x000430, "Member 'ABP_JP_AimOffset::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone' has a wrong offset!");

}

