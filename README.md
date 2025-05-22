# How To Use

This project **only** works with Manifest [Manifest #9199657030240920167](steamdb.info/depot/1732431/history/?changeid=M:9199657030240920167)

* Compile the DLL and place it in ``Neighbors Suburban Warfare\JP\Binaries\Win64``

This DLL automatically unlocks the UConsole and contains custom logic for custom commands, the commands are:

**setneighborloadout** - ``Reloads/Equips your character``
**setneighbor** - ``Sets the neighbor type, requires the name of the character``
**setneighborperk** - ``Sets the unique neighbor perk, you can use any perk with any neighbor, which is a feature bypass of this program``
**setskin** - ``Sets the skin of the neighbor, {name}.default is for the plain skin``
**setperk** - ``Sets the general perk``

To open the UConsole, press Tilde ``~`` on your keyboard.

To generally set your character, you will want to use **setneighbor**, **setskin**, and finally **setneighborloadout** while in the lobby to save your changes.

Example: ``setneighbor perarne`` ``setskin perarne.default`` ``setneighborloadout``

To find the IDs and names for skins/perks, you will need to use FModel, the AES key is ``0x5465A6E047A3F0C3BAFA427975FEEA9FC8EAAFB77B5E8532D5E7159F08BE7415``

You will need to use a local mapping ``.usmap`` file, it is located in the [dump](https://github.com/Aeyth8/Nabo-Temp/blob/main/5.4.2-62193%2B%2B%2BUE%2BSource-JP.rar) within the repository.

I have eliminated the need for ID prefixes, so that all you will need to input is the important parts.

* setneighbor ~~Neighbors.Id.PerArne~~ PerArne
* setskin ~~Cosmetics.NeighborSkins.PerArne.Default~~ PerArne.Default
* setneighborperk ~~Perk.Neighbor.PerArne.JetpackVest~~ PerArne.JetpackVest
* setperk ~~Perk.General.Sharpshooter~~ Sharpshooter

This is not the most user-friendly tool as this is just a temporary codebase, and I don't have time to fully pursue working on it right now.

I have uploaded a YouTube video showing how the tool is used, this can hopefully serve for a better visual guide. 

[Video](https://www.youtube.com/watch?v=07rJ5Qd7rg8)
