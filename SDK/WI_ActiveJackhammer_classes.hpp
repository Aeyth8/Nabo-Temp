#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ActiveJackhammer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ActiveJackhammer.WI_ActiveJackhammer_C
// 0x0038 (0x0318 - 0x02E0)
class UWI_ActiveJackhammer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Skulls;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image1;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull_1;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull_2;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull_3;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WI_ActiveJackhammer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ActiveJackhammer_C">();
	}
	static class UWI_ActiveJackhammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ActiveJackhammer_C>();
	}
};
static_assert(alignof(UWI_ActiveJackhammer_C) == 0x000008, "Wrong alignment on UWI_ActiveJackhammer_C");
static_assert(sizeof(UWI_ActiveJackhammer_C) == 0x000318, "Wrong size on UWI_ActiveJackhammer_C");
static_assert(offsetof(UWI_ActiveJackhammer_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_ActiveJackhammer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Skulls) == 0x0002E8, "Member 'UWI_ActiveJackhammer_C::Skulls' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Image1) == 0x0002F0, "Member 'UWI_ActiveJackhammer_C::Image1' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Skull) == 0x0002F8, "Member 'UWI_ActiveJackhammer_C::Skull' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Skull_1) == 0x000300, "Member 'UWI_ActiveJackhammer_C::Skull_1' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Skull_2) == 0x000308, "Member 'UWI_ActiveJackhammer_C::Skull_2' has a wrong offset!");
static_assert(offsetof(UWI_ActiveJackhammer_C, Skull_3) == 0x000310, "Member 'UWI_ActiveJackhammer_C::Skull_3' has a wrong offset!");

}

