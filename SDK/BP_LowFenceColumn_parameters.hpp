#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LowFenceColumn

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LowFenceColumn.BP_LowFenceColumn_C.ExecuteUbergraph_BP_LowFenceColumn
// 0x0004 (0x0004 - 0x0000)
struct BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn) == 0x000004, "Wrong alignment on BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn");
static_assert(sizeof(BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn) == 0x000004, "Wrong size on BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn");
static_assert(offsetof(BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn, EntryPoint) == 0x000000, "Member 'BP_LowFenceColumn_C_ExecuteUbergraph_BP_LowFenceColumn::EntryPoint' has a wrong offset!");

// Function BP_LowFenceColumn.BP_LowFenceColumn_C.SetMaterialBasedOnLevel
// 0x0018 (0x0018 - 0x0000)
struct BP_LowFenceColumn_C_SetMaterialBasedOnLevel final
{
public:
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LowFenceColumn_C_SetMaterialBasedOnLevel) == 0x000008, "Wrong alignment on BP_LowFenceColumn_C_SetMaterialBasedOnLevel");
static_assert(sizeof(BP_LowFenceColumn_C_SetMaterialBasedOnLevel) == 0x000018, "Wrong size on BP_LowFenceColumn_C_SetMaterialBasedOnLevel");
static_assert(offsetof(BP_LowFenceColumn_C_SetMaterialBasedOnLevel, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000000, "Member 'BP_LowFenceColumn_C_SetMaterialBasedOnLevel::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LowFenceColumn_C_SetMaterialBasedOnLevel, K2Node_SwitchString_CmpSuccess) == 0x000010, "Member 'BP_LowFenceColumn_C_SetMaterialBasedOnLevel::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

}

