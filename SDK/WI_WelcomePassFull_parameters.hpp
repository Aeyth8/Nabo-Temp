#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_WelcomePassFull

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JP_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.ApplyViewModel
// 0x0004 (0x0004 - 0x0000)
struct WI_WelcomePassFull_C_ApplyViewModel final
{
public:
	struct FSeasonPassContainerViewModel          ViewModel;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WI_WelcomePassFull_C_ApplyViewModel) == 0x000004, "Wrong alignment on WI_WelcomePassFull_C_ApplyViewModel");
static_assert(sizeof(WI_WelcomePassFull_C_ApplyViewModel) == 0x000004, "Wrong size on WI_WelcomePassFull_C_ApplyViewModel");
static_assert(offsetof(WI_WelcomePassFull_C_ApplyViewModel, ViewModel) == 0x000000, "Member 'WI_WelcomePassFull_C_ApplyViewModel::ViewModel' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.ExecuteUbergraph_WI_WelcomePassFull
// 0x00E0 (0x00E0 - 0x0000)
struct WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSeasonPassContainerViewModel          K2Node_Event_ViewModel;                            // 0x0014(0x0004)(ConstParm, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSeasonPassTierViewModel               CallFunc_Array_Get_Item;                           // 0x0020(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetForwardOffset_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetBackOffset_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FInterpEaseInOut_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpEaseInOut_A_ImplicitCast;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpEaseInOut_Alpha_ImplicitCast;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull) == 0x000008, "Wrong alignment on WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull");
static_assert(sizeof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull) == 0x0000E0, "Wrong size on WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, EntryPoint) == 0x000000, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, Temp_int_Variable) == 0x000010, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, K2Node_Event_ViewModel) == 0x000014, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::K2Node_Event_ViewModel' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Array_Get_Item) == 0x000020, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_GetChildrenCount_ReturnValue) == 0x000050, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, Temp_int_Variable_1) == 0x000060, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_GetScrollOffset_ReturnValue) == 0x000064, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000068, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_Less_IntInt_ReturnValue_1) == 0x00006C, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_GetForwardOffset_ReturnValue) == 0x000070, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_GetForwardOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_GetBackOffset_ReturnValue) == 0x000078, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_GetBackOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, K2Node_Event_MyGeometry) == 0x000080, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, K2Node_Event_InDeltaTime) == 0x0000B8, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_FInterpEaseInOut_ReturnValue) == 0x0000C0, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_FInterpEaseInOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_FInterpEaseInOut_A_ImplicitCast) == 0x0000C8, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_FInterpEaseInOut_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_FInterpEaseInOut_Alpha_ImplicitCast) == 0x0000D0, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_FInterpEaseInOut_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull, CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast) == 0x0000D8, "Member 'WI_WelcomePassFull_C_ExecuteUbergraph_WI_WelcomePassFull::CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.FocusOnHighestTierUnlocked
// 0x0058 (0x0058 - 0x0000)
struct WI_WelcomePassFull_C_FocusOnHighestTierUnlocked final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked) == 0x000008, "Wrong alignment on WI_WelcomePassFull_C_FocusOnHighestTierUnlocked");
static_assert(sizeof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked) == 0x000058, "Wrong size on WI_WelcomePassFull_C_FocusOnHighestTierUnlocked");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_GetDesiredSize_ReturnValue) == 0x000018, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_GetChildrenCount_ReturnValue) == 0x000028, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_BreakVector2D_X) == 0x000030, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000040, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_FocusOnHighestTierUnlocked, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'WI_WelcomePassFull_C_FocusOnHighestTierUnlocked::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.GetBackOffset
// 0x0050 (0x0050 - 0x0000)
struct WI_WelcomePassFull_C_GetBackOffset final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_GetBackOffset) == 0x000008, "Wrong alignment on WI_WelcomePassFull_C_GetBackOffset");
static_assert(sizeof(WI_WelcomePassFull_C_GetBackOffset) == 0x000050, "Wrong size on WI_WelcomePassFull_C_GetBackOffset");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, ReturnValue) == 0x000000, "Member 'WI_WelcomePassFull_C_GetBackOffset::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_GetDesiredSize_ReturnValue) == 0x000008, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_BreakVector2D_X) == 0x000020, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000030, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_Multiply_IntInt_ReturnValue) == 0x000044, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetBackOffset, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000048, "Member 'WI_WelcomePassFull_C_GetBackOffset::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.GetForwardOffset
// 0x0050 (0x0050 - 0x0000)
struct WI_WelcomePassFull_C_GetForwardOffset final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_GetForwardOffset) == 0x000008, "Wrong alignment on WI_WelcomePassFull_C_GetForwardOffset");
static_assert(sizeof(WI_WelcomePassFull_C_GetForwardOffset) == 0x000050, "Wrong size on WI_WelcomePassFull_C_GetForwardOffset");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, ReturnValue) == 0x000000, "Member 'WI_WelcomePassFull_C_GetForwardOffset::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_GetDesiredSize_ReturnValue) == 0x000008, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_BreakVector2D_X) == 0x000020, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000030, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_Multiply_IntInt_ReturnValue) == 0x000044, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_GetForwardOffset, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000048, "Member 'WI_WelcomePassFull_C_GetForwardOffset::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_WelcomePassFull_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_PreConstruct) == 0x000001, "Wrong alignment on WI_WelcomePassFull_C_PreConstruct");
static_assert(sizeof(WI_WelcomePassFull_C_PreConstruct) == 0x000001, "Wrong size on WI_WelcomePassFull_C_PreConstruct");
static_assert(offsetof(WI_WelcomePassFull_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_WelcomePassFull_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_WelcomePassFull_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_Tick) == 0x000004, "Wrong alignment on WI_WelcomePassFull_C_Tick");
static_assert(sizeof(WI_WelcomePassFull_C_Tick) == 0x00003C, "Wrong size on WI_WelcomePassFull_C_Tick");
static_assert(offsetof(WI_WelcomePassFull_C_Tick, MyGeometry) == 0x000000, "Member 'WI_WelcomePassFull_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_WelcomePassFull_C_Tick::InDeltaTime' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.UpdateButtonVisibilityAfterBackScroll
// 0x0001 (0x0001 - 0x0000)
struct WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll final
{
public:
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll) == 0x000001, "Wrong alignment on WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll");
static_assert(sizeof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll) == 0x000001, "Wrong size on WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll");
static_assert(offsetof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll, CallFunc_Greater_IntInt_ReturnValue) == 0x000000, "Member 'WI_WelcomePassFull_C_UpdateButtonVisibilityAfterBackScroll::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WI_WelcomePassFull.WI_WelcomePassFull_C.UpdateButtonVisibilityAfterForwardScroll
// 0x000C (0x000C - 0x0000)
struct WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll final
{
public:
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll) == 0x000004, "Wrong alignment on WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll");
static_assert(sizeof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll) == 0x00000C, "Wrong size on WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll");
static_assert(offsetof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll, CallFunc_GetChildrenCount_ReturnValue) == 0x000000, "Member 'WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'WI_WelcomePassFull_C_UpdateButtonVisibilityAfterForwardScroll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

