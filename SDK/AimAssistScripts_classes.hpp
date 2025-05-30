#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AimAssistScripts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AimAssistScripts_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class AimAssistScripts.AAInputIntegratorComponent
// 0x0020 (0x00C0 - 0x00A0)
class UAAInputIntegratorComponent final : public UActorComponent
{
public:
	bool                                          bAimAssistEnabled;                                 // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFrictionComponent*                     Friction;                                          // 0x00A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAimCompensatorComponent*               AimCompensator;                                    // 0x00B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAimEaseInComponent*                    AimEaseIn;                                         // 0x00B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	struct FVector2D AssistAim(const double YawInput, const double PitchInput, const bool InvertYaw, const bool InvertPitch);
	void SetUpComponents();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AAInputIntegratorComponent">();
	}
	static class UAAInputIntegratorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAAInputIntegratorComponent>();
	}
};
static_assert(alignof(UAAInputIntegratorComponent) == 0x000008, "Wrong alignment on UAAInputIntegratorComponent");
static_assert(sizeof(UAAInputIntegratorComponent) == 0x0000C0, "Wrong size on UAAInputIntegratorComponent");
static_assert(offsetof(UAAInputIntegratorComponent, bAimAssistEnabled) == 0x0000A0, "Member 'UAAInputIntegratorComponent::bAimAssistEnabled' has a wrong offset!");
static_assert(offsetof(UAAInputIntegratorComponent, Friction) == 0x0000A8, "Member 'UAAInputIntegratorComponent::Friction' has a wrong offset!");
static_assert(offsetof(UAAInputIntegratorComponent, AimCompensator) == 0x0000B0, "Member 'UAAInputIntegratorComponent::AimCompensator' has a wrong offset!");
static_assert(offsetof(UAAInputIntegratorComponent, AimEaseIn) == 0x0000B8, "Member 'UAAInputIntegratorComponent::AimEaseIn' has a wrong offset!");

// Class AimAssistScripts.AimAssistComponent
// 0x00D0 (0x0170 - 0x00A0)
class UAimAssistComponent : public UActorComponent
{
public:
	bool                                          bAimAssistEnabled;                                 // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionSelectionMethod                     CollisionMethod;                                   // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             CollisionChannel;                                  // 0x00A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCollisionProfileName                  CollisionProfile;                                  // 0x00A4(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	ECastType                                     TargetSeekerCastType;                              // 0x00AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxSphereCastCount;                                // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AimAssistRadius;                                   // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConeAngle;                                         // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ConeTraceSubdivision;                              // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NearClipDistance;                                  // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FarClipDistance;                                   // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PreferredBone;                                     // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             TargetFound;                                       // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             TargetLost;                                        // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          bCreateReticle;                                    // 0x00F0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTargetingPreset*                       FilteringPreset;                                   // 0x00F8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_100[0x68];                                     // 0x0100(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      PlayerController;                                  // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	bool CanTargetActor(const class AActor* HitActor);
	class APlayerController* GetPlayerController();
	bool ShouldEnableAssist();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AimAssistComponent">();
	}
	static class UAimAssistComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimAssistComponent>();
	}
};
static_assert(alignof(UAimAssistComponent) == 0x000008, "Wrong alignment on UAimAssistComponent");
static_assert(sizeof(UAimAssistComponent) == 0x000170, "Wrong size on UAimAssistComponent");
static_assert(offsetof(UAimAssistComponent, bAimAssistEnabled) == 0x0000A0, "Member 'UAimAssistComponent::bAimAssistEnabled' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, CollisionMethod) == 0x0000A1, "Member 'UAimAssistComponent::CollisionMethod' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, CollisionChannel) == 0x0000A2, "Member 'UAimAssistComponent::CollisionChannel' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, CollisionProfile) == 0x0000A4, "Member 'UAimAssistComponent::CollisionProfile' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, TargetSeekerCastType) == 0x0000AC, "Member 'UAimAssistComponent::TargetSeekerCastType' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, MaxSphereCastCount) == 0x0000B0, "Member 'UAimAssistComponent::MaxSphereCastCount' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, AimAssistRadius) == 0x0000B4, "Member 'UAimAssistComponent::AimAssistRadius' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, ConeAngle) == 0x0000B8, "Member 'UAimAssistComponent::ConeAngle' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, ConeTraceSubdivision) == 0x0000BC, "Member 'UAimAssistComponent::ConeTraceSubdivision' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, NearClipDistance) == 0x0000C0, "Member 'UAimAssistComponent::NearClipDistance' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, FarClipDistance) == 0x0000C4, "Member 'UAimAssistComponent::FarClipDistance' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, PreferredBone) == 0x0000C8, "Member 'UAimAssistComponent::PreferredBone' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, TargetFound) == 0x0000D0, "Member 'UAimAssistComponent::TargetFound' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, TargetLost) == 0x0000E0, "Member 'UAimAssistComponent::TargetLost' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, bCreateReticle) == 0x0000F0, "Member 'UAimAssistComponent::bCreateReticle' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, FilteringPreset) == 0x0000F8, "Member 'UAimAssistComponent::FilteringPreset' has a wrong offset!");
static_assert(offsetof(UAimAssistComponent, PlayerController) == 0x000168, "Member 'UAimAssistComponent::PlayerController' has a wrong offset!");

