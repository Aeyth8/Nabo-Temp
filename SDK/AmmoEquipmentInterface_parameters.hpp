#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmmoEquipmentInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function AmmoEquipmentInterface.AmmoEquipmentInterface_C.Ammo Changed
// 0x0004 (0x0004 - 0x0000)
struct AmmoEquipmentInterface_C_Ammo_Changed final
{
public:
	int32                                         AmmoCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmmoEquipmentInterface_C_Ammo_Changed) == 0x000004, "Wrong alignment on AmmoEquipmentInterface_C_Ammo_Changed");
static_assert(sizeof(AmmoEquipmentInterface_C_Ammo_Changed) == 0x000004, "Wrong size on AmmoEquipmentInterface_C_Ammo_Changed");
static_assert(offsetof(AmmoEquipmentInterface_C_Ammo_Changed, AmmoCount) == 0x000000, "Member 'AmmoEquipmentInterface_C_Ammo_Changed::AmmoCount' has a wrong offset!");

}

