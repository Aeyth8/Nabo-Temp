#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HouseEssential_Cube

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_IndicatorData_structs.hpp"
#include "JP_structs.hpp"
#include "JP_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "E_ImpactEffect_structs.hpp"
#include "E_MaterialTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HouseEssential_Cube.BP_HouseEssential_Cube_C
// 0x0398 (0x0640 - 0x02A8)
class ABP_HouseEssential_Cube_C final : public AHouseEssentialActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        AudioSpotLoop;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraRotator;                                     // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereDistanceScalingWidget;                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PingableComponent_C*                BP_PingableComponent;                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Indicator_C*                        AC_IndicatorEnemyTeam;                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Indicator_C*                        AC_Indicator;                                      // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDistanceScalingWidgetComponent*        DistanceScalingWidget;                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        DestroyedDecal_Normal;                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAssisterTrackingComponent_C*           AssisterTrackingComponent;                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ForwardArrow;                                      // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene1;                                            // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HighlightPlane;                                    // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponentIW*              AbilitySystemComponentIW;                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneDestroyedParticles;                           // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshBounceComponent_C*                 MeshBounceComponent;                               // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        EffectPoint;                                       // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Rotation_B1272ED949CDA3B0DB3155A426CD4D25; // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_B1272ED949CDA3B0DB3155A426CD4D25; // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Destruction_Bounce_Alpha_A5DC1BFC4E5FFA84FEE5BA843B88731F; // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Destruction_Bounce__Direction_A5DC1BFC4E5FFA84FEE5BA843B88731F; // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Destruction_Bounce;                                // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Destruction_Interpolation_Alpha_5AF1FD3645C3283558B471B1735F2A62; // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Destruction_Interpolation__Direction_5AF1FD3645C3283558B471B1735F2A62; // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Destruction_Interpolation;                         // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObjectiveBase*                         Objective;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGroundsKeeper*                         GroundsKeeper;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentHealth;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   RoomName;                                          // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        DurabilityCost;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OldMappedAlpha;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead;                                              // 0x03C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DestructionValue;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          DefaultMesh;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          DestroyedMesh;                                     // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        OldHealth;                                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemCompatibleInfoWI_C*                ItemCompatibleWI;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHouseEssentialsManagerComponent_C*     HouseEssentialsManager;                            // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_HouseEssentialDestroyed;                        // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Count;                                             // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxHealth;                                         // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Score;                                             // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LastDamageCauser;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             DestroyedSound;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Grant_Reward_on_Destroyed;                         // 0x0430(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEconomyDefinition*                     Economy_Reward_On_Sabotaged;                       // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_IndicatorData                       Indicator_Data_Backup;                             // 0x0440(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_IndicatorData                       Lockpick_Data_Backup;                              // 0x0518(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UMaterialInterface*                     MaterialRed;                                       // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MaterialBlue;                                      // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CameraTimelineFinished;                            // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpotLoopSound;                                     // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasActiveBomb;                                     // 0x0620(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621[0x7];                                      // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AttackMessage;                                     // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        DestructionTimeStamp;                              // 0x0638(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyDebugDamage();
	void AttackYourNeighborPOI(class APlayerState* PlayerState);
	void Audio_Destroyed();
	void Audio_Hit();
	void BndEvt__HouseActorBase_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HouseActorBase_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CallOnEveryClient(class ASubObjective* NewParam);
	void CameraTimelineFinished__DelegateSignature();
	void CancelInteraction(class UPrimitiveComponent* InteractionComponent);
	void CreateKillInfo(const struct FCombatParticipant& Killer, const struct FKillMethod& Method, struct FKillGameplayMessage* KillGameplayMessage);
	void Destroyed_Cosmetics();
	void Destroyed_Cosmetics_State(bool Dead_0);
	void Destruction_Bounce__FinishedFunc();
	void Destruction_Bounce__UpdateFunc();
	void Destruction_Interpolation__FinishedFunc();
	void Destruction_Interpolation__UpdateFunc();
	void Die_Now(const struct FCombatParticipant& KilledBy, const struct FKillMethod& KillMethod);
	void ExecuteUbergraph_BP_HouseEssential_Cube(int32 EntryPoint);
	void GetCharacterTag(struct FGameplayTag* Return);
	void GetDurabilityCostWhenHit(double* Amount);
	TSoftObjectPtr<class UTexture2D> GetHouseEssentialIconTexture();
	void GetInteractSound();
	void GetMaterialType(E_MaterialTypes* MaterialType);
	void GetName(class FString* Name_0);
	void GetNewWidgetColor(struct FSlateColor* NewColor);
	void GetOptionalText(class FText* Return, class FText* Optional_Second_Line);
	void GetOwnerAbilitySystemComponent(class UAbilitySystemComponent** Return);
	void GetPriority(int32* Priority);
	void GetWidgetLocation(struct FVector* Location);
	void HideInteractionWidget(bool* Return);
	void HighConstrastModeChanged(bool IsEnabled);
	void HighlightDamagedObject(bool Active);
	void HitInterface(const struct FVector& Direction);
	void ImpactCosmetics(class APawn* ImpactCauser, const struct FVector& Location, const struct FVector& HitImpulse, E_ImpactEffect ImpactEffect, class FName BoneName, bool* ChangedAttributes);
	void InteractableCancelInteraction(class UPrimitiveComponent* InteractionComponent);
	void InteractPressed(class AActor* InteractingActor);
	void InteractReleased(class AActor* InteractingActor);
	void IntroFinished();
	void IsGooseTargetAlive(bool* Return);
	void IsInFocus(class AActor* Focusing_Actor);
	void IsInteractable(bool* Interactable);
	bool IsSameTeamAsPlayer0();
	void MeleeHit(const class AActor*& AttackingActor);
	void Multicast_BroadcastKill(const struct FKillGameplayMessage& Message);
	void On_HouseEssentialDestroyed__DelegateSignature(class ABP_HouseEssential_Cube_C* HouseEssential);
	void OnDamaged(float Delta, class AActor* Causer, const struct FCombatParticipant& CombatParticipant, const struct FKillMethod& KillMethod, const struct FVector_NetQuantize& Location);
	void OnEnded_666095FA43ED0E02A0CC1AB09260B2DF();
	void OnEnded_70D2F42D4CA9E8988B3DAD8FE4035D50();
	void OnEnded_FE1C55914231A0307AB9C38045F998CB();
	void OnHealthChanged(float Health, float MaxHealth_0);
	void OnMessageReceived_BF8FF5C84263723D5769969F45CA41DA(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnRep_Dead();
	void OnRep_HasActiveBomb();
	void OnTakenDamage();
	void Play_Hit_Particles(const struct FVector& Location);
	void Play_Morph_Effects();
	void PostInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent);
	void PreInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent);
	void ReceiveBeginPlay();
	void RegisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor);
	void RegisterWithHouseEssentialsManager();
	void RemoveHighlight();
	void SetActorReferenceInHealthbar();
	void SetHighContrastMode(bool Enabled);
	void SetHoveredComponent(class UInteractionComponent_C* HoveredComponent, bool* Void);
	void SetInitialHouseEssentialHealth();
	void SetInteractable(bool Interactable);
	void SetMaterialBasedOnTeam();
	void SetupHouseEssentialWidget();
	void Spawn_Destroyed_Fractured_Actor();
	void SwitchToObjectCamera(float BlendTime, double Duration);
	void TakeDamage();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Try_Grant_Destroy_Reward(const struct FCombatParticipant& CombatParticipant);
	void UnregisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor);
	void UpdateHealth(double Health, bool WasDamaged, const struct FCombatParticipant& CombatParticipant, const struct FKillMethod& KillMethod);
	void UpdateHealthComponent();
	void UpdatePings();
	void UpdateProgressbar(double Value, double Max);
	void UserConstructionScript();

	void GetHealth(double* CurrentHealth_0) const;
	float GetInteractionDuration(class UPrimitiveComponent* InteractionComponent) const;
	void GetMaxHealth(double* MaxHealth_0) const;
	void GetPostInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent) const;
	void GetPreInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent) const;
	struct FTeam GetTeam() const;
	uint8 GetTeamID() const;
	bool HasTeam() const;
	bool IsAvailableForEnemyTeam(class UPrimitiveComponent* InteractionComponent) const;
	bool IsAvailableForInteraction(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent) const;
	bool TakeDamageFromAllTeams() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HouseEssential_Cube_C">();
	}
	static class ABP_HouseEssential_Cube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HouseEssential_Cube_C>();
	}
};
static_assert(alignof(ABP_HouseEssential_Cube_C) == 0x000008, "Wrong alignment on ABP_HouseEssential_Cube_C");
static_assert(sizeof(ABP_HouseEssential_Cube_C) == 0x000640, "Wrong size on ABP_HouseEssential_Cube_C");
static_assert(offsetof(ABP_HouseEssential_Cube_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_HouseEssential_Cube_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AudioSpotLoop) == 0x0002B0, "Member 'ABP_HouseEssential_Cube_C::AudioSpotLoop' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Camera) == 0x0002B8, "Member 'ABP_HouseEssential_Cube_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, SceneCaptureComponent2D) == 0x0002C0, "Member 'ABP_HouseEssential_Cube_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, CameraRotator) == 0x0002C8, "Member 'ABP_HouseEssential_Cube_C::CameraRotator' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, SphereDistanceScalingWidget) == 0x0002D0, "Member 'ABP_HouseEssential_Cube_C::SphereDistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, BP_PingableComponent) == 0x0002D8, "Member 'ABP_HouseEssential_Cube_C::BP_PingableComponent' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AC_IndicatorEnemyTeam) == 0x0002E0, "Member 'ABP_HouseEssential_Cube_C::AC_IndicatorEnemyTeam' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AC_Indicator) == 0x0002E8, "Member 'ABP_HouseEssential_Cube_C::AC_Indicator' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DistanceScalingWidget) == 0x0002F0, "Member 'ABP_HouseEssential_Cube_C::DistanceScalingWidget' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DestroyedDecal_Normal) == 0x0002F8, "Member 'ABP_HouseEssential_Cube_C::DestroyedDecal_Normal' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AssisterTrackingComponent) == 0x000300, "Member 'ABP_HouseEssential_Cube_C::AssisterTrackingComponent' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, ForwardArrow) == 0x000308, "Member 'ABP_HouseEssential_Cube_C::ForwardArrow' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Scene) == 0x000310, "Member 'ABP_HouseEssential_Cube_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Scene1) == 0x000318, "Member 'ABP_HouseEssential_Cube_C::Scene1' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, HighlightPlane) == 0x000320, "Member 'ABP_HouseEssential_Cube_C::HighlightPlane' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Audio) == 0x000328, "Member 'ABP_HouseEssential_Cube_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, SkeletalMesh) == 0x000330, "Member 'ABP_HouseEssential_Cube_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AbilitySystemComponentIW) == 0x000338, "Member 'ABP_HouseEssential_Cube_C::AbilitySystemComponentIW' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, SceneDestroyedParticles) == 0x000340, "Member 'ABP_HouseEssential_Cube_C::SceneDestroyedParticles' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, MeshBounceComponent) == 0x000348, "Member 'ABP_HouseEssential_Cube_C::MeshBounceComponent' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, EffectPoint) == 0x000350, "Member 'ABP_HouseEssential_Cube_C::EffectPoint' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Timeline_Rotation_B1272ED949CDA3B0DB3155A426CD4D25) == 0x000358, "Member 'ABP_HouseEssential_Cube_C::Timeline_Rotation_B1272ED949CDA3B0DB3155A426CD4D25' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Timeline__Direction_B1272ED949CDA3B0DB3155A426CD4D25) == 0x00035C, "Member 'ABP_HouseEssential_Cube_C::Timeline__Direction_B1272ED949CDA3B0DB3155A426CD4D25' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Timeline) == 0x000360, "Member 'ABP_HouseEssential_Cube_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Bounce_Alpha_A5DC1BFC4E5FFA84FEE5BA843B88731F) == 0x000368, "Member 'ABP_HouseEssential_Cube_C::Destruction_Bounce_Alpha_A5DC1BFC4E5FFA84FEE5BA843B88731F' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Bounce__Direction_A5DC1BFC4E5FFA84FEE5BA843B88731F) == 0x00036C, "Member 'ABP_HouseEssential_Cube_C::Destruction_Bounce__Direction_A5DC1BFC4E5FFA84FEE5BA843B88731F' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Bounce) == 0x000370, "Member 'ABP_HouseEssential_Cube_C::Destruction_Bounce' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Interpolation_Alpha_5AF1FD3645C3283558B471B1735F2A62) == 0x000378, "Member 'ABP_HouseEssential_Cube_C::Destruction_Interpolation_Alpha_5AF1FD3645C3283558B471B1735F2A62' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Interpolation__Direction_5AF1FD3645C3283558B471B1735F2A62) == 0x00037C, "Member 'ABP_HouseEssential_Cube_C::Destruction_Interpolation__Direction_5AF1FD3645C3283558B471B1735F2A62' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Destruction_Interpolation) == 0x000380, "Member 'ABP_HouseEssential_Cube_C::Destruction_Interpolation' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Objective) == 0x000388, "Member 'ABP_HouseEssential_Cube_C::Objective' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, GroundsKeeper) == 0x000390, "Member 'ABP_HouseEssential_Cube_C::GroundsKeeper' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, CurrentHealth) == 0x000398, "Member 'ABP_HouseEssential_Cube_C::CurrentHealth' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, RoomName) == 0x0003A0, "Member 'ABP_HouseEssential_Cube_C::RoomName' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DurabilityCost) == 0x0003B0, "Member 'ABP_HouseEssential_Cube_C::DurabilityCost' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, OldMappedAlpha) == 0x0003B8, "Member 'ABP_HouseEssential_Cube_C::OldMappedAlpha' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Dead) == 0x0003C0, "Member 'ABP_HouseEssential_Cube_C::Dead' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DestructionValue) == 0x0003C8, "Member 'ABP_HouseEssential_Cube_C::DestructionValue' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DefaultMesh) == 0x0003D0, "Member 'ABP_HouseEssential_Cube_C::DefaultMesh' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DestroyedMesh) == 0x0003D8, "Member 'ABP_HouseEssential_Cube_C::DestroyedMesh' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, OldHealth) == 0x0003E0, "Member 'ABP_HouseEssential_Cube_C::OldHealth' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, ItemCompatibleWI) == 0x0003E8, "Member 'ABP_HouseEssential_Cube_C::ItemCompatibleWI' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, HouseEssentialsManager) == 0x0003F0, "Member 'ABP_HouseEssential_Cube_C::HouseEssentialsManager' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, On_HouseEssentialDestroyed) == 0x0003F8, "Member 'ABP_HouseEssential_Cube_C::On_HouseEssentialDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Count) == 0x000408, "Member 'ABP_HouseEssential_Cube_C::Count' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, MaxHealth) == 0x000410, "Member 'ABP_HouseEssential_Cube_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Score) == 0x000418, "Member 'ABP_HouseEssential_Cube_C::Score' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, LastDamageCauser) == 0x000420, "Member 'ABP_HouseEssential_Cube_C::LastDamageCauser' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DestroyedSound) == 0x000428, "Member 'ABP_HouseEssential_Cube_C::DestroyedSound' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Grant_Reward_on_Destroyed) == 0x000430, "Member 'ABP_HouseEssential_Cube_C::Grant_Reward_on_Destroyed' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Economy_Reward_On_Sabotaged) == 0x000438, "Member 'ABP_HouseEssential_Cube_C::Economy_Reward_On_Sabotaged' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Indicator_Data_Backup) == 0x000440, "Member 'ABP_HouseEssential_Cube_C::Indicator_Data_Backup' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, Lockpick_Data_Backup) == 0x000518, "Member 'ABP_HouseEssential_Cube_C::Lockpick_Data_Backup' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, MaterialRed) == 0x0005F0, "Member 'ABP_HouseEssential_Cube_C::MaterialRed' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, MaterialBlue) == 0x0005F8, "Member 'ABP_HouseEssential_Cube_C::MaterialBlue' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, CameraTimelineFinished) == 0x000600, "Member 'ABP_HouseEssential_Cube_C::CameraTimelineFinished' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, RenderTarget) == 0x000610, "Member 'ABP_HouseEssential_Cube_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, SpotLoopSound) == 0x000618, "Member 'ABP_HouseEssential_Cube_C::SpotLoopSound' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, HasActiveBomb) == 0x000620, "Member 'ABP_HouseEssential_Cube_C::HasActiveBomb' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, AttackMessage) == 0x000628, "Member 'ABP_HouseEssential_Cube_C::AttackMessage' has a wrong offset!");
static_assert(offsetof(ABP_HouseEssential_Cube_C, DestructionTimeStamp) == 0x000638, "Member 'ABP_HouseEssential_Cube_C::DestructionTimeStamp' has a wrong offset!");

}

