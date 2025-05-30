#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PlantedEssentialBomba

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WI_PlantedEssentialBomba.WI_PlantedEssentialBomba_C.ExecuteUbergraph_WI_PlantedEssentialBomba
// 0x0080 (0x0080 - 0x0000)
struct WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0028(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0068(0x0010)()
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba) == 0x000008, "Wrong alignment on WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba");
static_assert(sizeof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba) == 0x000080, "Wrong size on WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, EntryPoint) == 0x000000, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, K2Node_Event_MyGeometry) == 0x000028, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x000064, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000068, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x000078, "Member 'WI_PlantedEssentialBomba_C_ExecuteUbergraph_WI_PlantedEssentialBomba::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");

// Function WI_PlantedEssentialBomba.WI_PlantedEssentialBomba_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_PlantedEssentialBomba_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PlantedEssentialBomba_C_Tick) == 0x000004, "Wrong alignment on WI_PlantedEssentialBomba_C_Tick");
static_assert(sizeof(WI_PlantedEssentialBomba_C_Tick) == 0x00003C, "Wrong size on WI_PlantedEssentialBomba_C_Tick");
static_assert(offsetof(WI_PlantedEssentialBomba_C_Tick, MyGeometry) == 0x000000, "Member 'WI_PlantedEssentialBomba_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_PlantedEssentialBomba_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_PlantedEssentialBomba_C_Tick::InDeltaTime' has a wrong offset!");

}

