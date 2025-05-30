#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NeighborPreviewActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NeighborPreviewActor.BP_NeighborPreviewActor_C
// 0x0048 (0x02D8 - 0x0290)
class ABP_NeighborPreviewActor_C : public ANeighborPreviewActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ItemSkinEquippedParticles;                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      SkinBoughtParticles;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NeighborSkinEquippedParticles;                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                   ItemViewCamera;                                    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AllCurrentlySpawnedActors;                         // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          bCanRotate;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearSpawnedItem();
	void ClickedEnd();
	void ClickedStart();
	void ExecuteUbergraph_BP_NeighborPreviewActor(int32 EntryPoint);
	void GetAllCurrentlySpawnedActors(TArray<class AActor*>* SpawnedActors);
	void HandleAssetLoaded(class UItemSkinDefinition* LoadedItemSkinDefinition);
	void InitializeItem(const TSoftObjectPtr<class UItemSkinDefinition>& InDefinition);
	void MouseMove(const struct FVector2D& MouseDelta);
	void OnLoaded_647E85B3495B2937C9CC3D8B7ADDA521(class UObject* Loaded);
	void PlayItemSkinEquippedParticles();
	void PlayNeighborSkinEquippedParticles();
	void PlaySkinBoughtParticles();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SpawnActor(const struct FEquipmentActorToSpawn& ToSpawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NeighborPreviewActor_C">();
	}
	static class ABP_NeighborPreviewActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NeighborPreviewActor_C>();
	}
};
static_assert(alignof(ABP_NeighborPreviewActor_C) == 0x000008, "Wrong alignment on ABP_NeighborPreviewActor_C");
static_assert(sizeof(ABP_NeighborPreviewActor_C) == 0x0002D8, "Wrong size on ABP_NeighborPreviewActor_C");
static_assert(offsetof(ABP_NeighborPreviewActor_C, UberGraphFrame) == 0x000290, "Member 'ABP_NeighborPreviewActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, ItemSkinEquippedParticles) == 0x000298, "Member 'ABP_NeighborPreviewActor_C::ItemSkinEquippedParticles' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, SkinBoughtParticles) == 0x0002A0, "Member 'ABP_NeighborPreviewActor_C::SkinBoughtParticles' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, NeighborSkinEquippedParticles) == 0x0002A8, "Member 'ABP_NeighborPreviewActor_C::NeighborSkinEquippedParticles' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, ItemViewCamera) == 0x0002B0, "Member 'ABP_NeighborPreviewActor_C::ItemViewCamera' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, SkeletalMesh) == 0x0002B8, "Member 'ABP_NeighborPreviewActor_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, AllCurrentlySpawnedActors) == 0x0002C0, "Member 'ABP_NeighborPreviewActor_C::AllCurrentlySpawnedActors' has a wrong offset!");
static_assert(offsetof(ABP_NeighborPreviewActor_C, bCanRotate) == 0x0002D0, "Member 'ABP_NeighborPreviewActor_C::bCanRotate' has a wrong offset!");

}