// Class AimAssistScripts.AimAssistReticleBase
// 0x0000 (0x02E0 - 0x02E0)
class UAimAssistReticleBase : public UUserWidget
{
public:
	float CalculateConeProjectionAtDistance(const float SpreadAngle, const float NearClipDistance) const;
	float CalculateSphericalProjectionRadiusAtDistance(const float Radius, const float Distance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AimAssistReticleBase">();
	}
	static class UAimAssistReticleBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimAssistReticleBase>();
	}
};
static_assert(alignof(UAimAssistReticleBase) == 0x000008, "Wrong alignment on UAimAssistReticleBase");
static_assert(sizeof(UAimAssistReticleBase) == 0x0002E0, "Wrong size on UAimAssistReticleBase");

// Class AimAssistScripts.AimCompensatorComponent
// 0x0050 (0x01C0 - 0x0170)
class UAimCompensatorComponent : public UAimAssistComponent
{
public:
	TMap<class FName, struct FAimCompensatorSettings> Configuration;                                     // 0x0170(0x0050)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)

public:
	const struct FVector2D AssistAim(const double YawInput, const double PitchInput, const bool InvertYaw, const bool InvertPitch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AimCompensatorComponent">();
	}
	static class UAimCompensatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimCompensatorComponent>();
	}
};
static_assert(alignof(UAimCompensatorComponent) == 0x000008, "Wrong alignment on UAimCompensatorComponent");
static_assert(sizeof(UAimCompensatorComponent) == 0x0001C0, "Wrong size on UAimCompensatorComponent");
static_assert(offsetof(UAimCompensatorComponent, Configuration) == 0x000170, "Member 'UAimCompensatorComponent::Configuration' has a wrong offset!");

// Class AimAssistScripts.AimEaseInComponent
// 0x0008 (0x00A8 - 0x00A0)
class UAimEaseInComponent final : public UActorComponent
{
public:
	bool                                          bAimAssistEnabled;                                 // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SmoothnessMultiplier;                              // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	struct FVector2D AssistAim(const double YawInput, const double PitchInput) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AimEaseInComponent">();
	}
	static class UAimEaseInComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimEaseInComponent>();
	}
};
static_assert(alignof(UAimEaseInComponent) == 0x000008, "Wrong alignment on UAimEaseInComponent");
static_assert(sizeof(UAimEaseInComponent) == 0x0000A8, "Wrong size on UAimEaseInComponent");
static_assert(offsetof(UAimEaseInComponent, bAimAssistEnabled) == 0x0000A0, "Member 'UAimEaseInComponent::bAimAssistEnabled' has a wrong offset!");
static_assert(offsetof(UAimEaseInComponent, SmoothnessMultiplier) == 0x0000A4, "Member 'UAimEaseInComponent::SmoothnessMultiplier' has a wrong offset!");

