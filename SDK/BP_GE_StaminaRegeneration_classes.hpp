#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GE_StaminaRegeneration

#include "Basic.hpp"

#include "GASIW_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GE_StaminaRegeneration.BP_GE_StaminaRegeneration_C
// 0x0000 (0x0AD0 - 0x0AD0)
class UBP_GE_StaminaRegeneration_C final : public UGameplayEffectIW
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GE_StaminaRegeneration_C">();
	}
	static class UBP_GE_StaminaRegeneration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GE_StaminaRegeneration_C>();
	}
};
static_assert(alignof(UBP_GE_StaminaRegeneration_C) == 0x000008, "Wrong alignment on UBP_GE_StaminaRegeneration_C");
static_assert(sizeof(UBP_GE_StaminaRegeneration_C) == 0x000AD0, "Wrong size on UBP_GE_StaminaRegeneration_C");

}

