#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_VideoPlayer

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_VideoPlayer.S_VideoPlayer
// 0x0010 (0x0010 - 0x0000)
struct FS_VideoPlayer final
{
public:
	class UMediaPlayer*                           Media_6_837316B1457BE861A3BC1FA6D0A58ACF;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                          MediaTexture_7_D3DAFA2742679997C8375ABC0E6E4616;   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_VideoPlayer) == 0x000008, "Wrong alignment on FS_VideoPlayer");
static_assert(sizeof(FS_VideoPlayer) == 0x000010, "Wrong size on FS_VideoPlayer");
static_assert(offsetof(FS_VideoPlayer, Media_6_837316B1457BE861A3BC1FA6D0A58ACF) == 0x000000, "Member 'FS_VideoPlayer::Media_6_837316B1457BE861A3BC1FA6D0A58ACF' has a wrong offset!");
static_assert(offsetof(FS_VideoPlayer, MediaTexture_7_D3DAFA2742679997C8375ABC0E6E4616) == 0x000008, "Member 'FS_VideoPlayer::MediaTexture_7_D3DAFA2742679997C8375ABC0E6E4616' has a wrong offset!");

}

