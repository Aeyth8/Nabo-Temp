#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_GameMaster

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_GameMaster.I_GameMaster_C
// 0x0000 (0x0028 - 0x0028)
class II_GameMaster_C final : public IInterface
{
public:
	void SetGameMasterReference(class Abp_groundskeeper_C* NewGroundskeeper);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_GameMaster_C">();
	}
	static class II_GameMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_GameMaster_C>();
	}
};
static_assert(alignof(II_GameMaster_C) == 0x000008, "Wrong alignment on II_GameMaster_C");
static_assert(sizeof(II_GameMaster_C) == 0x000028, "Wrong size on II_GameMaster_C");

}

