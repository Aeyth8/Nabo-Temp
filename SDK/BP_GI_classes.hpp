#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonGame_structs.hpp"
#include "FMatchSettings_structs.hpp"
#include "JP_classes.hpp"
#include "CommonUser_structs.hpp"
#include "NetCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GI.BP_GI_C
// 0x0080 (0x0268 - 0x01E8)
class UBP_GI_C final : public UGameInstanceJP
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFMatchSettings                        CurrentMatchSettings;                              // 0x01F0(0x0028)(Edit, BlueprintVisible, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFindMatchComplete;                               // 0x0218(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                        MenuMusic;                                         // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MenuHostGameSound;                                 // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        DefaultMenuButtonSound;                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnServerListRefreshed;                             // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ComingBackFromMatch;                               // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAuthenticationInitialization_RecoverMatch* _RecoverMatch_Step;                                // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LobbyMusic;                                        // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AfterPush_5782B2AF41B61B5563F189BB289E838B(class UCommonActivatableWidget* UserWidget);
	void Audio_Play_Default_Menu_Button();
	void Audio_Play_Start_Server();
	void BeforePush_5782B2AF41B61B5563F189BB289E838B(class UCommonActivatableWidget* UserWidget);
	void CleanUpSessions();
	class UCommonSession_HostSessionRequest* Create_Host_Request(const class FString& GameModeNameForAdvertisement, ECommonSessionOnlineMode OnlineMode, const struct FPrimaryAssetId& MapID, int32 MaxPlayerCount, bool UseLobbies);
	void DisplayOkDialog(const class FText& Header, const class FText& Body);
	void ExecuteUbergraph_BP_GI(int32 EntryPoint);
	void FindMatch();
	struct FPrimaryAssetId GetLobbyMapIDFromMatchSettings();
	void GetMaxPlayersFromMatchSettings(int32* MaxPlayers);
	struct FPrimaryAssetId GetNextMapIDFromMatchSettings();
	ECommonSessionOnlineMode GetOnlineModeFromMatchSettings();
	void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
	void HandleTravelError(ETravelFailure FailureType);
	void HostMatch();
	void Initialize_User();
	void K2_ReconnectToGameSession(class UAuthenticationInitialization_RecoverMatch* RecoverMatch);
	void LoadingScreenHidden(bool StartMenuMusic);
	void Login();
	void OnFindMatchComplete__DelegateSignature(bool bSuccessful, TArray<struct FBlueprintSessionResult>& Results);
	void OnInitializationComplete_0AC8EF194D05C24414C455A2CA0BDB3F(const class UCommonUserInfo* UserInfo, bool bSuccess, const class FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
	void OnInitializationComplete_174F62644D6DAE0D9BC844AF89292AF9(const class UCommonUserInfo* UserInfo, bool bSuccess, const class FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
	void OnInitializationComplete_E487B827443BA737589E82BDA14ED819(const class UCommonUserInfo* UserInfo, bool bSuccess, const class FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
	void OnResult_2BB558234A200BF926E3408D16A17064(ECommonMessagingResult Result);
	void OnServerListRefreshed__DelegateSignature(class UCommonSession_SearchSessionRequest* CompletedSearchRequest);
	void OnSessionSearchFinished(bool bSucceeded, const class FText& ErrorMessage);
	void Pause_Menu_Music();
	void Play_Lobby_Music();
	void Play_Menu_Music();
	void PrintOnLogin(class UCommonUserInfo* UserInfo, bool Success, const class FText& Error, uint8 RequestedPrivilege, uint8 OnlineContext);
	void QuickJoin();
	void RefreshServerList(ECommonSessionOnlineMode OnlineMode);
	void ResetUserState();
	void Resume_Menu_Music();
	void Return_To_Main_Menu_As_Host_Or_Client();
	void Stop_Menu_Music();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GI_C">();
	}
	static class UBP_GI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GI_C>();
	}
};
static_assert(alignof(UBP_GI_C) == 0x000008, "Wrong alignment on UBP_GI_C");
static_assert(sizeof(UBP_GI_C) == 0x000268, "Wrong size on UBP_GI_C");
static_assert(offsetof(UBP_GI_C, UberGraphFrame) == 0x0001E8, "Member 'UBP_GI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, CurrentMatchSettings) == 0x0001F0, "Member 'UBP_GI_C::CurrentMatchSettings' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, OnFindMatchComplete) == 0x000218, "Member 'UBP_GI_C::OnFindMatchComplete' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, MenuMusic) == 0x000228, "Member 'UBP_GI_C::MenuMusic' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, MenuHostGameSound) == 0x000230, "Member 'UBP_GI_C::MenuHostGameSound' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, DefaultMenuButtonSound) == 0x000238, "Member 'UBP_GI_C::DefaultMenuButtonSound' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, OnServerListRefreshed) == 0x000240, "Member 'UBP_GI_C::OnServerListRefreshed' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, ComingBackFromMatch) == 0x000250, "Member 'UBP_GI_C::ComingBackFromMatch' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, _RecoverMatch_Step) == 0x000258, "Member 'UBP_GI_C::_RecoverMatch_Step' has a wrong offset!");
static_assert(offsetof(UBP_GI_C, LobbyMusic) == 0x000260, "Member 'UBP_GI_C::LobbyMusic' has a wrong offset!");

}

