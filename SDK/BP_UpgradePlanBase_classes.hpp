#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UpgradePlanBase

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_MaterialTypes_structs.hpp"
#include "E_ImpactEffect_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UpgradePlanBase.BP_UpgradePlanBase_C
// 0x01E0 (0x0470 - 0x0290)
class ABP_UpgradePlanBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Plane2;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane1;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGroundskeeperReference*                GroundskeeperReference;                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PreviewStaticMesh;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         TeamId;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           UpgradeGroup;                                      // 0x02D4(0x0008)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         UpgradeLevel;                                      // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Level2Actor;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Level3Actor;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PreviewMeshLevel2;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PreviewMeshLevel3;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ActorToChange;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         UpgradeDelay;                                      // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEconomyDefinition*                     Level2Cost;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UEconomyDefinition*                     Level3Cost;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UpgradeBeingConstructed;                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpgradeInProgress;                                 // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_322[0x6];                                      // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Level1Actor;                                       // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PreviewMeshLevel1;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UEconomyDefinition*                     Level1Cost;                                        // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         MaxLevel;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGroundsKeeper*                         InitialGroundskeeper;                              // 0x0348(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterial*                              PreviewMaterial;                                   // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              HighlightedPreviewMaterial;                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Level3CustomTransform;                             // 0x0360(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Level2CustomTransform;                             // 0x03C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MissingHealth;                                     // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               HighlightMaterialInstance;                         // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PreviewMaterialInstance;                           // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        VerticalFadeOffset;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Level2StickerOffset;                               // 0x0440(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Level3StickerOffset;                               // 0x0458(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActorToChangeSet(class AActor* NewActorToChange);
	void ApplyConstructionEndCue();
	void ApplyMaterialToPreviewMesh();
	void BroadcastConstructionStateChange(bool IsBeingConstructed);
	void BroadcastUpgrade();
	struct FGameplayCueParameters CreateCueParameters();
	void Do_Upgrade();
	void DoesReceivedUpgradeMessageApply(const struct FDefenceUpgradeGameplayMessage& DefenceUpgradeGameplayMessage, bool* ApplyUpgrade, struct FVector* UpgradeOrigin);
	void ExecuteUbergraph_BP_UpgradePlanBase(int32 EntryPoint);
	void GetDurabilityCostWhenHit(double* Amount);
	void GetMaterialType(E_MaterialTypes* MaterialType);
	class UStaticMesh* GetPreviewMesh(uint8 UpgradeLevel_0);
	void GetPromptUpgradeText(class FText* TextForUpgrade);
	const struct FTransform GetSpawnTransform();
	void GetTeamFromGroundskeeper();
	class UEconomyDefinition* GetUpgradeCostDefinition();
	void HitInterface(const struct FVector& Direction);
	void ImpactCosmetics(class APawn* ImpactCauser, const struct FVector& Location, const struct FVector& HitImpulse, E_ImpactEffect ImpactEffect, class FName BoneName, bool* ChangedAttributes);
	void InitiateUpgrade(const struct FDefenceUpgradeGameplayMessage& DefenceUpgradeGameplayMessage);
	void MakePreviewNotVisibleIfNoHammerEquipped();
	void MakePreviewVisibleForEveryone();
	void MeleeHit(const class AActor*& AttackingActor);
	void OnEnded_95F25AAD48361E26EFCF6788011D4A94();
	void OnEnded_ECCFEACC49034E724C0C46BB1EE0DDF0();
	void OnMessageReceived_66924C564D77178C30FBF3B4902A1670(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_74912E514BB48373ABA5FAB37648A66E(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_F9007948417ACAFA20FD399FFD42F5F2(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnRep_UpgradeBeingConstructed();
	void PlayHitEffect(const struct FVector& InLocation);
	void ReceiveBeginPlay();
	void SetGroundskeeperReference();
	void SetInitialPreviewMesh();
	void SetupPreviewMaterial();
	void TakeDamage();
	void TogglePlanVisibility(bool Visible);
	void UpdateActorToChange(class AActor* ActorToChange_0);
	void UpdateMaterialHover(const struct FDefenceUpgradeHoverGameplayMessage& DefenceUpgradeHoverGameplayMessage);
	void UpdateUpgradeConstructionState(const struct FDefenceUpgradeConstructionGameplayMessage& DefenceUpgradeConstructionGameplayMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UpgradePlanBase_C">();
	}
	static class ABP_UpgradePlanBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UpgradePlanBase_C>();
	}
};
static_assert(alignof(ABP_UpgradePlanBase_C) == 0x000010, "Wrong alignment on ABP_UpgradePlanBase_C");
static_assert(sizeof(ABP_UpgradePlanBase_C) == 0x000470, "Wrong size on ABP_UpgradePlanBase_C");
static_assert(offsetof(ABP_UpgradePlanBase_C, UberGraphFrame) == 0x000290, "Member 'ABP_UpgradePlanBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Plane2) == 0x000298, "Member 'ABP_UpgradePlanBase_C::Plane2' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, StaticMesh) == 0x0002A0, "Member 'ABP_UpgradePlanBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Plane) == 0x0002A8, "Member 'ABP_UpgradePlanBase_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Plane1) == 0x0002B0, "Member 'ABP_UpgradePlanBase_C::Plane1' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, GroundskeeperReference) == 0x0002B8, "Member 'ABP_UpgradePlanBase_C::GroundskeeperReference' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewStaticMesh) == 0x0002C0, "Member 'ABP_UpgradePlanBase_C::PreviewStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_UpgradePlanBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, TeamId) == 0x0002D0, "Member 'ABP_UpgradePlanBase_C::TeamId' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, UpgradeGroup) == 0x0002D4, "Member 'ABP_UpgradePlanBase_C::UpgradeGroup' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, UpgradeLevel) == 0x0002DC, "Member 'ABP_UpgradePlanBase_C::UpgradeLevel' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level2Actor) == 0x0002E0, "Member 'ABP_UpgradePlanBase_C::Level2Actor' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level3Actor) == 0x0002E8, "Member 'ABP_UpgradePlanBase_C::Level3Actor' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewMeshLevel2) == 0x0002F0, "Member 'ABP_UpgradePlanBase_C::PreviewMeshLevel2' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewMeshLevel3) == 0x0002F8, "Member 'ABP_UpgradePlanBase_C::PreviewMeshLevel3' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, ActorToChange) == 0x000300, "Member 'ABP_UpgradePlanBase_C::ActorToChange' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, UpgradeDelay) == 0x000308, "Member 'ABP_UpgradePlanBase_C::UpgradeDelay' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level2Cost) == 0x000310, "Member 'ABP_UpgradePlanBase_C::Level2Cost' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level3Cost) == 0x000318, "Member 'ABP_UpgradePlanBase_C::Level3Cost' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, UpgradeBeingConstructed) == 0x000320, "Member 'ABP_UpgradePlanBase_C::UpgradeBeingConstructed' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, UpgradeInProgress) == 0x000321, "Member 'ABP_UpgradePlanBase_C::UpgradeInProgress' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level1Actor) == 0x000328, "Member 'ABP_UpgradePlanBase_C::Level1Actor' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewMeshLevel1) == 0x000330, "Member 'ABP_UpgradePlanBase_C::PreviewMeshLevel1' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level1Cost) == 0x000338, "Member 'ABP_UpgradePlanBase_C::Level1Cost' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, MaxLevel) == 0x000340, "Member 'ABP_UpgradePlanBase_C::MaxLevel' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, InitialGroundskeeper) == 0x000348, "Member 'ABP_UpgradePlanBase_C::InitialGroundskeeper' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewMaterial) == 0x000350, "Member 'ABP_UpgradePlanBase_C::PreviewMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, HighlightedPreviewMaterial) == 0x000358, "Member 'ABP_UpgradePlanBase_C::HighlightedPreviewMaterial' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level3CustomTransform) == 0x000360, "Member 'ABP_UpgradePlanBase_C::Level3CustomTransform' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level2CustomTransform) == 0x0003C0, "Member 'ABP_UpgradePlanBase_C::Level2CustomTransform' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, MissingHealth) == 0x000420, "Member 'ABP_UpgradePlanBase_C::MissingHealth' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, HighlightMaterialInstance) == 0x000428, "Member 'ABP_UpgradePlanBase_C::HighlightMaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, PreviewMaterialInstance) == 0x000430, "Member 'ABP_UpgradePlanBase_C::PreviewMaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, VerticalFadeOffset) == 0x000438, "Member 'ABP_UpgradePlanBase_C::VerticalFadeOffset' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level2StickerOffset) == 0x000440, "Member 'ABP_UpgradePlanBase_C::Level2StickerOffset' has a wrong offset!");
static_assert(offsetof(ABP_UpgradePlanBase_C, Level3StickerOffset) == 0x000458, "Member 'ABP_UpgradePlanBase_C::Level3StickerOffset' has a wrong offset!");

}

