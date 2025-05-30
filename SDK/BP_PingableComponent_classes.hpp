#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PingableComponent

#include "Basic.hpp"

#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PingableComponent.BP_PingableComponent_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_PingableComponent_C : public UPingableComponent
{
public:
	struct FPingData GetPingDataBP(class APlayerControllerJP_Match* InPC);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PingableComponent_C">();
	}
	static class UBP_PingableComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PingableComponent_C>();
	}
};
static_assert(alignof(UBP_PingableComponent_C) == 0x000010, "Wrong alignment on UBP_PingableComponent_C");
static_assert(sizeof(UBP_PingableComponent_C) == 0x0002C0, "Wrong size on UBP_PingableComponent_C");

}

