#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MainMenu_ServerBrowser

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUser_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "JP_structs.hpp"
#include "CommonGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MainMenu_ServerBrowser.WB_MainMenu_ServerBrowser_C
// 0x0088 (0x0368 - 0x02E0)
class UWB_MainMenu_ServerBrowser_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Button_Refresh;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ButtonWithCheckbox_C*               LANButton;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Status;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ServerEntriesList;                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Prev_IP_One;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Prev_IP_Two;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Prev_IP_Three;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Prev_IP_Four;                                      // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Prev_IP_Port;                                      // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Debug_PreviewServerEntries;                        // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddServerEntry(class UCommonSession_SearchResult* Server, class UWB_MainMenu_ServerBrowser_Entry_C** EntryWidget);
	void ApplySearchFilters(TArray<class UCommonSession_SearchResult*>& SearchResults, TArray<class UCommonSession_SearchResult*>* FilteredSearchResults);
	void BndEvt__WB_MainMenu_FindMatch_WB_Button_Join_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_MainMenu_ServerBrowser(int32 EntryPoint);
	void HandleJoinClicked(class UWB_MainMenu_ServerBrowser_Entry_C* Widget);
	void HandleJoinSessionComplete(class FName Name_0, EJPOnJoinSessionCompleteResult ResultType);
	void HandleServerListRefreshed(class UCommonSession_SearchSessionRequest* CompletedSearchRequest);
	void OnJoinSessionComplete_AA452DCF42C6BF08D7A823ADAB2FD764(class FName Name_0, EJPOnJoinSessionCompleteResult ResultType);
	void OnJoinSessionFailed();
	void OnResult_0D9F7D8F41D0CC603DBC7B9D11581857(ECommonMessagingResult Result);
	void PreConstruct(bool IsDesignTime);
	void Update_Status(bool ShowThrobber, const class FText& StatusText, bool EnableRefreshButton, bool EnableServerEntriesList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MainMenu_ServerBrowser_C">();
	}
	static class UWB_MainMenu_ServerBrowser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MainMenu_ServerBrowser_C>();
	}
};
static_assert(alignof(UWB_MainMenu_ServerBrowser_C) == 0x000008, "Wrong alignment on UWB_MainMenu_ServerBrowser_C");
static_assert(sizeof(UWB_MainMenu_ServerBrowser_C) == 0x000368, "Wrong size on UWB_MainMenu_ServerBrowser_C");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_MainMenu_ServerBrowser_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Button_Refresh) == 0x0002E8, "Member 'UWB_MainMenu_ServerBrowser_C::Button_Refresh' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, LANButton) == 0x0002F0, "Member 'UWB_MainMenu_ServerBrowser_C::LANButton' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, TextBlock_Status) == 0x0002F8, "Member 'UWB_MainMenu_ServerBrowser_C::TextBlock_Status' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Throbber) == 0x000300, "Member 'UWB_MainMenu_ServerBrowser_C::Throbber' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, VerticalBox_ServerEntriesList) == 0x000308, "Member 'UWB_MainMenu_ServerBrowser_C::VerticalBox_ServerEntriesList' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Prev_IP_One) == 0x000310, "Member 'UWB_MainMenu_ServerBrowser_C::Prev_IP_One' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Prev_IP_Two) == 0x000320, "Member 'UWB_MainMenu_ServerBrowser_C::Prev_IP_Two' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Prev_IP_Three) == 0x000330, "Member 'UWB_MainMenu_ServerBrowser_C::Prev_IP_Three' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Prev_IP_Four) == 0x000340, "Member 'UWB_MainMenu_ServerBrowser_C::Prev_IP_Four' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Prev_IP_Port) == 0x000350, "Member 'UWB_MainMenu_ServerBrowser_C::Prev_IP_Port' has a wrong offset!");
static_assert(offsetof(UWB_MainMenu_ServerBrowser_C, Debug_PreviewServerEntries) == 0x000360, "Member 'UWB_MainMenu_ServerBrowser_C::Debug_PreviewServerEntries' has a wrong offset!");

}

