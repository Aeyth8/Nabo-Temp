#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SlingshotCharge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_SlingshotCharge.GCN_SlingshotCharge_C
// 0x0048 (0x0EE0 - 0x0E98)
class AGCN_SlingshotCharge_C final : public AGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ZoomTimeline_NewTrack_0_B00FB84743BD7E9D04339B93EDDD7F4A; // 0x0EA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ZoomTimeline__Direction_B00FB84743BD7E9D04339B93EDDD7F4A; // 0x0EA4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA5[0x3];                                      // 0x0EA5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ZoomTimeline;                                      // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                As_BP_Resident_Character;                          // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UChargableEquipmentInstance_C*          As_Chargable_Equipment_Instance;                   // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZoom;                                           // 0x0EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartFOV;                                          // 0x0EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldRun;                                         // 0x0ED0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED1[0x7];                                      // 0x0ED1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InterpolatedValue;                                 // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_SlingshotCharge(int32 EntryPoint);
	void OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void PlayChargeSound(class UEquipmentInstance* EquipmentInstance);
	void RestoreFOV();
	void SetStartFOV();
	void UpdateZoomEffect(double Time);
	void ZoomTimeline__FinishedFunc();
	void ZoomTimeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_SlingshotCharge_C">();
	}
	static class AGCN_SlingshotCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_SlingshotCharge_C>();
	}
};
static_assert(alignof(AGCN_SlingshotCharge_C) == 0x000008, "Wrong alignment on AGCN_SlingshotCharge_C");
static_assert(sizeof(AGCN_SlingshotCharge_C) == 0x000EE0, "Wrong size on AGCN_SlingshotCharge_C");
static_assert(offsetof(AGCN_SlingshotCharge_C, UberGraphFrame) == 0x000E98, "Member 'AGCN_SlingshotCharge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, ZoomTimeline_NewTrack_0_B00FB84743BD7E9D04339B93EDDD7F4A) == 0x000EA0, "Member 'AGCN_SlingshotCharge_C::ZoomTimeline_NewTrack_0_B00FB84743BD7E9D04339B93EDDD7F4A' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, ZoomTimeline__Direction_B00FB84743BD7E9D04339B93EDDD7F4A) == 0x000EA4, "Member 'AGCN_SlingshotCharge_C::ZoomTimeline__Direction_B00FB84743BD7E9D04339B93EDDD7F4A' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, ZoomTimeline) == 0x000EA8, "Member 'AGCN_SlingshotCharge_C::ZoomTimeline' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, As_BP_Resident_Character) == 0x000EB0, "Member 'AGCN_SlingshotCharge_C::As_BP_Resident_Character' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, As_Chargable_Equipment_Instance) == 0x000EB8, "Member 'AGCN_SlingshotCharge_C::As_Chargable_Equipment_Instance' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, MaxZoom) == 0x000EC0, "Member 'AGCN_SlingshotCharge_C::MaxZoom' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, StartFOV) == 0x000EC8, "Member 'AGCN_SlingshotCharge_C::StartFOV' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, ShouldRun) == 0x000ED0, "Member 'AGCN_SlingshotCharge_C::ShouldRun' has a wrong offset!");
static_assert(offsetof(AGCN_SlingshotCharge_C, InterpolatedValue) == 0x000ED8, "Member 'AGCN_SlingshotCharge_C::InterpolatedValue' has a wrong offset!");

}

