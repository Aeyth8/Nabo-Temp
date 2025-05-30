#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ClosingCredits_Rolling

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_LogoFadeInOut_structs.hpp"
#include "S_Keys_structs.hpp"
#include "S_Music_structs.hpp"
#include "E_InputMode_structs.hpp"
#include "SlateCore_structs.hpp"
#include "S_VideoPlayer_structs.hpp"
#include "E_Skip_structs.hpp"
#include "E_MediaType_structs.hpp"
#include "S_Video_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_Slides_structs.hpp"
#include "E_SectionLocation_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ClosingCredits_Rolling.UI_ClosingCredits_Rolling_C
// 0x0240 (0x0520 - 0x02E0)
class UUI_ClosingCredits_Rolling_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LogoFadeInOut;                                     // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOutSlide;                                    // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowHideSkip;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackBackground;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             CreditsScroll;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemsContainer;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Logo;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkipPanel;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SkipProgressBar;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VideoSlideBackground;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Credits_Time_Duration__seconds_;                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Starting_Roll_Delay;                               // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Space_Between_Roles;                               // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Start_with_Fade_in_Effect;                         // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Fade_In_Duration__seconds_;                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_LogoFadeInOut                       Show_Logo_First;                                   // 0x0388(0x0038)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Fade_Out_After_Finished;                           // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Fade_Out_Duration__seconds_;                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Fade_Out_Delay_After_Finished__seconds_;           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_InputMode                                   Input_Mode;                                        // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSkippable;                                       // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_Skip                                        Skip_Action;                                       // 0x03DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3DB[0x5];                                      // 0x03DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               VideoMaterialReference;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_VideoPlayer                         MediaPlayer;                                       // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Scroll_Speed_Multiplier;                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound_2D_Reference;                                // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Space_Between_Role_Title_and_Section;              // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Space_Between_Sections;                            // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Space_Between_Section_and_Names;                   // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        SkipTime;                                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Skipping;                                          // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Skip_Press_and_Hold_Duration__seconds_;            // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Fast_Forward_Speed_Multiplier;                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_Keys                                Keys_to_Skip__or_fast_forward_;                    // 0x0440(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_Music                               Music;                                             // 0x0470(0x0018)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_MediaType                                   Presentation_Type;                                 // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_489[0x7];                                      // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_Video                               Video;                                             // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Solid_Background_Color_and_Opacity;                // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_Slides                              Images_Slides;                                     // 0x04B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CurrentSlide;                                      // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SlideTimerHandle;                                  // 0x04D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Space_Between_Lines;                               // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Freeze_in_the_Last_Item;                           // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EHorizontalAlignment                          Credits_Horizontal_Alignment;                      // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4E2[0x2];                                      // 0x04E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                Credits_Padding;                                   // 0x04E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	E_SectionLocation                             Section_Title_Position;                            // 0x04F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4F5[0x3];                                      // 0x04F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Credits_Sequence_Data_Table;                       // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Open_Level_when_Finished;                          // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_501[0x3];                                      // 0x0501(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Level_To_Open;                                     // 0x0504(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_InputMode                                   Input_Mode_After_Credits;                          // 0x050C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanSkip;                                           // 0x050D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Role_Box_Alignment;                                // 0x050E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EHorizontalAlignment                          Role_Title_Alignment;                              // 0x050F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EHorizontalAlignment                          Section_Alignment;                                 // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EHorizontalAlignment                          Section_Without_Title_Alignment;                   // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EHorizontalAlignment                          Names_Alignment;                                   // 0x0512(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_513[0x5];                                      // 0x0513(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Freeze_Last_Item_Bottom_Spacer;                    // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Add_Vertical_Spacer(double Size);
	void CollectDataTableSequence();
	void Construct();
	void CreditsEnd();
	void Destruct();
	void ExecuteUbergraph_UI_ClosingCredits_Rolling(int32 EntryPoint);
	float FillProgressBar();
	void HorizontalAlignAsVerticalBoxSlot(class UPanelWidget* Vertical_Box, EHorizontalAlignment InHorizontalAlignment);
	void InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void MediaAndBackground();
	void Other_Settings();
	void PreConstruct(bool IsDesignTime);
	void RollCredits();
	void SetAlignment(class UVerticalBoxSlot* Vertical_Box_Slot, class UUI_Role_C* UI_Role);
	void SetGameInputMode(E_InputMode Input_Mode_0);
	void Slideshow();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateSlide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ClosingCredits_Rolling_C">();
	}
	static class UUI_ClosingCredits_Rolling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ClosingCredits_Rolling_C>();
	}
};
static_assert(alignof(UUI_ClosingCredits_Rolling_C) == 0x000008, "Wrong alignment on UUI_ClosingCredits_Rolling_C");
static_assert(sizeof(UUI_ClosingCredits_Rolling_C) == 0x000520, "Wrong size on UUI_ClosingCredits_Rolling_C");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, UberGraphFrame) == 0x0002E0, "Member 'UUI_ClosingCredits_Rolling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, LogoFadeInOut) == 0x0002E8, "Member 'UUI_ClosingCredits_Rolling_C::LogoFadeInOut' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, FadeInOutSlide) == 0x0002F0, "Member 'UUI_ClosingCredits_Rolling_C::FadeInOutSlide' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, ShowHideSkip) == 0x0002F8, "Member 'UUI_ClosingCredits_Rolling_C::ShowHideSkip' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, FadeIn) == 0x000300, "Member 'UUI_ClosingCredits_Rolling_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, FadeOut) == 0x000308, "Member 'UUI_ClosingCredits_Rolling_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Background) == 0x000310, "Member 'UUI_ClosingCredits_Rolling_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, BlackBackground) == 0x000318, "Member 'UUI_ClosingCredits_Rolling_C::BlackBackground' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, CreditsScroll) == 0x000320, "Member 'UUI_ClosingCredits_Rolling_C::CreditsScroll' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, ItemsContainer) == 0x000328, "Member 'UUI_ClosingCredits_Rolling_C::ItemsContainer' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Logo) == 0x000330, "Member 'UUI_ClosingCredits_Rolling_C::Logo' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, RetainerBox) == 0x000338, "Member 'UUI_ClosingCredits_Rolling_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, SkipPanel) == 0x000340, "Member 'UUI_ClosingCredits_Rolling_C::SkipPanel' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, SkipProgressBar) == 0x000348, "Member 'UUI_ClosingCredits_Rolling_C::SkipProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, VideoSlideBackground) == 0x000350, "Member 'UUI_ClosingCredits_Rolling_C::VideoSlideBackground' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Credits_Time_Duration__seconds_) == 0x000358, "Member 'UUI_ClosingCredits_Rolling_C::Credits_Time_Duration__seconds_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Starting_Roll_Delay) == 0x000360, "Member 'UUI_ClosingCredits_Rolling_C::Starting_Roll_Delay' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Space_Between_Roles) == 0x000368, "Member 'UUI_ClosingCredits_Rolling_C::Space_Between_Roles' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Timer) == 0x000370, "Member 'UUI_ClosingCredits_Rolling_C::Timer' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Start_with_Fade_in_Effect) == 0x000378, "Member 'UUI_ClosingCredits_Rolling_C::Start_with_Fade_in_Effect' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Fade_In_Duration__seconds_) == 0x000380, "Member 'UUI_ClosingCredits_Rolling_C::Fade_In_Duration__seconds_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Show_Logo_First) == 0x000388, "Member 'UUI_ClosingCredits_Rolling_C::Show_Logo_First' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Fade_Out_After_Finished) == 0x0003C0, "Member 'UUI_ClosingCredits_Rolling_C::Fade_Out_After_Finished' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Fade_Out_Duration__seconds_) == 0x0003C8, "Member 'UUI_ClosingCredits_Rolling_C::Fade_Out_Duration__seconds_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Fade_Out_Delay_After_Finished__seconds_) == 0x0003D0, "Member 'UUI_ClosingCredits_Rolling_C::Fade_Out_Delay_After_Finished__seconds_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Input_Mode) == 0x0003D8, "Member 'UUI_ClosingCredits_Rolling_C::Input_Mode' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, IsSkippable) == 0x0003D9, "Member 'UUI_ClosingCredits_Rolling_C::IsSkippable' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Skip_Action) == 0x0003DA, "Member 'UUI_ClosingCredits_Rolling_C::Skip_Action' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, VideoMaterialReference) == 0x0003E0, "Member 'UUI_ClosingCredits_Rolling_C::VideoMaterialReference' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, MediaPlayer) == 0x0003E8, "Member 'UUI_ClosingCredits_Rolling_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Scroll_Speed_Multiplier) == 0x0003F8, "Member 'UUI_ClosingCredits_Rolling_C::Scroll_Speed_Multiplier' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Sound_2D_Reference) == 0x000400, "Member 'UUI_ClosingCredits_Rolling_C::Sound_2D_Reference' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Space_Between_Role_Title_and_Section) == 0x000408, "Member 'UUI_ClosingCredits_Rolling_C::Space_Between_Role_Title_and_Section' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Space_Between_Sections) == 0x000410, "Member 'UUI_ClosingCredits_Rolling_C::Space_Between_Sections' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Space_Between_Section_and_Names) == 0x000418, "Member 'UUI_ClosingCredits_Rolling_C::Space_Between_Section_and_Names' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, SkipTime) == 0x000420, "Member 'UUI_ClosingCredits_Rolling_C::SkipTime' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Skipping) == 0x000428, "Member 'UUI_ClosingCredits_Rolling_C::Skipping' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Skip_Press_and_Hold_Duration__seconds_) == 0x000430, "Member 'UUI_ClosingCredits_Rolling_C::Skip_Press_and_Hold_Duration__seconds_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Fast_Forward_Speed_Multiplier) == 0x000438, "Member 'UUI_ClosingCredits_Rolling_C::Fast_Forward_Speed_Multiplier' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Keys_to_Skip__or_fast_forward_) == 0x000440, "Member 'UUI_ClosingCredits_Rolling_C::Keys_to_Skip__or_fast_forward_' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Music) == 0x000470, "Member 'UUI_ClosingCredits_Rolling_C::Music' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Presentation_Type) == 0x000488, "Member 'UUI_ClosingCredits_Rolling_C::Presentation_Type' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Video) == 0x000490, "Member 'UUI_ClosingCredits_Rolling_C::Video' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Solid_Background_Color_and_Opacity) == 0x0004A0, "Member 'UUI_ClosingCredits_Rolling_C::Solid_Background_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Images_Slides) == 0x0004B0, "Member 'UUI_ClosingCredits_Rolling_C::Images_Slides' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, CurrentSlide) == 0x0004C8, "Member 'UUI_ClosingCredits_Rolling_C::CurrentSlide' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, SlideTimerHandle) == 0x0004D0, "Member 'UUI_ClosingCredits_Rolling_C::SlideTimerHandle' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Space_Between_Lines) == 0x0004D8, "Member 'UUI_ClosingCredits_Rolling_C::Space_Between_Lines' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Freeze_in_the_Last_Item) == 0x0004E0, "Member 'UUI_ClosingCredits_Rolling_C::Freeze_in_the_Last_Item' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Credits_Horizontal_Alignment) == 0x0004E1, "Member 'UUI_ClosingCredits_Rolling_C::Credits_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Credits_Padding) == 0x0004E4, "Member 'UUI_ClosingCredits_Rolling_C::Credits_Padding' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Section_Title_Position) == 0x0004F4, "Member 'UUI_ClosingCredits_Rolling_C::Section_Title_Position' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Credits_Sequence_Data_Table) == 0x0004F8, "Member 'UUI_ClosingCredits_Rolling_C::Credits_Sequence_Data_Table' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Open_Level_when_Finished) == 0x000500, "Member 'UUI_ClosingCredits_Rolling_C::Open_Level_when_Finished' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Level_To_Open) == 0x000504, "Member 'UUI_ClosingCredits_Rolling_C::Level_To_Open' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Input_Mode_After_Credits) == 0x00050C, "Member 'UUI_ClosingCredits_Rolling_C::Input_Mode_After_Credits' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, CanSkip) == 0x00050D, "Member 'UUI_ClosingCredits_Rolling_C::CanSkip' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Role_Box_Alignment) == 0x00050E, "Member 'UUI_ClosingCredits_Rolling_C::Role_Box_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Role_Title_Alignment) == 0x00050F, "Member 'UUI_ClosingCredits_Rolling_C::Role_Title_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Section_Alignment) == 0x000510, "Member 'UUI_ClosingCredits_Rolling_C::Section_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Section_Without_Title_Alignment) == 0x000511, "Member 'UUI_ClosingCredits_Rolling_C::Section_Without_Title_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Names_Alignment) == 0x000512, "Member 'UUI_ClosingCredits_Rolling_C::Names_Alignment' has a wrong offset!");
static_assert(offsetof(UUI_ClosingCredits_Rolling_C, Freeze_Last_Item_Bottom_Spacer) == 0x000518, "Member 'UUI_ClosingCredits_Rolling_C::Freeze_Last_Item_Bottom_Spacer' has a wrong offset!");

}

