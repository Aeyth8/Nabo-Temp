#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_InterpolatingProgressbar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.ExecuteUbergraph_WI_InterpolatingProgressbar
// 0x0090 (0x0090 - 0x0000)
struct WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0054(0x0014)()
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_InterpolateBar_DeltaTime_ImplicitCast;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar");
static_assert(sizeof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar) == 0x000090, "Wrong size on WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, EntryPoint) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, K2Node_Event_MyGeometry) == 0x000004, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, K2Node_Event_IsDesignTime) == 0x000040, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000050, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, K2Node_MakeStruct_SlateColor) == 0x000054, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, CallFunc_MakeVector2D_ReturnValue) == 0x000068, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, CallFunc_MakeVector2D_ReturnValue_1) == 0x000078, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar, CallFunc_InterpolateBar_DeltaTime_ImplicitCast) == 0x000088, "Member 'WI_InterpolatingProgressbar_C_ExecuteUbergraph_WI_InterpolatingProgressbar::CallFunc_InterpolateBar_DeltaTime_ImplicitCast' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.InterpolateBar
// 0x0018 (0x0018 - 0x0000)
struct WI_InterpolatingProgressbar_C_InterpolateBar final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpEaseInOut_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_InterpolateBar) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_InterpolateBar");
static_assert(sizeof(WI_InterpolatingProgressbar_C_InterpolateBar) == 0x000018, "Wrong size on WI_InterpolatingProgressbar_C_InterpolateBar");
static_assert(offsetof(WI_InterpolatingProgressbar_C_InterpolateBar, DeltaTime) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_InterpolateBar::DeltaTime' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_InterpolateBar, CallFunc_FInterpEaseInOut_ReturnValue) == 0x000008, "Member 'WI_InterpolatingProgressbar_C_InterpolateBar::CallFunc_FInterpEaseInOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_InterpolateBar, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000010, "Member 'WI_InterpolatingProgressbar_C_InterpolateBar::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_InterpolatingProgressbar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_PreConstruct) == 0x000001, "Wrong alignment on WI_InterpolatingProgressbar_C_PreConstruct");
static_assert(sizeof(WI_InterpolatingProgressbar_C_PreConstruct) == 0x000001, "Wrong size on WI_InterpolatingProgressbar_C_PreConstruct");
static_assert(offsetof(WI_InterpolatingProgressbar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.SetFontSize
// 0x0060 (0x0060 - 0x0000)
struct WI_InterpolatingProgressbar_C_SetFontSize final
{
public:
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0000(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_SetFontSize) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_SetFontSize");
static_assert(sizeof(WI_InterpolatingProgressbar_C_SetFontSize) == 0x000060, "Wrong size on WI_InterpolatingProgressbar_C_SetFontSize");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetFontSize, K2Node_MakeStruct_SlateFontInfo) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_SetFontSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.SetProgress
// 0x0028 (0x0028 - 0x0000)
struct WI_InterpolatingProgressbar_C_SetProgress final
{
public:
	double                                        New_Stamina;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxStamina;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_SetProgress) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_SetProgress");
static_assert(sizeof(WI_InterpolatingProgressbar_C_SetProgress) == 0x000028, "Wrong size on WI_InterpolatingProgressbar_C_SetProgress");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetProgress, New_Stamina) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_SetProgress::New_Stamina' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetProgress, MaxStamina) == 0x000008, "Member 'WI_InterpolatingProgressbar_C_SetProgress::MaxStamina' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetProgress, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WI_InterpolatingProgressbar_C_SetProgress::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetProgress, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'WI_InterpolatingProgressbar_C_SetProgress::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetProgress, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000020, "Member 'WI_InterpolatingProgressbar_C_SetProgress::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.SetText
// 0x00D8 (0x00D8 - 0x0000)
struct WI_InterpolatingProgressbar_C_SetText final
{
public:
	double                                        New_Stamina;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0008(0x0010)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0048)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0070(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0010)()
};
static_assert(alignof(WI_InterpolatingProgressbar_C_SetText) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_SetText");
static_assert(sizeof(WI_InterpolatingProgressbar_C_SetText) == 0x0000D8, "Wrong size on WI_InterpolatingProgressbar_C_SetText");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, New_Stamina) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_SetText::New_Stamina' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000008, "Member 'WI_InterpolatingProgressbar_C_SetText::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, CallFunc_MakeLiteralInt_ReturnValue) == 0x000018, "Member 'WI_InterpolatingProgressbar_C_SetText::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WI_InterpolatingProgressbar_C_SetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000068, "Member 'WI_InterpolatingProgressbar_C_SetText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000070, "Member 'WI_InterpolatingProgressbar_C_SetText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WI_InterpolatingProgressbar_C_SetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_SetText, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WI_InterpolatingProgressbar_C_SetText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_InterpolatingProgressbar_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_Tick) == 0x000004, "Wrong alignment on WI_InterpolatingProgressbar_C_Tick");
static_assert(sizeof(WI_InterpolatingProgressbar_C_Tick) == 0x00003C, "Wrong size on WI_InterpolatingProgressbar_C_Tick");
static_assert(offsetof(WI_InterpolatingProgressbar_C_Tick, MyGeometry) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_InterpolatingProgressbar_C_Tick::InDeltaTime' has a wrong offset!");

// Function WI_InterpolatingProgressbar.WI_InterpolatingProgressbar_C.UpdateValues
// 0x0010 (0x0010 - 0x0000)
struct WI_InterpolatingProgressbar_C_UpdateValues final
{
public:
	double                                        CurrentStamina;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxStamina;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_InterpolatingProgressbar_C_UpdateValues) == 0x000008, "Wrong alignment on WI_InterpolatingProgressbar_C_UpdateValues");
static_assert(sizeof(WI_InterpolatingProgressbar_C_UpdateValues) == 0x000010, "Wrong size on WI_InterpolatingProgressbar_C_UpdateValues");
static_assert(offsetof(WI_InterpolatingProgressbar_C_UpdateValues, CurrentStamina) == 0x000000, "Member 'WI_InterpolatingProgressbar_C_UpdateValues::CurrentStamina' has a wrong offset!");
static_assert(offsetof(WI_InterpolatingProgressbar_C_UpdateValues, MaxStamina) == 0x000008, "Member 'WI_InterpolatingProgressbar_C_UpdateValues::MaxStamina' has a wrong offset!");

}

