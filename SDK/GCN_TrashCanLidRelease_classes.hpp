#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_TrashCanLidRelease

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_TrashCanLidRelease.GCN_TrashCanLidRelease_C
// 0x0000 (0x0350 - 0x0350)
class UGCN_TrashCanLidRelease_C final : public UGameplayCueNotify_Burst
{
public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_TrashCanLidRelease_C">();
	}
	static class UGCN_TrashCanLidRelease_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_TrashCanLidRelease_C>();
	}
};
static_assert(alignof(UGCN_TrashCanLidRelease_C) == 0x000008, "Wrong alignment on UGCN_TrashCanLidRelease_C");
static_assert(sizeof(UGCN_TrashCanLidRelease_C) == 0x000350, "Wrong size on UGCN_TrashCanLidRelease_C");

}

