#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssisterTrackingComponent

#include "Basic.hpp"

#include "JP_structs.hpp"


namespace SDK::Params
{

// Function AssisterTrackingComponent.AssisterTrackingComponent_C.Add Heal Assisters
// 0x0108 (0x0108 - 0x0000)
struct AssisterTrackingComponent_C_Add_Heal_Assisters final
{
public:
	struct FCombatParticipant                     Killer;                                            // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FCombatParticipant>             AssisterArray;                                     // 0x0060(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FCombatParticipant>             Modified;                                          // 0x0070(0x0010)(Parm, OutParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombatParticipant                     CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue; // 0x00A0(0x0060)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AssisterTrackingComponent_C_Add_Heal_Assisters) == 0x000008, "Wrong alignment on AssisterTrackingComponent_C_Add_Heal_Assisters");
static_assert(sizeof(AssisterTrackingComponent_C_Add_Heal_Assisters) == 0x000108, "Wrong size on AssisterTrackingComponent_C_Add_Heal_Assisters");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, Killer) == 0x000000, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::Killer' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, AssisterArray) == 0x000060, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::AssisterArray' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, Modified) == 0x000070, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::Modified' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_GetPawn_ReturnValue) == 0x000088, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000090, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue) == 0x0000A0, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_Array_Add_ReturnValue) == 0x000100, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Heal_Assisters, CallFunc_IsValid_ReturnValue_2) == 0x000104, "Member 'AssisterTrackingComponent_C_Add_Heal_Assisters::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function AssisterTrackingComponent.AssisterTrackingComponent_C.Add Kill Assisters
// 0x00F0 (0x00F0 - 0x0000)
struct AssisterTrackingComponent_C_Add_Kill_Assisters final
{
public:
	struct FCombatParticipant                     Killer;                                            // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UAbilitySystemComponentIW*              VictimASC;                                         // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCombatParticipant>             AssisterArray;                                     // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FCombatParticipant>             Modified;                                          // 0x0078(0x0010)(Parm, OutParm)
	struct FCombatParticipant                     CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue; // 0x0088(0x0060)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AssisterTrackingComponent_C_Add_Kill_Assisters) == 0x000008, "Wrong alignment on AssisterTrackingComponent_C_Add_Kill_Assisters");
static_assert(sizeof(AssisterTrackingComponent_C_Add_Kill_Assisters) == 0x0000F0, "Wrong size on AssisterTrackingComponent_C_Add_Kill_Assisters");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, Killer) == 0x000000, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::Killer' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, VictimASC) == 0x000060, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::VictimASC' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, AssisterArray) == 0x000068, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::AssisterArray' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, Modified) == 0x000078, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::Modified' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue) == 0x000088, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::CallFunc_GetAssistingCombatParticipantFromASC_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, CallFunc_Array_Add_ReturnValue) == 0x0000E8, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AssisterTrackingComponent_C_Add_Kill_Assisters, CallFunc_IsValid_ReturnValue) == 0x0000EC, "Member 'AssisterTrackingComponent_C_Add_Kill_Assisters::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

