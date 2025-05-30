﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EliminationPlaque

#include "Basic.hpp"

#include "E_Teams_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_EliminationPlaque.W_EliminationPlaque_C
// 0x0010 (0x0270 - 0x0260)
class UW_EliminationPlaque_C final : public UUserWidget
{
public:
	class UImage*                                 Image_44;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_Teams                                       Team;                                              // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsAlive;                                           // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_26A[0x2];                                      // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerIndex;                                       // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	struct FSlateBrush SetPlaqueImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_EliminationPlaque_C">();
	}
	static class UW_EliminationPlaque_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_EliminationPlaque_C>();
	}
};
static_assert(alignof(UW_EliminationPlaque_C) == 0x000008, "Wrong alignment on UW_EliminationPlaque_C");
static_assert(sizeof(UW_EliminationPlaque_C) == 0x000270, "Wrong size on UW_EliminationPlaque_C");
static_assert(offsetof(UW_EliminationPlaque_C, Image_44) == 0x000260, "Member 'UW_EliminationPlaque_C::Image_44' has a wrong offset!");
static_assert(offsetof(UW_EliminationPlaque_C, Team) == 0x000268, "Member 'UW_EliminationPlaque_C::Team' has a wrong offset!");
static_assert(offsetof(UW_EliminationPlaque_C, IsAlive) == 0x000269, "Member 'UW_EliminationPlaque_C::IsAlive' has a wrong offset!");
static_assert(offsetof(UW_EliminationPlaque_C, PlayerIndex) == 0x00026C, "Member 'UW_EliminationPlaque_C::PlayerIndex' has a wrong offset!");

}

