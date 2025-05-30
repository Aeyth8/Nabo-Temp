#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOD_Magpie

#include "Basic.hpp"

#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOD_Magpie.SOD_Magpie_C
// 0x0000 (0x0050 - 0x0050)
class USOD_Magpie_C final : public USubObjectiveDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOD_Magpie_C">();
	}
	static class USOD_Magpie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USOD_Magpie_C>();
	}
};
static_assert(alignof(USOD_Magpie_C) == 0x000008, "Wrong alignment on USOD_Magpie_C");
static_assert(sizeof(USOD_Magpie_C) == 0x000050, "Wrong size on USOD_Magpie_C");

}

