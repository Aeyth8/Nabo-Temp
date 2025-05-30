#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_ThrowAwayTrash

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JP_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.Add Existing Tasks
// 0x00B0 (0x00B0 - 0x0000)
struct SOA_ThrowAwayTrash_C_Add_Existing_Tasks final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_GarbageItem_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GarbageItem_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamAtPoint_bFoundTeam;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetTeamAtPoint_TeamVolumeGameplayTag;     // 0x0064(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTeam                                  CallFunc_GetTeamAtPoint_ReturnValue;               // 0x0070(0x0038)(ConstParm, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks) == 0x000008, "Wrong alignment on SOA_ThrowAwayTrash_C_Add_Existing_Tasks");
static_assert(sizeof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks) == 0x0000B0, "Wrong size on SOA_ThrowAwayTrash_C_Add_Existing_Tasks");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, Temp_int_Array_Index_Variable) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_Array_Get_Item) == 0x000038, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_GetTeamAtPoint_bFoundTeam) == 0x000060, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_GetTeamAtPoint_bFoundTeam' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_GetTeamAtPoint_TeamVolumeGameplayTag) == 0x000064, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_GetTeamAtPoint_TeamVolumeGameplayTag' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_GetTeamAtPoint_ReturnValue) == 0x000070, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_GetTeamAtPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_Add_Existing_Tasks, CallFunc_BooleanAND_ReturnValue) == 0x0000A9, "Member 'SOA_ThrowAwayTrash_C_Add_Existing_Tasks::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.CheckIfSubObjectiveCompleted
// 0x0008 (0x0008 - 0x0000)
struct SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted) == 0x000004, "Wrong alignment on SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted");
static_assert(sizeof(SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted) == 0x000008, "Wrong size on SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000004, "Member 'SOA_ThrowAwayTrash_C_CheckIfSubObjectiveCompleted::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.CreateRemainingTasks
// 0x00C0 (0x00C0 - 0x0000)
struct SOA_ThrowAwayTrash_C_CreateRemainingTasks final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GarbageSpawner_C*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USOD_ThrowAwayTrash_C*                  K2Node_DynamicCast_AsSOD_Throw_Away_Trash;         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GarbageItem_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_CreateRemainingTasks) == 0x000010, "Wrong alignment on SOA_ThrowAwayTrash_C_CreateRemainingTasks");
static_assert(sizeof(SOA_ThrowAwayTrash_C_CreateRemainingTasks) == 0x0000C0, "Wrong size on SOA_ThrowAwayTrash_C_CreateRemainingTasks");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, Temp_int_Variable) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Array_Get_Item) == 0x000020, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000090, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, K2Node_DynamicCast_AsSOD_Throw_Away_Trash) == 0x000098, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::K2Node_DynamicCast_AsSOD_Throw_Away_Trash' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A8, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B4, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000B8, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_Less_IntInt_ReturnValue) == 0x0000BC, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_CreateRemainingTasks, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000BD, "Member 'SOA_ThrowAwayTrash_C_CreateRemainingTasks::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.ExecuteUbergraph_SOA_ThrowAwayTrash
// 0x0010 (0x0010 - 0x0000)
struct SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash) == 0x000008, "Wrong alignment on SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash");
static_assert(sizeof(SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash) == 0x000010, "Wrong size on SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash");
static_assert(offsetof(SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash, EntryPoint) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash::EntryPoint' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash, K2Node_CustomEvent_DestroyedActor) == 0x000008, "Member 'SOA_ThrowAwayTrash_C_ExecuteUbergraph_SOA_ThrowAwayTrash::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.GarbageCollected
// 0x0008 (0x0008 - 0x0000)
struct SOA_ThrowAwayTrash_C_GarbageCollected final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_GarbageCollected) == 0x000008, "Wrong alignment on SOA_ThrowAwayTrash_C_GarbageCollected");
static_assert(sizeof(SOA_ThrowAwayTrash_C_GarbageCollected) == 0x000008, "Wrong size on SOA_ThrowAwayTrash_C_GarbageCollected");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GarbageCollected, DestroyedActor) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_GarbageCollected::DestroyedActor' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.GetFittingSpawnPositions
// 0x0080 (0x0080 - 0x0000)
struct SOA_ThrowAwayTrash_C_GetFittingSpawnPositions final
{
public:
	const class UClass*                           Temp_class_Variable;                               // 0x0000(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_GarbageSpawner_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GarbageSpawner_C*                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeam                                  CallFunc_GetTeam_ReturnValue;                      // 0x0040(0x0038)(ConstParm, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions) == 0x000008, "Wrong alignment on SOA_ThrowAwayTrash_C_GetFittingSpawnPositions");
static_assert(sizeof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions) == 0x000080, "Wrong size on SOA_ThrowAwayTrash_C_GetFittingSpawnPositions");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, Temp_class_Variable) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Array_Get_Item) == 0x000030, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_GetTeam_ReturnValue) == 0x000040, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_GetTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_Array_Contains_ReturnValue) == 0x000078, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000079, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_BooleanAND_ReturnValue) == 0x00007A, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetFittingSpawnPositions, CallFunc_BooleanAND_ReturnValue_1) == 0x00007B, "Member 'SOA_ThrowAwayTrash_C_GetFittingSpawnPositions::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function SOA_ThrowAwayTrash.SOA_ThrowAwayTrash_C.GetText
// 0x0088 (0x0088 - 0x0000)
struct SOA_ThrowAwayTrash_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0010)()
};
static_assert(alignof(SOA_ThrowAwayTrash_C_GetText) == 0x000008, "Wrong alignment on SOA_ThrowAwayTrash_C_GetText");
static_assert(sizeof(SOA_ThrowAwayTrash_C_GetText) == 0x000088, "Wrong size on SOA_ThrowAwayTrash_C_GetText");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, ReturnValue) == 0x000000, "Member 'SOA_ThrowAwayTrash_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, CallFunc_Max_ReturnValue) == 0x000010, "Member 'SOA_ThrowAwayTrash_C_GetText::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'SOA_ThrowAwayTrash_C_GetText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'SOA_ThrowAwayTrash_C_GetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, K2Node_MakeArray_Array) == 0x000068, "Member 'SOA_ThrowAwayTrash_C_GetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SOA_ThrowAwayTrash_C_GetText, CallFunc_Format_ReturnValue) == 0x000078, "Member 'SOA_ThrowAwayTrash_C_GetText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

