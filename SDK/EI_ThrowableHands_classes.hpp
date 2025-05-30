#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EI_ThrowableHands

#include "Basic.hpp"

#include "BP_EquipmentInstance_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EI_ThrowableHands.EI_ThrowableHands_C
// 0x0010 (0x0150 - 0x0140)
class UEI_ThrowableHands_C final : public UBP_EquipmentInstance_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EI_ThrowableHands_C;                // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABp_ThrowableProp_Base_C*               ThrowableCarrying;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EI_ThrowableHands(int32 EntryPoint);
	void K2_OnEquipped();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EI_ThrowableHands_C">();
	}
	static class UEI_ThrowableHands_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEI_ThrowableHands_C>();
	}
};
static_assert(alignof(UEI_ThrowableHands_C) == 0x000008, "Wrong alignment on UEI_ThrowableHands_C");
static_assert(sizeof(UEI_ThrowableHands_C) == 0x000150, "Wrong size on UEI_ThrowableHands_C");
static_assert(offsetof(UEI_ThrowableHands_C, UberGraphFrame_EI_ThrowableHands_C) == 0x000140, "Member 'UEI_ThrowableHands_C::UberGraphFrame_EI_ThrowableHands_C' has a wrong offset!");
static_assert(offsetof(UEI_ThrowableHands_C, ThrowableCarrying) == 0x000148, "Member 'UEI_ThrowableHands_C::ThrowableCarrying' has a wrong offset!");

}

