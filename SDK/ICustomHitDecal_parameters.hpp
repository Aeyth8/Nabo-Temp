#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ICustomHitDecal

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ICustomHitDecal.ICustomHitDecal_C.AddCustomDecal
// 0x0100 (0x0100 - 0x0000)
struct ICustomHitDecal_C_AddCustomDecal final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00F8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UClass*                                 DecalType;                                         // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ICustomHitDecal_C_AddCustomDecal) == 0x000008, "Wrong alignment on ICustomHitDecal_C_AddCustomDecal");
static_assert(sizeof(ICustomHitDecal_C_AddCustomDecal) == 0x000100, "Wrong size on ICustomHitDecal_C_AddCustomDecal");
static_assert(offsetof(ICustomHitDecal_C_AddCustomDecal, Hit) == 0x000000, "Member 'ICustomHitDecal_C_AddCustomDecal::Hit' has a wrong offset!");
static_assert(offsetof(ICustomHitDecal_C_AddCustomDecal, DecalType) == 0x0000F8, "Member 'ICustomHitDecal_C_AddCustomDecal::DecalType' has a wrong offset!");

}

