#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TeamIncome

#include "Basic.hpp"

#include "JP_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WI_TeamIncome.WI_TeamIncome_C.DoesNewResourceBelongToLocalPlayer
// 0x0058 (0x0058 - 0x0000)
struct WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer final
{
public:
	struct FResourcePayload                       ResourcePayload;                                   // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        K2Node_DynamicCast_AsActor_Component;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer) == 0x000008, "Wrong alignment on WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer");
static_assert(sizeof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer) == 0x000058, "Wrong size on WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, ResourcePayload) == 0x000000, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::ResourcePayload' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, ReturnValue) == 0x000028, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, CallFunc_GetPlayerState_ReturnValue) == 0x000030, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, K2Node_DynamicCast_AsActor_Component) == 0x000038, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::K2Node_DynamicCast_AsActor_Component' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'WI_TeamIncome_C_DoesNewResourceBelongToLocalPlayer::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.ExecuteUbergraph_WI_TeamIncome
// 0x0138 (0x0138 - 0x0000)
struct WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInitializationStateEnded*              CallFunc_ListenToInitializationStateEnded_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FResourcePayload                       Temp_struct_Variable;                              // 0x0010(0x0028)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject;                    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel;                  // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FResourcePayload                       Temp_struct_Variable_1;                            // 0x0060(0x0028)(NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesNewResourceBelongToLocalPlayer_ReturnValue; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable;                              // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInitializationStateStarted*            CallFunc_ListenToInitializationStateStarted_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue;    // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_DeltaAmount;                    // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_NewAmount_1;                    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_NewAmount;                      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome) == 0x000008, "Wrong alignment on WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome");
static_assert(sizeof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome) == 0x000138, "Wrong size on WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, EntryPoint) == 0x000000, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_ListenToInitializationStateEnded_ReturnValue) == 0x000008, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_ListenToInitializationStateEnded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, Temp_struct_Variable) == 0x000010, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CustomEvent_ProxyObject) == 0x000050, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CustomEvent_ActualChannel) == 0x000058, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CustomEvent_ActualChannel' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, Temp_struct_Variable_1) == 0x000060, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, Temp_struct_Variable_2) == 0x000088, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_DoesNewResourceBelongToLocalPlayer_ReturnValue) == 0x000090, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_DoesNewResourceBelongToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, Temp_object_Variable) == 0x000098, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_GetPayload_ReturnValue) == 0x0000A0, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A4, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_ListenToInitializationStateStarted_ReturnValue) == 0x0000B8, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_ListenToInitializationStateStarted_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C0, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_Event_IsDesignTime) == 0x0000D1, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_ListenForGameplayMessages_ReturnValue) == 0x0000D8, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_ListenForGameplayMessages_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_IsValid_ReturnValue_2) == 0x0000E0, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_BreakVector2D_X) == 0x0000E8, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_BreakVector2D_Y) == 0x0000F0, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x0000F8, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CustomEvent_DeltaAmount) == 0x000100, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CustomEvent_DeltaAmount' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CustomEvent_NewAmount_1) == 0x000108, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CustomEvent_NewAmount_1' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_PlayAnimation_ReturnValue) == 0x000110, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000118, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, K2Node_CustomEvent_NewAmount) == 0x000120, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::K2Node_CustomEvent_NewAmount' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_IsServer_ReturnValue) == 0x000128, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x00012C, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000130, "Member 'WI_TeamIncome_C_ExecuteUbergraph_WI_TeamIncome::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.OnAmountChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WI_TeamIncome_C_OnAmountChanged__DelegateSignature final
{
public:
	double                                        DeltaAmount;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewAmount;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_OnAmountChanged__DelegateSignature) == 0x000008, "Wrong alignment on WI_TeamIncome_C_OnAmountChanged__DelegateSignature");
static_assert(sizeof(WI_TeamIncome_C_OnAmountChanged__DelegateSignature) == 0x000010, "Wrong size on WI_TeamIncome_C_OnAmountChanged__DelegateSignature");
static_assert(offsetof(WI_TeamIncome_C_OnAmountChanged__DelegateSignature, DeltaAmount) == 0x000000, "Member 'WI_TeamIncome_C_OnAmountChanged__DelegateSignature::DeltaAmount' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnAmountChanged__DelegateSignature, NewAmount) == 0x000008, "Member 'WI_TeamIncome_C_OnAmountChanged__DelegateSignature::NewAmount' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.OnHandlePayload
// 0x0060 (0x0060 - 0x0000)
struct WI_TeamIncome_C_OnHandlePayload final
{
public:
	struct FResourcePayload                       NewPayload;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                        DeltaAmount;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_CurrentAmount_ImplicitCast;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_OnHandlePayload) == 0x000008, "Wrong alignment on WI_TeamIncome_C_OnHandlePayload");
