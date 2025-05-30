#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HouseIdentifier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "S_IndicatorData_structs.hpp"
#include "JP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HouseIdentifier.BP_HouseIdentifier_C
// 0x0240 (0x04D0 - 0x0290)
class ABP_HouseIdentifier_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PingableComponent_HouseIdentifier_C* BP_PingableComponent_HouseIdentifier;              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Indicator_C*                        AC_Indicator;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGroundskeeperReference*                GroundskeeperReference;                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Phase;                                             // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InitialHousePosition;                              // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CenterHousePosition;                               // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TweenUpFromCenterHouseStartTime;                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TweenUpFromCenterHouseDuration;                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IndicatorData                       OriginalIndicatorData;                             // 0x0308(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_IndicatorData                       ModifiedIndicatorData;                             // 0x03E0(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	double                                        TweenUpEaseBlendExponent;                          // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtMeInitialDelay;                              // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtMeContinueDelay;                             // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TweenStartSound;                                   // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CreateModifiedIndicatorData(const struct FS_IndicatorData& OriginalIndicatorData_0, bool Visible_Through_Walls, struct FS_IndicatorData* ModifiedIndicatorData_0);
	void ExecuteUbergraph_BP_HouseIdentifier(int32 EntryPoint);
	uint8 GetLocalPlayerTeamId();
	void GetTweenUpFromCenterHouseEndTime(double* EndTime);
	void GotoNextPhase();
	void Initialize();
	bool IsLocalPlayerLookingAtWidget();
	void IsWarmupActive(bool* WarmupActive);
	void OnStarted_432D815342FCEBE140B8DCBE11A4EAEC();
	void Phase0_WaitForAllowedToProceed();
	void Phase1_WaitForPlayerToLookAtWidget();
	void Phase2_LookAtMeEffect();
	void Phase3_TweenUpFromCenterHouse();
	void Phase4_StopMovement();
	void Phase5_End();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HouseIdentifier_C">();
	}
	static class ABP_HouseIdentifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HouseIdentifier_C>();
	}
};
static_assert(alignof(ABP_HouseIdentifier_C) == 0x000008, "Wrong alignment on ABP_HouseIdentifier_C");
static_assert(sizeof(ABP_HouseIdentifier_C) == 0x0004D0, "Wrong size on ABP_HouseIdentifier_C");
static_assert(offsetof(ABP_HouseIdentifier_C, UberGraphFrame) == 0x000290, "Member 'ABP_HouseIdentifier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, BP_PingableComponent_HouseIdentifier) == 0x000298, "Member 'ABP_HouseIdentifier_C::BP_PingableComponent_HouseIdentifier' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, AC_Indicator) == 0x0002A0, "Member 'ABP_HouseIdentifier_C::AC_Indicator' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, Billboard) == 0x0002A8, "Member 'ABP_HouseIdentifier_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, GroundskeeperReference) == 0x0002B0, "Member 'ABP_HouseIdentifier_C::GroundskeeperReference' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_HouseIdentifier_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, Phase) == 0x0002C0, "Member 'ABP_HouseIdentifier_C::Phase' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, InitialHousePosition) == 0x0002C8, "Member 'ABP_HouseIdentifier_C::InitialHousePosition' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, CenterHousePosition) == 0x0002E0, "Member 'ABP_HouseIdentifier_C::CenterHousePosition' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, TweenUpFromCenterHouseStartTime) == 0x0002F8, "Member 'ABP_HouseIdentifier_C::TweenUpFromCenterHouseStartTime' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, TweenUpFromCenterHouseDuration) == 0x000300, "Member 'ABP_HouseIdentifier_C::TweenUpFromCenterHouseDuration' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, OriginalIndicatorData) == 0x000308, "Member 'ABP_HouseIdentifier_C::OriginalIndicatorData' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, ModifiedIndicatorData) == 0x0003E0, "Member 'ABP_HouseIdentifier_C::ModifiedIndicatorData' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, TweenUpEaseBlendExponent) == 0x0004B8, "Member 'ABP_HouseIdentifier_C::TweenUpEaseBlendExponent' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, LookAtMeInitialDelay) == 0x0004C0, "Member 'ABP_HouseIdentifier_C::LookAtMeInitialDelay' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, LookAtMeContinueDelay) == 0x0004C4, "Member 'ABP_HouseIdentifier_C::LookAtMeContinueDelay' has a wrong offset!");
static_assert(offsetof(ABP_HouseIdentifier_C, TweenStartSound) == 0x0004C8, "Member 'ABP_HouseIdentifier_C::TweenStartSound' has a wrong offset!");

}

