#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ExperienceBarProfile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ExperienceBarProfile.WI_ExperienceBarProfile_C
// 0x00B8 (0x04E8 - 0x0430)
class UWI_ExperienceBarProfile_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LeveledUpAnim;                                     // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FillAnimShake;                                     // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWI_ExperienceIcon_C*                   CurrentLevel;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_211;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_ExperienceIcon_C*                   NextLevel;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBarFinalStatic;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_Avatar_C*                           WI_Avatar;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_XPBar_C*                            WI_XPBar;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AnimatedLevel;                                     // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewXP;                                             // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewLevel;                                          // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimatedXP;                                        // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OldXP;                                             // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LeveledUp;                                         // 0x049C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49D[0x3];                                      // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartBarPercentage;                                // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentBarPercentage;                              // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndBarPercentage;                                  // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldUpdateVisuals;                               // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x7];                                      // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        UpdateTimeMax;                                     // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentUpdateTime;                                 // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TickSoundHandle;                                   // 0x04D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           OverflowHandle;                                    // 0x04D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        XPSound;                                           // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AnimateBar(int32 PreviouslyGrantedXP);
	void Construct();
	void ExecuteUbergraph_WI_ExperienceBarProfile(int32 EntryPoint);
	void ForceStopUpdate();
	void GetXPGained(int32* Granted_Profile_XP);
	void InitializeValues();
	void OnBarReachedValue();
	void OnLevelUpCosmetics();
	void SetAnimationValues();
	void SetLevelRequirements();
	void SetValuesAndUpdateProgress();
	void SetXPBarValues(int32 PreviouslyGrantedXP);
	void Start_XP_Sound();
	void StartOverflowAnimation();
	void StartProgressUpdate();
	void StartSimpleAnimation();
	void Stop_XP_Sound();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateOverflow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ExperienceBarProfile_C">();
	}
	static class UWI_ExperienceBarProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ExperienceBarProfile_C>();
	}
};
static_assert(alignof(UWI_ExperienceBarProfile_C) == 0x000008, "Wrong alignment on UWI_ExperienceBarProfile_C");
static_assert(sizeof(UWI_ExperienceBarProfile_C) == 0x0004E8, "Wrong size on UWI_ExperienceBarProfile_C");
static_assert(offsetof(UWI_ExperienceBarProfile_C, UberGraphFrame) == 0x000430, "Member 'UWI_ExperienceBarProfile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, LeveledUpAnim) == 0x000438, "Member 'UWI_ExperienceBarProfile_C::LeveledUpAnim' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, FillAnimShake) == 0x000440, "Member 'UWI_ExperienceBarProfile_C::FillAnimShake' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, CurrentLevel) == 0x000448, "Member 'UWI_ExperienceBarProfile_C::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, Image) == 0x000450, "Member 'UWI_ExperienceBarProfile_C::Image' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, Image_211) == 0x000458, "Member 'UWI_ExperienceBarProfile_C::Image_211' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, NextLevel) == 0x000460, "Member 'UWI_ExperienceBarProfile_C::NextLevel' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, ProgressBar) == 0x000468, "Member 'UWI_ExperienceBarProfile_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, ProgressBarFinalStatic) == 0x000470, "Member 'UWI_ExperienceBarProfile_C::ProgressBarFinalStatic' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, WI_Avatar) == 0x000478, "Member 'UWI_ExperienceBarProfile_C::WI_Avatar' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, WI_XPBar) == 0x000480, "Member 'UWI_ExperienceBarProfile_C::WI_XPBar' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, AnimatedLevel) == 0x000488, "Member 'UWI_ExperienceBarProfile_C::AnimatedLevel' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, NewXP) == 0x00048C, "Member 'UWI_ExperienceBarProfile_C::NewXP' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, NewLevel) == 0x000490, "Member 'UWI_ExperienceBarProfile_C::NewLevel' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, AnimatedXP) == 0x000494, "Member 'UWI_ExperienceBarProfile_C::AnimatedXP' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, OldXP) == 0x000498, "Member 'UWI_ExperienceBarProfile_C::OldXP' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, LeveledUp) == 0x00049C, "Member 'UWI_ExperienceBarProfile_C::LeveledUp' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, StartBarPercentage) == 0x0004A0, "Member 'UWI_ExperienceBarProfile_C::StartBarPercentage' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, CurrentBarPercentage) == 0x0004A8, "Member 'UWI_ExperienceBarProfile_C::CurrentBarPercentage' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, EndBarPercentage) == 0x0004B0, "Member 'UWI_ExperienceBarProfile_C::EndBarPercentage' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, ShouldUpdateVisuals) == 0x0004B8, "Member 'UWI_ExperienceBarProfile_C::ShouldUpdateVisuals' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, UpdateTimeMax) == 0x0004C0, "Member 'UWI_ExperienceBarProfile_C::UpdateTimeMax' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, CurrentUpdateTime) == 0x0004C8, "Member 'UWI_ExperienceBarProfile_C::CurrentUpdateTime' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, TickSoundHandle) == 0x0004D0, "Member 'UWI_ExperienceBarProfile_C::TickSoundHandle' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, OverflowHandle) == 0x0004D8, "Member 'UWI_ExperienceBarProfile_C::OverflowHandle' has a wrong offset!");
static_assert(offsetof(UWI_ExperienceBarProfile_C, XPSound) == 0x0004E0, "Member 'UWI_ExperienceBarProfile_C::XPSound' has a wrong offset!");

}

