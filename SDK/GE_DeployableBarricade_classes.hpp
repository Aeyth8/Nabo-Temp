#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_DeployableBarricade

#include "Basic.hpp"

#include "GASIW_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_DeployableBarricade.GE_DeployableBarricade_C
// 0x0000 (0x0AD0 - 0x0AD0)
class UGE_DeployableBarricade_C final : public UGameplayEffectIW
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DeployableBarricade_C">();
	}
	static class UGE_DeployableBarricade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DeployableBarricade_C>();
	}
};
static_assert(alignof(UGE_DeployableBarricade_C) == 0x000008, "Wrong alignment on UGE_DeployableBarricade_C");
static_assert(sizeof(UGE_DeployableBarricade_C) == 0x000AD0, "Wrong size on UGE_DeployableBarricade_C");

}

