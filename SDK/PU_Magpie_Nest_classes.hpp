#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PU_Magpie_Nest

#include "Basic.hpp"

#include "BP_PickupBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PU_Magpie_Nest.PU_Magpie_Nest_C
// 0x0000 (0x0600 - 0x0600)
class APU_Magpie_Nest_C final : public ABP_PickupBase_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PU_Magpie_Nest_C">();
	}
	static class APU_Magpie_Nest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APU_Magpie_Nest_C>();
	}
};
static_assert(alignof(APU_Magpie_Nest_C) == 0x000008, "Wrong alignment on APU_Magpie_Nest_C");
static_assert(sizeof(APU_Magpie_Nest_C) == 0x000600, "Wrong size on APU_Magpie_Nest_C");

}

