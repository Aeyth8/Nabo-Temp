#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_Sprinting

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_Sprinting.CS_Sprinting_C
// 0x0000 (0x00E0 - 0x00E0)
class UCS_Sprinting_C final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_Sprinting_C">();
	}
	static class UCS_Sprinting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_Sprinting_C>();
	}
};
static_assert(alignof(UCS_Sprinting_C) == 0x000010, "Wrong alignment on UCS_Sprinting_C");
static_assert(sizeof(UCS_Sprinting_C) == 0x0000E0, "Wrong size on UCS_Sprinting_C");

}

