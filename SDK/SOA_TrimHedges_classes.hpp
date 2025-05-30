#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_TrimHedges

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_TrimHedges.SOA_TrimHedges_C
// 0x0020 (0x02F0 - 0x02D0)
class ASOA_TrimHedges_C final : public ASubObjective
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BranchesLeftToTrim;                                // 0x02D8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Hedge_BranchSpawner_C*>      SpawnPositions;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Add_Existing_Tasks();
	void CheckIfSubObjectiveFinished();
	void CreateRemainingTasks();
	void ExecuteUbergraph_SOA_TrimHedges(int32 EntryPoint);
	void Find_Fitting_Spawn_Positions();
	class FText GetText();
	void HedgeTrimmed(class AActor* DestroyedActor);
	void OnRep_BranchesLeftToTrim();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_TrimHedges_C">();
	}
	static class ASOA_TrimHedges_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_TrimHedges_C>();
	}
};
static_assert(alignof(ASOA_TrimHedges_C) == 0x000008, "Wrong alignment on ASOA_TrimHedges_C");
static_assert(sizeof(ASOA_TrimHedges_C) == 0x0002F0, "Wrong size on ASOA_TrimHedges_C");
static_assert(offsetof(ASOA_TrimHedges_C, UberGraphFrame) == 0x0002D0, "Member 'ASOA_TrimHedges_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASOA_TrimHedges_C, BranchesLeftToTrim) == 0x0002D8, "Member 'ASOA_TrimHedges_C::BranchesLeftToTrim' has a wrong offset!");
static_assert(offsetof(ASOA_TrimHedges_C, SpawnPositions) == 0x0002E0, "Member 'ASOA_TrimHedges_C::SpawnPositions' has a wrong offset!");

}

