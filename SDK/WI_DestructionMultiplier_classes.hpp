#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_DestructionMultiplier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_DestructionMultiplier.WI_DestructionMultiplier_C
// 0x0028 (0x0308 - 0x02E0)
class UWI_DestructionMultiplier_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShadow;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MultiplierText;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_DestructionMultiplier(int32 EntryPoint);
	void SetDamageMultiplierText(double Multiplier);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_DestructionMultiplier_C">();
	}
	static class UWI_DestructionMultiplier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_DestructionMultiplier_C>();
	}
};
static_assert(alignof(UWI_DestructionMultiplier_C) == 0x000008, "Wrong alignment on UWI_DestructionMultiplier_C");
static_assert(sizeof(UWI_DestructionMultiplier_C) == 0x000308, "Wrong size on UWI_DestructionMultiplier_C");
static_assert(offsetof(UWI_DestructionMultiplier_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_DestructionMultiplier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_DestructionMultiplier_C, Background) == 0x0002E8, "Member 'UWI_DestructionMultiplier_C::Background' has a wrong offset!");
static_assert(offsetof(UWI_DestructionMultiplier_C, Icon) == 0x0002F0, "Member 'UWI_DestructionMultiplier_C::Icon' has a wrong offset!");
static_assert(offsetof(UWI_DestructionMultiplier_C, IconShadow) == 0x0002F8, "Member 'UWI_DestructionMultiplier_C::IconShadow' has a wrong offset!");
static_assert(offsetof(UWI_DestructionMultiplier_C, MultiplierText) == 0x000300, "Member 'UWI_DestructionMultiplier_C::MultiplierText' has a wrong offset!");

}

