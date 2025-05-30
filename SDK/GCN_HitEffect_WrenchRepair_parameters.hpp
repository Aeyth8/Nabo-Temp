#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_HitEffect_WrenchRepair

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_HitEffect_WrenchRepair.GCN_HitEffect_WrenchRepair_C.ExecuteUbergraph_GCN_HitEffect_WrenchRepair
// 0x0140 (0x0140 - 0x0000)
struct GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x00E8(0x0058)(ConstParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair) == 0x000008, "Wrong alignment on GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair");
static_assert(sizeof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair) == 0x000140, "Wrong size on GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair, EntryPoint) == 0x000000, "Member 'GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair, K2Node_Event_Target) == 0x000008, "Member 'GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair, K2Node_Event_Parameters) == 0x000010, "Member 'GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair, K2Node_Event_SpawnResults) == 0x0000E8, "Member 'GCN_HitEffect_WrenchRepair_C_ExecuteUbergraph_GCN_HitEffect_WrenchRepair::K2Node_Event_SpawnResults' has a wrong offset!");

// Function GCN_HitEffect_WrenchRepair.GCN_HitEffect_WrenchRepair_C.OnBurst
// 0x0138 (0x0138 - 0x0000)
struct GCN_HitEffect_WrenchRepair_C_OnBurst final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters_0;                                      // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_HitEffect_WrenchRepair_C_OnBurst) == 0x000008, "Wrong alignment on GCN_HitEffect_WrenchRepair_C_OnBurst");
static_assert(sizeof(GCN_HitEffect_WrenchRepair_C_OnBurst) == 0x000138, "Wrong size on GCN_HitEffect_WrenchRepair_C_OnBurst");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_OnBurst, Target) == 0x000000, "Member 'GCN_HitEffect_WrenchRepair_C_OnBurst::Target' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_OnBurst, Parameters_0) == 0x000008, "Member 'GCN_HitEffect_WrenchRepair_C_OnBurst::Parameters_0' has a wrong offset!");
static_assert(offsetof(GCN_HitEffect_WrenchRepair_C_OnBurst, SpawnResults) == 0x0000E0, "Member 'GCN_HitEffect_WrenchRepair_C_OnBurst::SpawnResults' has a wrong offset!");

}

