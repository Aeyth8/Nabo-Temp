#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_ThrowAnimation_Wrench

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GCN_ThrowAnimation_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_ThrowAnimation_Wrench.GCN_ThrowAnimation_Wrench_C
// 0x0008 (0x0EE0 - 0x0ED8)
class AGCN_ThrowAnimation_Wrench_C final : public AGCN_ThrowAnimation_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCN_ThrowAnimation_Wrench_C;        // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCN_ThrowAnimation_Wrench(int32 EntryPoint);
	void OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_ThrowAnimation_Wrench_C">();
	}
	static class AGCN_ThrowAnimation_Wrench_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_ThrowAnimation_Wrench_C>();
	}
};
static_assert(alignof(AGCN_ThrowAnimation_Wrench_C) == 0x000008, "Wrong alignment on AGCN_ThrowAnimation_Wrench_C");
static_assert(sizeof(AGCN_ThrowAnimation_Wrench_C) == 0x000EE0, "Wrong size on AGCN_ThrowAnimation_Wrench_C");
static_assert(offsetof(AGCN_ThrowAnimation_Wrench_C, UberGraphFrame_GCN_ThrowAnimation_Wrench_C) == 0x000ED8, "Member 'AGCN_ThrowAnimation_Wrench_C::UberGraphFrame_GCN_ThrowAnimation_Wrench_C' has a wrong offset!");

}

