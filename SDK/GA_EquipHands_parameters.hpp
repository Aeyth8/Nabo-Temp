#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EquipHands

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_EquipHands.GA_EquipHands_C.ExecuteUbergraph_GA_EquipHands
// 0x0110 (0x0110 - 0x0000)
struct GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
	class UItemInstance*                          CallFunc_GetOrCreateItemInstance_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterItemWheelComponent_C*         CallFunc_GetItemWheelComponent_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x00D8(0x0020)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponentIW*              K2Node_DynamicCast_AsAbility_System_Component_IW;  // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CancelAbilitiesByTag_ReturnValue;         // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands) == 0x000008, "Wrong alignment on GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands");
static_assert(sizeof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands) == 0x000110, "Wrong size on GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, EntryPoint) == 0x000000, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, K2Node_Event_EventData) == 0x000008, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_GetOrCreateItemInstance_ReturnValue) == 0x0000B8, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_GetOrCreateItemInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_GetItemWheelComponent_ReturnValue) == 0x0000C0, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_GetItemWheelComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C8, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0000D0, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x0000D8, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000F8, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, K2Node_DynamicCast_AsAbility_System_Component_IW) == 0x000100, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::K2Node_DynamicCast_AsAbility_System_Component_IW' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands, CallFunc_CancelAbilitiesByTag_ReturnValue) == 0x000109, "Member 'GA_EquipHands_C_ExecuteUbergraph_GA_EquipHands::CallFunc_CancelAbilitiesByTag_ReturnValue' has a wrong offset!");

// Function GA_EquipHands.GA_EquipHands_C.GetOrCreateItemInstance
// 0x0030 (0x0030 - 0x0000)
struct GA_EquipHands_C_GetOrCreateItemInstance final
{
public:
	class UItemInstance*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                    CallFunc_GetInventory_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                    CallFunc_GetInventory_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UItemInstance*                          CallFunc_AddItemDefinition_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItemInstance*                          CallFunc_GetFirstItemOfType_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_EquipHands_C_GetOrCreateItemInstance) == 0x000008, "Wrong alignment on GA_EquipHands_C_GetOrCreateItemInstance");
static_assert(sizeof(GA_EquipHands_C_GetOrCreateItemInstance) == 0x000030, "Wrong size on GA_EquipHands_C_GetOrCreateItemInstance");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, ReturnValue) == 0x000000, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, CallFunc_GetInventory_ReturnValue) == 0x000008, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, CallFunc_GetInventory_ReturnValue_1) == 0x000010, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::CallFunc_GetInventory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, CallFunc_AddItemDefinition_ReturnValue) == 0x000018, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::CallFunc_AddItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, CallFunc_GetFirstItemOfType_ReturnValue) == 0x000020, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::CallFunc_GetFirstItemOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetOrCreateItemInstance, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_EquipHands_C_GetOrCreateItemInstance::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_EquipHands.GA_EquipHands_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_EquipHands_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_EquipHands_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_EquipHands_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_EquipHands_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_EquipHands_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_EquipHands_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_EquipHands_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_EquipHands.GA_EquipHands_C.GetInventory
// 0x0018 (0x0018 - 0x0000)
struct GA_EquipHands_C_GetInventory final
{
public:
	class UInventoryComponent*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_EquipHands_C_GetInventory) == 0x000008, "Wrong alignment on GA_EquipHands_C_GetInventory");
static_assert(sizeof(GA_EquipHands_C_GetInventory) == 0x000018, "Wrong size on GA_EquipHands_C_GetInventory");
static_assert(offsetof(GA_EquipHands_C_GetInventory, ReturnValue) == 0x000000, "Member 'GA_EquipHands_C_GetInventory::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetInventory, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_EquipHands_C_GetInventory::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetInventory, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'GA_EquipHands_C_GetInventory::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function GA_EquipHands.GA_EquipHands_C.GetItemWheelComponent
// 0x0018 (0x0018 - 0x0000)
struct GA_EquipHands_C_GetItemWheelComponent final
{
public:
	class UCharacterItemWheelComponent_C*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterItemWheelComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_EquipHands_C_GetItemWheelComponent) == 0x000008, "Wrong alignment on GA_EquipHands_C_GetItemWheelComponent");
static_assert(sizeof(GA_EquipHands_C_GetItemWheelComponent) == 0x000018, "Wrong size on GA_EquipHands_C_GetItemWheelComponent");
static_assert(offsetof(GA_EquipHands_C_GetItemWheelComponent, ReturnValue) == 0x000000, "Member 'GA_EquipHands_C_GetItemWheelComponent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetItemWheelComponent, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_EquipHands_C_GetItemWheelComponent::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_GetItemWheelComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'GA_EquipHands_C_GetItemWheelComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function GA_EquipHands.GA_EquipHands_C.K2_CanActivateAbility
// 0x00F8 (0x00F8 - 0x0000)
struct GA_EquipHands_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0078(0x0020)()
	class UEquipmentManagerComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInstanceFromSlot_IsInstanceValid;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentInstance*                     CallFunc_GetInstanceFromSlot_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Temp_struct_Variable_1;                            // 0x00B0(0x0020)()
	bool                                          CallFunc_ObjectIsA_ReturnValue;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Select_Default;                             // 0x00D8(0x0020)()
};
static_assert(alignof(GA_EquipHands_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_EquipHands_C_K2_CanActivateAbility");
static_assert(sizeof(GA_EquipHands_C_K2_CanActivateAbility) == 0x0000F8, "Wrong size on GA_EquipHands_C_K2_CanActivateAbility");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_EquipHands_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_EquipHands_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_EquipHands_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_EquipHands_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, Temp_bool_Variable) == 0x000071, "Member 'GA_EquipHands_C_K2_CanActivateAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, Temp_struct_Variable) == 0x000078, "Member 'GA_EquipHands_C_K2_CanActivateAbility::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, CallFunc_GetComponentByClass_ReturnValue) == 0x000098, "Member 'GA_EquipHands_C_K2_CanActivateAbility::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, CallFunc_GetInstanceFromSlot_IsInstanceValid) == 0x0000A0, "Member 'GA_EquipHands_C_K2_CanActivateAbility::CallFunc_GetInstanceFromSlot_IsInstanceValid' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, CallFunc_GetInstanceFromSlot_ReturnValue) == 0x0000A8, "Member 'GA_EquipHands_C_K2_CanActivateAbility::CallFunc_GetInstanceFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, Temp_struct_Variable_1) == 0x0000B0, "Member 'GA_EquipHands_C_K2_CanActivateAbility::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, CallFunc_ObjectIsA_ReturnValue) == 0x0000D0, "Member 'GA_EquipHands_C_K2_CanActivateAbility::CallFunc_ObjectIsA_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x0000D1, "Member 'GA_EquipHands_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EquipHands_C_K2_CanActivateAbility, K2Node_Select_Default) == 0x0000D8, "Member 'GA_EquipHands_C_K2_CanActivateAbility::K2Node_Select_Default' has a wrong offset!");

}

