#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlueprintFunctionLibraryJP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "JP_structs.hpp"
#include "E_Tools_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BlueprintFunctionLibraryJP.BlueprintFunctionLibraryJP_C
// 0x0000 (0x0028 - 0x0028)
class UBlueprintFunctionLibraryJP_C final : public UBlueprintFunctionLibrary
{
public:
	static void Add_Tutorial(class APlayerControllerJP_MatchBP_C* Owning_PlayerController, class UClass* Tutorial, class UObject* __WorldContext);
	static void AddTextChatMapping(class APlayerController* PlayerController, bool Add, class UObject* __WorldContext);
	static void ApplyGameplayEffectToSelfByDuration(class UGameplayAbility* Target, float Duration, TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UObject* __WorldContext);
	static void Auth_SendEventMessage(const struct FS_EventMessageParams& Message, class UObject* __WorldContext);
	static void Auth_SendMessage(class APlayerController* Controller_Reference, EMessageRecipient Recipients, const class FString& Message, EMessageCategory Category, bool Translate_Using_String_Table, class FName String_Table_ID, class UObject* __WorldContext);
	static void Auth_SendMessageVerbose(const struct FPlayerMessage& Message_Specification, class UObject* __WorldContext);
	static void Get_BP_Tweakable_Data(class UObject* __WorldContext, class UBP_TweakableData_C** AsBP_Tweakable_Data);
	static void Get_ClassLog_Name(const class UObject* Object, class UObject* __WorldContext, class FString* Name_0);
	static void Get_Groundskeeper_from_Team(uint8 TeamId, class UObject* __WorldContext, class Abp_groundskeeper_C** GroundsKeeper);
	static void Get_Relative_Team_Color_as_Text_Clientside(uint8 TeamId, class UObject* WorldContext, class UObject* __WorldContext, class FText* TeamColor);
	static void Get_Relative_Team_Color_as_Text_Serverside(uint8 TeamId, class APlayerController* PlayerController, class UObject* __WorldContext, class FText* TeamColor);
	static void GetAllPlayerMasterIds(class UObject* __WorldContext, TArray<class FString>* PlayerIdsTeam1, TArray<class FString>* PlayerIdsTeam2);
	static void GetAllPlayerTitleIds(class UObject* __WorldContext, TArray<class FString>* PlayerIdsTeam1, TArray<class FString>* PlayerIdsTeam2);
	static void GetBadColor(class UObject* __WorldContext, struct FLinearColor* Return);
	static void GetDefaultPerkColorSlate(class UObject* __WorldContext, struct FSlateColor* SlateColor);
	static class ABP_IncomeNotificationManager_C* GetIncomeNotificationManager(class UObject* __WorldContext);
	static void GetInventorySize(class APlayerState* PlayerState, class UObject* __WorldContext, int32* ModifiedSize);
	static void GetLocalVelocity(class AActor* Target, class UObject* __WorldContext, struct FVector* LocalSpaceVelocity);
	static void GetNextTeam(const struct FTeam& CurrentTeam, class UObject* __WorldContext, struct FTeam* NextTeam);
	static void GetPerkColorSlate(class UPerkDefinition* Target, class UObject* __WorldContext, struct FSlateColor* SlateColor);
	static void GetShopItemCategoryForItemDefinition(class UItemDefinition* ItemDefinition, class UObject* __WorldContext, EShopItemCategory* ShopItemCategory, bool* Success, int32* StencilValue);
	static bool IsWorldStatic(class UPrimitiveComponent* Component, class UObject* __WorldContext);
	static void ModifyOutgoingDamageByPerk(double OutgoingDamage, const struct FHitResult& HitResult, class AActor* Causer, class UAbilitySystemComponent* HitActorASC, class UObject* __WorldContext, double* ModifiedOutgoingDamage);
	static void ModifyStructureDamageByPerk(class APawn* Pawn, TSoftObjectPtr<class UItemDefinition> ItemDefinition, double OriginalMultiplier, class UObject* __WorldContext, double* ModifiedMultiplier);
	static void PlayIncomeNotificationAtLocation(const struct FVector& Location, double Score, uint8 TeamId, class UObject* __WorldContext);
	static void ReceptacleSetComparison(const TSet<EReceptacleType>& A, const TSet<EReceptacleType>& B, class UObject* __WorldContext, bool* Match);
	static class FText RoomEnumToTextTranslated(ERooms ERooms, class UObject* __WorldContext);
	static void Switch_To_Menu_Input_Mappings(class APlayerController* PlayerController, bool Invert, class UObject* __WorldContext);
	static void ToggleHighlightOnTask(bool Activate, const struct FS_HighlightParameters& Params_0, class UObject* __WorldContext);
	static class FText ToolEnumToTextTranslated(E_Tools ETools, class UObject* __WorldContext);
	static void TraceForHit(float SphereRadius, double Range, const struct FVector& TraceFromLocation, const struct FRotator& TraceRotation, class AActor* Owner, class UObject* __WorldContext, TArray<struct FHitResult>* AcceptedHits);
	static void TraceForHitWithInterface(double Range, double Width, double Height, double TraceHightOffset, const struct FVector& TraceFromLocation, const struct FRotator& TraceRotation, class AActor* Owner, TSubclassOf<class IInterface> Interface, bool Debug, class AActor* OwningActorShield, bool IgnoreTeammates, class UObject* __WorldContext, TArray<struct FHitResult>* AcceptedHits, bool* NoHits, bool* OnlyHitWorldStatic, struct FHitResult* InitialTraceHit);
	static void TriggerOverlaps(class UPrimitiveComponent* ComponentToCheckOverlaps, class UObject* __WorldContext);
	static int32 WrapValue(int32 Value, int32 Min, int32 Max, class UObject* __WorldContext);

	void ConvertLevelNameToFriendlyName(const class FString& MapName, class UObject* __WorldContext, class FText* Return);
	uint8 GetTeamIDFromPawn(class APawn* Target, class UObject* __WorldContext);
	void SpawnDamageValue(double IncomingHealthDelta, const struct FVector& WorldLocation, class AController* Instigator, class UObject* __WorldContext);

	double GetServerWorldTimeSafe(class UObject* __WorldContext) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintFunctionLibraryJP_C">();
	}
	static class UBlueprintFunctionLibraryJP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintFunctionLibraryJP_C>();
	}
};
static_assert(alignof(UBlueprintFunctionLibraryJP_C) == 0x000008, "Wrong alignment on UBlueprintFunctionLibraryJP_C");
static_assert(sizeof(UBlueprintFunctionLibraryJP_C) == 0x000028, "Wrong size on UBlueprintFunctionLibraryJP_C");

}

