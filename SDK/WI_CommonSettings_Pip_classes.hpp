#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_CommonSettings_Pip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_CommonSettings_Pip.WI_CommonSettings_Pip_C
// 0x0038 (0x0318 - 0x02E0)
class UWI_CommonSettings_Pip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PipImage;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedImage;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ActiveTexture;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             InactiveTexture;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_CommonSettings_Pip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetActive(bool Active_0);
	void SetSelected(bool Selected_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_CommonSettings_Pip_C">();
	}
	static class UWI_CommonSettings_Pip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_CommonSettings_Pip_C>();
	}
};
static_assert(alignof(UWI_CommonSettings_Pip_C) == 0x000008, "Wrong alignment on UWI_CommonSettings_Pip_C");
static_assert(sizeof(UWI_CommonSettings_Pip_C) == 0x000318, "Wrong size on UWI_CommonSettings_Pip_C");
static_assert(offsetof(UWI_CommonSettings_Pip_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_CommonSettings_Pip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, PipImage) == 0x0002E8, "Member 'UWI_CommonSettings_Pip_C::PipImage' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, SelectedImage) == 0x0002F0, "Member 'UWI_CommonSettings_Pip_C::SelectedImage' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, Active) == 0x0002F8, "Member 'UWI_CommonSettings_Pip_C::Active' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, ActiveTexture) == 0x000300, "Member 'UWI_CommonSettings_Pip_C::ActiveTexture' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, InactiveTexture) == 0x000308, "Member 'UWI_CommonSettings_Pip_C::InactiveTexture' has a wrong offset!");
static_assert(offsetof(UWI_CommonSettings_Pip_C, Selected) == 0x000310, "Member 'UWI_CommonSettings_Pip_C::Selected' has a wrong offset!");

}

