#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerStartJP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerStartJP.PlayerStartJP_C
// 0x0020 (0x02E0 - 0x02C0)
class APlayerStartJP_C final : public APlayerStart
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGroundskeeperReference*                GroundskeeperReference;                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CLAIMED;                                           // 0x02D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Occupied;                                          // 0x02D9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FallbackSpawn;                                     // 0x02DA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__PlayerStartJP_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_PlayerStartJP(int32 EntryPoint);
	void Occupy();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerStartJP_C">();
	}
	static class APlayerStartJP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerStartJP_C>();
	}
};
static_assert(alignof(APlayerStartJP_C) == 0x000008, "Wrong alignment on APlayerStartJP_C");
static_assert(sizeof(APlayerStartJP_C) == 0x0002E0, "Wrong size on APlayerStartJP_C");
static_assert(offsetof(APlayerStartJP_C, UberGraphFrame) == 0x0002C0, "Member 'APlayerStartJP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerStartJP_C, GroundskeeperReference) == 0x0002C8, "Member 'APlayerStartJP_C::GroundskeeperReference' has a wrong offset!");
static_assert(offsetof(APlayerStartJP_C, Box) == 0x0002D0, "Member 'APlayerStartJP_C::Box' has a wrong offset!");
static_assert(offsetof(APlayerStartJP_C, CLAIMED) == 0x0002D8, "Member 'APlayerStartJP_C::CLAIMED' has a wrong offset!");
static_assert(offsetof(APlayerStartJP_C, Occupied) == 0x0002D9, "Member 'APlayerStartJP_C::Occupied' has a wrong offset!");
static_assert(offsetof(APlayerStartJP_C, FallbackSpawn) == 0x0002DA, "Member 'APlayerStartJP_C::FallbackSpawn' has a wrong offset!");

}

