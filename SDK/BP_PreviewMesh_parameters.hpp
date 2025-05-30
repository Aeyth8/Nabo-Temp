#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewMesh

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PreviewMesh.BP_PreviewMesh_C.ExecuteUbergraph_BP_PreviewMesh
// 0x0048 (0x0048 - 0x0000)
struct BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ACharacter* Character)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_CustomEvent_Character;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh) == 0x000008, "Wrong alignment on BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh");
static_assert(sizeof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh) == 0x000048, "Wrong size on BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, EntryPoint) == 0x000000, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, CallFunc_GetInstigator_ReturnValue) == 0x000028, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, K2Node_CustomEvent_Character) == 0x000030, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000038, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_PreviewMesh_C_ExecuteUbergraph_BP_PreviewMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PreviewMesh.BP_PreviewMesh_C.IncrementMesh
// 0x0018 (0x0018 - 0x0000)
struct BP_PreviewMesh_C_IncrementMesh final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetMesh_Success;                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_IncrementMesh) == 0x000004, "Wrong alignment on BP_PreviewMesh_C_IncrementMesh");
static_assert(sizeof(BP_PreviewMesh_C_IncrementMesh) == 0x000018, "Wrong size on BP_PreviewMesh_C_IncrementMesh");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, Success) == 0x000000, "Member 'BP_PreviewMesh_C_IncrementMesh::Success' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, Temp_int_Variable) == 0x000004, "Member 'BP_PreviewMesh_C_IncrementMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, CallFunc_SetMesh_Success) == 0x000008, "Member 'BP_PreviewMesh_C_IncrementMesh::CallFunc_SetMesh_Success' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, CallFunc_Array_Find_ReturnValue) == 0x00000C, "Member 'BP_PreviewMesh_C_IncrementMesh::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_PreviewMesh_C_IncrementMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_IncrementMesh, CallFunc_Array_Contains_ReturnValue) == 0x000014, "Member 'BP_PreviewMesh_C_IncrementMesh::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_PreviewMesh.BP_PreviewMesh_C.OwnerDied
// 0x0008 (0x0008 - 0x0000)
struct BP_PreviewMesh_C_OwnerDied final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_OwnerDied) == 0x000008, "Wrong alignment on BP_PreviewMesh_C_OwnerDied");
static_assert(sizeof(BP_PreviewMesh_C_OwnerDied) == 0x000008, "Wrong size on BP_PreviewMesh_C_OwnerDied");
static_assert(offsetof(BP_PreviewMesh_C_OwnerDied, Character) == 0x000000, "Member 'BP_PreviewMesh_C_OwnerDied::Character' has a wrong offset!");

// Function BP_PreviewMesh.BP_PreviewMesh_C.ResetMesh
// 0x0002 (0x0002 - 0x0000)
struct BP_PreviewMesh_C_ResetMesh final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetMesh_Success;                          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_ResetMesh) == 0x000001, "Wrong alignment on BP_PreviewMesh_C_ResetMesh");
static_assert(sizeof(BP_PreviewMesh_C_ResetMesh) == 0x000002, "Wrong size on BP_PreviewMesh_C_ResetMesh");
static_assert(offsetof(BP_PreviewMesh_C_ResetMesh, Success) == 0x000000, "Member 'BP_PreviewMesh_C_ResetMesh::Success' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_ResetMesh, CallFunc_SetMesh_Success) == 0x000001, "Member 'BP_PreviewMesh_C_ResetMesh::CallFunc_SetMesh_Success' has a wrong offset!");

// Function BP_PreviewMesh.BP_PreviewMesh_C.SetMesh
// 0x0018 (0x0018 - 0x0000)
struct BP_PreviewMesh_C_SetMesh final
{
public:
	int32                                         ArraySlot;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_SetMesh) == 0x000008, "Wrong alignment on BP_PreviewMesh_C_SetMesh");
static_assert(sizeof(BP_PreviewMesh_C_SetMesh) == 0x000018, "Wrong size on BP_PreviewMesh_C_SetMesh");
static_assert(offsetof(BP_PreviewMesh_C_SetMesh, ArraySlot) == 0x000000, "Member 'BP_PreviewMesh_C_SetMesh::ArraySlot' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_SetMesh, Success) == 0x000004, "Member 'BP_PreviewMesh_C_SetMesh::Success' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_SetMesh, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000005, "Member 'BP_PreviewMesh_C_SetMesh::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_SetMesh, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_PreviewMesh_C_SetMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PreviewMesh_C_SetMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000010, "Member 'BP_PreviewMesh_C_SetMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_PreviewMesh.BP_PreviewMesh_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_PreviewMesh_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_ResetMesh_Success;                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PreviewMesh_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_PreviewMesh_C_UserConstructionScript");
static_assert(sizeof(BP_PreviewMesh_C_UserConstructionScript) == 0x000001, "Wrong size on BP_PreviewMesh_C_UserConstructionScript");
static_assert(offsetof(BP_PreviewMesh_C_UserConstructionScript, CallFunc_ResetMesh_Success) == 0x000000, "Member 'BP_PreviewMesh_C_UserConstructionScript::CallFunc_ResetMesh_Success' has a wrong offset!");

}

