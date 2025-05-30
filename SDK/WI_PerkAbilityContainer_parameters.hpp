#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PerkAbilityContainer

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_PerkAbilityContainer.WI_PerkAbilityContainer_C.AddPerkAbility
// 0x0040 (0x0040 - 0x0000)
struct WI_PerkAbilityContainer_C_AddPerkAbility final
{
public:
	TSoftClassPtr<class UClass>                   WidgetToSpawn;                                     // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UGameplayAbilityIW*                     GameplayAbility;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        AbilityAddedTimeStamp;                             // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PerkAbilityClass;                                  // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbilityContainer_C_AddPerkAbility) == 0x000008, "Wrong alignment on WI_PerkAbilityContainer_C_AddPerkAbility");
static_assert(sizeof(WI_PerkAbilityContainer_C_AddPerkAbility) == 0x000040, "Wrong size on WI_PerkAbilityContainer_C_AddPerkAbility");
static_assert(offsetof(WI_PerkAbilityContainer_C_AddPerkAbility, WidgetToSpawn) == 0x000000, "Member 'WI_PerkAbilityContainer_C_AddPerkAbility::WidgetToSpawn' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_AddPerkAbility, GameplayAbility) == 0x000028, "Member 'WI_PerkAbilityContainer_C_AddPerkAbility::GameplayAbility' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_AddPerkAbility, AbilityAddedTimeStamp) == 0x000030, "Member 'WI_PerkAbilityContainer_C_AddPerkAbility::AbilityAddedTimeStamp' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_AddPerkAbility, PerkAbilityClass) == 0x000038, "Member 'WI_PerkAbilityContainer_C_AddPerkAbility::PerkAbilityClass' has a wrong offset!");

// Function WI_PerkAbilityContainer.WI_PerkAbilityContainer_C.ExecuteUbergraph_WI_PerkAbilityContainer
// 0x0138 (0x0138 - 0x0000)
struct WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_WidgetToSpawn;                  // 0x0028(0x0028)(HasGetValueTypeHash)
	class UGameplayAbilityIW*                     K2Node_CustomEvent_GameplayAbility;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_AbilityAddedTimeStamp;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_PerkAbilityClass;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_PerkAbility_C*                      K2Node_DynamicCast_AsWI_Perk_Ability;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsWI_Perk_Ability;         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_PerkAbility_C*                      CallFunc_Create_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_AbilityToRemove;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWI_PerkAbility_C*                      CallFunc_Array_Get_Item_1;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_PerkAbility_C*                      CallFunc_Array_Get_Item_2;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11E[0x2];                                      // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12E[0x2];                                      // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer) == 0x000008, "Wrong alignment on WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer");
static_assert(sizeof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer) == 0x000138, "Wrong size on WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, EntryPoint) == 0x000000, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_WidgetToSpawn) == 0x000028, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_WidgetToSpawn' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_GameplayAbility) == 0x000050, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_GameplayAbility' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_AbilityAddedTimeStamp) == 0x000058, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_AbilityAddedTimeStamp' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_PerkAbilityClass) == 0x000060, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_PerkAbilityClass' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Loop_Counter_Variable_1) == 0x000068, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Array_Index_Variable_2) == 0x00006C, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Get_Item) == 0x000078, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_DynamicCast_AsWI_Perk_Ability) == 0x000088, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_DynamicCast_AsWI_Perk_Ability' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_GetObjectClass_ReturnValue) == 0x000098, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000A0, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A1, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CreateDelegate_OutputDelegate) == 0x0000A4, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x0000B8, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_class_Variable) == 0x0000C0, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_ClassDynamicCast_AsWI_Perk_Ability) == 0x0000D0, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_ClassDynamicCast_AsWI_Perk_Ability' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_ClassDynamicCast_bSuccess) == 0x0000D8, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Create_ReturnValue) == 0x0000E0, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000E8, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_AddUnique_ReturnValue) == 0x0000F0, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, K2Node_CustomEvent_AbilityToRemove) == 0x0000F8, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::K2Node_CustomEvent_AbilityToRemove' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Get_Item_2) == 0x000110, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_Length_ReturnValue_2) == 0x000118, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Array_RemoveItem_ReturnValue) == 0x00011C, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Less_IntInt_ReturnValue_1) == 0x00011D, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_GetObjectClass_ReturnValue_1) == 0x000120, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, Temp_int_Loop_Counter_Variable_2) == 0x000128, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_EqualEqual_ClassClass_ReturnValue_1) == 0x00012C, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_EqualEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Less_IntInt_ReturnValue_2) == 0x00012D, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_Add_IntInt_ReturnValue_2) == 0x000130, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer, CallFunc_BooleanAND_ReturnValue) == 0x000134, "Member 'WI_PerkAbilityContainer_C_ExecuteUbergraph_WI_PerkAbilityContainer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WI_PerkAbilityContainer.WI_PerkAbilityContainer_C.GetPerkAbilityOfType
// 0x0090 (0x0090 - 0x0000)
struct WI_PerkAbilityContainer_C_GetPerkAbilityOfType final
{
public:
	TSoftClassPtr<class UClass>                   AbilityPerk;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWI_PerkAbility_C*                      ExistingAbilityPerk;                               // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_PerkAbility_C*                      K2Node_DynamicCast_AsWI_Perk_Ability;              // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType) == 0x000008, "Wrong alignment on WI_PerkAbilityContainer_C_GetPerkAbilityOfType");
static_assert(sizeof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType) == 0x000090, "Wrong size on WI_PerkAbilityContainer_C_GetPerkAbilityOfType");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, AbilityPerk) == 0x000000, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::AbilityPerk' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, ExistingAbilityPerk) == 0x000028, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::ExistingAbilityPerk' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000030, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, Temp_bool_True_if_break_was_hit_Variable) == 0x000038, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000040, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, K2Node_ClassDynamicCast_bSuccess) == 0x000048, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Array_Get_Item) == 0x000060, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, K2Node_DynamicCast_AsWI_Perk_Ability) == 0x000070, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::K2Node_DynamicCast_AsWI_Perk_Ability' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_BooleanAND_ReturnValue) == 0x000079, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_GetObjectClass_ReturnValue) == 0x000080, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbilityContainer_C_GetPerkAbilityOfType, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000088, "Member 'WI_PerkAbilityContainer_C_GetPerkAbilityOfType::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

