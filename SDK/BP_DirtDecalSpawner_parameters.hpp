#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DirtDecalSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DirtDecalSpawner.BP_DirtDecalSpawner_C.GetTaskTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_DirtDecalSpawner_C_GetTaskTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0060(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DirtDecalSpawner_C_GetTaskTransform) == 0x000010, "Wrong alignment on BP_DirtDecalSpawner_C_GetTaskTransform");
static_assert(sizeof(BP_DirtDecalSpawner_C_GetTaskTransform) == 0x0000C0, "Wrong size on BP_DirtDecalSpawner_C_GetTaskTransform");
static_assert(offsetof(BP_DirtDecalSpawner_C_GetTaskTransform, ReturnValue) == 0x000000, "Member 'BP_DirtDecalSpawner_C_GetTaskTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DirtDecalSpawner_C_GetTaskTransform, CallFunc_GetTransform_ReturnValue) == 0x000060, "Member 'BP_DirtDecalSpawner_C_GetTaskTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

}

