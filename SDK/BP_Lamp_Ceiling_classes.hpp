#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lamp_Ceiling

#include "Basic.hpp"

#include "BP_Lamp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lamp_Ceiling.BP_Lamp_Ceiling_C
// 0x0000 (0x0328 - 0x0328)
class ABP_Lamp_Ceiling_C final : public ABP_Lamp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lamp_Ceiling_C">();
	}
	static class ABP_Lamp_Ceiling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lamp_Ceiling_C>();
	}
};
static_assert(alignof(ABP_Lamp_Ceiling_C) == 0x000008, "Wrong alignment on ABP_Lamp_Ceiling_C");
static_assert(sizeof(ABP_Lamp_Ceiling_C) == 0x000328, "Wrong size on ABP_Lamp_Ceiling_C");

}

