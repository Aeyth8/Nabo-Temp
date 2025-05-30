#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_ModifyCharacterScale

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PA_ModifyCharacterScale.PA_ModifyCharacterScale_C.Evaluate
// 0x000C (0x000C - 0x0000)
struct PA_ModifyCharacterScale_C_Evaluate final
{
public:
	float                                         Value1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateFloatValue_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_EvaluateFloatValue_Value2_ImplicitCast;   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PA_ModifyCharacterScale_C_Evaluate) == 0x000004, "Wrong alignment on PA_ModifyCharacterScale_C_Evaluate");
static_assert(sizeof(PA_ModifyCharacterScale_C_Evaluate) == 0x00000C, "Wrong size on PA_ModifyCharacterScale_C_Evaluate");
static_assert(offsetof(PA_ModifyCharacterScale_C_Evaluate, Value1) == 0x000000, "Member 'PA_ModifyCharacterScale_C_Evaluate::Value1' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_Evaluate, CallFunc_EvaluateFloatValue_ReturnValue) == 0x000004, "Member 'PA_ModifyCharacterScale_C_Evaluate::CallFunc_EvaluateFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_Evaluate, CallFunc_EvaluateFloatValue_Value2_ImplicitCast) == 0x000008, "Member 'PA_ModifyCharacterScale_C_Evaluate::CallFunc_EvaluateFloatValue_Value2_ImplicitCast' has a wrong offset!");

// Function PA_ModifyCharacterScale.PA_ModifyCharacterScale_C.ModifyScale
// 0x0088 (0x0088 - 0x0000)
struct PA_ModifyCharacterScale_C_ModifyScale final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ModifiedScale;                                     // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              CallFunc_EvaluateVectorValue_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              CallFunc_EvaluateVectorValue_Value1_ImplicitCast;  // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_FunctionResult_ModifiedScale_ImplicitCast;  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3f                              CallFunc_EvaluateVectorValue_Value2_ImplicitCast;  // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PA_ModifyCharacterScale_C_ModifyScale) == 0x000008, "Wrong alignment on PA_ModifyCharacterScale_C_ModifyScale");
static_assert(sizeof(PA_ModifyCharacterScale_C_ModifyScale) == 0x000088, "Wrong size on PA_ModifyCharacterScale_C_ModifyScale");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, Scale) == 0x000000, "Member 'PA_ModifyCharacterScale_C_ModifyScale::Scale' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, ModifiedScale) == 0x000018, "Member 'PA_ModifyCharacterScale_C_ModifyScale::ModifiedScale' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000030, "Member 'PA_ModifyCharacterScale_C_ModifyScale::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, CallFunc_EvaluateVectorValue_ReturnValue) == 0x000048, "Member 'PA_ModifyCharacterScale_C_ModifyScale::CallFunc_EvaluateVectorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, CallFunc_EvaluateVectorValue_Value1_ImplicitCast) == 0x000054, "Member 'PA_ModifyCharacterScale_C_ModifyScale::CallFunc_EvaluateVectorValue_Value1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, K2Node_FunctionResult_ModifiedScale_ImplicitCast) == 0x000060, "Member 'PA_ModifyCharacterScale_C_ModifyScale::K2Node_FunctionResult_ModifiedScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PA_ModifyCharacterScale_C_ModifyScale, CallFunc_EvaluateVectorValue_Value2_ImplicitCast) == 0x000078, "Member 'PA_ModifyCharacterScale_C_ModifyScale::CallFunc_EvaluateVectorValue_Value2_ImplicitCast' has a wrong offset!");

}

