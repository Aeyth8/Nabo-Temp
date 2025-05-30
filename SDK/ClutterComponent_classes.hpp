#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClutterComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClutterComponent.ClutterComponent_C
// 0x00D0 (0x06B0 - 0x05E0)
class UClutterComponent_C final : public UStaticMeshComponent
{
public:
	uint8                                         Pad_5D8[0x8];                                      // 0x05D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          AutoBindEvents;                                    // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MessReceptacleComponent_C*          ReceptacleComponent;                               // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          TimelineForward;                                   // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F9[0x7];                                      // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer;                                             // 0x0600(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousTime;                                      // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C[0x4];                                      // 0x060C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentTime;                                       // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeDuration;                                      // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RealSpeed;                                         // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeDurationRandom;                                // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            ScaleCurve;                                        // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_638[0x8];                                      // 0x0638(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialTransform;                                  // 0x0640(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PhysicsEnabled;                                    // 0x06A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearTimer();
	void Emptied(class UBP_MessReceptacleComponent_C* Caller);
	void ExecuteUbergraph_ClutterComponent(int32 EntryPoint);
	void Filled(class UBP_MessReceptacleComponent_C* Caller);
	void ReceiveBeginPlay();
	void StartTimeline(bool Forward);
	void TimerFinished();
	void TimerLoop();
	void TimerStarted();
	void UpdateFadeDuration();
	void UpdateTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClutterComponent_C">();
	}
	static class UClutterComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClutterComponent_C>();
	}
};
static_assert(alignof(UClutterComponent_C) == 0x000010, "Wrong alignment on UClutterComponent_C");
static_assert(sizeof(UClutterComponent_C) == 0x0006B0, "Wrong size on UClutterComponent_C");
static_assert(offsetof(UClutterComponent_C, UberGraphFrame) == 0x0005E0, "Member 'UClutterComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, AutoBindEvents) == 0x0005E8, "Member 'UClutterComponent_C::AutoBindEvents' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, ReceptacleComponent) == 0x0005F0, "Member 'UClutterComponent_C::ReceptacleComponent' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, TimelineForward) == 0x0005F8, "Member 'UClutterComponent_C::TimelineForward' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, Timer) == 0x000600, "Member 'UClutterComponent_C::Timer' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, PreviousTime) == 0x000608, "Member 'UClutterComponent_C::PreviousTime' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, CurrentTime) == 0x000610, "Member 'UClutterComponent_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, FadeDuration) == 0x000618, "Member 'UClutterComponent_C::FadeDuration' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, RealSpeed) == 0x000620, "Member 'UClutterComponent_C::RealSpeed' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, FadeDurationRandom) == 0x000628, "Member 'UClutterComponent_C::FadeDurationRandom' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, ScaleCurve) == 0x000630, "Member 'UClutterComponent_C::ScaleCurve' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, InitialTransform) == 0x000640, "Member 'UClutterComponent_C::InitialTransform' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, ID) == 0x0006A0, "Member 'UClutterComponent_C::ID' has a wrong offset!");
static_assert(offsetof(UClutterComponent_C, PhysicsEnabled) == 0x0006A4, "Member 'UClutterComponent_C::PhysicsEnabled' has a wrong offset!");

}

