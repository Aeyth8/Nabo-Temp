#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPCommonSetting_MultiChoice

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.ExecuteUbergraph_WI_JPCommonSetting_MultiChoice
// 0x0198 (0x0198 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0010(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InIndex;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0034(0x0008)(NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_JPCommonSetting_MultiChoice_Option_C* CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InIndex)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0064(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00A0(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0118(0x0078)(ConstParm)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice) == 0x000008, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice) == 0x000198, "Wrong size on WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, EntryPoint) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_Event_IsDesignTime) == 0x000008, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_Array_Get_Item) == 0x000010, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_CustomEvent_InIndex) == 0x000028, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_CustomEvent_InIndex' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_MakeStruct_SlateChildSize) == 0x000034, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000058, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_Event_MyGeometry) == 0x000064, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_Event_MouseEvent_1) == 0x0000A0, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, K2Node_Event_MouseEvent) == 0x000118, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice, CallFunc_AddChild_ReturnValue) == 0x000190, "Member 'WI_JPCommonSetting_MultiChoice_C_ExecuteUbergraph_WI_JPCommonSetting_MultiChoice::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.GetValue
// 0x00E8 (0x00E8 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_GetValue final
{
public:
	TSet<int32>                                   OutResult;                                         // 0x0000(0x0050)(Parm, OutParm)
	TSet<int32>                                   Result;                                            // 0x0050(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_JPCommonSetting_MultiChoice_Option_C* K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValue_Checked;                         // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_GetValue) == 0x000008, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_GetValue");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_GetValue) == 0x0000E8, "Wrong size on WI_JPCommonSetting_MultiChoice_C_GetValue");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, OutResult) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::OutResult' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, Result) == 0x000050, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::Result' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_GetAllChildren_ReturnValue) == 0x0000B0, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option) == 0x0000D8, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_GetValue, CallFunc_GetValue_Checked) == 0x0000E1, "Member 'WI_JPCommonSetting_MultiChoice_C_GetValue::CallFunc_GetValue_Checked' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_OnMouseEnter) == 0x000008, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_OnMouseEnter");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_OnMouseEnter) == 0x0000B0, "Wrong size on WI_JPCommonSetting_MultiChoice_C_OnMouseEnter");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WI_JPCommonSetting_MultiChoice_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_OnMouseLeave) == 0x000008, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_OnMouseLeave");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_OnMouseLeave) == 0x000078, "Wrong size on WI_JPCommonSetting_MultiChoice_C_OnMouseLeave");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.OnOptionChanged
// 0x0004 (0x0004 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_OnOptionChanged final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_OnOptionChanged) == 0x000004, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_OnOptionChanged");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_OnOptionChanged) == 0x000004, "Wrong size on WI_JPCommonSetting_MultiChoice_C_OnOptionChanged");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_OnOptionChanged, InIndex) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_OnOptionChanged::InIndex' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_PreConstruct) == 0x000001, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_PreConstruct");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_PreConstruct) == 0x000001, "Wrong size on WI_JPCommonSetting_MultiChoice_C_PreConstruct");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_JPCommonSetting_MultiChoice.WI_JPCommonSetting_MultiChoice_C.SetValue
// 0x00A8 (0x00A8 - 0x0000)
struct WI_JPCommonSetting_MultiChoice_C_SetValue final
{
public:
	TSet<int32>                                   InValue;                                           // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UWidget*>                        CachedChildren;                                    // 0x0050(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_JPCommonSetting_MultiChoice_Option_C* K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPCommonSetting_MultiChoice_C_SetValue) == 0x000008, "Wrong alignment on WI_JPCommonSetting_MultiChoice_C_SetValue");
static_assert(sizeof(WI_JPCommonSetting_MultiChoice_C_SetValue) == 0x0000A8, "Wrong size on WI_JPCommonSetting_MultiChoice_C_SetValue");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, InValue) == 0x000000, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::InValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CachedChildren) == 0x000050, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CachedChildren' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, Temp_int_Array_Index_Variable) == 0x000060, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_Set_Contains_ReturnValue) == 0x000068, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_GetAllChildren_ReturnValue) == 0x000070, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_Array_Get_Item) == 0x000088, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option) == 0x000098, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::K2Node_DynamicCast_AsWI_JPCommon_Setting_Multi_Choice_Option' has a wrong offset!");
static_assert(offsetof(WI_JPCommonSetting_MultiChoice_C_SetValue, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WI_JPCommonSetting_MultiChoice_C_SetValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

