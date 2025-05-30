#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_Winscreen_ReturnScreen

#include "Basic.hpp"

#include "CommonGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.ClearChatOnExit
// 0x0020 (0x0020 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_ClearChatOnExit final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerJP_MatchBP_C*          K2Node_DynamicCast_AsPlayer_Controller_JP_Match_BP; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_ClearChatOnExit");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit) == 0x000020, "Wrong size on WI_Winscreen_ReturnScreen_C_ClearChatOnExit");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_ClearChatOnExit::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WI_Winscreen_ReturnScreen_C_ClearChatOnExit::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit, K2Node_DynamicCast_AsPlayer_Controller_JP_Match_BP) == 0x000010, "Member 'WI_Winscreen_ReturnScreen_C_ClearChatOnExit::K2Node_DynamicCast_AsPlayer_Controller_JP_Match_BP' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ClearChatOnExit, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WI_Winscreen_ReturnScreen_C_ClearChatOnExit::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.ExecuteUbergraph_WI_Winscreen_ReturnScreen
// 0x00C8 (0x00C8 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonMessagingResult Result)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonMessagingResult                        K2Node_CustomEvent_Result;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonMessagingResult                        Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_CustomEvent_Button_1;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_CustomEvent_Button;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstanceJP*                        K2Node_DynamicCast_AsGame_Instance_JP;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLeaveMessage_ReturnValue;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AGameModeJP_Match*                      CallFunc_GetGameModeJP_Match_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0010)()
	class UAsyncAction_ShowConfirmation*          CallFunc_ShowConfirmationYesNo_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen) == 0x0000C8, "Wrong size on WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, EntryPoint) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CustomEvent_Result) == 0x000014, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, Temp_byte_Variable) == 0x000015, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CustomEvent_Button_1) == 0x000018, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CustomEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CustomEvent_Button) == 0x000028, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000040, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_IsServer_ReturnValue) == 0x000048, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetGameMode_ReturnValue) == 0x000050, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000058, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_DynamicCast_AsGame_Instance_JP) == 0x000060, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_DynamicCast_AsGame_Instance_JP' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, K2Node_CreateDelegate_OutputDelegate_2) == 0x00006C, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetLeaveMessage_ReturnValue) == 0x000080, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetLeaveMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetGameModeJP_Match_ReturnValue) == 0x000090, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetGameModeJP_Match_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_ShowConfirmationYesNo_ReturnValue) == 0x0000A8, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_ShowConfirmationYesNo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_GetVisibility_ReturnValue) == 0x0000C0, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C1, "Member 'WI_Winscreen_ReturnScreen_C_ExecuteUbergraph_WI_Winscreen_ReturnScreen::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.GetLeaveMessage
// 0x00E0 (0x00E0 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_GetLeaveMessage final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 ToReturn;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0010)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0010)()
	class USocialGameInstanceSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPostMatchLeaderLeftCountdownStarted_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalUserPartyLeader_ReturnValue;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UOnlineServicesPartyMember*>     CallFunc_GetPartyMembers_ReturnValue;              // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0010)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00A0(0x0010)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_GetLeaveMessage");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage) == 0x0000E0, "Wrong size on WI_Winscreen_ReturnScreen_C_GetLeaveMessage");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, ReturnValue) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, ToReturn) == 0x000010, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::ToReturn' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, Temp_bool_Variable) == 0x000020, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, Temp_text_Variable) == 0x000028, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, Temp_text_Variable_1) == 0x000038, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000048, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_HasPostMatchLeaderLeftCountdownStarted_ReturnValue) == 0x000050, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_HasPostMatchLeaderLeftCountdownStarted_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_IsLocalUserPartyLeader_ReturnValue) == 0x000051, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_IsLocalUserPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_GetPartyMembers_ReturnValue) == 0x000058, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_GetPartyMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, K2Node_Select_Default) == 0x000070, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000080, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x000088, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_BooleanOR_ReturnValue) == 0x000098, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_MakeLiteralText_ReturnValue) == 0x0000A0, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000C0, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_GetLeaveMessage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'WI_Winscreen_ReturnScreen_C_GetLeaveMessage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.OnLeaveClicked
// 0x0008 (0x0008 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_OnLeaveClicked final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_OnLeaveClicked) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_OnLeaveClicked");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_OnLeaveClicked) == 0x000008, "Wrong size on WI_Winscreen_ReturnScreen_C_OnLeaveClicked");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_OnLeaveClicked, Button) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_OnLeaveClicked::Button' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.OnPlayAgainClicked
// 0x0008 (0x0008 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked) == 0x000008, "Wrong size on WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked, Button) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_OnPlayAgainClicked::Button' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.OnResult_A9AC10C64969E1B866B04F9AF574A3BE
// 0x0001 (0x0001 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE final
{
public:
	ECommonMessagingResult                        Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE) == 0x000001, "Wrong alignment on WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE) == 0x000001, "Wrong size on WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE, Result) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_OnResult_A9AC10C64969E1B866B04F9AF574A3BE::Result' has a wrong offset!");

// Function WI_Winscreen_ReturnScreen.WI_Winscreen_ReturnScreen_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WI_Winscreen_ReturnScreen_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

