#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_RemoveGameplayAbilitiesOnPossess

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function PA_RemoveGameplayAbilitiesOnPossess.PA_RemoveGameplayAbilitiesOnPossess_C.RemoveGameplayAbilities
// 0x0050 (0x0050 - 0x0000)
struct PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities final
{
public:
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayAbilitySpecHandle>     CallFunc_GetAllAbilities_OutAbilityHandles;        // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle             CallFunc_Array_Get_Item;                           // 0x0020(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance; // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UGameplayAbility*                 CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue; // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities) == 0x000008, "Wrong alignment on PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities");
static_assert(sizeof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities) == 0x000050, "Wrong size on PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, AbilitySystem) == 0x000000, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::AbilitySystem' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_GetAllAbilities_OutAbilityHandles) == 0x000008, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_GetAllAbilities_OutAbilityHandles' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, Temp_int_Array_Index_Variable) == 0x000018, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_Array_Get_Item) == 0x000020, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance) == 0x000024, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue) == 0x000028, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_GetObjectClass_ReturnValue) == 0x000038, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'PA_RemoveGameplayAbilitiesOnPossess_C_RemoveGameplayAbilities::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

}

