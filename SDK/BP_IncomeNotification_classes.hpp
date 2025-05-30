#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IncomeNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IncomeNotification.BP_IncomeNotification_C
// 0x0028 (0x02B8 - 0x0290)
class ABP_IncomeNotification_C final : public AIncomeNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       Widget;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWI_IncomeChangeNotification_C*         IncomeChangeNotificationWI;                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Activate(float Score);
	void ExecuteUbergraph_BP_IncomeNotification(int32 EntryPoint);
	void Play_Cosmetics(const struct FVector& Location, double Score);
	void PlaySoundBasedOnAmount(double Amount);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Reset_Notification();
	void Start_Hide_Timer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IncomeNotification_C">();
	}
	static class ABP_IncomeNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IncomeNotification_C>();
	}
};
static_assert(alignof(ABP_IncomeNotification_C) == 0x000008, "Wrong alignment on ABP_IncomeNotification_C");
static_assert(sizeof(ABP_IncomeNotification_C) == 0x0002B8, "Wrong size on ABP_IncomeNotification_C");
static_assert(offsetof(ABP_IncomeNotification_C, UberGraphFrame) == 0x000290, "Member 'ABP_IncomeNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IncomeNotification_C, Widget) == 0x000298, "Member 'ABP_IncomeNotification_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_IncomeNotification_C, Audio) == 0x0002A0, "Member 'ABP_IncomeNotification_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_IncomeNotification_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_IncomeNotification_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_IncomeNotification_C, IncomeChangeNotificationWI) == 0x0002B0, "Member 'ABP_IncomeNotification_C::IncomeChangeNotificationWI' has a wrong offset!");

}

