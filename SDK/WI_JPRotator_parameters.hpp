#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPRotator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WI_JPRotator.WI_JPRotator_C.BP_OnOptionSelected
// 0x0004 (0x0004 - 0x0000)
struct WI_JPRotator_C_BP_OnOptionSelected final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_BP_OnOptionSelected) == 0x000004, "Wrong alignment on WI_JPRotator_C_BP_OnOptionSelected");
static_assert(sizeof(WI_JPRotator_C_BP_OnOptionSelected) == 0x000004, "Wrong size on WI_JPRotator_C_BP_OnOptionSelected");
static_assert(offsetof(WI_JPRotator_C_BP_OnOptionSelected, Index_0) == 0x000000, "Member 'WI_JPRotator_C_BP_OnOptionSelected::Index_0' has a wrong offset!");

// Function WI_JPRotator.WI_JPRotator_C.BP_OnOptionsPopulated
// 0x0004 (0x0004 - 0x0000)
struct WI_JPRotator_C_BP_OnOptionsPopulated final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_BP_OnOptionsPopulated) == 0x000004, "Wrong alignment on WI_JPRotator_C_BP_OnOptionsPopulated");
static_assert(sizeof(WI_JPRotator_C_BP_OnOptionsPopulated) == 0x000004, "Wrong size on WI_JPRotator_C_BP_OnOptionsPopulated");
static_assert(offsetof(WI_JPRotator_C_BP_OnOptionsPopulated, Count) == 0x000000, "Member 'WI_JPRotator_C_BP_OnOptionsPopulated::Count' has a wrong offset!");

// Function WI_JPRotator.WI_JPRotator_C.CustomEvent
// 0x0004 (0x0004 - 0x0000)
struct WI_JPRotator_C_CustomEvent final
{
public:
	int32                                         DefaultOptionIndex;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_CustomEvent) == 0x000004, "Wrong alignment on WI_JPRotator_C_CustomEvent");
static_assert(sizeof(WI_JPRotator_C_CustomEvent) == 0x000004, "Wrong size on WI_JPRotator_C_CustomEvent");
static_assert(offsetof(WI_JPRotator_C_CustomEvent, DefaultOptionIndex) == 0x000000, "Member 'WI_JPRotator_C_CustomEvent::DefaultOptionIndex' has a wrong offset!");

// Function WI_JPRotator.WI_JPRotator_C.ExecuteUbergraph_WI_JPRotator
// 0x0050 (0x0050 - 0x0000)
struct WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Count;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Index;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_DefaultOptionIndex;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator) == 0x000008, "Wrong alignment on WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator");
static_assert(sizeof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator) == 0x000050, "Wrong size on WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, EntryPoint) == 0x000000, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, Temp_bool_Variable) == 0x000004, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, Temp_byte_Variable) == 0x000005, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, Temp_byte_Variable_1) == 0x000006, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, K2Node_Event_Count) == 0x000008, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, K2Node_Event_Index) == 0x00000C, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::K2Node_Event_Index' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, K2Node_Event_DefaultOptionIndex) == 0x000020, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::K2Node_Event_DefaultOptionIndex' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000028, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000038, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, K2Node_Event_IsDesignTime) == 0x000040, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, K2Node_Select_Default) == 0x000041, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000044, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000048, "Member 'WI_JPRotator_C_ExecuteUbergraph_WI_JPRotator::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

// Function WI_JPRotator.WI_JPRotator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_JPRotator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_PreConstruct) == 0x000001, "Wrong alignment on WI_JPRotator_C_PreConstruct");
static_assert(sizeof(WI_JPRotator_C_PreConstruct) == 0x000001, "Wrong size on WI_JPRotator_C_PreConstruct");
static_assert(offsetof(WI_JPRotator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_JPRotator_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_JPRotator.WI_JPRotator_C.SetPipsStyle
// 0x0170 (0x0170 - 0x0000)
struct WI_JPRotator_C_SetPipsStyle final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_2;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_3;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_2;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_3;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default_3;                           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default_4;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default_5;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0090(0x00D0)()
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPRotator_C_SetPipsStyle) == 0x000010, "Wrong alignment on WI_JPRotator_C_SetPipsStyle");
static_assert(sizeof(WI_JPRotator_C_SetPipsStyle) == 0x000170, "Wrong size on WI_JPRotator_C_SetPipsStyle");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Count) == 0x000000, "Member 'WI_JPRotator_C_SetPipsStyle::Count' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable) == 0x000004, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000006, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000007, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_object_Variable) == 0x000008, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable_1) == 0x000010, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_object_Variable_1) == 0x000018, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable_2) == 0x000020, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_real_Variable) == 0x000024, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_real_Variable_1) == 0x000028, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable_3) == 0x00002C, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default) == 0x000030, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_real_Variable_2) == 0x000034, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable_4) == 0x000038, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default_1) == 0x00003C, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_real_Variable_3) == 0x000040, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_object_Variable_2) == 0x000048, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default_2) == 0x000050, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_object_Variable_3) == 0x000058, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000060, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, Temp_bool_Variable_5) == 0x000070, "Member 'WI_JPRotator_C_SetPipsStyle::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default_3) == 0x000078, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default_4) == 0x000080, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_Select_Default_5) == 0x000088, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, K2Node_MakeStruct_SlateBrush) == 0x000090, "Member 'WI_JPRotator_C_SetPipsStyle::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WI_JPRotator_C_SetPipsStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000160, "Member 'WI_JPRotator_C_SetPipsStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