// Function WI_PerkAbilityContainer.WI_PerkAbilityContainer_C.OnLoaded_C207974446864F7F015D359C03B77D29
// 0x0008 (0x0008 - 0x0000)
struct WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29) == 0x000008, "Wrong alignment on WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29");
static_assert(sizeof(WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29) == 0x000008, "Wrong size on WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29");
static_assert(offsetof(WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29, Loaded) == 0x000000, "Member 'WI_PerkAbilityContainer_C_OnLoaded_C207974446864F7F015D359C03B77D29::Loaded' has a wrong offset!");

// Function WI_PerkAbilityContainer.WI_PerkAbilityContainer_C.RemovePerkAbility
// 0x0008 (0x0008 - 0x0000)
struct WI_PerkAbilityContainer_C_RemovePerkAbility final
{
public:
	class UClass*                                 AbilityToRemove;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbilityContainer_C_RemovePerkAbility) == 0x000008, "Wrong alignment on WI_PerkAbilityContainer_C_RemovePerkAbility");
static_assert(sizeof(WI_PerkAbilityContainer_C_RemovePerkAbility) == 0x000008, "Wrong size on WI_PerkAbilityContainer_C_RemovePerkAbility");
static_assert(offsetof(WI_PerkAbilityContainer_C_RemovePerkAbility, AbilityToRemove) == 0x000000, "Member 'WI_PerkAbilityContainer_C_RemovePerkAbility::AbilityToRemove' has a wrong offset!");

}

