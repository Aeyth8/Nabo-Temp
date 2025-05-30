#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PlantedEssentialBomba

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PlantedEssentialBomba.WI_PlantedEssentialBomba_C
// 0x0038 (0x0318 - 0x02E0)
class UWI_PlantedEssentialBomba_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Skulls;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image1;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull_2;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Skull_3;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Timer;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WI_PlantedEssentialBomba(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Timer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PlantedEssentialBomba_C">();
	}
	static class UWI_PlantedEssentialBomba_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PlantedEssentialBomba_C>();
	}
};
static_assert(alignof(UWI_PlantedEssentialBomba_C) == 0x000008, "Wrong alignment on UWI_PlantedEssentialBomba_C");
static_assert(sizeof(UWI_PlantedEssentialBomba_C) == 0x000318, "Wrong size on UWI_PlantedEssentialBomba_C");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_PlantedEssentialBomba_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, Skulls) == 0x0002E8, "Member 'UWI_PlantedEssentialBomba_C::Skulls' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, Image1) == 0x0002F0, "Member 'UWI_PlantedEssentialBomba_C::Image1' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, Skull_2) == 0x0002F8, "Member 'UWI_PlantedEssentialBomba_C::Skull_2' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, Skull_3) == 0x000300, "Member 'UWI_PlantedEssentialBomba_C::Skull_3' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, TextBlock_Timer) == 0x000308, "Member 'UWI_PlantedEssentialBomba_C::TextBlock_Timer' has a wrong offset!");
static_assert(offsetof(UWI_PlantedEssentialBomba_C, TimerHandle) == 0x000310, "Member 'UWI_PlantedEssentialBomba_C::TimerHandle' has a wrong offset!");

}

