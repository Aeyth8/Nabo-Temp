#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DowntimeManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_TimeOfDay_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DowntimeManager.DowntimeManager_C
// 0x0088 (0x0318 - 0x0290)
class ADowntimeManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DayTimer;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           NightTimer;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	E_TimeOfDay                                   TimeOfDay;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_TimeOfDayChange;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         DayNumber;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Client_TimeOfDayChange;                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          InitialState;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CountdownToTODTransitionTimer;                     // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TransitionTime;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TimeOfDay                                   Transition;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeRemainingForTOD;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SuddenDeathActive;                                 // 0x0300(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TransitionCheckTimer;                              // 0x0308(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioTransition;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BindToSuddenDeathActive();
	void Check_Time_Remaining();
	bool DoesTODWidgetExist();
	void Enable_Construction_Yard_Cosmetics(bool Enable);
	void EndlessDay();
	void ExecuteUbergraph_DowntimeManager(int32 EntryPoint);
	double GetDayTimeLength(double A);
	void GetTimeOfDayEffect(class UClass** EffectType);
	void GrantNightMoney();
	bool IsDay();
	bool IsNight();
	void Multi_Play_Lighting_Transition(E_TimeOfDay TOD);
	void On_Day_Time_Timer_Elapsed();
	void On_Match_Started();
	void On_Night_Timer_Elapsed();
	void On_Sudden_Death_Active();
	void On_Client_TimeOfDayChange__DelegateSignature(bool InitialState_0, E_TimeOfDay TimeOfDay_0);
	void On_TimeOfDayChange__DelegateSignature(E_TimeOfDay TimeOfDay_0);
	void OnGameEnded();
	void OnRep_SuddenDeathActive();
	void OnRep_TimeOfDay();
	void OnRep_Transition();
	void PlayLightingTransitionBasedOnTransition();
	void PlaySoundAtPlayer(class USoundBase* Sound);
	void PlaySoundBasedOnTransition();
	void ReceiveBeginPlay();
	void SendNightTimePlayerTip();
	void SetTimeRemainingForTOD(const struct FTimerHandle& Handle);
	void Start_Checking_Time_Remaining();
	void Start_Day_Events();
	void Start_Day_Timer();
	void Start_Night_Events();
	void Start_Night_Timer();
	void UpdateEffectsOfPlayers();
	void UpdateObjectsInTimeOfDayWidget(class UWI_TimeOfDay_C* WI_TimeOfDay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DowntimeManager_C">();
	}
	static class ADowntimeManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADowntimeManager_C>();
	}
};
static_assert(alignof(ADowntimeManager_C) == 0x000008, "Wrong alignment on ADowntimeManager_C");
static_assert(sizeof(ADowntimeManager_C) == 0x000318, "Wrong size on ADowntimeManager_C");
static_assert(offsetof(ADowntimeManager_C, UberGraphFrame) == 0x000290, "Member 'ADowntimeManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, DefaultSceneRoot) == 0x000298, "Member 'ADowntimeManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, DayTimer) == 0x0002A0, "Member 'ADowntimeManager_C::DayTimer' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, NightTimer) == 0x0002A8, "Member 'ADowntimeManager_C::NightTimer' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, TimeOfDay) == 0x0002B0, "Member 'ADowntimeManager_C::TimeOfDay' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, On_TimeOfDayChange) == 0x0002B8, "Member 'ADowntimeManager_C::On_TimeOfDayChange' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, DayNumber) == 0x0002C8, "Member 'ADowntimeManager_C::DayNumber' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, On_Client_TimeOfDayChange) == 0x0002D0, "Member 'ADowntimeManager_C::On_Client_TimeOfDayChange' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, InitialState) == 0x0002E0, "Member 'ADowntimeManager_C::InitialState' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, CountdownToTODTransitionTimer) == 0x0002E8, "Member 'ADowntimeManager_C::CountdownToTODTransitionTimer' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, TransitionTime) == 0x0002F0, "Member 'ADowntimeManager_C::TransitionTime' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, Transition) == 0x0002F8, "Member 'ADowntimeManager_C::Transition' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, TimeRemainingForTOD) == 0x0002FC, "Member 'ADowntimeManager_C::TimeRemainingForTOD' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, SuddenDeathActive) == 0x000300, "Member 'ADowntimeManager_C::SuddenDeathActive' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, TransitionCheckTimer) == 0x000308, "Member 'ADowntimeManager_C::TransitionCheckTimer' has a wrong offset!");
static_assert(offsetof(ADowntimeManager_C, AudioTransition) == 0x000310, "Member 'ADowntimeManager_C::AudioTransition' has a wrong offset!");

}

