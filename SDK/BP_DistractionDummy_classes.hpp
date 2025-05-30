#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DistractionDummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HouseActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DistractionDummy.BP_DistractionDummy_C
// 0x0040 (0x0430 - 0x03F0)
class ABP_DistractionDummy_C final : public AHouseActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DistractionDummy_C;              // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveInterpolationComponent*           CurveInterpolation;                                // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Foot;                                           // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedBalloons;                                 // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneRoot;                                         // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Collision;                                         // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         BalloonsVisible;                                   // 0x0428(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void Balloon_Pop_Cosmetics(const struct FVector& Location);
	void BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_0_OnCurveInterpolationUpdate__DelegateSignature(float InterpolatedValue);
	void BndEvt__BP_DistractionDummy_CurveInterpolation_K2Node_ComponentBoundEvent_1_OnCurveInterpolationComplete__DelegateSignature();
	void Changed_3AA18AC747B8B63AA1BFF3B3E41B2E8F(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);
	void ExecuteUbergraph_BP_DistractionDummy(int32 EntryPoint);
	void GetTurretTargetHighPriority(bool* Return);
	void GetTurretTargetSceneComponent(class USceneComponent** Return);
	void IsValidTurretTarget(bool* IsValid);
	void OnRep_BalloonsVisible();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Sabotage(class AActor* SabotagingActor);
	void SetIsValidTurretTarget(bool Valid, bool* Void);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DistractionDummy_C">();
	}
	static class ABP_DistractionDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DistractionDummy_C>();
	}
};
static_assert(alignof(ABP_DistractionDummy_C) == 0x000008, "Wrong alignment on ABP_DistractionDummy_C");
static_assert(sizeof(ABP_DistractionDummy_C) == 0x000430, "Wrong size on ABP_DistractionDummy_C");
static_assert(offsetof(ABP_DistractionDummy_C, UberGraphFrame_BP_DistractionDummy_C) == 0x0003F0, "Member 'ABP_DistractionDummy_C::UberGraphFrame_BP_DistractionDummy_C' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, CurveInterpolation) == 0x0003F8, "Member 'ABP_DistractionDummy_C::CurveInterpolation' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, SM_Foot) == 0x000400, "Member 'ABP_DistractionDummy_C::SM_Foot' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, InstancedBalloons) == 0x000408, "Member 'ABP_DistractionDummy_C::InstancedBalloons' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, SceneRoot) == 0x000410, "Member 'ABP_DistractionDummy_C::SceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, Collision) == 0x000418, "Member 'ABP_DistractionDummy_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, StaticMesh) == 0x000420, "Member 'ABP_DistractionDummy_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DistractionDummy_C, BalloonsVisible) == 0x000428, "Member 'ABP_DistractionDummy_C::BalloonsVisible' has a wrong offset!");

}

