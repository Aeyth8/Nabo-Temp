#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThrowProjectile

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JP_structs.hpp"


namespace SDK::Params
{

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.CalculateChargeBasedOnTimeHeld
// 0x0050 (0x0050 - 0x0000)
struct GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld final
{
public:
	double                                        TimeHeld;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Charge;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue_1;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue_2;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld) == 0x000008, "Wrong alignment on GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld");
static_assert(sizeof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld) == 0x000050, "Wrong size on GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, TimeHeld) == 0x000000, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::TimeHeld' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, Charge) == 0x000008, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::Charge' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_GetTagStackCount_ReturnValue) == 0x000010, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_GetTagStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_GetTagStackCount_ReturnValue_1) == 0x000014, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_GetTagStackCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000020, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_GetTagStackCount_ReturnValue_2) == 0x000028, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_GetTagStackCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000038, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld, CallFunc_FMin_ReturnValue) == 0x000048, "Member 'GA_ThrowProjectile_C_CalculateChargeBasedOnTimeHeld::CallFunc_FMin_ReturnValue' has a wrong offset!");

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.GetSpeed
// 0x0050 (0x0050 - 0x0000)
struct GA_ThrowProjectile_C_GetSpeed final
{
public:
	double                                        TimeHeld;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CalculateChargeBasedOnTimeHeld_Charge;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetMinSpeed_MinSpeed;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstance*                          CallFunc_GetAssociatedItem_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_GetSpeed) == 0x000008, "Wrong alignment on GA_ThrowProjectile_C_GetSpeed");
