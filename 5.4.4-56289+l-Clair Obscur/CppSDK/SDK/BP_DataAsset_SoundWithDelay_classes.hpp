﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_SoundWithDelay

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataAsset_SoundWithDelay.BP_DataAsset_SoundWithDelay_C
// 0x0028 (0x0058 - 0x0030)
class UBP_DataAsset_SoundWithDelay_C final : public UPrimaryDataAsset
{
public:
	double                                        Delay;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomDeviation;                                   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                     Sounds;                                            // 0x0040(0x0010)(Edit, BlueprintVisible)
	int32                                         ReplaySoundThreshold;                              // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataAsset_SoundWithDelay_C">();
	}
	static class UBP_DataAsset_SoundWithDelay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataAsset_SoundWithDelay_C>();
	}
};
static_assert(alignof(UBP_DataAsset_SoundWithDelay_C) == 0x000008, "Wrong alignment on UBP_DataAsset_SoundWithDelay_C");
static_assert(sizeof(UBP_DataAsset_SoundWithDelay_C) == 0x000058, "Wrong size on UBP_DataAsset_SoundWithDelay_C");
static_assert(offsetof(UBP_DataAsset_SoundWithDelay_C, Delay) == 0x000030, "Member 'UBP_DataAsset_SoundWithDelay_C::Delay' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_SoundWithDelay_C, RandomDeviation) == 0x000038, "Member 'UBP_DataAsset_SoundWithDelay_C::RandomDeviation' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_SoundWithDelay_C, Sounds) == 0x000040, "Member 'UBP_DataAsset_SoundWithDelay_C::Sounds' has a wrong offset!");
static_assert(offsetof(UBP_DataAsset_SoundWithDelay_C, ReplaySoundThreshold) == 0x000050, "Member 'UBP_DataAsset_SoundWithDelay_C::ReplaySoundThreshold' has a wrong offset!");

}

