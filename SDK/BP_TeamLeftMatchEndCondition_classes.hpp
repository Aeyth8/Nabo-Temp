#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TeamLeftMatchEndCondition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TeamLeftMatchEndCondition.BP_TeamLeftMatchEndCondition_C
// 0x0010 (0x02B8 - 0x02A8)
class ABP_TeamLeftMatchEndCondition_C final : public AEndCondition
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Amount_To_Spawn;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CreateObjective();
	void Does_Team_Have_Valid_Player(uint8 TeamId, bool* Return, uint8* ID);
	void ExecuteUbergraph_BP_TeamLeftMatchEndCondition(int32 EntryPoint);
	void HasTeamAlreadyBeenEliminated(uint8 TeamId, bool* Eliminated);
	void On_PlayerLoggedOut_Event(class APlayerState* PlayerState, class AController* Controller);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TeamLeftMatchEndCondition_C">();
	}
	static class ABP_TeamLeftMatchEndCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TeamLeftMatchEndCondition_C>();
	}
};
static_assert(alignof(ABP_TeamLeftMatchEndCondition_C) == 0x000008, "Wrong alignment on ABP_TeamLeftMatchEndCondition_C");
static_assert(sizeof(ABP_TeamLeftMatchEndCondition_C) == 0x0002B8, "Wrong size on ABP_TeamLeftMatchEndCondition_C");
static_assert(offsetof(ABP_TeamLeftMatchEndCondition_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_TeamLeftMatchEndCondition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TeamLeftMatchEndCondition_C, Amount_To_Spawn) == 0x0002B0, "Member 'ABP_TeamLeftMatchEndCondition_C::Amount_To_Spawn' has a wrong offset!");

}

