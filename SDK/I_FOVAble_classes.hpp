#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_FOVAble

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_FOVAble.I_FOVAble_C
// 0x0000 (0x0028 - 0x0028)
class II_FOVAble_C final : public IInterface
{
public:
	void GetCameraFOV(double* FOV);
	void PlayCameraShake(class UClass* CameraShake, double Scale);
	void ResetCameraFOV(double Speed);
	void SetCameraFOV(double Amount, double Speed, class UClass* OptionalCameraShake, double Scale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_FOVAble_C">();
	}
	static class II_FOVAble_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_FOVAble_C>();
	}
};
static_assert(alignof(II_FOVAble_C) == 0x000008, "Wrong alignment on II_FOVAble_C");
static_assert(sizeof(II_FOVAble_C) == 0x000028, "Wrong size on II_FOVAble_C");

}

