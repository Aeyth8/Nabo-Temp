#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EI_Hammer

#include "Basic.hpp"

#include "BP_EquipmentInstance_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EI_Hammer.EI_Hammer_C
// 0x0000 (0x0140 - 0x0140)
class UEI_Hammer_C final : public UBP_EquipmentInstance_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EI_Hammer_C">();
	}
	static class UEI_Hammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEI_Hammer_C>();
	}
};
static_assert(alignof(UEI_Hammer_C) == 0x000008, "Wrong alignment on UEI_Hammer_C");
static_assert(sizeof(UEI_Hammer_C) == 0x000140, "Wrong size on UEI_Hammer_C");

}

