#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnnouncerSpeaker

#include "Basic.hpp"

#include "E_AnnouncementTypes_structs.hpp"


namespace SDK::Params
{

// Function BP_AnnouncerSpeaker.BP_AnnouncerSpeaker_C.ExecuteUbergraph_BP_AnnouncerSpeaker
// 0x0008 (0x0008 - 0x0000)
struct BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AnnouncementTypes                           K2Node_CustomEvent_AnnouncementType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker) == 0x000004, "Wrong alignment on BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker");
static_assert(sizeof(BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker) == 0x000008, "Wrong size on BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker");
static_assert(offsetof(BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker, EntryPoint) == 0x000000, "Member 'BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker, K2Node_CustomEvent_AnnouncementType) == 0x000004, "Member 'BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker::K2Node_CustomEvent_AnnouncementType' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker, CallFunc_IsDedicatedServer_ReturnValue) == 0x000005, "Member 'BP_AnnouncerSpeaker_C_ExecuteUbergraph_BP_AnnouncerSpeaker::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function BP_AnnouncerSpeaker.BP_AnnouncerSpeaker_C.IsEntireTeamDead
// 0x0060 (0x0060 - 0x0000)
struct BP_AnnouncerSpeaker_C_IsEntireTeamDead final
{
public:
	uint8                                         Team;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         EliminatedTeam;                                    // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerStateJP*>                 CallFunc_GetPlayersOfTeam_ReturnValue;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStateJP*                         CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class II_Character_C>        K2Node_DynamicCast_AsI_Character;                  // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsDead_Dead;                           // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnnouncerSpeaker_C_IsEntireTeamDead) == 0x000008, "Wrong alignment on BP_AnnouncerSpeaker_C_IsEntireTeamDead");
static_assert(sizeof(BP_AnnouncerSpeaker_C_IsEntireTeamDead) == 0x000060, "Wrong size on BP_AnnouncerSpeaker_C_IsEntireTeamDead");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, Team) == 0x000000, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::Team' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, Return) == 0x000001, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::Return' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, EliminatedTeam) == 0x000002, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::EliminatedTeam' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_GetPlayersOfTeam_ReturnValue) == 0x000008, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_GetPlayersOfTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_GetPawn_ReturnValue) == 0x000028, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, K2Node_DynamicCast_AsCharacter) == 0x000038, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, K2Node_DynamicCast_AsI_Character) == 0x000048, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::K2Node_DynamicCast_AsI_Character' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_GetIsDead_Dead) == 0x00005A, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_GetIsDead_Dead' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_IsEntireTeamDead, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_AnnouncerSpeaker_C_IsEntireTeamDead::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_AnnouncerSpeaker.BP_AnnouncerSpeaker_C.Multi_Play Sound
// 0x0001 (0x0001 - 0x0000)
struct BP_AnnouncerSpeaker_C_Multi_Play_Sound final
{
public:
	E_AnnouncementTypes                           AnnouncementType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnnouncerSpeaker_C_Multi_Play_Sound) == 0x000001, "Wrong alignment on BP_AnnouncerSpeaker_C_Multi_Play_Sound");
static_assert(sizeof(BP_AnnouncerSpeaker_C_Multi_Play_Sound) == 0x000001, "Wrong size on BP_AnnouncerSpeaker_C_Multi_Play_Sound");
static_assert(offsetof(BP_AnnouncerSpeaker_C_Multi_Play_Sound, AnnouncementType) == 0x000000, "Member 'BP_AnnouncerSpeaker_C_Multi_Play_Sound::AnnouncementType' has a wrong offset!");

// Function BP_AnnouncerSpeaker.BP_AnnouncerSpeaker_C.PlayAnnouncementSounds
// 0x0098 (0x0098 - 0x0000)
struct BP_AnnouncerSpeaker_C_PlayAnnouncementSounds final
{
public:
	E_AnnouncementTypes                           Enumerator;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AnnouncementTypes                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_6;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_7;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_8;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_ClassLog_Name_name;                   // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds) == 0x000008, "Wrong alignment on BP_AnnouncerSpeaker_C_PlayAnnouncementSounds");
static_assert(sizeof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds) == 0x000098, "Wrong size on BP_AnnouncerSpeaker_C_PlayAnnouncementSounds");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Enumerator) == 0x000000, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Enumerator' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_byte_Variable) == 0x000001, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable) == 0x000008, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_1) == 0x000010, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_2) == 0x000018, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_3) == 0x000020, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_4) == 0x000028, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_5) == 0x000030, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_6) == 0x000038, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_7) == 0x000040, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, Temp_object_Variable_8) == 0x000048, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000050, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, K2Node_Select_Default) == 0x000060, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, CallFunc_SpawnSound2D_ReturnValue) == 0x000078, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnnouncerSpeaker_C_PlayAnnouncementSounds, CallFunc_Get_ClassLog_Name_name) == 0x000088, "Member 'BP_AnnouncerSpeaker_C_PlayAnnouncementSounds::CallFunc_Get_ClassLog_Name_name' has a wrong offset!");

}

