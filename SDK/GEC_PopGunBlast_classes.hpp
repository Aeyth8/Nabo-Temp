#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GEC_PopGunBlast

#include "Basic.hpp"

#include "GEC_CooldownByDuration_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GEC_PopGunBlast.GEC_PopGunBlast_C
// 0x0000 (0x0AD0 - 0x0AD0)
class UGEC_PopGunBlast_C final : public UGEC_CooldownByDuration_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GEC_PopGunBlast_C">();
	}
	static class UGEC_PopGunBlast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGEC_PopGunBlast_C>();
	}
};
static_assert(alignof(UGEC_PopGunBlast_C) == 0x000008, "Wrong alignment on UGEC_PopGunBlast_C");
static_assert(sizeof(UGEC_PopGunBlast_C) == 0x000AD0, "Wrong size on UGEC_PopGunBlast_C");

}

