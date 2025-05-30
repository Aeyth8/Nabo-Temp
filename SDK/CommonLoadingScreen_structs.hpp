#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonLoadingScreen

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct CommonLoadingScreen.LoadingScreenLevelSettings
// 0x0068 (0x0068 - 0x0000)
struct FLoadingScreenLevelSettings final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>              Sound;                                             // 0x0028(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StopMenuMusic;                                     // 0x0050(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0058(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLoadingScreenLevelSettings) == 0x000008, "Wrong alignment on FLoadingScreenLevelSettings");
static_assert(sizeof(FLoadingScreenLevelSettings) == 0x000068, "Wrong size on FLoadingScreenLevelSettings");
static_assert(offsetof(FLoadingScreenLevelSettings, Texture) == 0x000000, "Member 'FLoadingScreenLevelSettings::Texture' has a wrong offset!");
static_assert(offsetof(FLoadingScreenLevelSettings, Sound) == 0x000028, "Member 'FLoadingScreenLevelSettings::Sound' has a wrong offset!");
static_assert(offsetof(FLoadingScreenLevelSettings, StopMenuMusic) == 0x000050, "Member 'FLoadingScreenLevelSettings::StopMenuMusic' has a wrong offset!");
static_assert(offsetof(FLoadingScreenLevelSettings, Name) == 0x000058, "Member 'FLoadingScreenLevelSettings::Name' has a wrong offset!");

}

