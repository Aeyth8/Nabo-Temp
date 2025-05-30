#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResourceCrate_ForDelivery

#include "Basic.hpp"

#include "BP_ResourceCrate_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResourceCrate_ForDelivery.BP_ResourceCrate_ForDelivery_C
// 0x0000 (0x0650 - 0x0650)
class ABP_ResourceCrate_ForDelivery_C final : public ABP_ResourceCrate_C
{
public:
	void LaunchCrate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResourceCrate_ForDelivery_C">();
	}
	static class ABP_ResourceCrate_ForDelivery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResourceCrate_ForDelivery_C>();
	}
};
static_assert(alignof(ABP_ResourceCrate_ForDelivery_C) == 0x000010, "Wrong alignment on ABP_ResourceCrate_ForDelivery_C");
static_assert(sizeof(ABP_ResourceCrate_ForDelivery_C) == 0x000650, "Wrong size on ABP_ResourceCrate_ForDelivery_C");

}

