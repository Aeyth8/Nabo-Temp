#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_StealingValuables

#include "Basic.hpp"


namespace SDK::Params
{

// Function SOA_StealingValuables.SOA_StealingValuables_C.ExecuteUbergraph_SOA_StealingValuables
// 0x0040 (0x0040 - 0x0000)
struct SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ValuableItem_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	class ABP_ValuableItem_C*                     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables) == 0x000008, "Wrong alignment on SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables");
static_assert(sizeof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables) == 0x000040, "Wrong size on SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, EntryPoint) == 0x000000, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::EntryPoint' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, Temp_int_Array_Index_Variable) == 0x000010, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_Array_Get_Item) == 0x000030, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'SOA_StealingValuables_C_ExecuteUbergraph_SOA_StealingValuables::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SOA_StealingValuables.SOA_StealingValuables_C.IsSubObjectiveCompleted
// 0x0001 (0x0001 - 0x0000)
struct SOA_StealingValuables_C_IsSubObjectiveCompleted final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_StealingValuables_C_IsSubObjectiveCompleted) == 0x000001, "Wrong alignment on SOA_StealingValuables_C_IsSubObjectiveCompleted");
static_assert(sizeof(SOA_StealingValuables_C_IsSubObjectiveCompleted) == 0x000001, "Wrong size on SOA_StealingValuables_C_IsSubObjectiveCompleted");
static_assert(offsetof(SOA_StealingValuables_C_IsSubObjectiveCompleted, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'SOA_StealingValuables_C_IsSubObjectiveCompleted::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

}

