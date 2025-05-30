#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_Shops

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SOA_DefaultItemTip_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SOA_Shops.SOA_Shops_C
// 0x0010 (0x02E0 - 0x02D0)
class ASOA_Shops_C final : public ASOA_DefaultItemTip_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ShopsToFind;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCompleted;                                       // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SOA_Shops(int32 EntryPoint);
	void IsSubObjectiveCompleted();
	void OnShopOpened(class AActor* InteractingActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SOA_Shops_C">();
	}
	static class ASOA_Shops_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASOA_Shops_C>();
	}
};
static_assert(alignof(ASOA_Shops_C) == 0x000008, "Wrong alignment on ASOA_Shops_C");
static_assert(sizeof(ASOA_Shops_C) == 0x0002E0, "Wrong size on ASOA_Shops_C");
static_assert(offsetof(ASOA_Shops_C, UberGraphFrame) == 0x0002D0, "Member 'ASOA_Shops_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASOA_Shops_C, ShopsToFind) == 0x0002D8, "Member 'ASOA_Shops_C::ShopsToFind' has a wrong offset!");
static_assert(offsetof(ASOA_Shops_C, IsCompleted) == 0x0002D9, "Member 'ASOA_Shops_C::IsCompleted' has a wrong offset!");

}

