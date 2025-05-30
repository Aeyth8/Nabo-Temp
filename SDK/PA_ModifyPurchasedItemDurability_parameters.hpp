#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_ModifyPurchasedItemDurability

#include "Basic.hpp"


namespace SDK::Params
{

// Function PA_ModifyPurchasedItemDurability.PA_ModifyPurchasedItemDurability_C.ModifyDurability
// 0x0028 (0x0028 - 0x0000)
struct PA_ModifyPurchasedItemDurability_C_ModifyDurability final
{
public:
	int32                                         Current_Durability;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         New_Durability;                                    // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateFloatValue_ReturnValue;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateFloatValue_Value1_ImplicitCast;   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateFloatValue_Value2_ImplicitCast;   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PA_ModifyPurchasedItemDurability_C_ModifyDurability) == 0x000008, "Wrong alignment on PA_ModifyPurchasedItemDurability_C_ModifyDurability");
static_assert(sizeof(PA_ModifyPurchasedItemDurability_C_ModifyDurability) == 0x000028, "Wrong size on PA_ModifyPurchasedItemDurability_C_ModifyDurability");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, Current_Durability) == 0x000000, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::Current_Durability' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, New_Durability) == 0x000004, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::New_Durability' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_EvaluateFloatValue_ReturnValue) == 0x000010, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_EvaluateFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_FTrunc_ReturnValue) == 0x000014, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_EvaluateFloatValue_Value1_ImplicitCast) == 0x000018, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_EvaluateFloatValue_Value1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_EvaluateFloatValue_Value2_ImplicitCast) == 0x00001C, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_EvaluateFloatValue_Value2_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PA_ModifyPurchasedItemDurability_C_ModifyDurability, CallFunc_FTrunc_A_ImplicitCast) == 0x000020, "Member 'PA_ModifyPurchasedItemDurability_C_ModifyDurability::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

}

