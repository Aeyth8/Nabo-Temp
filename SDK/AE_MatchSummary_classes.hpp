#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AE_MatchSummary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_MatchSummary_structs.hpp"
#include "IWAnalytics_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AE_MatchSummary.AE_MatchSummary_C
// 0x0068 (0x00C8 - 0x0060)
class UAE_MatchSummary_C final : public UIWAnalyticsEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_MatchSummary                        Entries;                                           // 0x0068(0x0060)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AE_MatchSummary(int32 EntryPoint);
	void OnCreatePayload();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AE_MatchSummary_C">();
	}
	static class UAE_MatchSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAE_MatchSummary_C>();
	}
};
static_assert(alignof(UAE_MatchSummary_C) == 0x000008, "Wrong alignment on UAE_MatchSummary_C");
static_assert(sizeof(UAE_MatchSummary_C) == 0x0000C8, "Wrong size on UAE_MatchSummary_C");
static_assert(offsetof(UAE_MatchSummary_C, UberGraphFrame) == 0x000060, "Member 'UAE_MatchSummary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAE_MatchSummary_C, Entries) == 0x000068, "Member 'UAE_MatchSummary_C::Entries' has a wrong offset!");

}

