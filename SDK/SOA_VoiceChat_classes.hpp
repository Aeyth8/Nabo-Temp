#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_VoiceChat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_VoiceChat.SOA_VoiceChat_C
// 0x0008 (0x02D8 - 0x02D0)
class ASOA_VoiceChat_C final : public ASubObjective
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SOA_VoiceChat(int32 EntryPoint);
	class FText GetText();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_VoiceChat_C">();
	}
	static class ASOA_VoiceChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_VoiceChat_C>();
	}
};
static_assert(alignof(ASOA_VoiceChat_C) == 0x000008, "Wrong alignment on ASOA_VoiceChat_C");
static_assert(sizeof(ASOA_VoiceChat_C) == 0x0002D8, "Wrong size on ASOA_VoiceChat_C");
static_assert(offsetof(ASOA_VoiceChat_C, UberGraphFrame) == 0x0002D0, "Member 'ASOA_VoiceChat_C::UberGraphFrame' has a wrong offset!");

}

