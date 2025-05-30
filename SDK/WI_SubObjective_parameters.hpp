#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SubObjective

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WI_SubObjective.WI_SubObjective_C.ExecuteUbergraph_WI_SubObjective
// 0x0008 (0x0008 - 0x0000)
struct WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective) == 0x000004, "Wrong alignment on WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective");
static_assert(sizeof(WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective) == 0x000008, "Wrong size on WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective");
static_assert(offsetof(WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective, EntryPoint) == 0x000000, "Member 'WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WI_SubObjective_C_ExecuteUbergraph_WI_SubObjective::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.Get Input Tag
// 0x0088 (0x0088 - 0x0000)
struct WI_SubObjective_C_Get_Input_Tag final
{
public:
	class UInputAction*                           Input;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Text;                                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          FoundBoundKey;                                     // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BindingHasImage;                                   // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TryGetActionKeyForFirstBoundKey_ActionKeyText; // 0x0020(0x0010)()
	bool                                          CallFunc_TryGetActionKeyForFirstBoundKey_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_ClassLog_Name_name;                   // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class URichTextBlockDecorator*                CallFunc_GetDecoratorByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URichTextBlockInputImageDecorator*      K2Node_DynamicCast_AsRich_Text_Block_Input_Image_Decorator; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasImageBrushForTag_ReturnValue;          // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_Get_Input_Tag) == 0x000008, "Wrong alignment on WI_SubObjective_C_Get_Input_Tag");
static_assert(sizeof(WI_SubObjective_C_Get_Input_Tag) == 0x000088, "Wrong size on WI_SubObjective_C_Get_Input_Tag");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, Input) == 0x000000, "Member 'WI_SubObjective_C_Get_Input_Tag::Input' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, Text) == 0x000008, "Member 'WI_SubObjective_C_Get_Input_Tag::Text' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, FoundBoundKey) == 0x000018, "Member 'WI_SubObjective_C_Get_Input_Tag::FoundBoundKey' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, BindingHasImage) == 0x000019, "Member 'WI_SubObjective_C_Get_Input_Tag::BindingHasImage' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_TryGetActionKeyForFirstBoundKey_ActionKeyText) == 0x000020, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_TryGetActionKeyForFirstBoundKey_ActionKeyText' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_TryGetActionKeyForFirstBoundKey_ReturnValue) == 0x000030, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_TryGetActionKeyForFirstBoundKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000048, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_Get_ClassLog_Name_name) == 0x000060, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_Get_ClassLog_Name_name' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_GetDecoratorByClass_ReturnValue) == 0x000070, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_GetDecoratorByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, K2Node_DynamicCast_AsRich_Text_Block_Input_Image_Decorator) == 0x000078, "Member 'WI_SubObjective_C_Get_Input_Tag::K2Node_DynamicCast_AsRich_Text_Block_Input_Image_Decorator' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WI_SubObjective_C_Get_Input_Tag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_Get_Input_Tag, CallFunc_HasImageBrushForTag_ReturnValue) == 0x000082, "Member 'WI_SubObjective_C_Get_Input_Tag::CallFunc_HasImageBrushForTag_ReturnValue' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.GetInputReplacementString
// 0x0180 (0x0180 - 0x0000)
struct WI_SubObjective_C_GetInputReplacementString final
{
public:
	class UInputAction*                           Input;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Input_Tag_Text;                       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Input_Tag_FoundBoundKey;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Input_Tag_BindingHasImage;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0010)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0010)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0128(0x0010)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_GetInputReplacementString) == 0x000008, "Wrong alignment on WI_SubObjective_C_GetInputReplacementString");