// Class AimAssistScripts.FrictionComponent
// 0x0070 (0x01E0 - 0x0170)
class UFrictionComponent : public UAimAssistComponent
{
public:
	TMap<class FName, struct FFrictionSettings>   Configuration;                                     // 0x0170(0x0050)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C0[0x20];                                     // 0x01C0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector2D AssistAim(const double YawInput, const double PitchInput);
	void StartEaseOut(const class UAimAssistComponent* Sender, const struct FAimAssistTarget& Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FrictionComponent">();
	}
	static class UFrictionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrictionComponent>();
	}
};
static_assert(alignof(UFrictionComponent) == 0x000008, "Wrong alignment on UFrictionComponent");
static_assert(sizeof(UFrictionComponent) == 0x0001E0, "Wrong size on UFrictionComponent");
static_assert(offsetof(UFrictionComponent, Configuration) == 0x000170, "Member 'UFrictionComponent::Configuration' has a wrong offset!");

// Class AimAssistScripts.RotationalAimAssist
// 0x0008 (0x0178 - 0x0170)
class URotationalAimAssist : public UAimAssistComponent
{
public:
	bool                                          bAutoApplyAimAssist;                               // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	const struct FRotator AssistAim(const float DeltaTime);
	void AssistAimAuto(const struct FRotator& AimAssistResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RotationalAimAssist">();
	}
	static class URotationalAimAssist* GetDefaultObj()
	{
		return GetDefaultObjImpl<URotationalAimAssist>();
	}
};
static_assert(alignof(URotationalAimAssist) == 0x000008, "Wrong alignment on URotationalAimAssist");
static_assert(sizeof(URotationalAimAssist) == 0x000178, "Wrong size on URotationalAimAssist");
static_assert(offsetof(URotationalAimAssist, bAutoApplyAimAssist) == 0x000170, "Member 'URotationalAimAssist::bAutoApplyAimAssist' has a wrong offset!");

// Class AimAssistScripts.MagnetismComponent
// 0x0058 (0x01D0 - 0x0178)
class UMagnetismComponent final : public URotationalAimAssist
{
public:
	TMap<class FName, struct FMagnetismSettings>  Configuration;                                     // 0x0178(0x0050)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	class UCharacterMovementComponent*            CharacterMovement;                                 // 0x01C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagnetismComponent">();
	}
	static class UMagnetismComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagnetismComponent>();
	}
};
static_assert(alignof(UMagnetismComponent) == 0x000008, "Wrong alignment on UMagnetismComponent");
static_assert(sizeof(UMagnetismComponent) == 0x0001D0, "Wrong size on UMagnetismComponent");
static_assert(offsetof(UMagnetismComponent, Configuration) == 0x000178, "Member 'UMagnetismComponent::Configuration' has a wrong offset!");
static_assert(offsetof(UMagnetismComponent, CharacterMovement) == 0x0001C8, "Member 'UMagnetismComponent::CharacterMovement' has a wrong offset!");

// Class AimAssistScripts.MotionTrackerComponent
// 0x0068 (0x01E0 - 0x0178)
class UMotionTrackerComponent final : public URotationalAimAssist
{
public:
	TMap<class FName, struct FMotionTrackerSettings> Configuration;                                     // 0x0178(0x0050)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C8[0x10];                                     // 0x01C8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterMovementComponent*            CharacterMovement;                                 // 0x01D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrackerComponent">();
	}
	static class UMotionTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrackerComponent>();
	}
};
static_assert(alignof(UMotionTrackerComponent) == 0x000008, "Wrong alignment on UMotionTrackerComponent");
static_assert(sizeof(UMotionTrackerComponent) == 0x0001E0, "Wrong size on UMotionTrackerComponent");
static_assert(offsetof(UMotionTrackerComponent, Configuration) == 0x000178, "Member 'UMotionTrackerComponent::Configuration' has a wrong offset!");
static_assert(offsetof(UMotionTrackerComponent, CharacterMovement) == 0x0001D8, "Member 'UMotionTrackerComponent::CharacterMovement' has a wrong offset!");

}

