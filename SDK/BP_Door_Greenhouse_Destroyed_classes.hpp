#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_Greenhouse_Destroyed

#include "Basic.hpp"

#include "BP_MainDoor_Destroyed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Door_Greenhouse_Destroyed.BP_Door_Greenhouse_Destroyed_C
// 0x0000 (0x0338 - 0x0338)
class ABP_Door_Greenhouse_Destroyed_C final : public ABP_MainDoor_Destroyed_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Door_Greenhouse_Destroyed_C">();
	}
	static class ABP_Door_Greenhouse_Destroyed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Door_Greenhouse_Destroyed_C>();
	}
};
static_assert(alignof(ABP_Door_Greenhouse_Destroyed_C) == 0x000008, "Wrong alignment on ABP_Door_Greenhouse_Destroyed_C");
static_assert(sizeof(ABP_Door_Greenhouse_Destroyed_C) == 0x000338, "Wrong size on ABP_Door_Greenhouse_Destroyed_C");

}

