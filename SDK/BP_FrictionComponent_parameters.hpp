#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrictionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FrictionComponent.BP_FrictionComponent_C.CanTargetActor
// 0x0050 (0x0050 - 0x0000)
struct BP_FrictionComponent_C_CanTargetActor final
{
public:
	const class AActor*                           HitActor;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface_1;         // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue_1;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrictionComponent_C_CanTargetActor) == 0x000008, "Wrong alignment on BP_FrictionComponent_C_CanTargetActor");
static_assert(sizeof(BP_FrictionComponent_C_CanTargetActor) == 0x000050, "Wrong size on BP_FrictionComponent_C_CanTargetActor");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, HitActor) == 0x000000, "Member 'BP_FrictionComponent_C_CanTargetActor::HitActor' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, ReturnValue) == 0x000008, "Member 'BP_FrictionComponent_C_CanTargetActor::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, Temp_byte_Variable) == 0x000009, "Member 'BP_FrictionComponent_C_CanTargetActor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, K2Node_DynamicCast_AsTeamable_Interface) == 0x000010, "Member 'BP_FrictionComponent_C_CanTargetActor::K2Node_DynamicCast_AsTeamable_Interface' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FrictionComponent_C_CanTargetActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, CallFunc_GetTeamID_ReturnValue) == 0x000021, "Member 'BP_FrictionComponent_C_CanTargetActor::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, CallFunc_DoesImplementInterface_ReturnValue) == 0x000022, "Member 'BP_FrictionComponent_C_CanTargetActor::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, CallFunc_GetPlayerPawn_ReturnValue) == 0x000028, "Member 'BP_FrictionComponent_C_CanTargetActor::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, Temp_byte_Variable_1) == 0x000030, "Member 'BP_FrictionComponent_C_CanTargetActor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, K2Node_DynamicCast_AsTeamable_Interface_1) == 0x000038, "Member 'BP_FrictionComponent_C_CanTargetActor::K2Node_DynamicCast_AsTeamable_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_FrictionComponent_C_CanTargetActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000049, "Member 'BP_FrictionComponent_C_CanTargetActor::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_CanTargetActor, CallFunc_GetTeamID_ReturnValue_1) == 0x00004A, "Member 'BP_FrictionComponent_C_CanTargetActor::CallFunc_GetTeamID_ReturnValue_1' has a wrong offset!");

// Function BP_FrictionComponent.BP_FrictionComponent_C.ExecuteUbergraph_BP_FrictionComponent
// 0x0030 (0x0030 - 0x0000)
struct BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnabled;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsEnabled)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULyraSettingsLocal*                     K2Node_DynamicCast_AsLyra_Settings_Local;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent) == 0x000008, "Wrong alignment on BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent");
static_assert(sizeof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent) == 0x000030, "Wrong size on BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, EntryPoint) == 0x000000, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, K2Node_CustomEvent_IsEnabled) == 0x000004, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::K2Node_CustomEvent_IsEnabled' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, K2Node_Event_EndPlayReason) == 0x000005, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, K2Node_DynamicCast_AsLyra_Settings_Local) == 0x000020, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::K2Node_DynamicCast_AsLyra_Settings_Local' has a wrong offset!");
static_assert(offsetof(BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_FrictionComponent_C_ExecuteUbergraph_BP_FrictionComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_FrictionComponent.BP_FrictionComponent_C.OnAimAssistEnabled_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_FrictionComponent_C_OnAimAssistEnabled_Event final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrictionComponent_C_OnAimAssistEnabled_Event) == 0x000001, "Wrong alignment on BP_FrictionComponent_C_OnAimAssistEnabled_Event");
static_assert(sizeof(BP_FrictionComponent_C_OnAimAssistEnabled_Event) == 0x000001, "Wrong size on BP_FrictionComponent_C_OnAimAssistEnabled_Event");
static_assert(offsetof(BP_FrictionComponent_C_OnAimAssistEnabled_Event, IsEnabled) == 0x000000, "Member 'BP_FrictionComponent_C_OnAimAssistEnabled_Event::IsEnabled' has a wrong offset!");

// Function BP_FrictionComponent.BP_FrictionComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_FrictionComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrictionComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_FrictionComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_FrictionComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_FrictionComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_FrictionComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_FrictionComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

