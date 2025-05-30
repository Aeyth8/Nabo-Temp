#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WaterTap

#include "Basic.hpp"

#include "E_MaterialTypes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_ImpactEffect_structs.hpp"


namespace SDK::Params
{

// Function BP_WaterTap.BP_WaterTap_C.ExecuteUbergraph_BP_WaterTap
// 0x0060 (0x0060 - 0x0000)
struct BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AActor*                           K2Node_Event_AttackingActor;                       // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_Direction;                            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character_1;      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HighlightManager_C*                 CallFunc_GetActorOfClass_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap) == 0x000008, "Wrong alignment on BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap");
static_assert(sizeof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap) == 0x000060, "Wrong size on BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, EntryPoint) == 0x000000, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_Event_AttackingActor) == 0x000008, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_Event_AttackingActor' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_Event_Direction) == 0x000010, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_Event_Direction' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_Event_OtherActor_1) == 0x000028, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_Event_OtherActor) == 0x000030, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000038, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_DynamicCast_AsBP_Resident_Character_1) == 0x000048, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_DynamicCast_AsBP_Resident_Character_1' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap, CallFunc_GetActorOfClass_ReturnValue) == 0x000058, "Member 'BP_WaterTap_C_ExecuteUbergraph_BP_WaterTap::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.GetDurabilityCostWhenHit
// 0x0008 (0x0008 - 0x0000)
struct BP_WaterTap_C_GetDurabilityCostWhenHit final
{
public:
	double                                        Amount;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_GetDurabilityCostWhenHit) == 0x000008, "Wrong alignment on BP_WaterTap_C_GetDurabilityCostWhenHit");
static_assert(sizeof(BP_WaterTap_C_GetDurabilityCostWhenHit) == 0x000008, "Wrong size on BP_WaterTap_C_GetDurabilityCostWhenHit");
static_assert(offsetof(BP_WaterTap_C_GetDurabilityCostWhenHit, Amount) == 0x000000, "Member 'BP_WaterTap_C_GetDurabilityCostWhenHit::Amount' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.GetMaterialType
// 0x0001 (0x0001 - 0x0000)
struct BP_WaterTap_C_GetMaterialType final
{
public:
	E_MaterialTypes                               MaterialType;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_GetMaterialType) == 0x000001, "Wrong alignment on BP_WaterTap_C_GetMaterialType");
static_assert(sizeof(BP_WaterTap_C_GetMaterialType) == 0x000001, "Wrong size on BP_WaterTap_C_GetMaterialType");
static_assert(offsetof(BP_WaterTap_C_GetMaterialType, MaterialType) == 0x000000, "Member 'BP_WaterTap_C_GetMaterialType::MaterialType' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.HitInterface
// 0x0018 (0x0018 - 0x0000)
struct BP_WaterTap_C_HitInterface final
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_HitInterface) == 0x000008, "Wrong alignment on BP_WaterTap_C_HitInterface");
static_assert(sizeof(BP_WaterTap_C_HitInterface) == 0x000018, "Wrong size on BP_WaterTap_C_HitInterface");
static_assert(offsetof(BP_WaterTap_C_HitInterface, Direction) == 0x000000, "Member 'BP_WaterTap_C_HitInterface::Direction' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.ImpactCosmetics
// 0x0048 (0x0048 - 0x0000)
struct BP_WaterTap_C_ImpactCosmetics final
{
public:
	class APawn*                                  ImpactCauser;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitImpulse;                                        // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ImpactEffect                                ImpactEffect;                                      // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BoneName;                                          // 0x003C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangedAttributes;                                 // 0x0044(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_ImpactCosmetics) == 0x000008, "Wrong alignment on BP_WaterTap_C_ImpactCosmetics");
static_assert(sizeof(BP_WaterTap_C_ImpactCosmetics) == 0x000048, "Wrong size on BP_WaterTap_C_ImpactCosmetics");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, ImpactCauser) == 0x000000, "Member 'BP_WaterTap_C_ImpactCosmetics::ImpactCauser' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, Location) == 0x000008, "Member 'BP_WaterTap_C_ImpactCosmetics::Location' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, HitImpulse) == 0x000020, "Member 'BP_WaterTap_C_ImpactCosmetics::HitImpulse' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, ImpactEffect) == 0x000038, "Member 'BP_WaterTap_C_ImpactCosmetics::ImpactEffect' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, BoneName) == 0x00003C, "Member 'BP_WaterTap_C_ImpactCosmetics::BoneName' has a wrong offset!");
static_assert(offsetof(BP_WaterTap_C_ImpactCosmetics, ChangedAttributes) == 0x000044, "Member 'BP_WaterTap_C_ImpactCosmetics::ChangedAttributes' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.MeleeHit
// 0x0008 (0x0008 - 0x0000)
struct BP_WaterTap_C_MeleeHit final
{
public:
	const class AActor*                           AttackingActor;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_MeleeHit) == 0x000008, "Wrong alignment on BP_WaterTap_C_MeleeHit");
static_assert(sizeof(BP_WaterTap_C_MeleeHit) == 0x000008, "Wrong size on BP_WaterTap_C_MeleeHit");
static_assert(offsetof(BP_WaterTap_C_MeleeHit, AttackingActor) == 0x000000, "Member 'BP_WaterTap_C_MeleeHit::AttackingActor' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_WaterTap_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_WaterTap_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_WaterTap_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_WaterTap_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_WaterTap_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_WaterTap_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_WaterTap_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_WaterTap_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_WaterTap_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_WaterTap_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_WaterTap_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_WaterTap_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_WaterTap.BP_WaterTap_C.Set Seethrough Params
// 0x0008 (0x0008 - 0x0000)
struct BP_WaterTap_C_Set_Seethrough_Params final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterTap_C_Set_Seethrough_Params) == 0x000008, "Wrong alignment on BP_WaterTap_C_Set_Seethrough_Params");
static_assert(sizeof(BP_WaterTap_C_Set_Seethrough_Params) == 0x000008, "Wrong size on BP_WaterTap_C_Set_Seethrough_Params");
static_assert(offsetof(BP_WaterTap_C_Set_Seethrough_Params, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_WaterTap_C_Set_Seethrough_Params::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

