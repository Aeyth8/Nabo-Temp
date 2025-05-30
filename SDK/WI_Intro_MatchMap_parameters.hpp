#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_Intro_MatchMap

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WI_Intro_MatchMap.WI_Intro_MatchMap_C.ExecuteUbergraph_WI_Intro_MatchMap
// 0x0090 (0x0090 - 0x0000)
struct WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ConvertLevelNameToFriendlyName_Return;    // 0x0018(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0010)()
};
static_assert(alignof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap) == 0x000008, "Wrong alignment on WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap");
static_assert(sizeof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap) == 0x000090, "Wrong size on WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, EntryPoint) == 0x000000, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000008, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, CallFunc_ConvertLevelNameToFriendlyName_Return) == 0x000018, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::CallFunc_ConvertLevelNameToFriendlyName_Return' has a wrong offset!");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, K2Node_MakeArray_Array) == 0x000070, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WI_Intro_MatchMap_C_ExecuteUbergraph_WI_Intro_MatchMap::CallFunc_Format_ReturnValue' has a wrong offset!");

}

