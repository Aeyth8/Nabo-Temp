#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PingableComponent_Character

#include "Basic.hpp"

#include "JP_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PingableComponent_Character.BP_PingableComponent_Character_C.GetPingDataBP
// 0x0300 (0x0300 - 0x0000)
struct BP_PingableComponent_Character_C_GetPingDataBP final
{
public:
	class APlayerControllerJP_Match*              InPC;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPingData                              ReturnValue;                                       // 0x0008(0x0090)(Parm, OutParm, ReturnParm)
	struct FPingData                              TempData;                                          // 0x0098(0x0090)(Edit, BlueprintVisible)
	TSoftClassPtr<class UClass>                   Temp_softclass_Variable;                           // 0x0128(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	struct FPingData                              CallFunc_GetPingDataBP_ReturnValue;                // 0x0150(0x0090)()
	TSoftClassPtr<class UClass>                   Temp_softclass_Variable_1;                         // 0x01E0(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class APlayerStateJP_Match*                   K2Node_DynamicCast_AsPlayer_State_JP_Match;        // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_213[0x5];                                      // 0x0213(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue_1;                  // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22A[0x6];                                      // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateJP*                         CallFunc_GetPlayerStateJP_AsPlayer_State_JP;       // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerDisplayName_ReturnValue;         // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0250(0x0010)()
	TSoftClassPtr<class UClass>                   K2Node_Select_Default;                             // 0x0260(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0288(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02E0(0x0010)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x02F0(0x0010)()
};
static_assert(alignof(BP_PingableComponent_Character_C_GetPingDataBP) == 0x000008, "Wrong alignment on BP_PingableComponent_Character_C_GetPingDataBP");
static_assert(sizeof(BP_PingableComponent_Character_C_GetPingDataBP) == 0x000300, "Wrong size on BP_PingableComponent_Character_C_GetPingDataBP");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, InPC) == 0x000000, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::InPC' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, ReturnValue) == 0x000008, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, TempData) == 0x000098, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::TempData' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, Temp_softclass_Variable) == 0x000128, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::Temp_softclass_Variable' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetPingDataBP_ReturnValue) == 0x000150, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetPingDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, Temp_softclass_Variable_1) == 0x0001E0, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::Temp_softclass_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_DynamicCast_AsPlayer_State_JP_Match) == 0x000208, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_DynamicCast_AsPlayer_State_JP_Match' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_DynamicCast_bSuccess) == 0x000210, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetTeamID_ReturnValue) == 0x000211, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, Temp_bool_Variable) == 0x000212, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetOwner_ReturnValue) == 0x000218, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000220, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetTeamID_ReturnValue_1) == 0x000229, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetTeamID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetPlayerStateJP_AsPlayer_State_JP) == 0x000230, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetPlayerStateJP_AsPlayer_State_JP' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000238, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_GetPlayerDisplayName_ReturnValue) == 0x000240, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_GetPlayerDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_Conv_StringToText_ReturnValue) == 0x000250, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_Select_Default) == 0x000260, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_MakeStruct_FormatArgumentData) == 0x000288, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, K2Node_MakeArray_Array) == 0x0002D0, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_Format_ReturnValue) == 0x0002E0, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PingableComponent_Character_C_GetPingDataBP, CallFunc_SelectText_ReturnValue) == 0x0002F0, "Member 'BP_PingableComponent_Character_C_GetPingDataBP::CallFunc_SelectText_ReturnValue' has a wrong offset!");

}

