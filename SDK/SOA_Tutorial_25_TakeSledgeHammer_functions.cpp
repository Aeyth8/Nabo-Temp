#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_Tutorial_25_TakeSledgeHammer

#include "Basic.hpp"

#include "SOA_Tutorial_25_TakeSledgeHammer_classes.hpp"
#include "SOA_Tutorial_25_TakeSledgeHammer_parameters.hpp"


namespace SDK
{

// Function SOA_Tutorial_25_TakeSledgeHammer.SOA_Tutorial_25_TakeSledgeHammer_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemInstance*                    Item_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ResidentCharacter_C*          CharacterWhoObtained                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ASOA_Tutorial_25_TakeSledgeHammer_C::CustomEvent(class UItemInstance* Item_Instance, class ABP_ResidentCharacter_C* CharacterWhoObtained)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SOA_Tutorial_25_TakeSledgeHammer_C", "CustomEvent");

	Params::SOA_Tutorial_25_TakeSledgeHammer_C_CustomEvent Parms{};

	Parms.Item_Instance = Item_Instance;
	Parms.CharacterWhoObtained = CharacterWhoObtained;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SOA_Tutorial_25_TakeSledgeHammer.SOA_Tutorial_25_TakeSledgeHammer_C.ExecuteUbergraph_SOA_Tutorial_25_TakeSledgeHammer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASOA_Tutorial_25_TakeSledgeHammer_C::ExecuteUbergraph_SOA_Tutorial_25_TakeSledgeHammer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SOA_Tutorial_25_TakeSledgeHammer_C", "ExecuteUbergraph_SOA_Tutorial_25_TakeSledgeHammer");

	Params::SOA_Tutorial_25_TakeSledgeHammer_C_ExecuteUbergraph_SOA_Tutorial_25_TakeSledgeHammer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SOA_Tutorial_25_TakeSledgeHammer.SOA_Tutorial_25_TakeSledgeHammer_C.GetGroundsKeeperFromTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_groundskeeper_C*              GroundsKeeper                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ASOA_Tutorial_25_TakeSledgeHammer_C::GetGroundsKeeperFromTeam(class Abp_groundskeeper_C** GroundsKeeper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SOA_Tutorial_25_TakeSledgeHammer_C", "GetGroundsKeeperFromTeam");

	Params::SOA_Tutorial_25_TakeSledgeHammer_C_GetGroundsKeeperFromTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GroundsKeeper != nullptr)
		*GroundsKeeper = Parms.GroundsKeeper;
}


// Function SOA_Tutorial_25_TakeSledgeHammer.SOA_Tutorial_25_TakeSledgeHammer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASOA_Tutorial_25_TakeSledgeHammer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SOA_Tutorial_25_TakeSledgeHammer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

