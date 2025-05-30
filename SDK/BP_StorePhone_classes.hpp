#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StorePhone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_StoreBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StorePhone.BP_StorePhone_C
// 0x0008 (0x0480 - 0x0478)
class ABP_StorePhone_C final : public ABP_StoreBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_StorePhone_C;                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_StorePhone(int32 EntryPoint);
	void ActivatePointOfInterest();
	void DeactivatePointOfInterest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StorePhone_C">();
	}
	static class ABP_StorePhone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StorePhone_C>();
	}
};
static_assert(alignof(ABP_StorePhone_C) == 0x000008, "Wrong alignment on ABP_StorePhone_C");
static_assert(sizeof(ABP_StorePhone_C) == 0x000480, "Wrong size on ABP_StorePhone_C");
static_assert(offsetof(ABP_StorePhone_C, UberGraphFrame_BP_StorePhone_C) == 0x000478, "Member 'ABP_StorePhone_C::UberGraphFrame_BP_StorePhone_C' has a wrong offset!");

}

