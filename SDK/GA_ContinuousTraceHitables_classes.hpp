#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ContinuousTraceHitables

#include "Basic.hpp"

#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ContinuousTraceHitables.GA_ContinuousTraceHitables_C
// 0x0000 (0x04B0 - 0x04B0)
class UGA_ContinuousTraceHitables_C final : public UGA_ContinuousTrace
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ContinuousTraceHitables_C">();
	}
	static class UGA_ContinuousTraceHitables_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ContinuousTraceHitables_C>();
	}
};
static_assert(alignof(UGA_ContinuousTraceHitables_C) == 0x000010, "Wrong alignment on UGA_ContinuousTraceHitables_C");
static_assert(sizeof(UGA_ContinuousTraceHitables_C) == 0x0004B0, "Wrong size on UGA_ContinuousTraceHitables_C");

}

