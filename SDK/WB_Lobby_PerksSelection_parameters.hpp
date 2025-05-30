#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_PerksSelection

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.ExecuteUbergraph_WB_Lobby_PerksSelection
// 0x0004 (0x0004 - 0x0000)
struct WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection) == 0x000004, "Wrong alignment on WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection");
static_assert(sizeof(WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection) == 0x000004, "Wrong size on WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection");
static_assert(offsetof(WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection, EntryPoint) == 0x000000, "Member 'WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection::EntryPoint' has a wrong offset!");

// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.OnCharacterSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature final
{
public:
	class FName                                   CharacterRole_Row_Name;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Lobby_CharacterSelection_Entry_C*   SelectedEntry;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature) == 0x000008, "Wrong alignment on WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature");
static_assert(sizeof(WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature) == 0x000010, "Wrong size on WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature");
static_assert(offsetof(WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature, CharacterRole_Row_Name) == 0x000000, "Member 'WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature::CharacterRole_Row_Name' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature, SelectedEntry) == 0x000008, "Member 'WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature::SelectedEntry' has a wrong offset!");

// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.UpdateEntrysSelectionState
// 0x0040 (0x0040 - 0x0000)
struct WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState final
{
public:
	class UObject*                                SelectedEntryWidget;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWB_Lobby_CharacterSelection_Entry_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Lobby_CharacterSelection_Entry_C*   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState) == 0x000008, "Wrong alignment on WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState");
static_assert(sizeof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState) == 0x000040, "Wrong size on WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, SelectedEntryWidget) == 0x000000, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::SelectedEntryWidget' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000018, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_Array_Get_Item) == 0x000030, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000039, "Member 'WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

