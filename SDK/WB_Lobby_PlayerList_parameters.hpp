#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_PlayerList

#include "Basic.hpp"

#include "JP_structs.hpp"


namespace SDK::Params
{

// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.ExecuteUbergraph_WB_Lobby_PlayerList
// 0x0068 (0x0068 - 0x0000)
struct WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FTeam& AffectedTeam)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateJP*                           K2Node_DynamicCast_AsGame_State_JP;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTeam                                  K2Node_CustomEvent_affectedTeam;                   // 0x0030(0x0038)(ConstParm, NoDestructor)
};
static_assert(alignof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList) == 0x000008, "Wrong alignment on WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList");
static_assert(sizeof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList) == 0x000068, "Wrong size on WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, EntryPoint) == 0x000000, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, K2Node_DynamicCast_AsGame_State_JP) == 0x000020, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::K2Node_DynamicCast_AsGame_State_JP' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList, K2Node_CustomEvent_affectedTeam) == 0x000030, "Member 'WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList::K2Node_CustomEvent_affectedTeam' has a wrong offset!");

// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.OnTeamsChanged
// 0x0038 (0x0038 - 0x0000)
struct WB_Lobby_PlayerList_C_OnTeamsChanged final
{
public:
	struct FTeam                                  AffectedTeam;                                      // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WB_Lobby_PlayerList_C_OnTeamsChanged) == 0x000008, "Wrong alignment on WB_Lobby_PlayerList_C_OnTeamsChanged");
static_assert(sizeof(WB_Lobby_PlayerList_C_OnTeamsChanged) == 0x000038, "Wrong size on WB_Lobby_PlayerList_C_OnTeamsChanged");
static_assert(offsetof(WB_Lobby_PlayerList_C_OnTeamsChanged, AffectedTeam) == 0x000000, "Member 'WB_Lobby_PlayerList_C_OnTeamsChanged::AffectedTeam' has a wrong offset!");

// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.RefreshLists
// 0x0078 (0x0078 - 0x0000)
struct WB_Lobby_PlayerList_C_RefreshLists final
{
public:
	class UWB_Lobby_PlayerList_Entry_C*           CurrentEntry;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CurrentPS;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerListSectionWI_C*            Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_Lobby_PlayerList_Entry_C*           CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateJP*                         K2Node_DynamicCast_AsPlayer_State_JP;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULobbyPlayerListSectionWI_C*            K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_PlayerList_C_RefreshLists) == 0x000008, "Wrong alignment on WB_Lobby_PlayerList_C_RefreshLists");
static_assert(sizeof(WB_Lobby_PlayerList_C_RefreshLists) == 0x000078, "Wrong size on WB_Lobby_PlayerList_C_RefreshLists");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CurrentEntry) == 0x000000, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CurrentEntry' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CurrentPS) == 0x000008, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CurrentPS' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, Temp_object_Variable) == 0x000010, "Member 'WB_Lobby_PlayerList_C_RefreshLists::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, Temp_int_Variable) == 0x000018, "Member 'WB_Lobby_PlayerList_C_RefreshLists::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WB_Lobby_PlayerList_C_RefreshLists::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WB_Lobby_PlayerList_C_RefreshLists::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, Temp_int_Variable_1) == 0x000028, "Member 'WB_Lobby_PlayerList_C_RefreshLists::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Array_Get_Item) == 0x000050, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, K2Node_DynamicCast_AsPlayer_State_JP) == 0x000060, "Member 'WB_Lobby_PlayerList_C_RefreshLists::K2Node_DynamicCast_AsPlayer_State_JP' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WB_Lobby_PlayerList_C_RefreshLists::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'WB_Lobby_PlayerList_C_RefreshLists::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RefreshLists, K2Node_Select_Default) == 0x000070, "Member 'WB_Lobby_PlayerList_C_RefreshLists::K2Node_Select_Default' has a wrong offset!");

// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.RequireRefreshLists
// 0x0004 (0x0004 - 0x0000)
struct WB_Lobby_PlayerList_C_RequireRefreshLists final
{
public:
	bool                                          bTeamBasedChanged;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerNotFound;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTeamIDChanged;                                    // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerCountChanged;                               // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Lobby_PlayerList_C_RequireRefreshLists) == 0x000001, "Wrong alignment on WB_Lobby_PlayerList_C_RequireRefreshLists");
static_assert(sizeof(WB_Lobby_PlayerList_C_RequireRefreshLists) == 0x000004, "Wrong size on WB_Lobby_PlayerList_C_RequireRefreshLists");
static_assert(offsetof(WB_Lobby_PlayerList_C_RequireRefreshLists, bTeamBasedChanged) == 0x000000, "Member 'WB_Lobby_PlayerList_C_RequireRefreshLists::bTeamBasedChanged' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RequireRefreshLists, bPlayerNotFound) == 0x000001, "Member 'WB_Lobby_PlayerList_C_RequireRefreshLists::bPlayerNotFound' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RequireRefreshLists, bTeamIDChanged) == 0x000002, "Member 'WB_Lobby_PlayerList_C_RequireRefreshLists::bTeamIDChanged' has a wrong offset!");
static_assert(offsetof(WB_Lobby_PlayerList_C_RequireRefreshLists, bPlayerCountChanged) == 0x000003, "Member 'WB_Lobby_PlayerList_C_RequireRefreshLists::bPlayerCountChanged' has a wrong offset!");

}

