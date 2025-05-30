#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tut_Trigger_ObjectDisappear

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TutorialActivatableBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tut_Trigger_ObjectDisappear.BP_Tut_Trigger_ObjectDisappear_C
// 0x0020 (0x02E8 - 0x02C8)
class ABP_Tut_Trigger_ObjectDisappear_C final : public ABP_TutorialActivatableBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Tut_Trigger_ObjectDisappear_C;   // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TargetObject;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Activate();
	void ExecuteUbergraph_BP_Tut_Trigger_ObjectDisappear(int32 EntryPoint);
	void ReceiveActorEndOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tut_Trigger_ObjectDisappear_C">();
	}
	static class ABP_Tut_Trigger_ObjectDisappear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tut_Trigger_ObjectDisappear_C>();
	}
};
static_assert(alignof(ABP_Tut_Trigger_ObjectDisappear_C) == 0x000008, "Wrong alignment on ABP_Tut_Trigger_ObjectDisappear_C");
static_assert(sizeof(ABP_Tut_Trigger_ObjectDisappear_C) == 0x0002E8, "Wrong size on ABP_Tut_Trigger_ObjectDisappear_C");
static_assert(offsetof(ABP_Tut_Trigger_ObjectDisappear_C, UberGraphFrame_BP_Tut_Trigger_ObjectDisappear_C) == 0x0002C8, "Member 'ABP_Tut_Trigger_ObjectDisappear_C::UberGraphFrame_BP_Tut_Trigger_ObjectDisappear_C' has a wrong offset!");
static_assert(offsetof(ABP_Tut_Trigger_ObjectDisappear_C, Cube) == 0x0002D0, "Member 'ABP_Tut_Trigger_ObjectDisappear_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_Tut_Trigger_ObjectDisappear_C, Box) == 0x0002D8, "Member 'ABP_Tut_Trigger_ObjectDisappear_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Tut_Trigger_ObjectDisappear_C, TargetObject) == 0x0002E0, "Member 'ABP_Tut_Trigger_ObjectDisappear_C::TargetObject' has a wrong offset!");

}

