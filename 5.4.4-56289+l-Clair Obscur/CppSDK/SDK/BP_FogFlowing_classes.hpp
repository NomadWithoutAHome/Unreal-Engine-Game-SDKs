﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogFlowing

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FogFlowing.BP_FogFlowing_C
// 0x0080 (0x0320 - 0x02A0)
class ABP_FogFlowing_C final : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Tiling;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Exctinction;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Height;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Wind_Speed;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Add_Global_Volume;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Brightness;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Fade_Size;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               VolumeTexture;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Emissive;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color_Albedo;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Sphere_Radius;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Location_Z;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                        Intensity_Noise;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FogFlowing_C">();
	}
	static class ABP_FogFlowing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FogFlowing_C>();
	}
};
static_assert(alignof(ABP_FogFlowing_C) == 0x000008, "Wrong alignment on ABP_FogFlowing_C");
static_assert(sizeof(ABP_FogFlowing_C) == 0x000320, "Wrong size on ABP_FogFlowing_C");
static_assert(offsetof(ABP_FogFlowing_C, StaticMesh) == 0x0002A0, "Member 'ABP_FogFlowing_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Tiling) == 0x0002A8, "Member 'ABP_FogFlowing_C::Tiling' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Exctinction) == 0x0002B0, "Member 'ABP_FogFlowing_C::Exctinction' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Height) == 0x0002B8, "Member 'ABP_FogFlowing_C::Height' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Wind_Speed) == 0x0002C0, "Member 'ABP_FogFlowing_C::Wind_Speed' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Add_Global_Volume) == 0x0002C8, "Member 'ABP_FogFlowing_C::Add_Global_Volume' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Brightness) == 0x0002D0, "Member 'ABP_FogFlowing_C::Brightness' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Fade_Size) == 0x0002D8, "Member 'ABP_FogFlowing_C::Fade_Size' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, VolumeTexture) == 0x0002E0, "Member 'ABP_FogFlowing_C::VolumeTexture' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Emissive) == 0x0002E8, "Member 'ABP_FogFlowing_C::Emissive' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Color_Albedo) == 0x0002F8, "Member 'ABP_FogFlowing_C::Color_Albedo' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Sphere_Radius) == 0x000308, "Member 'ABP_FogFlowing_C::Sphere_Radius' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Location_Z) == 0x000310, "Member 'ABP_FogFlowing_C::Location_Z' has a wrong offset!");
static_assert(offsetof(ABP_FogFlowing_C, Intensity_Noise) == 0x000318, "Member 'ABP_FogFlowing_C::Intensity_Noise' has a wrong offset!");

}

