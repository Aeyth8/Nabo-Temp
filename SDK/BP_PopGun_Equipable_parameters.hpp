#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PopGun_Equipable

#include "Basic.hpp"

#include "GASIW_structs.hpp"


namespace SDK::Params
{

// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.EnableTrail
// 0x0010 (0x0010 - 0x0000)
struct BP_PopGun_Equipable_C_EnableTrail final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duration;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PopGun_Equipable_C_EnableTrail) == 0x000008, "Wrong alignment on BP_PopGun_Equipable_C_EnableTrail");
static_assert(sizeof(BP_PopGun_Equipable_C_EnableTrail) == 0x000010, "Wrong size on BP_PopGun_Equipable_C_EnableTrail");
static_assert(offsetof(BP_PopGun_Equipable_C_EnableTrail, Enable) == 0x000000, "Member 'BP_PopGun_Equipable_C_EnableTrail::Enable' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_EnableTrail, Duration) == 0x000008, "Member 'BP_PopGun_Equipable_C_EnableTrail::Duration' has a wrong offset!");

// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.ExecuteUbergraph_BP_PopGun_Equipable
// 0x0038 (0x0038 - 0x0000)
struct BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipmentViewMode                            K2Node_Event_ViewMode;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipmentViewMode                            Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Enable;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_Duration;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable) == 0x000008, "Wrong alignment on BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable");
static_assert(sizeof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable) == 0x000038, "Wrong size on BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, EntryPoint) == 0x000000, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, K2Node_Event_ViewMode) == 0x000004, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::K2Node_Event_ViewMode' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, Temp_byte_Variable) == 0x000005, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, Temp_class_Variable) == 0x000008, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, Temp_class_Variable_1) == 0x000010, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, Temp_class_Variable_2) == 0x000018, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, K2Node_Event_Enable) == 0x000020, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::K2Node_Event_Enable' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, K2Node_Event_Duration) == 0x000028, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::K2Node_Event_Duration' has a wrong offset!");
static_assert(offsetof(BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable, K2Node_Select_Default) == 0x000030, "Member 'BP_PopGun_Equipable_C_ExecuteUbergraph_BP_PopGun_Equipable::K2Node_Select_Default' has a wrong offset!");

// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.GetMuzzleSceneComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_PopGun_Equipable_C_GetMuzzleSceneComponent final
{
public:
	class USceneComponent*                        Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PopGun_Equipable_C_GetMuzzleSceneComponent) == 0x000008, "Wrong alignment on BP_PopGun_Equipable_C_GetMuzzleSceneComponent");
static_assert(sizeof(BP_PopGun_Equipable_C_GetMuzzleSceneComponent) == 0x000008, "Wrong size on BP_PopGun_Equipable_C_GetMuzzleSceneComponent");
static_assert(offsetof(BP_PopGun_Equipable_C_GetMuzzleSceneComponent, Return) == 0x000000, "Member 'BP_PopGun_Equipable_C_GetMuzzleSceneComponent::Return' has a wrong offset!");

// Function BP_PopGun_Equipable.BP_PopGun_Equipable_C.OnHandleViewMode
// 0x0001 (0x0001 - 0x0000)
struct BP_PopGun_Equipable_C_OnHandleViewMode final
{
public:
	EEquipmentViewMode                            ViewMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PopGun_Equipable_C_OnHandleViewMode) == 0x000001, "Wrong alignment on BP_PopGun_Equipable_C_OnHandleViewMode");
static_assert(sizeof(BP_PopGun_Equipable_C_OnHandleViewMode) == 0x000001, "Wrong size on BP_PopGun_Equipable_C_OnHandleViewMode");
static_assert(offsetof(BP_PopGun_Equipable_C_OnHandleViewMode, ViewMode) == 0x000000, "Member 'BP_PopGun_Equipable_C_OnHandleViewMode::ViewMode' has a wrong offset!");

}

