#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_MenuCarousel_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_MenuCarousel_Item.WI_MenuCarousel_Item_C
// 0x0078 (0x0358 - 0x02E0)
class UWI_MenuCarousel_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 MessageBackground;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageText;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 MessageBackgroundUrl;                              // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2DDynamic*                      Texture;                                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 MessageLink;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              BrushSize;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ItemBrushSet;                                      // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_WI_MenuCarousel_Item(int32 EntryPoint);
	void ItemBrushSet__DelegateSignature();
	void OnFail_9E2BBA1547CD294F3E8F6D842EF76FAA(class UTexture2DDynamic* Texture_0);
	void OnSuccess_9E2BBA1547CD294F3E8F6D842EF76FAA(class UTexture2DDynamic* Texture_0);
	void UpdateBackgroundImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_MenuCarousel_Item_C">();
	}
	static class UWI_MenuCarousel_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_MenuCarousel_Item_C>();
	}
};
static_assert(alignof(UWI_MenuCarousel_Item_C) == 0x000008, "Wrong alignment on UWI_MenuCarousel_Item_C");
static_assert(sizeof(UWI_MenuCarousel_Item_C) == 0x000358, "Wrong size on UWI_MenuCarousel_Item_C");
static_assert(offsetof(UWI_MenuCarousel_Item_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_MenuCarousel_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, MessageBackground) == 0x0002E8, "Member 'UWI_MenuCarousel_Item_C::MessageBackground' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, MessageText) == 0x0002F0, "Member 'UWI_MenuCarousel_Item_C::MessageText' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, SizeBox_0) == 0x0002F8, "Member 'UWI_MenuCarousel_Item_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, MessageBackgroundUrl) == 0x000300, "Member 'UWI_MenuCarousel_Item_C::MessageBackgroundUrl' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, Texture) == 0x000310, "Member 'UWI_MenuCarousel_Item_C::Texture' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, Message) == 0x000318, "Member 'UWI_MenuCarousel_Item_C::Message' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, MessageLink) == 0x000328, "Member 'UWI_MenuCarousel_Item_C::MessageLink' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, BrushSize) == 0x000338, "Member 'UWI_MenuCarousel_Item_C::BrushSize' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_C, ItemBrushSet) == 0x000348, "Member 'UWI_MenuCarousel_Item_C::ItemBrushSet' has a wrong offset!");

}

