#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_Tutorial_22_Logs

#include "Basic.hpp"

#include "SOA_TutorialTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_Tutorial_22_Logs.SOA_Tutorial_22_Logs_C
// 0x0000 (0x02F8 - 0x02F8)
class ASOA_Tutorial_22_Logs_C final : public ASOA_TutorialTask_C
{
public:
	class FText GetText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_Tutorial_22_Logs_C">();
	}
	static class ASOA_Tutorial_22_Logs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_Tutorial_22_Logs_C>();
	}
};
static_assert(alignof(ASOA_Tutorial_22_Logs_C) == 0x000008, "Wrong alignment on ASOA_Tutorial_22_Logs_C");
static_assert(sizeof(ASOA_Tutorial_22_Logs_C) == 0x0002F8, "Wrong size on ASOA_Tutorial_22_Logs_C");

}

