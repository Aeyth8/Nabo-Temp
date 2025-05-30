#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ping

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GASIW_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ping.GA_Ping_C
// 0x0020 (0x0480 - 0x0460)
class UGA_Ping_C final : public UGameplayAbilityIW
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_HighlightManager_C*                 HighlightManager;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                As_BP_Resident_Character;                          // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        PingDistance;                                      // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Ping(int32 EntryPoint);
	void Get_Highlight_Manager(class ABP_HighlightManager_C** Manager);
	void K2_ActivateAbility();
	void OnRelease_ACA2671F4016CD09C520CCA8F50FAFFB(float TimeHeld);
	void TraceHit(struct FHitResult* Results, bool* HitFound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ping_C">();
	}
	static class UGA_Ping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ping_C>();
	}
};
static_assert(alignof(UGA_Ping_C) == 0x000010, "Wrong alignment on UGA_Ping_C");
static_assert(sizeof(UGA_Ping_C) == 0x000480, "Wrong size on UGA_Ping_C");
static_assert(offsetof(UGA_Ping_C, UberGraphFrame) == 0x000460, "Member 'UGA_Ping_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Ping_C, HighlightManager) == 0x000468, "Member 'UGA_Ping_C::HighlightManager' has a wrong offset!");
static_assert(offsetof(UGA_Ping_C, As_BP_Resident_Character) == 0x000470, "Member 'UGA_Ping_C::As_BP_Resident_Character' has a wrong offset!");
static_assert(offsetof(UGA_Ping_C, PingDistance) == 0x000478, "Member 'UGA_Ping_C::PingDistance' has a wrong offset!");

}

