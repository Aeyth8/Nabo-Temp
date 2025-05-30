#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_YarnTangle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_YarnTangle.BP_YarnTangle_C.ExecuteUbergraph_BP_YarnTangle
// 0x0170 (0x0170 - 0x0000)
struct BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_self_CastInput; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0040(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle) == 0x000008, "Wrong alignment on BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle");
static_assert(sizeof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle) == 0x000170, "Wrong size on BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, EntryPoint) == 0x000000, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_HasAllMatchingGameplayTags_self_CastInput) == 0x000010, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_HasAllMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000020, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000040, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000138, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000140, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000158, "Member 'BP_YarnTangle_C_ExecuteUbergraph_BP_YarnTangle::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");

// Function BP_YarnTangle.BP_YarnTangle_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_YarnTangle_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_YarnTangle_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_YarnTangle_C_ReceiveTick");
static_assert(sizeof(BP_YarnTangle_C_ReceiveTick) == 0x000004, "Wrong size on BP_YarnTangle_C_ReceiveTick");
static_assert(offsetof(BP_YarnTangle_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_YarnTangle_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

