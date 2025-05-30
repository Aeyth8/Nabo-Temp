#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PA_ModifyOutgoingDamage

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "JP_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PA_ModifyOutgoingDamage.PA_ModifyOutgoingDamage_C
// 0x0030 (0x0058 - 0x0028)
class UPA_ModifyOutgoingDamage_C final : public UPerkAction
{
public:
	struct FGameplayTagContainer                  AffectedActors;                                    // 0x0028(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ModifyingValue;                                    // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EArithmeticOperators                          Operator;                                          // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ModifyOutgoingDamage(double OutgoingDamage, double* ModifiedOutgoingDamage);

	bool CanModifyFromTags(class UAbilitySystemComponent* Target) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PA_ModifyOutgoingDamage_C">();
	}
	static class UPA_ModifyOutgoingDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPA_ModifyOutgoingDamage_C>();
	}
};
static_assert(alignof(UPA_ModifyOutgoingDamage_C) == 0x000008, "Wrong alignment on UPA_ModifyOutgoingDamage_C");
static_assert(sizeof(UPA_ModifyOutgoingDamage_C) == 0x000058, "Wrong size on UPA_ModifyOutgoingDamage_C");
static_assert(offsetof(UPA_ModifyOutgoingDamage_C, AffectedActors) == 0x000028, "Member 'UPA_ModifyOutgoingDamage_C::AffectedActors' has a wrong offset!");
static_assert(offsetof(UPA_ModifyOutgoingDamage_C, ModifyingValue) == 0x000048, "Member 'UPA_ModifyOutgoingDamage_C::ModifyingValue' has a wrong offset!");
static_assert(offsetof(UPA_ModifyOutgoingDamage_C, Operator) == 0x000050, "Member 'UPA_ModifyOutgoingDamage_C::Operator' has a wrong offset!");

}

