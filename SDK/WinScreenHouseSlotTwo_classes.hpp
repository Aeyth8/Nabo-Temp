#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinScreenHouseSlotTwo

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WinScreenHouseSlotTwo.WinScreenHouseSlotTwo_C
// 0x0008 (0x0298 - 0x0290)
class AWinScreenHouseSlotTwo_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WinScreenHouseSlotTwo_C">();
	}
	static class AWinScreenHouseSlotTwo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWinScreenHouseSlotTwo_C>();
	}
};
static_assert(alignof(AWinScreenHouseSlotTwo_C) == 0x000008, "Wrong alignment on AWinScreenHouseSlotTwo_C");
static_assert(sizeof(AWinScreenHouseSlotTwo_C) == 0x000298, "Wrong size on AWinScreenHouseSlotTwo_C");
static_assert(offsetof(AWinScreenHouseSlotTwo_C, DefaultSceneRoot) == 0x000290, "Member 'AWinScreenHouseSlotTwo_C::DefaultSceneRoot' has a wrong offset!");

}

