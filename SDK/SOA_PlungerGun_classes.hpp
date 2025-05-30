#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_PlungerGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SOA_ItemTip_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_PlungerGun.SOA_PlungerGun_C
// 0x0008 (0x02D8 - 0x02D0)
class ASOA_PlungerGun_C final : public ASOA_ItemTip_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SOA_PlungerGun(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_PlungerGun_C">();
	}
	static class ASOA_PlungerGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_PlungerGun_C>();
	}
};
static_assert(alignof(ASOA_PlungerGun_C) == 0x000008, "Wrong alignment on ASOA_PlungerGun_C");
static_assert(sizeof(ASOA_PlungerGun_C) == 0x0002D8, "Wrong size on ASOA_PlungerGun_C");
static_assert(offsetof(ASOA_PlungerGun_C, UberGraphFrame) == 0x0002D0, "Member 'ASOA_PlungerGun_C::UberGraphFrame' has a wrong offset!");

}

