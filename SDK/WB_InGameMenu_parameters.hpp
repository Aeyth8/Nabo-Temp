#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InGameMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_InGameMenu.WB_InGameMenu_C.ExecuteUbergraph_WB_InGameMenu
// 0x0090 (0x0090 - 0x0000)
struct WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActiveWidgetSubMenu_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_GI_C*                               K2Node_DynamicCast_AsBP_GI;                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTravelToLobbyCommand_ReturnValue;      // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu) == 0x000008, "Wrong alignment on WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu");
static_assert(sizeof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu) == 0x000090, "Wrong size on WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, EntryPoint) == 0x000000, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000010, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_IsActiveWidgetSubMenu_ReturnValue) == 0x000028, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_IsActiveWidgetSubMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000030, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetPlayerController_ReturnValue_3) == 0x000038, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetPlayerController_ReturnValue_4) == 0x000040, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000048, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, K2Node_DynamicCast_AsBP_GI) == 0x000058, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::K2Node_DynamicCast_AsBP_GI' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetTravelToLobbyCommand_ReturnValue) == 0x000068, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetTravelToLobbyCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000078, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu, CallFunc_MakeLiteralString_ReturnValue) == 0x000080, "Member 'WB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");

// Function WB_InGameMenu.WB_InGameMenu_C.GetTravelToLobbyCommand
// 0x00E0 (0x00E0 - 0x0000)
struct WB_InGameMenu_C_GetTravelToLobbyCommand final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class UProjectSettingsJP*                     CallFunc_GetProjectSettings_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue; // 0x0018(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBaseFilename_ReturnValue;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0010)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InGameMenu_C_GetTravelToLobbyCommand) == 0x000008, "Wrong alignment on WB_InGameMenu_C_GetTravelToLobbyCommand");
static_assert(sizeof(WB_InGameMenu_C_GetTravelToLobbyCommand) == 0x0000E0, "Wrong size on WB_InGameMenu_C_GetTravelToLobbyCommand");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, ReturnValue) == 0x000000, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_GetProjectSettings_ReturnValue) == 0x000010, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_GetProjectSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue) == 0x000018, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_BreakSoftObjectPath_PathString) == 0x000038, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_GetBaseFilename_ReturnValue) == 0x000048, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_GetBaseFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, K2Node_MakeArray_Array) == 0x0000B0, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_GetTravelToLobbyCommand, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'WB_InGameMenu_C_GetTravelToLobbyCommand::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function WB_InGameMenu.WB_InGameMenu_C.IsActiveWidgetSubMenu
// 0x0018 (0x0018 - 0x0000)
struct WB_InGameMenu_C_IsActiveWidgetSubMenu final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InGameMenu_C_IsActiveWidgetSubMenu) == 0x000008, "Wrong alignment on WB_InGameMenu_C_IsActiveWidgetSubMenu");
static_assert(sizeof(WB_InGameMenu_C_IsActiveWidgetSubMenu) == 0x000018, "Wrong size on WB_InGameMenu_C_IsActiveWidgetSubMenu");
static_assert(offsetof(WB_InGameMenu_C_IsActiveWidgetSubMenu, ReturnValue) == 0x000000, "Member 'WB_InGameMenu_C_IsActiveWidgetSubMenu::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_IsActiveWidgetSubMenu, CallFunc_GetActiveWidget_ReturnValue) == 0x000008, "Member 'WB_InGameMenu_C_IsActiveWidgetSubMenu::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InGameMenu_C_IsActiveWidgetSubMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WB_InGameMenu_C_IsActiveWidgetSubMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WB_InGameMenu.WB_InGameMenu_C.RemoveButtonsForNonServer
// 0x0001 (0x0001 - 0x0000)
struct WB_InGameMenu_C_RemoveButtonsForNonServer final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InGameMenu_C_RemoveButtonsForNonServer) == 0x000001, "Wrong alignment on WB_InGameMenu_C_RemoveButtonsForNonServer");
static_assert(sizeof(WB_InGameMenu_C_RemoveButtonsForNonServer) == 0x000001, "Wrong size on WB_InGameMenu_C_RemoveButtonsForNonServer");
static_assert(offsetof(WB_InGameMenu_C_RemoveButtonsForNonServer, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'WB_InGameMenu_C_RemoveButtonsForNonServer::CallFunc_IsServer_ReturnValue' has a wrong offset!");

}

