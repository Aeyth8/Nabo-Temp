#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ImpactEffectType

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_ImpactEffect_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_ImpactEffectType.I_ImpactEffectType_C
// 0x0000 (0x0028 - 0x0028)
class II_ImpactEffectType_C final : public IInterface
{
public:
	void GetImpactEffectType(E_ImpactEffect* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_ImpactEffectType_C">();
	}
	static class II_ImpactEffectType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_ImpactEffectType_C>();
	}
};
static_assert(alignof(II_ImpactEffectType_C) == 0x000008, "Wrong alignment on II_ImpactEffectType_C");
static_assert(sizeof(II_ImpactEffectType_C) == 0x000028, "Wrong size on II_ImpactEffectType_C");

}

