#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClosetStore

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ClosetStore.BP_ClosetStore_C.BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000118, "Wrong size on BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.Cosmetic Collect
// 0x0008 (0x0008 - 0x0000)
struct BP_ClosetStore_C_Cosmetic_Collect final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_Cosmetic_Collect) == 0x000008, "Wrong alignment on BP_ClosetStore_C_Cosmetic_Collect");
static_assert(sizeof(BP_ClosetStore_C_Cosmetic_Collect) == 0x000008, "Wrong size on BP_ClosetStore_C_Cosmetic_Collect");
static_assert(offsetof(BP_ClosetStore_C_Cosmetic_Collect, Target) == 0x000000, "Member 'BP_ClosetStore_C_Cosmetic_Collect::Target' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.ExecuteUbergraph_BP_ClosetStore
// 0x01C0 (0x01C0 - 0x0000)
struct BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_MeshesToHide_TargetMeshes;                // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0078(0x00F8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldOpen_ReturnValue;                   // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldClose_ReturnValue;                  // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18E[0x2];                                      // 0x018E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target;                               // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            CallFunc_MeshesToHide_TargetMeshes_1;              // 0x0198(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_1;                         // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore) == 0x000008, "Wrong alignment on BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore");
static_assert(sizeof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore) == 0x0001C0, "Wrong size on BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, EntryPoint) == 0x000000, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_MeshesToHide_TargetMeshes) == 0x000008, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_MeshesToHide_TargetMeshes' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, Temp_int_Variable) == 0x000018, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, Temp_int_Variable_1) == 0x000024, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_IsDedicatedServer_ReturnValue) == 0x000051, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000052, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000058, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000060, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000068, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000070, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_bFromSweep) == 0x000074, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_SweepResult) == 0x000078, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000170, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherActor) == 0x000178, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherComp) == 0x000180, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000188, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_ShouldOpen_ReturnValue) == 0x00018C, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_ShouldOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_ShouldClose_ReturnValue) == 0x00018D, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_ShouldClose_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, K2Node_Event_Target) == 0x000190, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_MeshesToHide_TargetMeshes_1) == 0x000198, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_MeshesToHide_TargetMeshes_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Array_Length_ReturnValue_1) == 0x0001A8, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Array_Get_Item_1) == 0x0001B0, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001B8, "Member 'BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.MeshesToHide
// 0x0020 (0x0020 - 0x0000)
struct BP_ClosetStore_C_MeshesToHide final
{
public:
	TArray<class UPrimitiveComponent*>            TargetMeshes;                                      // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_ClosetStore_C_MeshesToHide) == 0x000008, "Wrong alignment on BP_ClosetStore_C_MeshesToHide");
static_assert(sizeof(BP_ClosetStore_C_MeshesToHide) == 0x000020, "Wrong size on BP_ClosetStore_C_MeshesToHide");
static_assert(offsetof(BP_ClosetStore_C_MeshesToHide, TargetMeshes) == 0x000000, "Member 'BP_ClosetStore_C_MeshesToHide::TargetMeshes' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_MeshesToHide, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_ClosetStore_C_MeshesToHide::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.PlayDoorSound
// 0x0008 (0x0008 - 0x0000)
struct BP_ClosetStore_C_PlayDoorSound final
{
public:
	class USoundBase*                             NewSound;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_PlayDoorSound) == 0x000008, "Wrong alignment on BP_ClosetStore_C_PlayDoorSound");
static_assert(sizeof(BP_ClosetStore_C_PlayDoorSound) == 0x000008, "Wrong size on BP_ClosetStore_C_PlayDoorSound");
static_assert(offsetof(BP_ClosetStore_C_PlayDoorSound, NewSound) == 0x000000, "Member 'BP_ClosetStore_C_PlayDoorSound::NewSound' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.SetTeamMaterial
// 0x0028 (0x0028 - 0x0000)
struct BP_ClosetStore_C_SetTeamMaterial final
{
public:
	bool                                          SameTeam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Red;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Blue;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_SetTeamMaterial) == 0x000008, "Wrong alignment on BP_ClosetStore_C_SetTeamMaterial");
static_assert(sizeof(BP_ClosetStore_C_SetTeamMaterial) == 0x000028, "Wrong size on BP_ClosetStore_C_SetTeamMaterial");
static_assert(offsetof(BP_ClosetStore_C_SetTeamMaterial, SameTeam) == 0x000000, "Member 'BP_ClosetStore_C_SetTeamMaterial::SameTeam' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_SetTeamMaterial, Red) == 0x000008, "Member 'BP_ClosetStore_C_SetTeamMaterial::Red' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_SetTeamMaterial, Blue) == 0x000010, "Member 'BP_ClosetStore_C_SetTeamMaterial::Blue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_SetTeamMaterial, Temp_bool_Variable) == 0x000018, "Member 'BP_ClosetStore_C_SetTeamMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_SetTeamMaterial, K2Node_Select_Default) == 0x000020, "Member 'BP_ClosetStore_C_SetTeamMaterial::K2Node_Select_Default' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.ShouldClose
// 0x0050 (0x0050 - 0x0000)
struct BP_ClosetStore_C_ShouldClose final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface;           // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_ShouldClose) == 0x000008, "Wrong alignment on BP_ClosetStore_C_ShouldClose");
static_assert(sizeof(BP_ClosetStore_C_ShouldClose) == 0x000050, "Wrong size on BP_ClosetStore_C_ShouldClose");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, ReturnValue) == 0x000000, "Member 'BP_ClosetStore_C_ShouldClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, Temp_byte_Variable) == 0x000001, "Member 'BP_ClosetStore_C_ShouldClose::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ClosetStore_C_ShouldClose::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ClosetStore_C_ShouldClose::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000018, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, K2Node_DynamicCast_AsTeamable_Interface) == 0x000038, "Member 'BP_ClosetStore_C_ShouldClose::K2Node_DynamicCast_AsTeamable_Interface' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ClosetStore_C_ShouldClose::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_GetTeamID_ReturnValue) == 0x00004A, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldClose, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00004B, "Member 'BP_ClosetStore_C_ShouldClose::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_ClosetStore.BP_ClosetStore_C.ShouldOpen
// 0x0028 (0x0028 - 0x0000)
struct BP_ClosetStore_C_ShouldOpen final
{
public:
	class UObject*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITeamableInterface>    K2Node_DynamicCast_AsTeamable_Interface;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetTeamID_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ClosetStore_C_ShouldOpen) == 0x000008, "Wrong alignment on BP_ClosetStore_C_ShouldOpen");
static_assert(sizeof(BP_ClosetStore_C_ShouldOpen) == 0x000028, "Wrong size on BP_ClosetStore_C_ShouldOpen");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, Target) == 0x000000, "Member 'BP_ClosetStore_C_ShouldOpen::Target' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, ReturnValue) == 0x000008, "Member 'BP_ClosetStore_C_ShouldOpen::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, Temp_byte_Variable) == 0x000009, "Member 'BP_ClosetStore_C_ShouldOpen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, K2Node_DynamicCast_AsTeamable_Interface) == 0x000010, "Member 'BP_ClosetStore_C_ShouldOpen::K2Node_DynamicCast_AsTeamable_Interface' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ClosetStore_C_ShouldOpen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, CallFunc_GetTeamID_ReturnValue) == 0x000021, "Member 'BP_ClosetStore_C_ShouldOpen::CallFunc_GetTeamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'BP_ClosetStore_C_ShouldOpen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000023, "Member 'BP_ClosetStore_C_ShouldOpen::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ClosetStore_C_ShouldOpen, CallFunc_BooleanAND_ReturnValue) == 0x000024, "Member 'BP_ClosetStore_C_ShouldOpen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

