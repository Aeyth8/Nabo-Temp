#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_TeleportToTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_TeleportToTarget.BTS_TeleportToTarget_C
// 0x0008 (0x00A0 - 0x0098)
class UBTS_TeleportToTarget_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTS_TeleportToTarget(int32 EntryPoint);
	void On_QueryFinishedEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_TeleportToTarget_C">();
	}
	static class UBTS_TeleportToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_TeleportToTarget_C>();
	}
};
static_assert(alignof(UBTS_TeleportToTarget_C) == 0x000008, "Wrong alignment on UBTS_TeleportToTarget_C");
static_assert(sizeof(UBTS_TeleportToTarget_C) == 0x0000A0, "Wrong size on UBTS_TeleportToTarget_C");
static_assert(offsetof(UBTS_TeleportToTarget_C, UberGraphFrame) == 0x000098, "Member 'UBTS_TeleportToTarget_C::UberGraphFrame' has a wrong offset!");

}

