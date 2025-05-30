#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_CheatCommand_Local

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_CheatCommand_Local.WI_CheatCommand_Local_C
// 0x0038 (0x0318 - 0x02E0)
class UWI_CheatCommand_Local_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Commit;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleElement;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CommandName;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0308(0x0010)(Edit, BlueprintVisible)

public:
	void BndEvt__WI_CheatFloatField_Commit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WI_CheatCommand_Local(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_CheatCommand_Local_C">();
	}
	static class UWI_CheatCommand_Local_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_CheatCommand_Local_C>();
	}
};
static_assert(alignof(UWI_CheatCommand_Local_C) == 0x000008, "Wrong alignment on UWI_CheatCommand_Local_C");
static_assert(sizeof(UWI_CheatCommand_Local_C) == 0x000318, "Wrong size on UWI_CheatCommand_Local_C");
static_assert(offsetof(UWI_CheatCommand_Local_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_CheatCommand_Local_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_CheatCommand_Local_C, Commit) == 0x0002E8, "Member 'UWI_CheatCommand_Local_C::Commit' has a wrong offset!");
static_assert(offsetof(UWI_CheatCommand_Local_C, TitleElement) == 0x0002F0, "Member 'UWI_CheatCommand_Local_C::TitleElement' has a wrong offset!");
static_assert(offsetof(UWI_CheatCommand_Local_C, CommandName) == 0x0002F8, "Member 'UWI_CheatCommand_Local_C::CommandName' has a wrong offset!");
static_assert(offsetof(UWI_CheatCommand_Local_C, Title) == 0x000308, "Member 'UWI_CheatCommand_Local_C::Title' has a wrong offset!");

}

