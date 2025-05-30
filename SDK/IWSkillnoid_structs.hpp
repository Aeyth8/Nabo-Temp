#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWSkillnoid

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct IWSkillnoid.SkillnoidCollectedDto
// 0x0018 (0x0018 - 0x0000)
struct FSkillnoidCollectedDto final
{
public:
	class FString                                 CorrelationId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              CollectedOn;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidCollectedDto) == 0x000008, "Wrong alignment on FSkillnoidCollectedDto");
static_assert(sizeof(FSkillnoidCollectedDto) == 0x000018, "Wrong size on FSkillnoidCollectedDto");
static_assert(offsetof(FSkillnoidCollectedDto, CorrelationId) == 0x000000, "Member 'FSkillnoidCollectedDto::CorrelationId' has a wrong offset!");
static_assert(offsetof(FSkillnoidCollectedDto, CollectedOn) == 0x000010, "Member 'FSkillnoidCollectedDto::CollectedOn' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidQrHeader
// 0x0040 (0x0040 - 0x0000)
struct FSkillnoidQrHeader final
{
public:
	class FString                                 ConnectionToken;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserCode;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         TokenTTL;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         PollInterval;                                      // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppLink;                                           // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidQrHeader) == 0x000008, "Wrong alignment on FSkillnoidQrHeader");
static_assert(sizeof(FSkillnoidQrHeader) == 0x000040, "Wrong size on FSkillnoidQrHeader");
static_assert(offsetof(FSkillnoidQrHeader, ConnectionToken) == 0x000000, "Member 'FSkillnoidQrHeader::ConnectionToken' has a wrong offset!");
static_assert(offsetof(FSkillnoidQrHeader, UserCode) == 0x000010, "Member 'FSkillnoidQrHeader::UserCode' has a wrong offset!");
static_assert(offsetof(FSkillnoidQrHeader, TokenTTL) == 0x000020, "Member 'FSkillnoidQrHeader::TokenTTL' has a wrong offset!");
static_assert(offsetof(FSkillnoidQrHeader, PollInterval) == 0x000028, "Member 'FSkillnoidQrHeader::PollInterval' has a wrong offset!");
static_assert(offsetof(FSkillnoidQrHeader, AppLink) == 0x000030, "Member 'FSkillnoidQrHeader::AppLink' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidTokenProblem
// 0x0098 (0x0098 - 0x0000)
struct FSkillnoidTokenProblem final
{
public:
	class FString                                 EntityName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ErrorKey;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Title;                                             // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Status;                                            // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransactionId;                                     // 0x0058(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NotFoundId;                                        // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Message;                                           // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Params;                                            // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidTokenProblem) == 0x000008, "Wrong alignment on FSkillnoidTokenProblem");
static_assert(sizeof(FSkillnoidTokenProblem) == 0x000098, "Wrong size on FSkillnoidTokenProblem");
static_assert(offsetof(FSkillnoidTokenProblem, EntityName) == 0x000000, "Member 'FSkillnoidTokenProblem::EntityName' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, ErrorKey) == 0x000010, "Member 'FSkillnoidTokenProblem::ErrorKey' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, ID) == 0x000020, "Member 'FSkillnoidTokenProblem::ID' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, Type) == 0x000030, "Member 'FSkillnoidTokenProblem::Type' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, Title) == 0x000040, "Member 'FSkillnoidTokenProblem::Title' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, Status) == 0x000050, "Member 'FSkillnoidTokenProblem::Status' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, TransactionId) == 0x000058, "Member 'FSkillnoidTokenProblem::TransactionId' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, NotFoundId) == 0x000068, "Member 'FSkillnoidTokenProblem::NotFoundId' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, Message) == 0x000078, "Member 'FSkillnoidTokenProblem::Message' has a wrong offset!");
static_assert(offsetof(FSkillnoidTokenProblem, Params) == 0x000088, "Member 'FSkillnoidTokenProblem::Params' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidConnectedAccountDto
// 0x0030 (0x0030 - 0x0000)
struct FSkillnoidConnectedAccountDto final
{
public:
	class FString                                 Token;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Username;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Nickname;                                          // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidConnectedAccountDto) == 0x000008, "Wrong alignment on FSkillnoidConnectedAccountDto");
static_assert(sizeof(FSkillnoidConnectedAccountDto) == 0x000030, "Wrong size on FSkillnoidConnectedAccountDto");
static_assert(offsetof(FSkillnoidConnectedAccountDto, Token) == 0x000000, "Member 'FSkillnoidConnectedAccountDto::Token' has a wrong offset!");
static_assert(offsetof(FSkillnoidConnectedAccountDto, Username) == 0x000010, "Member 'FSkillnoidConnectedAccountDto::Username' has a wrong offset!");
static_assert(offsetof(FSkillnoidConnectedAccountDto, Nickname) == 0x000020, "Member 'FSkillnoidConnectedAccountDto::Nickname' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidProblem
// 0x0048 (0x0048 - 0x0000)
struct FSkillnoidProblem final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Title;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Status;                                            // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Detail;                                            // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Instance;                                          // 0x0038(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidProblem) == 0x000008, "Wrong alignment on FSkillnoidProblem");
static_assert(sizeof(FSkillnoidProblem) == 0x000048, "Wrong size on FSkillnoidProblem");
static_assert(offsetof(FSkillnoidProblem, Type) == 0x000000, "Member 'FSkillnoidProblem::Type' has a wrong offset!");
static_assert(offsetof(FSkillnoidProblem, Title) == 0x000010, "Member 'FSkillnoidProblem::Title' has a wrong offset!");
static_assert(offsetof(FSkillnoidProblem, Status) == 0x000020, "Member 'FSkillnoidProblem::Status' has a wrong offset!");
static_assert(offsetof(FSkillnoidProblem, Detail) == 0x000028, "Member 'FSkillnoidProblem::Detail' has a wrong offset!");
static_assert(offsetof(FSkillnoidProblem, Instance) == 0x000038, "Member 'FSkillnoidProblem::Instance' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidAchievementDto
// 0x0028 (0x0028 - 0x0000)
struct FSkillnoidAchievementDto final
{
public:
	class FString                                 UUID;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RewardUuid;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              AchievedOn;                                        // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidAchievementDto) == 0x000008, "Wrong alignment on FSkillnoidAchievementDto");
static_assert(sizeof(FSkillnoidAchievementDto) == 0x000028, "Wrong size on FSkillnoidAchievementDto");
static_assert(offsetof(FSkillnoidAchievementDto, UUID) == 0x000000, "Member 'FSkillnoidAchievementDto::UUID' has a wrong offset!");
static_assert(offsetof(FSkillnoidAchievementDto, RewardUuid) == 0x000010, "Member 'FSkillnoidAchievementDto::RewardUuid' has a wrong offset!");
static_assert(offsetof(FSkillnoidAchievementDto, AchievedOn) == 0x000020, "Member 'FSkillnoidAchievementDto::AchievedOn' has a wrong offset!");

// ScriptStruct IWSkillnoid.SkillnoidQrRequestDto
// 0x0010 (0x0010 - 0x0000)
struct FSkillnoidQrRequestDto final
{
public:
	class FString                                 CurrentDirectToken;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkillnoidQrRequestDto) == 0x000008, "Wrong alignment on FSkillnoidQrRequestDto");
static_assert(sizeof(FSkillnoidQrRequestDto) == 0x000010, "Wrong size on FSkillnoidQrRequestDto");
static_assert(offsetof(FSkillnoidQrRequestDto, CurrentDirectToken) == 0x000000, "Member 'FSkillnoidQrRequestDto::CurrentDirectToken' has a wrong offset!");

}

