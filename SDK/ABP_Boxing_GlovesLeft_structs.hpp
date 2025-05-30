#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Boxing_GlovesLeft

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Boxing_GlovesLeft.ABP_Boxing_GlovesLeft_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase;                                // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase) == 0x000008, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase' has a wrong offset!");

// ScriptStruct ABP_Boxing_GlovesLeft.ABP_Boxing_GlovesLeft_C.AnimBlueprintGeneratedConstantData
// 0x01A7 (0x01A8 - 0x0001)
struct ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_13;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_14;                               // 0x0010(0x0020)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_15;                                // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESequenceEvalReinit                           __ByteProperty_16;                                 // 0x0034(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_17;                                 // 0x0035(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __IntProperty_18;                                  // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_19;                                // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_20;                                 // 0x0040(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_21;                                 // 0x0041(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_22;                                 // 0x0042(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_23;                                 // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0050(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x00E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                     // 0x0118(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                                // 0x0148(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;                   // 0x0178(0x0030)()
};
static_assert(alignof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData) == 0x0001A8, "Wrong size on ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __NameProperty_13) == 0x000004, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__NameProperty_13' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __StructProperty_14) == 0x000010, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__StructProperty_14' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __FloatProperty_15) == 0x000030, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__FloatProperty_15' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __ByteProperty_16) == 0x000034, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__ByteProperty_16' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __BoolProperty_17) == 0x000035, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__BoolProperty_17' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __IntProperty_18) == 0x000038, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__IntProperty_18' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __FloatProperty_19) == 0x00003C, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__FloatProperty_19' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __BoolProperty_20) == 0x000040, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__BoolProperty_20' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __EnumProperty_21) == 0x000041, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__EnumProperty_21' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __ByteProperty_22) == 0x000042, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__ByteProperty_22' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, __NameProperty_23) == 0x000044, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::__NameProperty_23' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000050, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D0, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000E8, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000118, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000148, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequenceEvaluator) == 0x000178, "Member 'ABP_Boxing_GlovesLeft::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequenceEvaluator' has a wrong offset!");

}

