#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PlatformAvatar

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PlatformAvatar.WI_PlatformAvatar_C
// 0x0028 (0x0308 - 0x02E0)
class UWI_PlatformAvatar_C final : public UUserWidget
{
public:
	class UImage*                                 AvatarIcon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_131;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Silhoutte;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      Throbber;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void LoadUsingOnlineServicesUser(const class UOnlineServicesUserBase*& User);
	void OnLoadedAvatarFromUser(TSoftObjectPtr<class UTexture> Avatar);
	void SetAvatarFromSoftPtr(TSoftObjectPtr<class UTexture> Avatar);
	void SetHasLoaded();
	void SetIsLoading();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PlatformAvatar_C">();
	}
	static class UWI_PlatformAvatar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PlatformAvatar_C>();
	}
};
static_assert(alignof(UWI_PlatformAvatar_C) == 0x000008, "Wrong alignment on UWI_PlatformAvatar_C");
static_assert(sizeof(UWI_PlatformAvatar_C) == 0x000308, "Wrong size on UWI_PlatformAvatar_C");
static_assert(offsetof(UWI_PlatformAvatar_C, AvatarIcon) == 0x0002E0, "Member 'UWI_PlatformAvatar_C::AvatarIcon' has a wrong offset!");
static_assert(offsetof(UWI_PlatformAvatar_C, Image_131) == 0x0002E8, "Member 'UWI_PlatformAvatar_C::Image_131' has a wrong offset!");
static_assert(offsetof(UWI_PlatformAvatar_C, Silhoutte) == 0x0002F0, "Member 'UWI_PlatformAvatar_C::Silhoutte' has a wrong offset!");
static_assert(offsetof(UWI_PlatformAvatar_C, Switcher) == 0x0002F8, "Member 'UWI_PlatformAvatar_C::Switcher' has a wrong offset!");
static_assert(offsetof(UWI_PlatformAvatar_C, Throbber) == 0x000300, "Member 'UWI_PlatformAvatar_C::Throbber' has a wrong offset!");

}

