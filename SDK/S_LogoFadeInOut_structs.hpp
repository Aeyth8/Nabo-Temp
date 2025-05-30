#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_LogoFadeInOut

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_LogoFadeInOut.S_LogoFadeInOut
// 0x0038 (0x0038 - 0x0000)
struct FS_LogoFadeInOut final
{
public:
	bool                                          StartwithLogo_4_7FAABB774D71CD13E244CFBB04DCF1D3;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             LogoTexture_5_5DC679B74799166031538AA65D86839F;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size_17_E38DA7CB4AB55B551E50508DDE317938;          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FadeIn_7_A7409CB242FE63569F9831B59F6BE4EA;         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeInDurationseconds_21_0529266D48D3FAAF7A60E8809D8AACE5; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FadeOut_9_A2AD34F1487E41A9F5CCF8BB395AEC79;        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeOutDurationseconds_22_5AC884F9446C5B8EF0EDFD896AB43846; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Removeaftertimeseconds_20_460EF8A640835998B52F0580F7EA40FE; // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_LogoFadeInOut) == 0x000008, "Wrong alignment on FS_LogoFadeInOut");
static_assert(sizeof(FS_LogoFadeInOut) == 0x000038, "Wrong size on FS_LogoFadeInOut");
static_assert(offsetof(FS_LogoFadeInOut, StartwithLogo_4_7FAABB774D71CD13E244CFBB04DCF1D3) == 0x000000, "Member 'FS_LogoFadeInOut::StartwithLogo_4_7FAABB774D71CD13E244CFBB04DCF1D3' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, LogoTexture_5_5DC679B74799166031538AA65D86839F) == 0x000008, "Member 'FS_LogoFadeInOut::LogoTexture_5_5DC679B74799166031538AA65D86839F' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, Size_17_E38DA7CB4AB55B551E50508DDE317938) == 0x000010, "Member 'FS_LogoFadeInOut::Size_17_E38DA7CB4AB55B551E50508DDE317938' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, FadeIn_7_A7409CB242FE63569F9831B59F6BE4EA) == 0x000020, "Member 'FS_LogoFadeInOut::FadeIn_7_A7409CB242FE63569F9831B59F6BE4EA' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, FadeInDurationseconds_21_0529266D48D3FAAF7A60E8809D8AACE5) == 0x000024, "Member 'FS_LogoFadeInOut::FadeInDurationseconds_21_0529266D48D3FAAF7A60E8809D8AACE5' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, FadeOut_9_A2AD34F1487E41A9F5CCF8BB395AEC79) == 0x000028, "Member 'FS_LogoFadeInOut::FadeOut_9_A2AD34F1487E41A9F5CCF8BB395AEC79' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, FadeOutDurationseconds_22_5AC884F9446C5B8EF0EDFD896AB43846) == 0x00002C, "Member 'FS_LogoFadeInOut::FadeOutDurationseconds_22_5AC884F9446C5B8EF0EDFD896AB43846' has a wrong offset!");
static_assert(offsetof(FS_LogoFadeInOut, Removeaftertimeseconds_20_460EF8A640835998B52F0580F7EA40FE) == 0x000030, "Member 'FS_LogoFadeInOut::Removeaftertimeseconds_20_460EF8A640835998B52F0580F7EA40FE' has a wrong offset!");

}

