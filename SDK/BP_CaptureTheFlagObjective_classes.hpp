#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureTheFlagObjective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaptureTheFlagObjective.BP_CaptureTheFlagObjective_C
// 0x0008 (0x0098 - 0x0090)
class UBP_CaptureTheFlagObjective_C final : public UObjectiveBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_CaptureTheFlagObjective(int32 EntryPoint);
	void OnCreated();

	class FText GetProgressionText(const class FText& RowData) const;
	EObjectiveState GetState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaptureTheFlagObjective_C">();
	}
	static class UBP_CaptureTheFlagObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CaptureTheFlagObjective_C>();
	}
};
static_assert(alignof(UBP_CaptureTheFlagObjective_C) == 0x000008, "Wrong alignment on UBP_CaptureTheFlagObjective_C");
static_assert(sizeof(UBP_CaptureTheFlagObjective_C) == 0x000098, "Wrong size on UBP_CaptureTheFlagObjective_C");
static_assert(offsetof(UBP_CaptureTheFlagObjective_C, UberGraphFrame) == 0x000090, "Member 'UBP_CaptureTheFlagObjective_C::UberGraphFrame' has a wrong offset!");

}

