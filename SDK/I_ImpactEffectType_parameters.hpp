#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ImpactEffectType

#include "Basic.hpp"

#include "E_ImpactEffect_structs.hpp"


namespace SDK::Params
{

// Function I_ImpactEffectType.I_ImpactEffectType_C.GetImpactEffectType
// 0x0001 (0x0001 - 0x0000)
struct I_ImpactEffectType_C_GetImpactEffectType final
{
public:
	E_ImpactEffect                                Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_ImpactEffectType_C_GetImpactEffectType) == 0x000001, "Wrong alignment on I_ImpactEffectType_C_GetImpactEffectType");
static_assert(sizeof(I_ImpactEffectType_C_GetImpactEffectType) == 0x000001, "Wrong size on I_ImpactEffectType_C_GetImpactEffectType");
static_assert(offsetof(I_ImpactEffectType_C_GetImpactEffectType, Return) == 0x000000, "Member 'I_ImpactEffectType_C_GetImpactEffectType::Return' has a wrong offset!");

}

