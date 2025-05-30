﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeaderboardsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SteamCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LeaderboardsEntry.W_LeaderboardsEntry_C
// 0x0050 (0x02B0 - 0x0260)
class UW_LeaderboardsEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_36;                                      // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UserName;                                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         RankingNumber;                                     // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Score;                                             // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSteamID                               SteamID;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          FetchName;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelf;                                            // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_LeaderboardsEntry(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	class FText GetText_0();
	struct FLinearColor SetBgColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LeaderboardsEntry_C">();
	}
	static class UW_LeaderboardsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LeaderboardsEntry_C>();
	}
};
static_assert(alignof(UW_LeaderboardsEntry_C) == 0x000008, "Wrong alignment on UW_LeaderboardsEntry_C");
static_assert(sizeof(UW_LeaderboardsEntry_C) == 0x0002B0, "Wrong size on UW_LeaderboardsEntry_C");
static_assert(offsetof(UW_LeaderboardsEntry_C, UberGraphFrame) == 0x000260, "Member 'UW_LeaderboardsEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, Border_0) == 0x000268, "Member 'UW_LeaderboardsEntry_C::Border_0' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, TextBlock) == 0x000270, "Member 'UW_LeaderboardsEntry_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, TextBlock_2) == 0x000278, "Member 'UW_LeaderboardsEntry_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, TextBlock_36) == 0x000280, "Member 'UW_LeaderboardsEntry_C::TextBlock_36' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, UserName) == 0x000288, "Member 'UW_LeaderboardsEntry_C::UserName' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, RankingNumber) == 0x000298, "Member 'UW_LeaderboardsEntry_C::RankingNumber' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, Score) == 0x00029C, "Member 'UW_LeaderboardsEntry_C::Score' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, SteamID) == 0x0002A0, "Member 'UW_LeaderboardsEntry_C::SteamID' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, FetchName) == 0x0002A8, "Member 'UW_LeaderboardsEntry_C::FetchName' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardsEntry_C, IsSelf) == 0x0002A9, "Member 'UW_LeaderboardsEntry_C::IsSelf' has a wrong offset!");

}

