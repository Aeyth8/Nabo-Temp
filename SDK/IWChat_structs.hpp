#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWChat

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum IWChat.EChatMessageType
// NumValues: 0x0006
enum class EChatMessageType : uint8
{
	ALL                                      = 0,
	TEAM                                     = 1,
	SYSTEM                                   = 2,
	PING                                     = 3,
	MISC                                     = 4,
	EChatMessageType_MAX                     = 5,
};

// ScriptStruct IWChat.ChatMessage
// 0x0038 (0x0038 - 0x0000)
struct FChatMessage final
{
public:
	class FText                                   User;                                              // 0x0000(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	class APlayerState*                           PlayerState;                                       // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Text;                                              // 0x0018(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDateTime                              Timestamp;                                         // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EChatMessageType                              Type;                                              // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         TeamId;                                            // 0x0031(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChatMessage) == 0x000008, "Wrong alignment on FChatMessage");
static_assert(sizeof(FChatMessage) == 0x000038, "Wrong size on FChatMessage");
static_assert(offsetof(FChatMessage, User) == 0x000000, "Member 'FChatMessage::User' has a wrong offset!");
static_assert(offsetof(FChatMessage, PlayerState) == 0x000010, "Member 'FChatMessage::PlayerState' has a wrong offset!");
static_assert(offsetof(FChatMessage, Text) == 0x000018, "Member 'FChatMessage::Text' has a wrong offset!");
static_assert(offsetof(FChatMessage, Timestamp) == 0x000028, "Member 'FChatMessage::Timestamp' has a wrong offset!");
static_assert(offsetof(FChatMessage, Type) == 0x000030, "Member 'FChatMessage::Type' has a wrong offset!");
static_assert(offsetof(FChatMessage, TeamId) == 0x000031, "Member 'FChatMessage::TeamId' has a wrong offset!");

// ScriptStruct IWChat.ChatMessageWidgetViewModel
// 0x0028 (0x0028 - 0x0000)
struct FChatMessageWidgetViewModel final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Name;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	EChatMessageType                              Type;                                              // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChatMessageWidgetViewModel) == 0x000008, "Wrong alignment on FChatMessageWidgetViewModel");
static_assert(sizeof(FChatMessageWidgetViewModel) == 0x000028, "Wrong size on FChatMessageWidgetViewModel");
static_assert(offsetof(FChatMessageWidgetViewModel, Text) == 0x000000, "Member 'FChatMessageWidgetViewModel::Text' has a wrong offset!");
static_assert(offsetof(FChatMessageWidgetViewModel, Name) == 0x000010, "Member 'FChatMessageWidgetViewModel::Name' has a wrong offset!");
static_assert(offsetof(FChatMessageWidgetViewModel, Type) == 0x000020, "Member 'FChatMessageWidgetViewModel::Type' has a wrong offset!");

}

