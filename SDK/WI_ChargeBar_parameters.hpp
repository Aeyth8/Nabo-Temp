#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ChargeBar

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "S_ChargeBarStartGameplayMessage_structs.hpp"
#include "SlateCore_structs.hpp"
#include "S_ChargeBarEndGameplayMessage_structs.hpp"


namespace SDK::Params
{

// Function WI_ChargeBar.WI_ChargeBar_C.ExecuteUbergraph_WI_ChargeBar
// 0x0150 (0x0150 - 0x0000)
struct WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_ChargeBarStartGameplayMessage       Temp_struct_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchEnded_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject_1;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel_1;                // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FS_ChargeBarStartGameplayMessage       Temp_struct_Variable_1;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ChargeBarEndGameplayMessage         Temp_struct_Variable_3;                            // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject;                    // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel;                  // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_ChargeBarEndGameplayMessage         Temp_struct_Variable_4;                            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable_5;                            // 0x008C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable_1;                            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue_1;  // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue_1;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_OldPawn;                        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_NewPawn;                        // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00EC(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetServerWorldTimeSafe_ReturnValue;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APawn* OldPawn, class APawn* NewPawn)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LerpDisplayCharge_Alpha_ImplicitCast;     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar) == 0x000008, "Wrong alignment on WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar");
static_assert(sizeof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar) == 0x000150, "Wrong size on WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, EntryPoint) == 0x000000, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable) == 0x000010, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_HasMatchEnded_ReturnValue) == 0x000018, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_HasMatchEnded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_ProxyObject_1) == 0x000030, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_ProxyObject_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_ActualChannel_1) == 0x000038, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_ActualChannel_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable_1) == 0x000040, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable_2) == 0x000048, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_object_Variable) == 0x000050, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_ListenForGameplayMessages_ReturnValue) == 0x000058, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_ListenForGameplayMessages_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetPayload_ReturnValue) == 0x000060, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable_3) == 0x000062, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_ProxyObject) == 0x000068, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_ActualChannel) == 0x000070, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_ActualChannel' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable_4) == 0x000088, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_struct_Variable_5) == 0x00008C, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, Temp_object_Variable_1) == 0x000098, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_ListenForGameplayMessages_ReturnValue_1) == 0x0000A0, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_ListenForGameplayMessages_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetPayload_ReturnValue_1) == 0x0000A8, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetPayload_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000B0, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetPlayerControllerFromID_ReturnValue) == 0x0000B8, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetPlayerControllerFromID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_K2_GetPawn_ReturnValue) == 0x0000C0, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_OldPawn) == 0x0000C8, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_OldPawn' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CustomEvent_NewPawn) == 0x0000D0, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CustomEvent_NewPawn' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_IsValid_ReturnValue_2) == 0x0000D8, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_IsValid_ReturnValue_3) == 0x0000D9, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_DynamicCast_AsBP_Resident_Character) == 0x0000E0, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_Event_MyGeometry) == 0x0000EC, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_Event_InDeltaTime) == 0x000124, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_GetServerWorldTimeSafe_ReturnValue) == 0x000128, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_GetServerWorldTimeSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, K2Node_CreateDelegate_OutputDelegate_2) == 0x000130, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000140, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar, CallFunc_LerpDisplayCharge_Alpha_ImplicitCast) == 0x000148, "Member 'WI_ChargeBar_C_ExecuteUbergraph_WI_ChargeBar::CallFunc_LerpDisplayCharge_Alpha_ImplicitCast' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.GetPercent
// 0x0008 (0x0008 - 0x0000)
struct WI_ChargeBar_C_GetPercent final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_GetPercent) == 0x000004, "Wrong alignment on WI_ChargeBar_C_GetPercent");
static_assert(sizeof(WI_ChargeBar_C_GetPercent) == 0x000008, "Wrong size on WI_ChargeBar_C_GetPercent");
static_assert(offsetof(WI_ChargeBar_C_GetPercent, ReturnValue) == 0x000000, "Member 'WI_ChargeBar_C_GetPercent::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_GetPercent, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000004, "Member 'WI_ChargeBar_C_GetPercent::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.GetVisibility_0
// 0x0001 (0x0001 - 0x0000)
struct WI_ChargeBar_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_GetVisibility_0) == 0x000001, "Wrong alignment on WI_ChargeBar_C_GetVisibility_0");
static_assert(sizeof(WI_ChargeBar_C_GetVisibility_0) == 0x000001, "Wrong size on WI_ChargeBar_C_GetVisibility_0");
static_assert(offsetof(WI_ChargeBar_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WI_ChargeBar_C_GetVisibility_0::ReturnValue' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.LerpDisplayCharge
// 0x0028 (0x0028 - 0x0000)
struct WI_ChargeBar_C_LerpDisplayCharge final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetServerWorldTimeSafe_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SafeDivide_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_LerpDisplayCharge) == 0x000008, "Wrong alignment on WI_ChargeBar_C_LerpDisplayCharge");
static_assert(sizeof(WI_ChargeBar_C_LerpDisplayCharge) == 0x000028, "Wrong size on WI_ChargeBar_C_LerpDisplayCharge");
static_assert(offsetof(WI_ChargeBar_C_LerpDisplayCharge, Alpha) == 0x000000, "Member 'WI_ChargeBar_C_LerpDisplayCharge::Alpha' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_LerpDisplayCharge, CallFunc_GetServerWorldTimeSafe_ReturnValue) == 0x000008, "Member 'WI_ChargeBar_C_LerpDisplayCharge::CallFunc_GetServerWorldTimeSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_LerpDisplayCharge, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'WI_ChargeBar_C_LerpDisplayCharge::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_LerpDisplayCharge, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'WI_ChargeBar_C_LerpDisplayCharge::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_LerpDisplayCharge, CallFunc_SafeDivide_ReturnValue) == 0x000020, "Member 'WI_ChargeBar_C_LerpDisplayCharge::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.OnMessageReceived_52F534E4467EF413C58B1489488F3EF5
// 0x0010 (0x0010 - 0x0000)
struct WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5 final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5) == 0x000008, "Wrong alignment on WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5");
static_assert(sizeof(WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5) == 0x000010, "Wrong size on WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5");
static_assert(offsetof(WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5, ProxyObject) == 0x000000, "Member 'WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5::ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5, ActualChannel) == 0x000008, "Member 'WI_ChargeBar_C_OnMessageReceived_52F534E4467EF413C58B1489488F3EF5::ActualChannel' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403
// 0x0010 (0x0010 - 0x0000)
struct WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403 final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403) == 0x000008, "Wrong alignment on WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403");
static_assert(sizeof(WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403) == 0x000010, "Wrong size on WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403");
static_assert(offsetof(WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403, ProxyObject) == 0x000000, "Member 'WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403::ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403, ActualChannel) == 0x000008, "Member 'WI_ChargeBar_C_OnMessageReceived_DA5450904A1C77AC87933AAA5D6A6403::ActualChannel' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.Reconstruct
// 0x0010 (0x0010 - 0x0000)
struct WI_ChargeBar_C_Reconstruct final
{
public:
	class APawn*                                  OldPawn;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NewPawn;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_Reconstruct) == 0x000008, "Wrong alignment on WI_ChargeBar_C_Reconstruct");
