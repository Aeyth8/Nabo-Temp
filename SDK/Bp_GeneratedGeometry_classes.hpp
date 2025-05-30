#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_GeneratedGeometry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bp_GeneratedGeometry.Bp_GeneratedGeometry_C
// 0x0048 (0x02E8 - 0x02A0)
class ABp_GeneratedGeometry_C : public AStaticMeshActor
{
public:
	class UObject*                                GeneratedGeometryDataComponent;                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        SplinePoints;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	TArray<ESplinePointType>                      SplinePointType;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	TArray<struct FVector>                        SplineTangents;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, AdvancedDisplay)
	TArray<struct FVector>                        SplineScales;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, AdvancedDisplay)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_GeneratedGeometry_C">();
	}
	static class ABp_GeneratedGeometry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABp_GeneratedGeometry_C>();
	}
};
static_assert(alignof(ABp_GeneratedGeometry_C) == 0x000008, "Wrong alignment on ABp_GeneratedGeometry_C");
static_assert(sizeof(ABp_GeneratedGeometry_C) == 0x0002E8, "Wrong size on ABp_GeneratedGeometry_C");
static_assert(offsetof(ABp_GeneratedGeometry_C, GeneratedGeometryDataComponent) == 0x0002A0, "Member 'ABp_GeneratedGeometry_C::GeneratedGeometryDataComponent' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedGeometry_C, SplinePoints) == 0x0002A8, "Member 'ABp_GeneratedGeometry_C::SplinePoints' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedGeometry_C, SplinePointType) == 0x0002B8, "Member 'ABp_GeneratedGeometry_C::SplinePointType' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedGeometry_C, SplineTangents) == 0x0002C8, "Member 'ABp_GeneratedGeometry_C::SplineTangents' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedGeometry_C, SplineScales) == 0x0002D8, "Member 'ABp_GeneratedGeometry_C::SplineScales' has a wrong offset!");

}

