#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_XPProgressionBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_XPProgressionBar.WI_XPProgressionBar_C
// 0x0028 (0x0330 - 0x0308)
class UWI_XPProgressionBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Border;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressionBarFill;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Progress;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Thickness;                                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_XPProgressionBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBarThickness(double Thickness_0);
	void SetBorderPadding(float Padding_0);
	void SetBorderThickness(float Widthhickness);
	void SetProgress(double Progress_0);
	void SetThickness(double Thickness_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_XPProgressionBar_C">();
	}
	static class UWI_XPProgressionBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_XPProgressionBar_C>();
	}
};
static_assert(alignof(UWI_XPProgressionBar_C) == 0x000008, "Wrong alignment on UWI_XPProgressionBar_C");
static_assert(sizeof(UWI_XPProgressionBar_C) == 0x000330, "Wrong size on UWI_XPProgressionBar_C");
static_assert(offsetof(UWI_XPProgressionBar_C, UberGraphFrame) == 0x000308, "Member 'UWI_XPProgressionBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_XPProgressionBar_C, Border) == 0x000310, "Member 'UWI_XPProgressionBar_C::Border' has a wrong offset!");
static_assert(offsetof(UWI_XPProgressionBar_C, ProgressionBarFill) == 0x000318, "Member 'UWI_XPProgressionBar_C::ProgressionBarFill' has a wrong offset!");
static_assert(offsetof(UWI_XPProgressionBar_C, Progress) == 0x000320, "Member 'UWI_XPProgressionBar_C::Progress' has a wrong offset!");
static_assert(offsetof(UWI_XPProgressionBar_C, Thickness) == 0x000328, "Member 'UWI_XPProgressionBar_C::Thickness' has a wrong offset!");

}

