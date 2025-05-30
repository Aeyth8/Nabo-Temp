#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResourcePile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_MaterialTypes_structs.hpp"
#include "E_ImpactEffect_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResourcePile.BP_ResourcePile_C
// 0x0090 (0x0320 - 0x0290)
class ABP_ResourcePile_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene1;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Indicator_C*                        AC_Indicator;                                      // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereDistanceScalingWidget;                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDistanceScalingWidgetComponent*        DistanceScalingWidget;                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PingableComponent_C*                BP_PingableComponent;                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioHit;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshBounceComponent_C*                 MeshBounceComponent;                               // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponentIW*              AbilitySystemComponentIW;                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UItemCompatibleInfoWI_C*                WI_ResourcePileHealthBar;                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         DaysPassed;                                        // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        SpawnLocationOffsets;                              // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__HouseActorBase_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HouseActorBase_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Cosmetics_Destroyed();
	void Cosmetics_Hit_Reaction(const struct FVector& Location, const struct FVector& HitImpulse, E_ImpactEffect ImpactEffect);
	void Enable_Construction_Yard_Cosmetics();
	void ExecuteUbergraph_BP_ResourcePile(int32 EntryPoint);
	void GetDurabilityCostWhenHit(double* Amount);
	void GetMaterialType(E_MaterialTypes* MaterialType);
	void HitInterface(const struct FVector& Direction);
	void ImpactCosmetics(class APawn* ImpactCauser, const struct FVector& Location, const struct FVector& HitImpulse, E_ImpactEffect ImpactEffect, class FName BoneName, bool* ChangedAttributes);
	void MeleeHit(const class AActor*& AttackingActor);
	void Multi_Cosmetics_Grant_Resource(const struct FVector_NetQuantize& Location);
	void Multi_Wood_Impact();
	void OnDamaged(float Delta, class AActor* Causer, const struct FCombatParticipant& CombatParticipant, const struct FKillMethod& KillMethod, const struct FVector_NetQuantize& Location);
	void OnHealthChanged(float Health, float MaxHealth);
	void OnIndicatorInitialised();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Reset_Resource_Pile_Health();
	void SpawnCrateAtComponent(const struct FVector& Location);
	void SpawnCratesBasedOnDaysPassed();
	void TakeDamage();
	void Update_Widget_Health(double NormalizedHealth);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResourcePile_C">();
	}
	static class ABP_ResourcePile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResourcePile_C>();
	}
};
static_assert(alignof(ABP_ResourcePile_C) == 0x000008, "Wrong alignment on ABP_ResourcePile_C");
static_assert(sizeof(ABP_ResourcePile_C) == 0x000320, "Wrong size on ABP_ResourcePile_C");
static_assert(offsetof(ABP_ResourcePile_C, UberGraphFrame) == 0x000290, "Member 'ABP_ResourcePile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, PointLight) == 0x000298, "Member 'ABP_ResourcePile_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, Audio) == 0x0002A0, "Member 'ABP_ResourcePile_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, StaticMesh1) == 0x0002A8, "Member 'ABP_ResourcePile_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, Scene1) == 0x0002B0, "Member 'ABP_ResourcePile_C::Scene1' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, AC_Indicator) == 0x0002B8, "Member 'ABP_ResourcePile_C::AC_Indicator' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, SphereDistanceScalingWidget) == 0x0002C0, "Member 'ABP_ResourcePile_C::SphereDistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, DistanceScalingWidget) == 0x0002C8, "Member 'ABP_ResourcePile_C::DistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, BP_PingableComponent) == 0x0002D0, "Member 'ABP_ResourcePile_C::BP_PingableComponent' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, AudioHit) == 0x0002D8, "Member 'ABP_ResourcePile_C::AudioHit' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, MeshBounceComponent) == 0x0002E0, "Member 'ABP_ResourcePile_C::MeshBounceComponent' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, AbilitySystemComponentIW) == 0x0002E8, "Member 'ABP_ResourcePile_C::AbilitySystemComponentIW' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, StaticMesh) == 0x0002F0, "Member 'ABP_ResourcePile_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_ResourcePile_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, WI_ResourcePileHealthBar) == 0x000300, "Member 'ABP_ResourcePile_C::WI_ResourcePileHealthBar' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, DaysPassed) == 0x000308, "Member 'ABP_ResourcePile_C::DaysPassed' has a wrong offset!");
static_assert(offsetof(ABP_ResourcePile_C, SpawnLocationOffsets) == 0x000310, "Member 'ABP_ResourcePile_C::SpawnLocationOffsets' has a wrong offset!");

}

