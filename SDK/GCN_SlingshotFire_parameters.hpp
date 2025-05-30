#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SlingshotFire

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GCN_SlingshotFire.GCN_SlingshotFire_C.ExecuteUbergraph_GCN_SlingshotFire
// 0x0398 (0x0398 - 0x0000)
struct GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target_1;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;                         // 0x0010(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults_1;                       // 0x00E8(0x0058)(ConstParm, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_Target;                               // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0148(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x0220(0x0058)(ConstParm, ContainsInstancedReference)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0280(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0298(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x02A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x02A8(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x02C8(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0330(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x0340(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChargableEquipmentInstance_C*          K2Node_DynamicCast_AsChargable_Equipment_Instance; // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_StartFOV_ImplicitCast;          // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_EndFOV_ImplicitCast;            // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire) == 0x000008, "Wrong alignment on GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire");
static_assert(sizeof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire) == 0x000398, "Wrong size on GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, EntryPoint) == 0x000000, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_Target_1) == 0x000008, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_Target_1' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_Parameters_1) == 0x000010, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_SpawnResults_1) == 0x0000E8, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_SpawnResults_1' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_Target) == 0x000140, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_Parameters) == 0x000148, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_Event_SpawnResults) == 0x000220, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_Event_SpawnResults' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000278, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00027C, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000280, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000298, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x0002A0, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x0002A8, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x0002C8, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_Location) == 0x0002E8, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_Normal) == 0x000300, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000318, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000320, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000328, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000330, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000338, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00033C, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000340, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000348, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_Lerp_ReturnValue) == 0x000350, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_DynamicCast_AsChargable_Equipment_Instance) == 0x000358, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_DynamicCast_AsChargable_Equipment_Instance' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_DynamicCast_bSuccess) == 0x000360, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000368, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_DynamicCast_bSuccess_1) == 0x000370, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_VariableSet_StartFOV_ImplicitCast) == 0x000378, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_VariableSet_StartFOV_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000380, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, K2Node_VariableSet_EndFOV_ImplicitCast) == 0x000388, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::K2Node_VariableSet_EndFOV_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire, CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast) == 0x000390, "Member 'GCN_SlingshotFire_C_ExecuteUbergraph_GCN_SlingshotFire::CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast' has a wrong offset!");

// Function GCN_SlingshotFire.GCN_SlingshotFire_C.OnApplication
// 0x0138 (0x0138 - 0x0000)
struct GCN_SlingshotFire_C_OnApplication final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_SlingshotFire_C_OnApplication) == 0x000008, "Wrong alignment on GCN_SlingshotFire_C_OnApplication");
static_assert(sizeof(GCN_SlingshotFire_C_OnApplication) == 0x000138, "Wrong size on GCN_SlingshotFire_C_OnApplication");
static_assert(offsetof(GCN_SlingshotFire_C_OnApplication, Target) == 0x000000, "Member 'GCN_SlingshotFire_C_OnApplication::Target' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_OnApplication, Parameters) == 0x000008, "Member 'GCN_SlingshotFire_C_OnApplication::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_OnApplication, SpawnResults) == 0x0000E0, "Member 'GCN_SlingshotFire_C_OnApplication::SpawnResults' has a wrong offset!");

// Function GCN_SlingshotFire.GCN_SlingshotFire_C.OnRemoval
// 0x0138 (0x0138 - 0x0000)
struct GCN_SlingshotFire_C_OnRemoval final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_SlingshotFire_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_SlingshotFire_C_OnRemoval");
static_assert(sizeof(GCN_SlingshotFire_C_OnRemoval) == 0x000138, "Wrong size on GCN_SlingshotFire_C_OnRemoval");
static_assert(offsetof(GCN_SlingshotFire_C_OnRemoval, Target) == 0x000000, "Member 'GCN_SlingshotFire_C_OnRemoval::Target' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_SlingshotFire_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SlingshotFire_C_OnRemoval, SpawnResults) == 0x0000E0, "Member 'GCN_SlingshotFire_C_OnRemoval::SpawnResults' has a wrong offset!");

}

