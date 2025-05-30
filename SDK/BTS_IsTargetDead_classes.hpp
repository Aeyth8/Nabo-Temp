#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_IsTargetDead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_IsTargetDead.BTS_IsTargetDead_C
// 0x0008 (0x00A0 - 0x0098)
class UBTS_IsTargetDead_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTS_IsTargetDead(int32 EntryPoint);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_IsTargetDead_C">();
	}
	static class UBTS_IsTargetDead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_IsTargetDead_C>();
	}
};
static_assert(alignof(UBTS_IsTargetDead_C) == 0x000008, "Wrong alignment on UBTS_IsTargetDead_C");
static_assert(sizeof(UBTS_IsTargetDead_C) == 0x0000A0, "Wrong size on UBTS_IsTargetDead_C");
static_assert(offsetof(UBTS_IsTargetDead_C, UberGraphFrame) == 0x000098, "Member 'UBTS_IsTargetDead_C::UberGraphFrame' has a wrong offset!");

}

