#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Magpie_Nest_Deploy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JP_structs.hpp"


namespace SDK::Params
{

// Function GA_Magpie_Nest_Deploy.GA_Magpie_Nest_Deploy_C.SpawnDeployable
// 0x0310 (0x0310 - 0x0000)
struct GA_Magpie_Nest_Deploy_C_SpawnDeployable final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FRotator                               PreviewRotation;                                   // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        OptionalAngle_0;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OptionalVector_0;                                  // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeam                                  Temp_struct_Variable;                              // 0x0048(0x0038)(NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstance*                          CallFunc_GetAssociatedItem_ReturnValue;            // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0160(0x0048)(ContainsInstancedReference)
	int32                                         CallFunc_GetTagStackCount_ReturnValue;             // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface;           // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTeam                                  CallFunc_GetTeam_ReturnValue;                      // 0x01E0(0x0038)(NoDestructor)
	class APlayerStateJP_Match*                   K2Node_DynamicCast_AsPlayer_State_JP_Match;        // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCombatParticipant                     CallFunc_CreateCombatParticipantFromPlayer_ReturnValue; // 0x0230(0x0060)()
	class APawn*                                  K2Node_DynamicCast_AsPawn_1;                       // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Deployable_Magpie_Nest_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Magpie_Nest_Deploy_C_SpawnDeployable) == 0x000010, "Wrong alignment on GA_Magpie_Nest_Deploy_C_SpawnDeployable");
static_assert(sizeof(GA_Magpie_Nest_Deploy_C_SpawnDeployable) == 0x000310, "Wrong size on GA_Magpie_Nest_Deploy_C_SpawnDeployable");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, HitResults) == 0x000000, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::HitResults' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, PreviewRotation) == 0x000010, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::PreviewRotation' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, OptionalAngle_0) == 0x000028, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::OptionalAngle_0' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, OptionalVector_0) == 0x000030, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::OptionalVector_0' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, Temp_struct_Variable) == 0x000048, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_bBlockingHit) == 0x000080, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_bInitialOverlap) == 0x000081, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_Time) == 0x000084, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_Distance) == 0x000088, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_Location) == 0x000090, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_ImpactPoint) == 0x0000A8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_Normal) == 0x0000C0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_ImpactNormal) == 0x0000D8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_PhysMat) == 0x0000F0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_HitActor) == 0x0000F8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_HitComponent) == 0x000100, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_HitBoneName) == 0x000108, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_BoneName) == 0x000110, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_HitItem) == 0x000118, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_ElementIndex) == 0x00011C, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_FaceIndex) == 0x000120, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_TraceStart) == 0x000128, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BreakHitResult_TraceEnd) == 0x000140, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_GetAssociatedItem_ReturnValue) == 0x000158, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_GetAssociatedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_GetActorInfo_ReturnValue) == 0x000160, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_GetTagStackCount_ReturnValue) == 0x0001A8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_GetTagStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0001B0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_AsTeamable_Interface) == 0x0001B8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_AsTeamable_Interface' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_AsPawn) == 0x0001D0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_bSuccess_1) == 0x0001D8, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_GetTeam_ReturnValue) == 0x0001E0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_GetTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_AsPlayer_State_JP_Match) == 0x000218, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_AsPlayer_State_JP_Match' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_bSuccess_2) == 0x000220, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000228, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_CreateCombatParticipantFromPlayer_ReturnValue) == 0x000230, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_CreateCombatParticipantFromPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_AsPawn_1) == 0x000290, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_AsPawn_1' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, K2Node_DynamicCast_bSuccess_3) == 0x000298, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_MakeTransform_ReturnValue) == 0x0002A0, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000300, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Magpie_Nest_Deploy_C_SpawnDeployable, CallFunc_FinishSpawningActor_ReturnValue) == 0x000308, "Member 'GA_Magpie_Nest_Deploy_C_SpawnDeployable::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

