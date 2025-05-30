#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Window_Level2

#include "Basic.hpp"

#include "BP_Window_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Window_Level2.BP_Window_Level2_C
// 0x0010 (0x0500 - 0x04F0)
class ABP_Window_Level2_C final : public ABP_Window_C
{
public:
	class UStaticMeshComponent*                   BarsOK;                                            // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BarsBroken;                                        // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void AddMeshBounceComponents();
	void GetWindowBaseHealth(double* Health);
	void IsInteractable(bool* Interactable);
	void IsNotLockpickable(bool* Param_IsNotLockpickable_0);
	void WindowSabotaged(bool TURR);

	bool IsAvailableForInteraction(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Window_Level2_C">();
	}
	static class ABP_Window_Level2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Window_Level2_C>();
	}
};
static_assert(alignof(ABP_Window_Level2_C) == 0x000008, "Wrong alignment on ABP_Window_Level2_C");
static_assert(sizeof(ABP_Window_Level2_C) == 0x000500, "Wrong size on ABP_Window_Level2_C");
static_assert(offsetof(ABP_Window_Level2_C, BarsOK) == 0x0004F0, "Member 'ABP_Window_Level2_C::BarsOK' has a wrong offset!");
static_assert(offsetof(ABP_Window_Level2_C, BarsBroken) == 0x0004F8, "Member 'ABP_Window_Level2_C::BarsBroken' has a wrong offset!");

}

