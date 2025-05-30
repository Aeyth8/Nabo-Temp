#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_CustomCenterLocation

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_CustomCenterLocation.I_CustomCenterLocation_C
// 0x0000 (0x0028 - 0x0028)
class II_CustomCenterLocation_C final : public IInterface
{
public:
	void GetCenterLocation(struct FVector* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_CustomCenterLocation_C">();
	}
	static class II_CustomCenterLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_CustomCenterLocation_C>();
	}
};
static_assert(alignof(II_CustomCenterLocation_C) == 0x000008, "Wrong alignment on II_CustomCenterLocation_C");
static_assert(sizeof(II_CustomCenterLocation_C) == 0x000028, "Wrong size on II_CustomCenterLocation_C");

}

