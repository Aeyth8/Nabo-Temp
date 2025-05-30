#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HouseEssentialsManagerComponent

#include "Basic.hpp"

#include "HouseEssentialsManagerComponent_classes.hpp"
#include "HouseEssentialsManagerComponent_parameters.hpp"


namespace SDK
{

// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.DebugPrintReplicatedHouseEssentials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::DebugPrintReplicatedHouseEssentials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "DebugPrintReplicatedHouseEssentials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.ExecuteUbergraph_HouseEssentialsManagerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::ExecuteUbergraph_HouseEssentialsManagerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "ExecuteUbergraph_HouseEssentialsManagerComponent");

	Params::HouseEssentialsManagerComponent_C_ExecuteUbergraph_HouseEssentialsManagerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.FindNewlyDestroyedHouseEssentials
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_HouseEssential>        Current_House_Essentials                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_HouseEssential>        Previous_House_Essentials                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABP_HouseEssential_Cube_C*>Newly_Destroyed_House_Essentials                       (Parm, OutParm)

void UHouseEssentialsManagerComponent_C::FindNewlyDestroyedHouseEssentials(TArray<struct FS_HouseEssential>& Current_House_Essentials, TArray<struct FS_HouseEssential>& Previous_House_Essentials, TArray<class ABP_HouseEssential_Cube_C*>* Newly_Destroyed_House_Essentials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "FindNewlyDestroyedHouseEssentials");

	Params::HouseEssentialsManagerComponent_C_FindNewlyDestroyedHouseEssentials Parms{};

	Parms.Current_House_Essentials = std::move(Current_House_Essentials);
	Parms.Previous_House_Essentials = std::move(Previous_House_Essentials);

	UObject::ProcessEvent(Func, &Parms);

	Current_House_Essentials = std::move(Parms.Current_House_Essentials);
	Previous_House_Essentials = std::move(Parms.Previous_House_Essentials);

	if (Newly_Destroyed_House_Essentials != nullptr)
		*Newly_Destroyed_House_Essentials = std::move(Parms.Newly_Destroyed_House_Essentials);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.GetAmountOfAliveHouseEssentials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::GetAmountOfAliveHouseEssentials(int32* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "GetAmountOfAliveHouseEssentials");

	Params::HouseEssentialsManagerComponent_C_GetAmountOfAliveHouseEssentials Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.HandleHouseEssentialsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::HandleHouseEssentialsUpdated(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "HandleHouseEssentialsUpdated");

	Params::HouseEssentialsManagerComponent_C_HandleHouseEssentialsUpdated Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.HasAllHouseEssentialsBeenInitiallyReplicated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    AllHouseEssentialsHaveBeenInitiallyReplicated          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::HasAllHouseEssentialsBeenInitiallyReplicated(bool* AllHouseEssentialsHaveBeenInitiallyReplicated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "HasAllHouseEssentialsBeenInitiallyReplicated");

	Params::HouseEssentialsManagerComponent_C_HasAllHouseEssentialsBeenInitiallyReplicated Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AllHouseEssentialsHaveBeenInitiallyReplicated != nullptr)
		*AllHouseEssentialsHaveBeenInitiallyReplicated = Parms.AllHouseEssentialsHaveBeenInitiallyReplicated;
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.IsBrawlGameMode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsBrawlGameMode_0                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::IsBrawlGameMode(bool* IsBrawlGameMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "IsBrawlGameMode");

	Params::HouseEssentialsManagerComponent_C_IsBrawlGameMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsBrawlGameMode_0 != nullptr)
		*IsBrawlGameMode_0 = Parms.IsBrawlGameMode_0;
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.IsOnlyOneHouseEssentialFromLosing
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::IsOnlyOneHouseEssentialFromLosing(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "IsOnlyOneHouseEssentialFromLosing");

	Params::HouseEssentialsManagerComponent_C_IsOnlyOneHouseEssentialFromLosing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.Multicast HouseEssential Was Destroyed By Player
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseEssential_Cube_C*        HouseEssential                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     AttackerPlayerState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::Multicast_HouseEssential_Was_Destroyed_By_Player(class ABP_HouseEssential_Cube_C* HouseEssential, class APlayerState* AttackerPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "Multicast HouseEssential Was Destroyed By Player");

	Params::HouseEssentialsManagerComponent_C_Multicast_HouseEssential_Was_Destroyed_By_Player Parms{};

	Parms.HouseEssential = HouseEssential;
	Parms.AttackerPlayerState = AttackerPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.On_HouseEssentialDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AliveHouseEssentials                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_groundskeeper_C*              GroundsKeeper_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::On_HouseEssentialDestroyed__DelegateSignature(int32 AliveHouseEssentials, class Abp_groundskeeper_C* GroundsKeeper_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "On_HouseEssentialDestroyed__DelegateSignature");

	Params::HouseEssentialsManagerComponent_C_On_HouseEssentialDestroyed__DelegateSignature Parms{};

	Parms.AliveHouseEssentials = AliveHouseEssentials;
	Parms.GroundsKeeper_0 = GroundsKeeper_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.OnRep_S_HouseEssentials
// (BlueprintCallable, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::OnRep_S_HouseEssentials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "OnRep_S_HouseEssentials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.OnStarted_1E304AF647AA67F0789B6F82692DE6AB
// (BlueprintCallable, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::OnStarted_1E304AF647AA67F0789B6F82692DE6AB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "OnStarted_1E304AF647AA67F0789B6F82692DE6AB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.OnStarted_DE605ADE453362D0229162B8A59394B5
// (BlueprintCallable, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::OnStarted_DE605ADE453362D0229162B8A59394B5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "OnStarted_DE605ADE453362D0229162B8A59394B5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.Reduce Alive House Essentials
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseEssential_Cube_C*        HouseEssential                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::Reduce_Alive_House_Essentials(class ABP_HouseEssential_Cube_C* HouseEssential)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "Reduce Alive House Essentials");

	Params::HouseEssentialsManagerComponent_C_Reduce_Alive_House_Essentials Parms{};

	Parms.HouseEssential = HouseEssential;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.RegisterHouseEssential
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HouseEssential_Cube_C*        HouseEssential                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHouseEssentialsManagerComponent_C::RegisterHouseEssential(class ABP_HouseEssential_Cube_C* HouseEssential)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "RegisterHouseEssential");

	Params::HouseEssentialsManagerComponent_C_RegisterHouseEssential Parms{};

	Parms.HouseEssential = HouseEssential;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HouseEssentialsManagerComponent.HouseEssentialsManagerComponent_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UHouseEssentialsManagerComponent_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HouseEssentialsManagerComponent_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

