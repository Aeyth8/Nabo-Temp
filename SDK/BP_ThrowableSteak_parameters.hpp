#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowableSteak

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ThrowableSteak.BP_ThrowableSteak_C.ExecuteUbergraph_BP_ThrowableSteak
// 0x01D8 (0x01D8 - 0x0000)
struct BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0088(0x00F8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_Event_GrippingCharacter;                    // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_Event_ReleasingCharacter;                   // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak) == 0x000008, "Wrong alignment on BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak");
static_assert(sizeof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak) == 0x0001D8, "Wrong size on BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, EntryPoint) == 0x000000, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_MyComp) == 0x000020, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_Other) == 0x000028, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_OtherComp) == 0x000030, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_bSelfMoved) == 0x000038, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_HitLocation) == 0x000040, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_HitNormal) == 0x000058, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_NormalImpulse) == 0x000070, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_Hit) == 0x000088, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000180, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000198, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_GrippingCharacter) == 0x0001B0, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_GrippingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0001B8, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, K2Node_Event_ReleasingCharacter) == 0x0001C0, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::K2Node_Event_ReleasingCharacter' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, Temp_int_Variable) == 0x0001C8, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_Add_IntInt_ReturnValue) == 0x0001CC, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak, CallFunc_Greater_IntInt_ReturnValue) == 0x0001D0, "Member 'BP_ThrowableSteak_C_ExecuteUbergraph_BP_ThrowableSteak::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ThrowableSteak.BP_ThrowableSteak_C.GrippedServer
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowableSteak_C_GrippedServer final
{
public:
	class ACharacter*                             GrippingCharacter;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowableSteak_C_GrippedServer) == 0x000008, "Wrong alignment on BP_ThrowableSteak_C_GrippedServer");
static_assert(sizeof(BP_ThrowableSteak_C_GrippedServer) == 0x000008, "Wrong size on BP_ThrowableSteak_C_GrippedServer");
static_assert(offsetof(BP_ThrowableSteak_C_GrippedServer, GrippingCharacter) == 0x000000, "Member 'BP_ThrowableSteak_C_GrippedServer::GrippingCharacter' has a wrong offset!");

// Function BP_ThrowableSteak.BP_ThrowableSteak_C.ReceiveHit
// 0x0160 (0x0160 - 0x0000)
struct BP_ThrowableSteak_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ThrowableSteak_C_ReceiveHit) == 0x000008, "Wrong alignment on BP_ThrowableSteak_C_ReceiveHit");
static_assert(sizeof(BP_ThrowableSteak_C_ReceiveHit) == 0x000160, "Wrong size on BP_ThrowableSteak_C_ReceiveHit");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, MyComp) == 0x000000, "Member 'BP_ThrowableSteak_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, Other) == 0x000008, "Member 'BP_ThrowableSteak_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BP_ThrowableSteak_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BP_ThrowableSteak_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BP_ThrowableSteak_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BP_ThrowableSteak_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BP_ThrowableSteak_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_ThrowableSteak_C_ReceiveHit, Hit) == 0x000068, "Member 'BP_ThrowableSteak_C_ReceiveHit::Hit' has a wrong offset!");

// Function BP_ThrowableSteak.BP_ThrowableSteak_C.ReleasedServer
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowableSteak_C_ReleasedServer final
{
public:
	class ACharacter*                             ReleasingCharacter;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowableSteak_C_ReleasedServer) == 0x000008, "Wrong alignment on BP_ThrowableSteak_C_ReleasedServer");
static_assert(sizeof(BP_ThrowableSteak_C_ReleasedServer) == 0x000008, "Wrong size on BP_ThrowableSteak_C_ReleasedServer");
static_assert(offsetof(BP_ThrowableSteak_C_ReleasedServer, ReleasingCharacter) == 0x000000, "Member 'BP_ThrowableSteak_C_ReleasedServer::ReleasingCharacter' has a wrong offset!");

}

