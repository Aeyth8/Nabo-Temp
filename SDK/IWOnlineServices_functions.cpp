#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWOnlineServices

#include "Basic.hpp"

#include "IWOnlineServices_classes.hpp"
#include "IWOnlineServices_parameters.hpp"


namespace SDK
{

// Function IWOnlineServices.ArmadaOnlineServiceHandler.OnGSDKHealthCheck
// (Final, Native, Private)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UArmadaOnlineServiceHandler::OnGSDKHealthCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadaOnlineServiceHandler", "OnGSDKHealthCheck");

	Params::ArmadaOnlineServiceHandler_OnGSDKHealthCheck Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.ArmadaOnlineServiceHandler.OnGSDKReadyForPlayers
// (Final, Native, Private)

void UArmadaOnlineServiceHandler::OnGSDKReadyForPlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadaOnlineServiceHandler", "OnGSDKReadyForPlayers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function IWOnlineServices.ArmadaOnlineServiceHandler.OnGSDKServerActive
// (Final, Native, Private)

void UArmadaOnlineServiceHandler::OnGSDKServerActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadaOnlineServiceHandler", "OnGSDKServerActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function IWOnlineServices.ArmadaOnlineServiceHandler.OnGSDKShutdown
// (Final, Native, Private)

void UArmadaOnlineServiceHandler::OnGSDKShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadaOnlineServiceHandler", "OnGSDKShutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function IWOnlineServices.AsyncAction_ResolvePartyState.ResolvePartyState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_ResolvePartyState*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ResolvePartyState* UAsyncAction_ResolvePartyState::ResolvePartyState(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_ResolvePartyState", "ResolvePartyState");

	Params::AsyncAction_ResolvePartyState_ResolvePartyState Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.IdentityOnlineServiceHandler.GetClientLoginState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EClientIdentityLoginState               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EClientIdentityLoginState UIdentityOnlineServiceHandler::GetClientLoginState(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IdentityOnlineServiceHandler", "GetClientLoginState");

	Params::IdentityOnlineServiceHandler_GetClientLoginState Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.IdentityOnlineServiceHandler.K2_GetMasterAccountId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UIdentityOnlineServiceHandler::K2_GetMasterAccountId(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IdentityOnlineServiceHandler", "K2_GetMasterAccountId");

	Params::IdentityOnlineServiceHandler_K2_GetMasterAccountId Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.IdentityOnlineServiceHandler.K2_IsLoggedIn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIdentityOnlineServiceHandler::K2_IsLoggedIn(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IdentityOnlineServiceHandler", "K2_IsLoggedIn");

	Params::IdentityOnlineServiceHandler_K2_IsLoggedIn Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.IWOnlineServicesGameInstanceSubsystem.GetLocalUserID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UIWOnlineServicesGameInstanceSubsystem::GetLocalUserID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IWOnlineServicesGameInstanceSubsystem", "GetLocalUserID");

	Params::IWOnlineServicesGameInstanceSubsystem_GetLocalUserID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.IWOnlineServicesGameInstanceSubsystem.OnLoginSucceeded
// (Final, Native, Private)

void UIWOnlineServicesGameInstanceSubsystem::OnLoginSucceeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IWOnlineServicesGameInstanceSubsystem", "OnLoginSucceeded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function IWOnlineServices.QualityOfServiceOnlineServiceHandler.GetRegionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UQualityOfServiceOnlineServiceHandler::GetRegionName(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("QualityOfServiceOnlineServiceHandler", "GetRegionName");

	Params::QualityOfServiceOnlineServiceHandler_GetRegionName Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.ServerAuthOnlineServiceHandler.GetServerLoginState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EServerAuthLoginState                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EServerAuthLoginState UServerAuthOnlineServiceHandler::GetServerLoginState(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ServerAuthOnlineServiceHandler", "GetServerLoginState");

	Params::ServerAuthOnlineServiceHandler_GetServerLoginState Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.SessionOnlineServiceHandler.K2_GetMatchmakingState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EMatchmakingState                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMatchmakingState USessionOnlineServiceHandler::K2_GetMatchmakingState(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SessionOnlineServiceHandler", "K2_GetMatchmakingState");

	Params::SessionOnlineServiceHandler_K2_GetMatchmakingState Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.SessionOnlineServiceHandler.K2_IsMatchmaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USessionOnlineServiceHandler::K2_IsMatchmaking(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SessionOnlineServiceHandler", "K2_IsMatchmaking");

	Params::SessionOnlineServiceHandler_K2_IsMatchmaking Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function IWOnlineServices.SessionOnlineServiceHandler.K2_StartMatchmaking
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMatchmakingSettings             InSettings                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USessionOnlineServiceHandler::K2_StartMatchmaking(const struct FMatchmakingSettings& InSettings, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SessionOnlineServiceHandler", "K2_StartMatchmaking");

	Params::SessionOnlineServiceHandler_K2_StartMatchmaking Parms{};

	Parms.InSettings = std::move(InSettings);
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