static_assert(sizeof(WI_TeamIncome_C_OnHandlePayload) == 0x000060, "Wrong size on WI_TeamIncome_C_OnHandlePayload");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, NewPayload) == 0x000000, "Member 'WI_TeamIncome_C_OnHandlePayload::NewPayload' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, DeltaAmount) == 0x000028, "Member 'WI_TeamIncome_C_OnHandlePayload::DeltaAmount' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, Temp_bool_Has_Been_Initd_Variable) == 0x000030, "Member 'WI_TeamIncome_C_OnHandlePayload::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, Temp_bool_IsClosed_Variable) == 0x000031, "Member 'WI_TeamIncome_C_OnHandlePayload::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, CallFunc_Abs_ReturnValue) == 0x000038, "Member 'WI_TeamIncome_C_OnHandlePayload::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'WI_TeamIncome_C_OnHandlePayload::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000048, "Member 'WI_TeamIncome_C_OnHandlePayload::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, K2Node_VariableSet_CurrentAmount_ImplicitCast) == 0x000050, "Member 'WI_TeamIncome_C_OnHandlePayload::K2Node_VariableSet_CurrentAmount_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnHandlePayload, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'WI_TeamIncome_C_OnHandlePayload::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.OnIncomeNotify
// 0x0010 (0x0010 - 0x0000)
struct WI_TeamIncome_C_OnIncomeNotify final
{
public:
	double                                        DeltaAmount;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewAmount;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_OnIncomeNotify) == 0x000008, "Wrong alignment on WI_TeamIncome_C_OnIncomeNotify");
static_assert(sizeof(WI_TeamIncome_C_OnIncomeNotify) == 0x000010, "Wrong size on WI_TeamIncome_C_OnIncomeNotify");
static_assert(offsetof(WI_TeamIncome_C_OnIncomeNotify, DeltaAmount) == 0x000000, "Member 'WI_TeamIncome_C_OnIncomeNotify::DeltaAmount' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnIncomeNotify, NewAmount) == 0x000008, "Member 'WI_TeamIncome_C_OnIncomeNotify::NewAmount' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C
// 0x0010 (0x0010 - 0x0000)
struct WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C) == 0x000008, "Wrong alignment on WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C");
static_assert(sizeof(WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C) == 0x000010, "Wrong size on WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C");
static_assert(offsetof(WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C, ProxyObject) == 0x000000, "Member 'WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C::ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C, ActualChannel) == 0x000008, "Member 'WI_TeamIncome_C_OnMessageReceived_8084A20A4CC5B5559F0BA2B94C5CB89C::ActualChannel' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.PlayIncomeAnimation
// 0x0008 (0x0008 - 0x0000)
struct WI_TeamIncome_C_PlayIncomeAnimation final
{
public:
	double                                        NewAmount;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_PlayIncomeAnimation) == 0x000008, "Wrong alignment on WI_TeamIncome_C_PlayIncomeAnimation");
static_assert(sizeof(WI_TeamIncome_C_PlayIncomeAnimation) == 0x000008, "Wrong size on WI_TeamIncome_C_PlayIncomeAnimation");
static_assert(offsetof(WI_TeamIncome_C_PlayIncomeAnimation, NewAmount) == 0x000000, "Member 'WI_TeamIncome_C_PlayIncomeAnimation::NewAmount' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_TeamIncome_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_PreConstruct) == 0x000001, "Wrong alignment on WI_TeamIncome_C_PreConstruct");
static_assert(sizeof(WI_TeamIncome_C_PreConstruct) == 0x000001, "Wrong size on WI_TeamIncome_C_PreConstruct");
static_assert(offsetof(WI_TeamIncome_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_TeamIncome_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.SetDisplayValue
// 0x0010 (0x0010 - 0x0000)
struct WI_TeamIncome_C_SetDisplayValue final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TeamIncome_C_SetDisplayValue) == 0x000008, "Wrong alignment on WI_TeamIncome_C_SetDisplayValue");
static_assert(sizeof(WI_TeamIncome_C_SetDisplayValue) == 0x000010, "Wrong size on WI_TeamIncome_C_SetDisplayValue");
static_assert(offsetof(WI_TeamIncome_C_SetDisplayValue, Value) == 0x000000, "Member 'WI_TeamIncome_C_SetDisplayValue::Value' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_SetDisplayValue, CallFunc_FFloor_ReturnValue) == 0x000008, "Member 'WI_TeamIncome_C_SetDisplayValue::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function WI_TeamIncome.WI_TeamIncome_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WI_TeamIncome_C_SetText final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0010)()
};
static_assert(alignof(WI_TeamIncome_C_SetText) == 0x000008, "Wrong alignment on WI_TeamIncome_C_SetText");
static_assert(sizeof(WI_TeamIncome_C_SetText) == 0x000018, "Wrong size on WI_TeamIncome_C_SetText");
static_assert(offsetof(WI_TeamIncome_C_SetText, Value) == 0x000000, "Member 'WI_TeamIncome_C_SetText::Value' has a wrong offset!");
static_assert(offsetof(WI_TeamIncome_C_SetText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WI_TeamIncome_C_SetText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