static_assert(sizeof(WI_SubObjective_C_GetInputReplacementString) == 0x000180, "Wrong size on WI_SubObjective_C_GetInputReplacementString");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, Input) == 0x000000, "Member 'WI_SubObjective_C_GetInputReplacementString::Input' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, ReturnValue) == 0x000008, "Member 'WI_SubObjective_C_GetInputReplacementString::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, Temp_bool_Variable) == 0x000018, "Member 'WI_SubObjective_C_GetInputReplacementString::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Get_Input_Tag_Text) == 0x000020, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Get_Input_Tag_Text' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Get_Input_Tag_FoundBoundKey) == 0x000030, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Get_Input_Tag_FoundBoundKey' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Get_Input_Tag_BindingHasImage) == 0x000031, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Get_Input_Tag_BindingHasImage' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, Temp_string_Variable) == 0x000038, "Member 'WI_SubObjective_C_GetInputReplacementString::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_MakeArray_Array) == 0x0000F8, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_MakeArray_Array_1) == 0x000108, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Format_ReturnValue) == 0x000118, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Format_ReturnValue_1) == 0x000128, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Conv_TextToString_ReturnValue) == 0x000138, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000148, "Member 'WI_SubObjective_C_GetInputReplacementString::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, Temp_bool_Variable_1) == 0x000158, "Member 'WI_SubObjective_C_GetInputReplacementString::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_Select_Default) == 0x000160, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_GetInputReplacementString, K2Node_Select_Default_1) == 0x000170, "Member 'WI_SubObjective_C_GetInputReplacementString::K2Node_Select_Default_1' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.GetSubObjectiveTitle
// 0x0010 (0x0010 - 0x0000)
struct WI_SubObjective_C_GetSubObjectiveTitle final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(WI_SubObjective_C_GetSubObjectiveTitle) == 0x000008, "Wrong alignment on WI_SubObjective_C_GetSubObjectiveTitle");
static_assert(sizeof(WI_SubObjective_C_GetSubObjectiveTitle) == 0x000010, "Wrong size on WI_SubObjective_C_GetSubObjectiveTitle");
static_assert(offsetof(WI_SubObjective_C_GetSubObjectiveTitle, NewParam) == 0x000000, "Member 'WI_SubObjective_C_GetSubObjectiveTitle::NewParam' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_SubObjective_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_PreConstruct) == 0x000001, "Wrong alignment on WI_SubObjective_C_PreConstruct");
static_assert(sizeof(WI_SubObjective_C_PreConstruct) == 0x000001, "Wrong size on WI_SubObjective_C_PreConstruct");
static_assert(offsetof(WI_SubObjective_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_SubObjective_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.SetCompletedStatus
// 0x0001 (0x0001 - 0x0000)
struct WI_SubObjective_C_SetCompletedStatus final
{
public:
	bool                                          IsCompleted;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_SetCompletedStatus) == 0x000001, "Wrong alignment on WI_SubObjective_C_SetCompletedStatus");
static_assert(sizeof(WI_SubObjective_C_SetCompletedStatus) == 0x000001, "Wrong size on WI_SubObjective_C_SetCompletedStatus");
static_assert(offsetof(WI_SubObjective_C_SetCompletedStatus, IsCompleted) == 0x000000, "Member 'WI_SubObjective_C_SetCompletedStatus::IsCompleted' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.SetSubObjectiveTitle
// 0x0118 (0x0118 - 0x0000)
struct WI_SubObjective_C_SetSubObjectiveTitle final
{
public:
	class FText                                   SubObjectiveTitle_0;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UInputAction*>                   InputActions_0;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 BuiltString;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetInputReplacementString_ReturnValue;    // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0010)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0010)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_SetSubObjectiveTitle) == 0x000008, "Wrong alignment on WI_SubObjective_C_SetSubObjectiveTitle");
static_assert(sizeof(WI_SubObjective_C_SetSubObjectiveTitle) == 0x000118, "Wrong size on WI_SubObjective_C_SetSubObjectiveTitle");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, SubObjectiveTitle_0) == 0x000000, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::SubObjectiveTitle_0' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, InputActions_0) == 0x000010, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::InputActions_0' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, BuiltString) == 0x000020, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::BuiltString' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, Temp_int_Array_Index_Variable) == 0x000048, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Array_Get_Item) == 0x000050, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_GetInputReplacementString_ReturnValue) == 0x000058, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_GetInputReplacementString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000078, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, K2Node_MakeArray_Array) == 0x0000C8, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000F8, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_SetSubObjectiveTitle, CallFunc_Replace_ReturnValue) == 0x000108, "Member 'WI_SubObjective_C_SetSubObjectiveTitle::CallFunc_Replace_ReturnValue' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.SetUnlockedStatus
// 0x0001 (0x0001 - 0x0000)
struct WI_SubObjective_C_SetUnlockedStatus final
{
public:
	bool                                          Locked;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_SetUnlockedStatus) == 0x000001, "Wrong alignment on WI_SubObjective_C_SetUnlockedStatus");
static_assert(sizeof(WI_SubObjective_C_SetUnlockedStatus) == 0x000001, "Wrong size on WI_SubObjective_C_SetUnlockedStatus");
static_assert(offsetof(WI_SubObjective_C_SetUnlockedStatus, Locked) == 0x000000, "Member 'WI_SubObjective_C_SetUnlockedStatus::Locked' has a wrong offset!");

// Function WI_SubObjective.WI_SubObjective_C.UpdateVisuals
// 0x0020 (0x0020 - 0x0000)
struct WI_SubObjective_C_UpdateVisuals final
{
public:
	class ASubObjective*                          SubObjective;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0010)()
	bool                                          CallFunc_GetIsCompleted_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsUnlocked_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_SubObjective_C_UpdateVisuals) == 0x000008, "Wrong alignment on WI_SubObjective_C_UpdateVisuals");
static_assert(sizeof(WI_SubObjective_C_UpdateVisuals) == 0x000020, "Wrong size on WI_SubObjective_C_UpdateVisuals");
static_assert(offsetof(WI_SubObjective_C_UpdateVisuals, SubObjective) == 0x000000, "Member 'WI_SubObjective_C_UpdateVisuals::SubObjective' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_UpdateVisuals, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WI_SubObjective_C_UpdateVisuals::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_UpdateVisuals, CallFunc_GetIsCompleted_ReturnValue) == 0x000018, "Member 'WI_SubObjective_C_UpdateVisuals::CallFunc_GetIsCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_UpdateVisuals, CallFunc_GetIsUnlocked_ReturnValue) == 0x000019, "Member 'WI_SubObjective_C_UpdateVisuals::CallFunc_GetIsUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_SubObjective_C_UpdateVisuals, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'WI_SubObjective_C_UpdateVisuals::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

