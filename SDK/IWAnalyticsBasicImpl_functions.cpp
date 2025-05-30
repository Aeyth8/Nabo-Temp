#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWAnalyticsBasicImpl

#include "Basic.hpp"

#include "IWAnalyticsBasicImpl_classes.hpp"
#include "IWAnalyticsBasicImpl_parameters.hpp"


namespace SDK
{

// Function IWAnalyticsBasicImpl.PlayerLevelLoadedAnalyticsEventWorldSubsystem.HandleSendError
// (Final, Native, Private)
// Parameters:
// int32                                   ErrorCode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ErrorMessage                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerLevelLoadedAnalyticsEventWorldSubsystem::HandleSendError(int32 ErrorCode, const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerLevelLoadedAnalyticsEventWorldSubsystem", "HandleSendError");

	Params::PlayerLevelLoadedAnalyticsEventWorldSubsystem_HandleSendError Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ErrorMessage = std::move(ErrorMessage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function IWAnalyticsBasicImpl.PlayerLevelLoadedAnalyticsEventWorldSubsystem.HandleSendSuccees
// (Final, Native, Private)

void UPlayerLevelLoadedAnalyticsEventWorldSubsystem::HandleSendSuccees()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerLevelLoadedAnalyticsEventWorldSubsystem", "HandleSendSuccees");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

