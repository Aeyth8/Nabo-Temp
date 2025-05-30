#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_OrangeCanonCharge

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_OrangeCanonCharge.GCN_OrangeCanonCharge_C
// 0x0000 (0x0350 - 0x0350)
class UGCN_OrangeCanonCharge_C final : public UGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_OrangeCanonCharge_C">();
	}
	static class UGCN_OrangeCanonCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_OrangeCanonCharge_C>();
	}
};
static_assert(alignof(UGCN_OrangeCanonCharge_C) == 0x000008, "Wrong alignment on UGCN_OrangeCanonCharge_C");
static_assert(sizeof(UGCN_OrangeCanonCharge_C) == 0x000350, "Wrong size on UGCN_OrangeCanonCharge_C");

}