static_assert(sizeof(WI_ChargeBar_C_Reconstruct) == 0x000010, "Wrong size on WI_ChargeBar_C_Reconstruct");
static_assert(offsetof(WI_ChargeBar_C_Reconstruct, OldPawn) == 0x000000, "Member 'WI_ChargeBar_C_Reconstruct::OldPawn' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_Reconstruct, NewPawn) == 0x000008, "Member 'WI_ChargeBar_C_Reconstruct::NewPawn' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.SetEquipmentAndItemInstance
// 0x0020 (0x0020 - 0x0000)
struct WI_ChargeBar_C_SetEquipmentAndItemInstance final
{
public:
	class UEquipmentInstance*                     Equipped_Equipment_0;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItemInstance*                          K2Node_DynamicCast_AsItem_Instance;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_SetEquipmentAndItemInstance) == 0x000008, "Wrong alignment on WI_ChargeBar_C_SetEquipmentAndItemInstance");
static_assert(sizeof(WI_ChargeBar_C_SetEquipmentAndItemInstance) == 0x000020, "Wrong size on WI_ChargeBar_C_SetEquipmentAndItemInstance");
static_assert(offsetof(WI_ChargeBar_C_SetEquipmentAndItemInstance, Equipped_Equipment_0) == 0x000000, "Member 'WI_ChargeBar_C_SetEquipmentAndItemInstance::Equipped_Equipment_0' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_SetEquipmentAndItemInstance, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'WI_ChargeBar_C_SetEquipmentAndItemInstance::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_SetEquipmentAndItemInstance, K2Node_DynamicCast_AsItem_Instance) == 0x000010, "Member 'WI_ChargeBar_C_SetEquipmentAndItemInstance::K2Node_DynamicCast_AsItem_Instance' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_SetEquipmentAndItemInstance, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WI_ChargeBar_C_SetEquipmentAndItemInstance::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WI_ChargeBar.WI_ChargeBar_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_ChargeBar_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ChargeBar_C_Tick) == 0x000004, "Wrong alignment on WI_ChargeBar_C_Tick");
static_assert(sizeof(WI_ChargeBar_C_Tick) == 0x00003C, "Wrong size on WI_ChargeBar_C_Tick");
static_assert(offsetof(WI_ChargeBar_C_Tick, MyGeometry) == 0x000000, "Member 'WI_ChargeBar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_ChargeBar_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_ChargeBar_C_Tick::InDeltaTime' has a wrong offset!");

}

