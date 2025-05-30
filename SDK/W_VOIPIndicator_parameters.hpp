#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_VOIPIndicator.W_VOIPIndicator_C.ExecuteUbergraph_W_VOIPIndicator
// 0x0040 (0x0040 - 0x0000)
struct W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_VOIPInterface_C>   K2Node_DynamicCast_AsBP_VOIPInterface;             // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MSG_AVP_GetPlayerUsername_Success_;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MSG_AVP_GetPlayerUsername_Username;       // 0x0028(0x0010)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator) == 0x000008, "Wrong alignment on W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator");
static_assert(sizeof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator) == 0x000040, "Wrong size on W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, EntryPoint) == 0x000000, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, Temp_int_Variable) == 0x000004, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, K2Node_DynamicCast_AsBP_VOIPInterface) == 0x000010, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::K2Node_DynamicCast_AsBP_VOIPInterface' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_MSG_AVP_GetPlayerUsername_Success_) == 0x000021, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_MSG_AVP_GetPlayerUsername_Success_' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_MSG_AVP_GetPlayerUsername_Username) == 0x000028, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_MSG_AVP_GetPlayerUsername_Username' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

