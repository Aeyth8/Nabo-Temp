#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_GeneratedWall

#include "Basic.hpp"

#include "WallPartsStruct_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Bp_GeneratedGeometry_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bp_GeneratedWall.Bp_GeneratedWall_C
// 0x0268 (0x0550 - 0x02E8)
class ABp_GeneratedWall_C final : public ABp_GeneratedGeometry_C
{
public:
	bool                                          Fast_Editing;                                      // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Debug_View_Collision;                              // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Create_Wall;                                       // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2EB[0x1];                                      // 0x02EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Wall_Height;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Wall_Offset;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Wall_Rotation;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Wall_UVScale;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            Bottom_Mesh;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTransform                             Bottom_Transform;                                  // 0x0310(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            Middle_Mesh;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Middle_Transform;                                  // 0x0380(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            Top_Mesh;                                          // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Top_Transform;                                     // 0x03F0(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Additional_Corner_Modules;                         // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Wall_Material;                                     // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Create_Roof;                                       // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Roof_Depth;                                        // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Roof_Height;                                       // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Roof_Offset;                                       // 0x0478(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     Roof_Material;                                     // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRuntimeFloatCurve                     Roof_Shape;                                        // 0x0498(0x0088)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	int32                                         Roof_Edges;                                        // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Roof_UVMultiplier;                                 // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FWallPartsStruct>               Meshes;                                            // 0x0530(0x0010)(Edit, BlueprintVisible)
	bool                                          Boolean_Collision_Fix;                             // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Wall_Rounded_Corner;                               // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542[0x6];                                      // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Wall_Thickness;                                    // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_GeneratedWall_C">();
	}
	static class ABp_GeneratedWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABp_GeneratedWall_C>();
	}
};
static_assert(alignof(ABp_GeneratedWall_C) == 0x000010, "Wrong alignment on ABp_GeneratedWall_C");
static_assert(sizeof(ABp_GeneratedWall_C) == 0x000550, "Wrong size on ABp_GeneratedWall_C");
static_assert(offsetof(ABp_GeneratedWall_C, Fast_Editing) == 0x0002E8, "Member 'ABp_GeneratedWall_C::Fast_Editing' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Debug_View_Collision) == 0x0002E9, "Member 'ABp_GeneratedWall_C::Debug_View_Collision' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Create_Wall) == 0x0002EA, "Member 'ABp_GeneratedWall_C::Create_Wall' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Height) == 0x0002EC, "Member 'ABp_GeneratedWall_C::Wall_Height' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Offset) == 0x0002F0, "Member 'ABp_GeneratedWall_C::Wall_Offset' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Rotation) == 0x0002F8, "Member 'ABp_GeneratedWall_C::Wall_Rotation' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_UVScale) == 0x000300, "Member 'ABp_GeneratedWall_C::Wall_UVScale' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Bottom_Mesh) == 0x000308, "Member 'ABp_GeneratedWall_C::Bottom_Mesh' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Bottom_Transform) == 0x000310, "Member 'ABp_GeneratedWall_C::Bottom_Transform' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Middle_Mesh) == 0x000370, "Member 'ABp_GeneratedWall_C::Middle_Mesh' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Middle_Transform) == 0x000380, "Member 'ABp_GeneratedWall_C::Middle_Transform' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Top_Mesh) == 0x0003E0, "Member 'ABp_GeneratedWall_C::Top_Mesh' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Top_Transform) == 0x0003F0, "Member 'ABp_GeneratedWall_C::Top_Transform' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Additional_Corner_Modules) == 0x000450, "Member 'ABp_GeneratedWall_C::Additional_Corner_Modules' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Material) == 0x000458, "Member 'ABp_GeneratedWall_C::Wall_Material' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Create_Roof) == 0x000460, "Member 'ABp_GeneratedWall_C::Create_Roof' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Depth) == 0x000468, "Member 'ABp_GeneratedWall_C::Roof_Depth' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Height) == 0x000470, "Member 'ABp_GeneratedWall_C::Roof_Height' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Offset) == 0x000478, "Member 'ABp_GeneratedWall_C::Roof_Offset' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Material) == 0x000490, "Member 'ABp_GeneratedWall_C::Roof_Material' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Shape) == 0x000498, "Member 'ABp_GeneratedWall_C::Roof_Shape' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_Edges) == 0x000520, "Member 'ABp_GeneratedWall_C::Roof_Edges' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Roof_UVMultiplier) == 0x000528, "Member 'ABp_GeneratedWall_C::Roof_UVMultiplier' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Meshes) == 0x000530, "Member 'ABp_GeneratedWall_C::Meshes' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Boolean_Collision_Fix) == 0x000540, "Member 'ABp_GeneratedWall_C::Boolean_Collision_Fix' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Rounded_Corner) == 0x000541, "Member 'ABp_GeneratedWall_C::Wall_Rounded_Corner' has a wrong offset!");
static_assert(offsetof(ABp_GeneratedWall_C, Wall_Thickness) == 0x000548, "Member 'ABp_GeneratedWall_C::Wall_Thickness' has a wrong offset!");

}

