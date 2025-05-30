#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ShopItem

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_ShopItem.S_ShopItem
// 0x0020 (0x0020 - 0x0000)
struct FS_ShopItem final
{
public:
	class UTexture2D*                             Image_14_AD88BC6941D5B505669758BBC8391D7A;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Quantity_28_18A869D44A16B07828B47CAAAA8DBB4E;      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemTiersDefinition*                   ItemTierDefinition_82_F41BDB214E8AD6BDDC4C4CA3914302F4; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_61_5958B8B5475409DC59C52DADB9F07BA6;       // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_ShopItem) == 0x000008, "Wrong alignment on FS_ShopItem");
static_assert(sizeof(FS_ShopItem) == 0x000020, "Wrong size on FS_ShopItem");
static_assert(offsetof(FS_ShopItem, Image_14_AD88BC6941D5B505669758BBC8391D7A) == 0x000000, "Member 'FS_ShopItem::Image_14_AD88BC6941D5B505669758BBC8391D7A' has a wrong offset!");
static_assert(offsetof(FS_ShopItem, Quantity_28_18A869D44A16B07828B47CAAAA8DBB4E) == 0x000008, "Member 'FS_ShopItem::Quantity_28_18A869D44A16B07828B47CAAAA8DBB4E' has a wrong offset!");
static_assert(offsetof(FS_ShopItem, ItemTierDefinition_82_F41BDB214E8AD6BDDC4C4CA3914302F4) == 0x000010, "Member 'FS_ShopItem::ItemTierDefinition_82_F41BDB214E8AD6BDDC4C4CA3914302F4' has a wrong offset!");
static_assert(offsetof(FS_ShopItem, Disable_61_5958B8B5475409DC59C52DADB9F07BA6) == 0x000018, "Member 'FS_ShopItem::Disable_61_5958B8B5475409DC59C52DADB9F07BA6' has a wrong offset!");

}

