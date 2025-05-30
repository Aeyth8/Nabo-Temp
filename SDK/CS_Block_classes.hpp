#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_Block

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_Block.CS_Block_C
// 0x0000 (0x00E0 - 0x00E0)
class UCS_Block_C final : public UDefaultCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_Block_C">();
	}
	static class UCS_Block_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_Block_C>();
	}
};
static_assert(alignof(UCS_Block_C) == 0x000010, "Wrong alignment on UCS_Block_C");
static_assert(sizeof(UCS_Block_C) == 0x0000E0, "Wrong size on UCS_Block_C");

}

