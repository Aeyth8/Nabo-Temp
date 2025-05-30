#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SlingshotCosmeticAltFire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_SlingshotCosmeticAltFire.GCN_SlingshotCosmeticAltFire_C
// 0x0010 (0x0678 - 0x0668)
class AGCN_SlingshotCosmeticAltFire_C final : public AGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentIndex;                                      // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FCombatParticipant CreateKillData(class AActor* Owner_0);
	void ExecuteUbergraph_GCN_SlingshotCosmeticAltFire(int32 EntryPoint);
	void GetRandomDirection(class UItemInstance* Item, const struct FVector& Forward, struct FRotator* Rotation);
	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_SlingshotCosmeticAltFire_C">();
	}
	static class AGCN_SlingshotCosmeticAltFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_SlingshotCosmeticAltFire_C>();
	}
};
static_assert(alignof(AGCN_SlingshotCosmeticAltFire_C) == 0x000008, "Wrong alignment on AGCN_SlingshotCosmeticAltFire_C");
static_assert(sizeof(AGCN_SlingshotCosmeticAltFire_C) == 0x000678, "Wrong size on AGCN_SlingshotCosmeticAltFire_C");
static_assert(offsetof(AGCN_SlingshotCosmeticAltFire_C, UberGraphFrame) == 0x000668, "Member 'AGCN_SlingshotCosmeticAltFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCosmeticAltFire_C, CurrentIndex) == 0x000670, "Member 'AGCN_SlingshotCosmeticAltFire_C::CurrentIndex' has a wrong offset!");

}

