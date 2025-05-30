#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayFabGSDK

#include "Basic.hpp"

#include "PlayFabGSDK_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PlayFabGSDK.GSDKUtils.GetBuildId
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetBuildId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetBuildId) == 0x000008, "Wrong alignment on GSDKUtils_GetBuildId");
static_assert(sizeof(GSDKUtils_GetBuildId) == 0x000010, "Wrong size on GSDKUtils_GetBuildId");
static_assert(offsetof(GSDKUtils_GetBuildId, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetBuildId::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetGameServerConnectionInfo
// 0x0020 (0x0020 - 0x0000)
struct GSDKUtils_GetGameServerConnectionInfo final
{
public:
	struct FGameServerConnectionInfo              ReturnValue;                                       // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetGameServerConnectionInfo) == 0x000008, "Wrong alignment on GSDKUtils_GetGameServerConnectionInfo");
static_assert(sizeof(GSDKUtils_GetGameServerConnectionInfo) == 0x000020, "Wrong size on GSDKUtils_GetGameServerConnectionInfo");
static_assert(offsetof(GSDKUtils_GetGameServerConnectionInfo, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetGameServerConnectionInfo::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetInitialPlayers
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetInitialPlayers final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetInitialPlayers) == 0x000008, "Wrong alignment on GSDKUtils_GetInitialPlayers");
static_assert(sizeof(GSDKUtils_GetInitialPlayers) == 0x000010, "Wrong size on GSDKUtils_GetInitialPlayers");
static_assert(offsetof(GSDKUtils_GetInitialPlayers, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetInitialPlayers::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetLogsDirectory
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetLogsDirectory final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetLogsDirectory) == 0x000008, "Wrong alignment on GSDKUtils_GetLogsDirectory");
static_assert(sizeof(GSDKUtils_GetLogsDirectory) == 0x000010, "Wrong size on GSDKUtils_GetLogsDirectory");
static_assert(offsetof(GSDKUtils_GetLogsDirectory, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetLogsDirectory::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetMatchId
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetMatchId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetMatchId) == 0x000008, "Wrong alignment on GSDKUtils_GetMatchId");
static_assert(sizeof(GSDKUtils_GetMatchId) == 0x000010, "Wrong size on GSDKUtils_GetMatchId");
static_assert(offsetof(GSDKUtils_GetMatchId, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetMatchId::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetMatchSessionCookie
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetMatchSessionCookie final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetMatchSessionCookie) == 0x000008, "Wrong alignment on GSDKUtils_GetMatchSessionCookie");
static_assert(sizeof(GSDKUtils_GetMatchSessionCookie) == 0x000010, "Wrong size on GSDKUtils_GetMatchSessionCookie");
static_assert(offsetof(GSDKUtils_GetMatchSessionCookie, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetMatchSessionCookie::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetMetaDataValue
// 0x0020 (0x0020 - 0x0000)
struct GSDKUtils_GetMetaDataValue final
{
public:
	class FString                                 MetaDataName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetMetaDataValue) == 0x000008, "Wrong alignment on GSDKUtils_GetMetaDataValue");
static_assert(sizeof(GSDKUtils_GetMetaDataValue) == 0x000020, "Wrong size on GSDKUtils_GetMetaDataValue");
static_assert(offsetof(GSDKUtils_GetMetaDataValue, MetaDataName) == 0x000000, "Member 'GSDKUtils_GetMetaDataValue::MetaDataName' has a wrong offset!");
static_assert(offsetof(GSDKUtils_GetMetaDataValue, ReturnValue) == 0x000010, "Member 'GSDKUtils_GetMetaDataValue::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetRegionName
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetRegionName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetRegionName) == 0x000008, "Wrong alignment on GSDKUtils_GetRegionName");
static_assert(sizeof(GSDKUtils_GetRegionName) == 0x000010, "Wrong size on GSDKUtils_GetRegionName");
static_assert(offsetof(GSDKUtils_GetRegionName, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetRegionName::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetServerId
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetServerId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetServerId) == 0x000008, "Wrong alignment on GSDKUtils_GetServerId");
static_assert(sizeof(GSDKUtils_GetServerId) == 0x000010, "Wrong size on GSDKUtils_GetServerId");
static_assert(offsetof(GSDKUtils_GetServerId, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetServerId::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetSharedContentDirectory
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetSharedContentDirectory final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetSharedContentDirectory) == 0x000008, "Wrong alignment on GSDKUtils_GetSharedContentDirectory");
static_assert(sizeof(GSDKUtils_GetSharedContentDirectory) == 0x000010, "Wrong size on GSDKUtils_GetSharedContentDirectory");
static_assert(offsetof(GSDKUtils_GetSharedContentDirectory, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetSharedContentDirectory::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetTitleId
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetTitleId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetTitleId) == 0x000008, "Wrong alignment on GSDKUtils_GetTitleId");
static_assert(sizeof(GSDKUtils_GetTitleId) == 0x000010, "Wrong size on GSDKUtils_GetTitleId");
static_assert(offsetof(GSDKUtils_GetTitleId, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetTitleId::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.GetVMId
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_GetVMId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_GetVMId) == 0x000008, "Wrong alignment on GSDKUtils_GetVMId");
static_assert(sizeof(GSDKUtils_GetVMId) == 0x000010, "Wrong size on GSDKUtils_GetVMId");
static_assert(offsetof(GSDKUtils_GetVMId, ReturnValue) == 0x000000, "Member 'GSDKUtils_GetVMId::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKHealthCheckDelegate
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKHealthCheckDelegate final
{
public:
	TDelegate<void()>                             OnGSDKHealthCheckDelegate;                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKHealthCheckDelegate) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKHealthCheckDelegate");
static_assert(sizeof(GSDKUtils_RegisterGSDKHealthCheckDelegate) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKHealthCheckDelegate");
static_assert(offsetof(GSDKUtils_RegisterGSDKHealthCheckDelegate, OnGSDKHealthCheckDelegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKHealthCheckDelegate::OnGSDKHealthCheckDelegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceDelegate
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKMaintenanceDelegate final
{
public:
	TDelegate<void(struct FDateTime& MaintenanceTime)> OnGSDKMaintenanceDelegate;                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKMaintenanceDelegate) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKMaintenanceDelegate");
static_assert(sizeof(GSDKUtils_RegisterGSDKMaintenanceDelegate) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKMaintenanceDelegate");
static_assert(offsetof(GSDKUtils_RegisterGSDKMaintenanceDelegate, OnGSDKMaintenanceDelegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKMaintenanceDelegate::OnGSDKMaintenanceDelegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceV2Delegate
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKMaintenanceV2Delegate final
{
public:
	TDelegate<void(struct FMaintenanceSchedule& MaintenanceSchedule)> OnGSDKMaintenanceV2Delegate;                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKMaintenanceV2Delegate) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKMaintenanceV2Delegate");
static_assert(sizeof(GSDKUtils_RegisterGSDKMaintenanceV2Delegate) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKMaintenanceV2Delegate");
static_assert(offsetof(GSDKUtils_RegisterGSDKMaintenanceV2Delegate, OnGSDKMaintenanceV2Delegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKMaintenanceV2Delegate::OnGSDKMaintenanceV2Delegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKReadyForPlayers
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKReadyForPlayers final
{
public:
	TDelegate<void()>                             OnGSDKReadyForPlayersDelegate;                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKReadyForPlayers) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKReadyForPlayers");
static_assert(sizeof(GSDKUtils_RegisterGSDKReadyForPlayers) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKReadyForPlayers");
static_assert(offsetof(GSDKUtils_RegisterGSDKReadyForPlayers, OnGSDKReadyForPlayersDelegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKReadyForPlayers::OnGSDKReadyForPlayersDelegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKServerActiveDelegate
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKServerActiveDelegate final
{
public:
	TDelegate<void()>                             OnGSDKServerActiveDelegate;                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKServerActiveDelegate) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKServerActiveDelegate");
static_assert(sizeof(GSDKUtils_RegisterGSDKServerActiveDelegate) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKServerActiveDelegate");
static_assert(offsetof(GSDKUtils_RegisterGSDKServerActiveDelegate, OnGSDKServerActiveDelegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKServerActiveDelegate::OnGSDKServerActiveDelegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.RegisterGSDKShutdownDelegate
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_RegisterGSDKShutdownDelegate final
{
public:
	TDelegate<void()>                             OnGSDKShutdownDelegate;                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_RegisterGSDKShutdownDelegate) == 0x000004, "Wrong alignment on GSDKUtils_RegisterGSDKShutdownDelegate");
static_assert(sizeof(GSDKUtils_RegisterGSDKShutdownDelegate) == 0x000010, "Wrong size on GSDKUtils_RegisterGSDKShutdownDelegate");
static_assert(offsetof(GSDKUtils_RegisterGSDKShutdownDelegate, OnGSDKShutdownDelegate) == 0x000000, "Member 'GSDKUtils_RegisterGSDKShutdownDelegate::OnGSDKShutdownDelegate' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.SetDefaultServerHostPort
// 0x0001 (0x0001 - 0x0000)
struct GSDKUtils_SetDefaultServerHostPort final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_SetDefaultServerHostPort) == 0x000001, "Wrong alignment on GSDKUtils_SetDefaultServerHostPort");
static_assert(sizeof(GSDKUtils_SetDefaultServerHostPort) == 0x000001, "Wrong size on GSDKUtils_SetDefaultServerHostPort");
static_assert(offsetof(GSDKUtils_SetDefaultServerHostPort, ReturnValue) == 0x000000, "Member 'GSDKUtils_SetDefaultServerHostPort::ReturnValue' has a wrong offset!");

// Function PlayFabGSDK.GSDKUtils.UpdateConnectedPlayers
// 0x0010 (0x0010 - 0x0000)
struct GSDKUtils_UpdateConnectedPlayers final
{
public:
	TArray<struct FConnectedPlayerGSDK>           CurrentlyConnectedPlayers;                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDKUtils_UpdateConnectedPlayers) == 0x000008, "Wrong alignment on GSDKUtils_UpdateConnectedPlayers");
static_assert(sizeof(GSDKUtils_UpdateConnectedPlayers) == 0x000010, "Wrong size on GSDKUtils_UpdateConnectedPlayers");
static_assert(offsetof(GSDKUtils_UpdateConnectedPlayers, CurrentlyConnectedPlayers) == 0x000000, "Member 'GSDKUtils_UpdateConnectedPlayers::CurrentlyConnectedPlayers' has a wrong offset!");

}

