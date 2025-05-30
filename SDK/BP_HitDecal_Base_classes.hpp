#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitDecal_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HitDecal_Base.BP_HitDecal_Base_C
// 0x0098 (0x0330 - 0x0298)
class ABP_HitDecal_Base_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveInterpolationComponent*           CurveInterpolation;                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         StartFadeDelay;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeDuration;                                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeScreenSize;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0xC];                                      // 0x02B4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialTransform;                                  // 0x02C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoInitialBounce;                                   // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_HitDecal_Base_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature(float InterpolatedValue);
	void ExecuteUbergraph_BP_HitDecal_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HitDecal_Base_C">();
	}
	static class ABP_HitDecal_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HitDecal_Base_C>();
	}
};
static_assert(alignof(ABP_HitDecal_Base_C) == 0x000010, "Wrong alignment on ABP_HitDecal_Base_C");
static_assert(sizeof(ABP_HitDecal_Base_C) == 0x000330, "Wrong size on ABP_HitDecal_Base_C");
static_assert(offsetof(ABP_HitDecal_Base_C, UberGraphFrame) == 0x000298, "Member 'ABP_HitDecal_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, CurveInterpolation) == 0x0002A0, "Member 'ABP_HitDecal_Base_C::CurveInterpolation' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, StartFadeDelay) == 0x0002A8, "Member 'ABP_HitDecal_Base_C::StartFadeDelay' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, FadeDuration) == 0x0002AC, "Member 'ABP_HitDecal_Base_C::FadeDuration' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, FadeScreenSize) == 0x0002B0, "Member 'ABP_HitDecal_Base_C::FadeScreenSize' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, InitialTransform) == 0x0002C0, "Member 'ABP_HitDecal_Base_C::InitialTransform' has a wrong offset!");
static_assert(offsetof(ABP_HitDecal_Base_C, DoInitialBounce) == 0x000320, "Member 'ABP_HitDecal_Base_C::DoInitialBounce' has a wrong offset!");

}

