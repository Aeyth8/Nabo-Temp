#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EI_Pie

#include "Basic.hpp"

#include "EI_ThrowEdible_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EI_Pie.EI_Pie_C
// 0x0000 (0x01F0 - 0x01F0)
class UEI_Pie_C final : public UEI_ThrowEdible_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EI_Pie_C">();
	}
	static class UEI_Pie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEI_Pie_C>();
	}
};
static_assert(alignof(UEI_Pie_C) == 0x000008, "Wrong alignment on UEI_Pie_C");
static_assert(sizeof(UEI_Pie_C) == 0x0001F0, "Wrong size on UEI_Pie_C");

}

