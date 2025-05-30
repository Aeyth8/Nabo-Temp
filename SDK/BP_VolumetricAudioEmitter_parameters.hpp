#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolumetricAudioEmitter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VolumetricAudioEmitter.BP_VolumetricAudioEmitter_C.ExecuteUbergraph_BP_VolumetricAudioEmitter
// 0x0160 (0x0160 - 0x0000)
struct BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0068(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter) == 0x000008, "Wrong alignment on BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter");
static_assert(sizeof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter) == 0x000160, "Wrong size on BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, EntryPoint) == 0x000000, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_GetCameraLocation_ReturnValue) == 0x000030, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_GetClosestPointOnCollision_OutPointOnBody) == 0x000048, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_GetClosestPointOnCollision_OutPointOnBody' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_GetClosestPointOnCollision_ReturnValue) == 0x000060, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_GetClosestPointOnCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000068, "Member 'BP_VolumetricAudioEmitter_C_ExecuteUbergraph_BP_VolumetricAudioEmitter::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_VolumetricAudioEmitter.BP_VolumetricAudioEmitter_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_VolumetricAudioEmitter_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VolumetricAudioEmitter_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_VolumetricAudioEmitter_C_UserConstructionScript");
static_assert(sizeof(BP_VolumetricAudioEmitter_C_UserConstructionScript) == 0x000001, "Wrong size on BP_VolumetricAudioEmitter_C_UserConstructionScript");
static_assert(offsetof(BP_VolumetricAudioEmitter_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_VolumetricAudioEmitter_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

