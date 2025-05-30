#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeEndConditionWI

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TimeEndConditionWI.TimeEndConditionWI_C
// 0x0018 (0x02F8 - 0x02E0)
class UTimeEndConditionWI_C final : public UUserWidget
{
public:
	class UTextBlock*                             CountdownText;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Root;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Server_End_Time;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetEndTime(double ServerEndTime);
	void UpdateCountdownText();

	double GetTimeLeft() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeEndConditionWI_C">();
	}
	static class UTimeEndConditionWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeEndConditionWI_C>();
	}
};
static_assert(alignof(UTimeEndConditionWI_C) == 0x000008, "Wrong alignment on UTimeEndConditionWI_C");
static_assert(sizeof(UTimeEndConditionWI_C) == 0x0002F8, "Wrong size on UTimeEndConditionWI_C");
static_assert(offsetof(UTimeEndConditionWI_C, CountdownText) == 0x0002E0, "Member 'UTimeEndConditionWI_C::CountdownText' has a wrong offset!");
static_assert(offsetof(UTimeEndConditionWI_C, Root) == 0x0002E8, "Member 'UTimeEndConditionWI_C::Root' has a wrong offset!");
static_assert(offsetof(UTimeEndConditionWI_C, Server_End_Time) == 0x0002F0, "Member 'UTimeEndConditionWI_C::Server_End_Time' has a wrong offset!");

}