static_assert(sizeof(GA_ThrowProjectile_C_GetSpeed) == 0x000050, "Wrong size on GA_ThrowProjectile_C_GetSpeed");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, TimeHeld) == 0x000000, "Member 'GA_ThrowProjectile_C_GetSpeed::TimeHeld' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, ReturnValue) == 0x000008, "Member 'GA_ThrowProjectile_C_GetSpeed::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_GetMaxSpeed_ReturnValue) == 0x000010, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_CalculateChargeBasedOnTimeHeld_Charge) == 0x000018, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_CalculateChargeBasedOnTimeHeld_Charge' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_GetMinSpeed_MinSpeed) == 0x000020, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_GetMinSpeed_MinSpeed' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_GetAssociatedItem_ReturnValue) == 0x000028, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_GetAssociatedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_GetTagStackCount_ReturnValue) == 0x000030, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_GetTagStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000038, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetSpeed, CallFunc_Lerp_ReturnValue) == 0x000048, "Member 'GA_ThrowProjectile_C_GetSpeed::CallFunc_Lerp_ReturnValue' has a wrong offset!");

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.InitializeProjectileValues
// 0x0180 (0x0180 - 0x0000)
struct GA_ThrowProjectile_C_InitializeProjectileValues final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ChargePercent;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ProjectileSpeed;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InLifespan;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GravityScale;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinDamage;                                         // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDamage;                                         // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DamageMultiplierToStructures;                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             InTransform;                                       // 0x0040(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCosmetic;                                        // 0x00A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ProjectileBase_C*                   ProjectileWithValues;                              // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                   K2Node_DynamicCast_AsBP_Projectile_Base;           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStateJP_Match*                   K2Node_DynamicCast_AsPlayer_State_JP_Match;        // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCombatParticipant                     CallFunc_CreateCombatParticipantFromPlayer_ReturnValue; // 0x00D0(0x0060)()
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_InitializeProjectileValues) == 0x000010, "Wrong alignment on GA_ThrowProjectile_C_InitializeProjectileValues");
static_assert(sizeof(GA_ThrowProjectile_C_InitializeProjectileValues) == 0x000180, "Wrong size on GA_ThrowProjectile_C_InitializeProjectileValues");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, Object) == 0x000000, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::Object' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, ChargePercent) == 0x000008, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::ChargePercent' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, ProjectileSpeed) == 0x000010, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, InLifespan) == 0x000018, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::InLifespan' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, GravityScale) == 0x000020, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::GravityScale' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, MinDamage) == 0x000028, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::MinDamage' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, MaxDamage) == 0x000030, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::MaxDamage' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, DamageMultiplierToStructures) == 0x000038, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::DamageMultiplierToStructures' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, InTransform) == 0x000040, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::InTransform' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, IsCosmetic) == 0x0000A0, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::IsCosmetic' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, ProjectileWithValues) == 0x0000A8, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::ProjectileWithValues' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, K2Node_DynamicCast_AsBP_Projectile_Base) == 0x0000B0, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::K2Node_DynamicCast_AsBP_Projectile_Base' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, K2Node_DynamicCast_AsPlayer_State_JP_Match) == 0x0000C0, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::K2Node_DynamicCast_AsPlayer_State_JP_Match' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, CallFunc_CreateCombatParticipantFromPlayer_ReturnValue) == 0x0000D0, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::CallFunc_CreateCombatParticipantFromPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, CallFunc_BreakTransform_Location) == 0x000130, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, CallFunc_BreakTransform_Rotation) == 0x000148, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_InitializeProjectileValues, CallFunc_BreakTransform_Scale) == 0x000160, "Member 'GA_ThrowProjectile_C_InitializeProjectileValues::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.SpawnProjectile
// 0x00F0 (0x00F0 - 0x0000)
struct GA_ThrowProjectile_C_SpawnProjectile final
{
public:
	struct FTransform                             SpawnTransform;                                    // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChargePercent;                                     // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Owner;                                             // 0x0068(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocalVelocity;                                     // 0x0070(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Lifetime;                                          // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinDamage;                                         // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDamage;                                         // 0x00A0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GravityScale;                                      // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StructureDamageMultiplier;                         // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ProjectileClass;                                   // 0x00B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Chargete;                                          // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjectPoolingSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APooledActor*                           CallFunc_GetInactiveObjectOfClass_ReturnValue;     // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                   CallFunc_InitializeProjectileValues_ProjectileWithValues; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_InitializeProjectileValues_InLifespan_ImplicitCast; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_SpawnProjectile) == 0x000010, "Wrong alignment on GA_ThrowProjectile_C_SpawnProjectile");
static_assert(sizeof(GA_ThrowProjectile_C_SpawnProjectile) == 0x0000F0, "Wrong size on GA_ThrowProjectile_C_SpawnProjectile");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, SpawnTransform) == 0x000000, "Member 'GA_ThrowProjectile_C_SpawnProjectile::SpawnTransform' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, ChargePercent) == 0x000060, "Member 'GA_ThrowProjectile_C_SpawnProjectile::ChargePercent' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, Owner) == 0x000068, "Member 'GA_ThrowProjectile_C_SpawnProjectile::Owner' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, LocalVelocity) == 0x000070, "Member 'GA_ThrowProjectile_C_SpawnProjectile::LocalVelocity' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, Speed) == 0x000088, "Member 'GA_ThrowProjectile_C_SpawnProjectile::Speed' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, Lifetime) == 0x000090, "Member 'GA_ThrowProjectile_C_SpawnProjectile::Lifetime' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, MinDamage) == 0x000098, "Member 'GA_ThrowProjectile_C_SpawnProjectile::MinDamage' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, MaxDamage) == 0x0000A0, "Member 'GA_ThrowProjectile_C_SpawnProjectile::MaxDamage' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, GravityScale) == 0x0000A8, "Member 'GA_ThrowProjectile_C_SpawnProjectile::GravityScale' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, StructureDamageMultiplier) == 0x0000B0, "Member 'GA_ThrowProjectile_C_SpawnProjectile::StructureDamageMultiplier' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, ProjectileClass) == 0x0000B8, "Member 'GA_ThrowProjectile_C_SpawnProjectile::ProjectileClass' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, Chargete) == 0x0000C0, "Member 'GA_ThrowProjectile_C_SpawnProjectile::Chargete' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, CallFunc_GetWorldSubsystem_ReturnValue) == 0x0000C8, "Member 'GA_ThrowProjectile_C_SpawnProjectile::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, CallFunc_GetInactiveObjectOfClass_ReturnValue) == 0x0000D0, "Member 'GA_ThrowProjectile_C_SpawnProjectile::CallFunc_GetInactiveObjectOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, CallFunc_InitializeProjectileValues_ProjectileWithValues) == 0x0000D8, "Member 'GA_ThrowProjectile_C_SpawnProjectile::CallFunc_InitializeProjectileValues_ProjectileWithValues' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_SpawnProjectile, CallFunc_InitializeProjectileValues_InLifespan_ImplicitCast) == 0x0000E0, "Member 'GA_ThrowProjectile_C_SpawnProjectile::CallFunc_InitializeProjectileValues_InLifespan_ImplicitCast' has a wrong offset!");

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.GetMaxSpeed
// 0x0018 (0x0018 - 0x0000)
struct GA_ThrowProjectile_C_GetMaxSpeed final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_GetMaxSpeed) == 0x000008, "Wrong alignment on GA_ThrowProjectile_C_GetMaxSpeed");
static_assert(sizeof(GA_ThrowProjectile_C_GetMaxSpeed) == 0x000018, "Wrong size on GA_ThrowProjectile_C_GetMaxSpeed");
static_assert(offsetof(GA_ThrowProjectile_C_GetMaxSpeed, ReturnValue) == 0x000000, "Member 'GA_ThrowProjectile_C_GetMaxSpeed::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetMaxSpeed, CallFunc_GetTagStackCount_ReturnValue) == 0x000008, "Member 'GA_ThrowProjectile_C_GetMaxSpeed::CallFunc_GetTagStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetMaxSpeed, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000010, "Member 'GA_ThrowProjectile_C_GetMaxSpeed::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");

// Function GA_ThrowProjectile.GA_ThrowProjectile_C.GetMinSpeed
// 0x0018 (0x0018 - 0x0000)
struct GA_ThrowProjectile_C_GetMinSpeed final
{
public:
	double                                        MinSpeed;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTagStackCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ThrowProjectile_C_GetMinSpeed) == 0x000008, "Wrong alignment on GA_ThrowProjectile_C_GetMinSpeed");
static_assert(sizeof(GA_ThrowProjectile_C_GetMinSpeed) == 0x000018, "Wrong size on GA_ThrowProjectile_C_GetMinSpeed");
static_assert(offsetof(GA_ThrowProjectile_C_GetMinSpeed, MinSpeed) == 0x000000, "Member 'GA_ThrowProjectile_C_GetMinSpeed::MinSpeed' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetMinSpeed, CallFunc_GetTagStackCount_ReturnValue) == 0x000008, "Member 'GA_ThrowProjectile_C_GetMinSpeed::CallFunc_GetTagStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ThrowProjectile_C_GetMinSpeed, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000010, "Member 'GA_ThrowProjectile_C_GetMinSpeed::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");

}

