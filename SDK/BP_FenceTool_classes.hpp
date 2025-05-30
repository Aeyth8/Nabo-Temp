#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FenceTool

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_SplinePointPositions_structs.hpp"
#include "Struct_SingleFenceDetails_structs.hpp"
#include "Struct_FullFenceDetatils_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FenceTool.BP_FenceTool_C
// 0x0188 (0x0418 - 0x0290)
class ABP_FenceTool_C final : public AActor
{
public:
	class USplineComponent*                       FenceSpline;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Reorient;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddMiddleColumns;                                  // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A2[0x6];                                      // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastFenceLocation;                                 // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FenceFollowsY;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndWithSmallFence;                                 // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddLastColumn;                                     // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddFirstColumn;                                    // 0x02C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SmallerFenceOffset;                                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NormalFenceOffset;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastColumnOffsetOnSmallFence;                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FenceScale;                                        // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            FenceMesh;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SmallerFenceMesh;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FenceMaterial;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ColumnScale;                                       // 0x0310(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            ColumnMesh;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     ColumnMaterial;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LastFenceOrientation;                              // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FStruct_SingleFenceDetails>     SingleFenceDetails;                                // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_SplinePointPositions>   SplinePointPositions;                              // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_FullFenceDetatils              FullFenceDetails;                                  // 0x0370(0x0078)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           ColumnMeshComponents;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           FenceMeshComponents;                               // 0x03F8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           SmallFenceMeshComponents;                          // 0x0408(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AddColumnStatitcMeshComponent(const struct FVector& FinalLocation, const struct FRotator& Orientation, const struct FVector& SectionSize, struct FStruct_SingleFenceDetails* PlacedFence);
	void AddFenceStatitcMeshComponent(const struct FVector& MeshLocation, const struct FRotator& MeshOrientation, bool FenceShouldBeSmall, struct FStruct_SingleFenceDetails* PlacedFence);
	void CalculateFenceAmountBetweenPoints(const struct FVector& CurrentPoint, const struct FVector& NextPoint, int32* FenceAmount);
	void CalculateFencePositionsBetweenPoints(int32 CurrentFence, int32 FenceAmount, const struct FVector& CurrentPoint, const struct FVector& NextPoint, bool FenceShouldBeSmall, struct FVector* CurrentFencePosition);
	void CreateColumnSection(const struct FVector& Size, const struct FVector& Offset, const struct FVector& Location, bool OrientToSpline, int32 Index_0, class UStaticMeshComponent** CreatedSection);
	void CreateFenceSection(const struct FVector& Size, const struct FVector& Offset, const struct FVector& Location, bool OrientToSpline, int32 Index_0);
	void Depr_AddFenceInstancedStatitcMeshComponent(const struct FVector& MeshLocation, const struct FRotator& MeshOrientation, bool EndWithSmallFence_0);
	struct FVector GetColumnPositionWithSmallerFence(int32 SectionIndex);
	void GetStaticMeshSize(class UStaticMesh* StaticMesh, double* MeshHeight, double* MeshWidth, double* MeshDepth);
	void ReconstructEditableFence(TArray<struct FStruct_SplinePointPositions>& SplinePointPositions_0, const struct FStruct_FullFenceDetatils& FullFenceDetails_0);
	void ShouldCurrentFenceBeSmall(int32 CurrentFence, int32 FenceAmount, bool EndsWithSmallFence, int32 SectionIndex, bool* FenceShouldBeSmall);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FenceTool_C">();
	}
	static class ABP_FenceTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FenceTool_C>();
	}
};
static_assert(alignof(ABP_FenceTool_C) == 0x000008, "Wrong alignment on ABP_FenceTool_C");
static_assert(sizeof(ABP_FenceTool_C) == 0x000418, "Wrong size on ABP_FenceTool_C");
static_assert(offsetof(ABP_FenceTool_C, FenceSpline) == 0x000290, "Member 'ABP_FenceTool_C::FenceSpline' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, Scene) == 0x000298, "Member 'ABP_FenceTool_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, Reorient) == 0x0002A0, "Member 'ABP_FenceTool_C::Reorient' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, AddMiddleColumns) == 0x0002A1, "Member 'ABP_FenceTool_C::AddMiddleColumns' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, LastFenceLocation) == 0x0002A8, "Member 'ABP_FenceTool_C::LastFenceLocation' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FenceFollowsY) == 0x0002C0, "Member 'ABP_FenceTool_C::FenceFollowsY' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, EndWithSmallFence) == 0x0002C1, "Member 'ABP_FenceTool_C::EndWithSmallFence' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, AddLastColumn) == 0x0002C2, "Member 'ABP_FenceTool_C::AddLastColumn' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, AddFirstColumn) == 0x0002C3, "Member 'ABP_FenceTool_C::AddFirstColumn' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, SmallerFenceOffset) == 0x0002C8, "Member 'ABP_FenceTool_C::SmallerFenceOffset' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, NormalFenceOffset) == 0x0002D0, "Member 'ABP_FenceTool_C::NormalFenceOffset' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, LastColumnOffsetOnSmallFence) == 0x0002D8, "Member 'ABP_FenceTool_C::LastColumnOffsetOnSmallFence' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FenceScale) == 0x0002E0, "Member 'ABP_FenceTool_C::FenceScale' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FenceMesh) == 0x0002F8, "Member 'ABP_FenceTool_C::FenceMesh' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, SmallerFenceMesh) == 0x000300, "Member 'ABP_FenceTool_C::SmallerFenceMesh' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FenceMaterial) == 0x000308, "Member 'ABP_FenceTool_C::FenceMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, ColumnScale) == 0x000310, "Member 'ABP_FenceTool_C::ColumnScale' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, ColumnMesh) == 0x000328, "Member 'ABP_FenceTool_C::ColumnMesh' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, ColumnMaterial) == 0x000330, "Member 'ABP_FenceTool_C::ColumnMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, LastFenceOrientation) == 0x000338, "Member 'ABP_FenceTool_C::LastFenceOrientation' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, SingleFenceDetails) == 0x000350, "Member 'ABP_FenceTool_C::SingleFenceDetails' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, SplinePointPositions) == 0x000360, "Member 'ABP_FenceTool_C::SplinePointPositions' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FullFenceDetails) == 0x000370, "Member 'ABP_FenceTool_C::FullFenceDetails' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, ColumnMeshComponents) == 0x0003E8, "Member 'ABP_FenceTool_C::ColumnMeshComponents' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, FenceMeshComponents) == 0x0003F8, "Member 'ABP_FenceTool_C::FenceMeshComponents' has a wrong offset!");
static_assert(offsetof(ABP_FenceTool_C, SmallFenceMeshComponents) == 0x000408, "Member 'ABP_FenceTool_C::SmallFenceMeshComponents' has a wrong offset!");

}

