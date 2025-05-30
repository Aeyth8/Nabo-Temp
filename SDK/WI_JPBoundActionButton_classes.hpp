#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPBoundActionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPBoundActionButton.WI_JPBoundActionButton_C
// 0x0030 (0x1600 - 0x15D0)
class UWI_JPBoundActionButton_C final : public ULyraBoundActionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                ButtonBorder;                                      // 0x15D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InitialButtonText;                                 // 0x15E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	bool                                          ApplyBoundActionTextToButtonLabel;                 // 0x15F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_JPBoundActionButton(int32 EntryPoint);
	void OnUpdateInputAction();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPBoundActionButton_C">();
	}
	static class UWI_JPBoundActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPBoundActionButton_C>();
	}
};
static_assert(alignof(UWI_JPBoundActionButton_C) == 0x000010, "Wrong alignment on UWI_JPBoundActionButton_C");
static_assert(sizeof(UWI_JPBoundActionButton_C) == 0x001600, "Wrong size on UWI_JPBoundActionButton_C");
static_assert(offsetof(UWI_JPBoundActionButton_C, UberGraphFrame) == 0x0015D0, "Member 'UWI_JPBoundActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPBoundActionButton_C, ButtonBorder) == 0x0015D8, "Member 'UWI_JPBoundActionButton_C::ButtonBorder' has a wrong offset!");
static_assert(offsetof(UWI_JPBoundActionButton_C, InitialButtonText) == 0x0015E0, "Member 'UWI_JPBoundActionButton_C::InitialButtonText' has a wrong offset!");
static_assert(offsetof(UWI_JPBoundActionButton_C, ApplyBoundActionTextToButtonLabel) == 0x0015F0, "Member 'UWI_JPBoundActionButton_C::ApplyBoundActionTextToButtonLabel' has a wrong offset!");

}

