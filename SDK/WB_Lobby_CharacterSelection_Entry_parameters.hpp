#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_CharacterSelection_Entry

#include "Basic.hpp"

#include "JP_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_Lobby_CharacterSelection_Entry.WB_Lobby_CharacterSelection_Entry_C.ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry
// 0x00A0 (0x00A0 - 0x0000)
struct WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterRoleData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry) == 0x000008, "Wrong alignment on WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry");
static_assert(sizeof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry) == 0x0000A0, "Wrong size on WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, EntryPoint) == 0x000000, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, Temp_object_Variable) == 0x000010, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'WB_Lobby_CharacterSelection_Entry_C_ExecuteUbergraph_WB_Lobby_CharacterSelection_Entry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WB_Lobby_CharacterSelection_Entry.WB_Lobby_CharacterSelection_Entry_C.OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6
// 0x0008 (0x0008 - 0x0000)
struct WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6) == 0x000008, "Wrong alignment on WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6");
static_assert(sizeof(WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6) == 0x000008, "Wrong size on WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6, Loaded) == 0x000000, "Member 'WB_Lobby_CharacterSelection_Entry_C_OnLoaded_A016823B4B4E6AA2734A2C872B2A96F6::Loaded' has a wrong offset!");

// Function WB_Lobby_CharacterSelection_Entry.WB_Lobby_CharacterSelection_Entry_C.SetButtonEnabledState
// 0x0068 (0x0068 - 0x0000)
struct WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState final
{
public:
	struct FCharacterRoleData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState) == 0x000008, "Wrong alignment on WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState");
static_assert(sizeof(WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState) == 0x000068, "Wrong size on WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonEnabledState::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function WB_Lobby_CharacterSelection_Entry.WB_Lobby_CharacterSelection_Entry_C.SetButtonSelectedState
// 0x05A0 (0x05A0 - 0x0000)
struct WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0xD];                                        // 0x0003(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0010(0x00D0)()
	struct FSlateBrush                            K2Node_Select_Default_1;                           // 0x00E0(0x00D0)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01B0(0x03F0)()
};
static_assert(alignof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState) == 0x000010, "Wrong alignment on WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState");
static_assert(sizeof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState) == 0x0005A0, "Wrong size on WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, Selected) == 0x000000, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::Selected' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, Temp_bool_Variable) == 0x000001, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, Temp_bool_Variable_1) == 0x000002, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, K2Node_Select_Default) == 0x000010, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, K2Node_Select_Default_1) == 0x0000E0, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState, K2Node_MakeStruct_ButtonStyle) == 0x0001B0, "Member 'WB_Lobby_CharacterSelection_Entry_C_SetButtonSelectedState::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

}

