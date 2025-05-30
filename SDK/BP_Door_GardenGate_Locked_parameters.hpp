#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_GardenGate_Locked

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.ExecuteUbergraph_BP_Door_GardenGate_Locked
// 0x0010 (0x0010 - 0x0000)
struct BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_PickerController;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked) == 0x000008, "Wrong alignment on BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked) == 0x000010, "Wrong size on BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked, EntryPoint) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000004, "Member 'BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked, K2Node_Event_PickerController) == 0x000008, "Member 'BP_Door_GardenGate_Locked_C_ExecuteUbergraph_BP_Door_GardenGate_Locked::K2Node_Event_PickerController' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.GetLockPickDuration
// 0x0004 (0x0004 - 0x0000)
struct BP_Door_GardenGate_Locked_C_GetLockPickDuration final
{
public:
	int32                                         Return;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_GetLockPickDuration) == 0x000004, "Wrong alignment on BP_Door_GardenGate_Locked_C_GetLockPickDuration");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_GetLockPickDuration) == 0x000004, "Wrong size on BP_Door_GardenGate_Locked_C_GetLockPickDuration");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_GetLockPickDuration, Return) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_GetLockPickDuration::Return' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.GetOptionalText
// 0x0020 (0x0020 - 0x0000)
struct BP_Door_GardenGate_Locked_C_GetOptionalText final
{
public:
	class FText                                   Return;                                            // 0x0000(0x0010)(Parm, OutParm)
	class FText                                   Optional_Second_Line;                              // 0x0010(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_GetOptionalText) == 0x000008, "Wrong alignment on BP_Door_GardenGate_Locked_C_GetOptionalText");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_GetOptionalText) == 0x000020, "Wrong size on BP_Door_GardenGate_Locked_C_GetOptionalText");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_GetOptionalText, Return) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_GetOptionalText::Return' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_GetOptionalText, Optional_Second_Line) == 0x000010, "Member 'BP_Door_GardenGate_Locked_C_GetOptionalText::Optional_Second_Line' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.GetPriority
// 0x0004 (0x0004 - 0x0000)
struct BP_Door_GardenGate_Locked_C_GetPriority final
{
public:
	int32                                         Priority;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_GetPriority) == 0x000004, "Wrong alignment on BP_Door_GardenGate_Locked_C_GetPriority");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_GetPriority) == 0x000004, "Wrong size on BP_Door_GardenGate_Locked_C_GetPriority");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_GetPriority, Priority) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_GetPriority::Priority' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.IsClosed
// 0x0001 (0x0001 - 0x0000)
struct BP_Door_GardenGate_Locked_C_IsClosed final
{
public:
	bool                                          Open_0;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_IsClosed) == 0x000001, "Wrong alignment on BP_Door_GardenGate_Locked_C_IsClosed");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_IsClosed) == 0x000001, "Wrong size on BP_Door_GardenGate_Locked_C_IsClosed");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_IsClosed, Open_0) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_IsClosed::Open_0' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.IsNotLockpickable
// 0x0001 (0x0001 - 0x0000)
struct BP_Door_GardenGate_Locked_C_IsNotLockpickable final
{
public:
	bool                                          Param_IsNotLockpickable_0;                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_IsNotLockpickable) == 0x000001, "Wrong alignment on BP_Door_GardenGate_Locked_C_IsNotLockpickable");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_IsNotLockpickable) == 0x000001, "Wrong size on BP_Door_GardenGate_Locked_C_IsNotLockpickable");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_IsNotLockpickable, Param_IsNotLockpickable_0) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_IsNotLockpickable::Param_IsNotLockpickable_0' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.LockpickSuccess
// 0x0008 (0x0008 - 0x0000)
struct BP_Door_GardenGate_Locked_C_LockpickSuccess final
{
public:
	class APlayerController*                      PickerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_LockpickSuccess) == 0x000008, "Wrong alignment on BP_Door_GardenGate_Locked_C_LockpickSuccess");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_LockpickSuccess) == 0x000008, "Wrong size on BP_Door_GardenGate_Locked_C_LockpickSuccess");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_LockpickSuccess, PickerController) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_LockpickSuccess::PickerController' has a wrong offset!");

// Function BP_Door_GardenGate_Locked.BP_Door_GardenGate_Locked_C.SpawnDestroyedDoor
// 0x0090 (0x0090 - 0x0000)
struct BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor final
{
public:
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GardenGate_Destroyed_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor) == 0x000010, "Wrong alignment on BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor");
static_assert(sizeof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor) == 0x000090, "Wrong size on BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000000, "Member 'BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000078, "Member 'BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'BP_Door_GardenGate_Locked_C_SpawnDestroyedDoor::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

