#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SurrenderVoteHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WI_SurrenderVoteHUD.WI_SurrenderVoteHUD_C.ExecuteUbergraph_WI_SurrenderVoteHUD
// 0x0160 (0x0160 - 0x0000)
struct WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStateJP_Match*                   K2Node_DynamicCast_AsPlayer_State_JP_Match;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateJP_MatchBP_C*               K2Node_DynamicCast_AsPlayer_State_JP_Match_BP;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerStateJP*>                 CallFunc_GetPlayersOfTeam_ReturnValue;             // 0x0038(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateJP*                         CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStateJP_MatchBP_C*               K2Node_DynamicCast_AsPlayer_State_JP_Match_BP_1;   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0048)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0010)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD) == 0x000008, "Wrong alignment on WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD");
static_assert(sizeof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD) == 0x000160, "Wrong size on WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, EntryPoint) == 0x000000, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000010, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_AsPlayer_State_JP_Match) == 0x000018, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_AsPlayer_State_JP_Match' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_AsPlayer_State_JP_Match_BP) == 0x000028, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_AsPlayer_State_JP_Match_BP' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_GetTeamID_ReturnValue) == 0x000031, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_GetPlayersOfTeam_ReturnValue) == 0x000038, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_GetPlayersOfTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Array_Get_Item) == 0x000050, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_AsPlayer_State_JP_Match_BP_1) == 0x000058, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_AsPlayer_State_JP_Match_BP_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000078, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000D0, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_MakeArray_Array) == 0x000120, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_Format_ReturnValue) == 0x000138, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000148, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000158, "Member 'WI_SurrenderVoteHUD_C_ExecuteUbergraph_WI_SurrenderVoteHUD::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

