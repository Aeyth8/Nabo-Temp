#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_Tutorial_13_CrateDelivery

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SOA_TutorialTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_Tutorial_13_CrateDelivery.SOA_Tutorial_13_CrateDelivery_C
// 0x0008 (0x0300 - 0x02F8)
class ASOA_Tutorial_13_CrateDelivery_C final : public ASOA_TutorialTask_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SOA_Tutorial_13_CrateDelivery_C;    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SOA_Tutorial_13_CrateDelivery(int32 EntryPoint);
	class FText GetText();
	void OnMessageReceived_576E97214F2D9154E355F697E986B696(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_Tutorial_13_CrateDelivery_C">();
	}
	static class ASOA_Tutorial_13_CrateDelivery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_Tutorial_13_CrateDelivery_C>();
	}
};
static_assert(alignof(ASOA_Tutorial_13_CrateDelivery_C) == 0x000008, "Wrong alignment on ASOA_Tutorial_13_CrateDelivery_C");
static_assert(sizeof(ASOA_Tutorial_13_CrateDelivery_C) == 0x000300, "Wrong size on ASOA_Tutorial_13_CrateDelivery_C");
static_assert(offsetof(ASOA_Tutorial_13_CrateDelivery_C, UberGraphFrame_SOA_Tutorial_13_CrateDelivery_C) == 0x0002F8, "Member 'ASOA_Tutorial_13_CrateDelivery_C::UberGraphFrame_SOA_Tutorial_13_CrateDelivery_C' has a wrong offset!");

}

