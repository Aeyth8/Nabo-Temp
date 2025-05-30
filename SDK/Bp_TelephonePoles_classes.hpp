#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_TelephonePoles

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Bp_TelephonePoles_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bp_TelephonePoles.Bp_TelephonePoles_C
// 0x0088 (0x0360 - 0x02D8)
class ABp_TelephonePoles_C final : public ABp_TelephonePoles_Base_C
{
public:
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PoleMesh;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       RopeSplineMath_0;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F8[0x8];                                      // 0x02F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PoleTransform;                                     // 0x0300(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_TelephonePoles_C">();
	}
	static class ABp_TelephonePoles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABp_TelephonePoles_C>();
	}
};
static_assert(alignof(ABp_TelephonePoles_C) == 0x000010, "Wrong alignment on ABp_TelephonePoles_C");
static_assert(sizeof(ABp_TelephonePoles_C) == 0x000360, "Wrong size on ABp_TelephonePoles_C");
static_assert(offsetof(ABp_TelephonePoles_C, InstancedStaticMesh) == 0x0002D8, "Member 'ABp_TelephonePoles_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABp_TelephonePoles_C, Spline) == 0x0002E0, "Member 'ABp_TelephonePoles_C::Spline' has a wrong offset!");
static_assert(offsetof(ABp_TelephonePoles_C, PoleMesh) == 0x0002E8, "Member 'ABp_TelephonePoles_C::PoleMesh' has a wrong offset!");
static_assert(offsetof(ABp_TelephonePoles_C, RopeSplineMath_0) == 0x0002F0, "Member 'ABp_TelephonePoles_C::RopeSplineMath_0' has a wrong offset!");
static_assert(offsetof(ABp_TelephonePoles_C, PoleTransform) == 0x000300, "Member 'ABp_TelephonePoles_C::PoleTransform' has a wrong offset!");

}

