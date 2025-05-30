#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BalloonDropCrate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_structs.hpp"
#include "JP_classes.hpp"
#include "E_MaterialTypes_structs.hpp"
#include "E_ImpactEffect_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BalloonDropCrate.BP_BalloonDropCrate_C
// 0x0128 (0x03C8 - 0x02A0)
class ABP_BalloonDropCrate_C : public AStaticMeshActorJP
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        LadderSpawnLoc;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Parachute;                                      // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_WindLoop;                                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereDistanceScalingWidget;                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDistanceScalingWidgetComponent*        DistanceScalingWidget;                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PlayerCollider;                                    // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ImpactNiagara;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Indicator_C*                        AC_Indicator;                                      // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponentIW*              AbilitySystemComponentIW;                          // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitCollider;                                       // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Time_EDF6FCF2458174532B6406B9969F124E;    // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_EDF6FCF2458174532B6406B9969F124E; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Contents;                                          // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USplineComponent*                       Path;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                           SleepTimerHandle;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UItemCompatibleInfoWI_C*                WI_CrateHealthBar;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 HealthGE;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   NotificationText;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              NotificationIcon;                                  // 0x0348(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundCue>               NotificationSound;                                 // 0x0370(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundBase*                             BalloonPopSound;                                   // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowNonSegmentedHealthbar;                         // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CrateDelivered;                                    // 0x03A1(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3A2[0x6];                                      // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          ParachuteImpactSequence;                           // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 StringTableLocalization;                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EMessageCategory                              MessageCategory;                                   // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_BalloonDropCrate_SphereDistanceScalingWidget_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_BalloonDropCrate_SphereDistanceScalingWidget_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_BalloonDropCrate(int32 EntryPoint);
	void GetDurabilityCostWhenHit(double* Amount);
	void GetMaterialType(E_MaterialTypes* MaterialType);
	void HitInterface(const struct FVector& Direction);
	void ImpactCosmetics(class APawn* ImpactCauser, const struct FVector& Location, const struct FVector& HitImpulse, E_ImpactEffect ImpactEffect, class FName BoneName, bool* ChangedAttributes);
	void InitHealth();
	void MakeHealthbarNonSegmented();
	void MeleeHit(const class AActor*& AttackingActor);
	void Multi_UpdatePhysics();
	void OnDamaged(float Delta, class AActor* Causer, const struct FCombatParticipant& CombatParticipant, const struct FKillMethod& KillMethod, const struct FVector_NetQuantize& Location);
	void OnHealthChanged(float Health, float MaxHealth);
	void OnIndicatorInitialised();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SendNotification();
	void Server_SpawnContents();
	void Sleep();
	void SpawnFlareBelow();
	void TakeDamage();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BalloonDropCrate_C">();
	}
	static class ABP_BalloonDropCrate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BalloonDropCrate_C>();
	}
};
static_assert(alignof(ABP_BalloonDropCrate_C) == 0x000008, "Wrong alignment on ABP_BalloonDropCrate_C");
static_assert(sizeof(ABP_BalloonDropCrate_C) == 0x0003C8, "Wrong size on ABP_BalloonDropCrate_C");
static_assert(offsetof(ABP_BalloonDropCrate_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_BalloonDropCrate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, LadderSpawnLoc) == 0x0002A8, "Member 'ABP_BalloonDropCrate_C::LadderSpawnLoc' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, StaticMesh) == 0x0002B0, "Member 'ABP_BalloonDropCrate_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, SK_Parachute) == 0x0002B8, "Member 'ABP_BalloonDropCrate_C::SK_Parachute' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Audio_WindLoop) == 0x0002C0, "Member 'ABP_BalloonDropCrate_C::Audio_WindLoop' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, SphereDistanceScalingWidget) == 0x0002C8, "Member 'ABP_BalloonDropCrate_C::SphereDistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, DistanceScalingWidget) == 0x0002D0, "Member 'ABP_BalloonDropCrate_C::DistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, PlayerCollider) == 0x0002D8, "Member 'ABP_BalloonDropCrate_C::PlayerCollider' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, ImpactNiagara) == 0x0002E0, "Member 'ABP_BalloonDropCrate_C::ImpactNiagara' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, AC_Indicator) == 0x0002E8, "Member 'ABP_BalloonDropCrate_C::AC_Indicator' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, AbilitySystemComponentIW) == 0x0002F0, "Member 'ABP_BalloonDropCrate_C::AbilitySystemComponentIW' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, HitCollider) == 0x0002F8, "Member 'ABP_BalloonDropCrate_C::HitCollider' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Timeline_Time_EDF6FCF2458174532B6406B9969F124E) == 0x000300, "Member 'ABP_BalloonDropCrate_C::Timeline_Time_EDF6FCF2458174532B6406B9969F124E' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Timeline__Direction_EDF6FCF2458174532B6406B9969F124E) == 0x000304, "Member 'ABP_BalloonDropCrate_C::Timeline__Direction_EDF6FCF2458174532B6406B9969F124E' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Timeline) == 0x000308, "Member 'ABP_BalloonDropCrate_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Contents) == 0x000310, "Member 'ABP_BalloonDropCrate_C::Contents' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, Path) == 0x000318, "Member 'ABP_BalloonDropCrate_C::Path' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, SleepTimerHandle) == 0x000320, "Member 'ABP_BalloonDropCrate_C::SleepTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, WI_CrateHealthBar) == 0x000328, "Member 'ABP_BalloonDropCrate_C::WI_CrateHealthBar' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, HealthGE) == 0x000330, "Member 'ABP_BalloonDropCrate_C::HealthGE' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, NotificationText) == 0x000338, "Member 'ABP_BalloonDropCrate_C::NotificationText' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, NotificationIcon) == 0x000348, "Member 'ABP_BalloonDropCrate_C::NotificationIcon' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, NotificationSound) == 0x000370, "Member 'ABP_BalloonDropCrate_C::NotificationSound' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, BalloonPopSound) == 0x000398, "Member 'ABP_BalloonDropCrate_C::BalloonPopSound' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, ShowNonSegmentedHealthbar) == 0x0003A0, "Member 'ABP_BalloonDropCrate_C::ShowNonSegmentedHealthbar' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, CrateDelivered) == 0x0003A1, "Member 'ABP_BalloonDropCrate_C::CrateDelivered' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, ParachuteImpactSequence) == 0x0003A8, "Member 'ABP_BalloonDropCrate_C::ParachuteImpactSequence' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, StringTableLocalization) == 0x0003B0, "Member 'ABP_BalloonDropCrate_C::StringTableLocalization' has a wrong offset!");
static_assert(offsetof(ABP_BalloonDropCrate_C, MessageCategory) == 0x0003C0, "Member 'ABP_BalloonDropCrate_C::MessageCategory' has a wrong offset!");

}

