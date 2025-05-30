#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_IncomeChangeNotification

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WI_IncomeChangeNotification.WI_IncomeChangeNotification_C.ExecuteUbergraph_WI_IncomeChangeNotification
// 0x00A8 (0x00A8 - 0x0000)
struct WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_IncomeChange;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0044(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0014)()
};
static_assert(alignof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification) == 0x000008, "Wrong alignment on WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification");
static_assert(sizeof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification) == 0x0000A8, "Wrong size on WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, EntryPoint) == 0x000000, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, Temp_struct_Variable) == 0x000004, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, Temp_struct_Variable_1) == 0x000014, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, Temp_bool_Variable) == 0x000024, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000025, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_Select_Default) == 0x000028, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_CustomEvent_IncomeChange) == 0x000030, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_CustomEvent_IncomeChange' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, Temp_bool_Variable_1) == 0x000040, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_Event_MyGeometry) == 0x000044, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_Event_InDeltaTime) == 0x00007C, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_Select_Default_1) == 0x000080, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'WI_IncomeChangeNotification_C_ExecuteUbergraph_WI_IncomeChangeNotification::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WI_IncomeChangeNotification.WI_IncomeChangeNotification_C.Play Cosmetics
// 0x0008 (0x0008 - 0x0000)
struct WI_IncomeChangeNotification_C_Play_Cosmetics final
{
public:
	double                                        IncomeChange_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_IncomeChangeNotification_C_Play_Cosmetics) == 0x000008, "Wrong alignment on WI_IncomeChangeNotification_C_Play_Cosmetics");
static_assert(sizeof(WI_IncomeChangeNotification_C_Play_Cosmetics) == 0x000008, "Wrong size on WI_IncomeChangeNotification_C_Play_Cosmetics");
static_assert(offsetof(WI_IncomeChangeNotification_C_Play_Cosmetics, IncomeChange_0) == 0x000000, "Member 'WI_IncomeChangeNotification_C_Play_Cosmetics::IncomeChange_0' has a wrong offset!");

// Function WI_IncomeChangeNotification.WI_IncomeChangeNotification_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_IncomeChangeNotification_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_IncomeChangeNotification_C_Tick) == 0x000004, "Wrong alignment on WI_IncomeChangeNotification_C_Tick");
static_assert(sizeof(WI_IncomeChangeNotification_C_Tick) == 0x00003C, "Wrong size on WI_IncomeChangeNotification_C_Tick");
static_assert(offsetof(WI_IncomeChangeNotification_C_Tick, MyGeometry) == 0x000000, "Member 'WI_IncomeChangeNotification_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_IncomeChangeNotification_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_IncomeChangeNotification_C_Tick::InDeltaTime' has a wrong offset!");

}

