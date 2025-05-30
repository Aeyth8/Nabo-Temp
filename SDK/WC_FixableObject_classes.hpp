#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_FixableObject

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WC_FixableObject.WC_FixableObject_C
// 0x0010 (0x06A0 - 0x0690)
class UWC_FixableObject_C final : public UWidgetComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WC_FixableObject(int32 EntryPoint);
	void SetShouldBeVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WC_FixableObject_C">();
	}
	static class UWC_FixableObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWC_FixableObject_C>();
	}
};
static_assert(alignof(UWC_FixableObject_C) == 0x000010, "Wrong alignment on UWC_FixableObject_C");
static_assert(sizeof(UWC_FixableObject_C) == 0x0006A0, "Wrong size on UWC_FixableObject_C");
static_assert(offsetof(UWC_FixableObject_C, UberGraphFrame) == 0x000690, "Member 'UWC_FixableObject_C::UberGraphFrame' has a wrong offset!");

}

