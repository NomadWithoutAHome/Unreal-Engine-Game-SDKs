﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ARUtilities

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ARUtilities.ARPassthroughManager.GetPassthroughMaterialUpdateComponent
// 0x0008 (0x0008 - 0x0000)
struct ARPassthroughManager_GetPassthroughMaterialUpdateComponent final
{
public:
	class UPassthroughMaterialUpdateComponent*    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ARPassthroughManager_GetPassthroughMaterialUpdateComponent) == 0x000008, "Wrong alignment on ARPassthroughManager_GetPassthroughMaterialUpdateComponent");
static_assert(sizeof(ARPassthroughManager_GetPassthroughMaterialUpdateComponent) == 0x000008, "Wrong size on ARPassthroughManager_GetPassthroughMaterialUpdateComponent");
static_assert(offsetof(ARPassthroughManager_GetPassthroughMaterialUpdateComponent, ReturnValue) == 0x000000, "Member 'ARPassthroughManager_GetPassthroughMaterialUpdateComponent::ReturnValue' has a wrong offset!");

// Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateCameraTextureParam
// 0x0018 (0x0018 - 0x0000)
struct ARUtilitiesFunctionLibrary_UpdateCameraTextureParam final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               CameraTexture;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ColorScale;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ARUtilitiesFunctionLibrary_UpdateCameraTextureParam) == 0x000008, "Wrong alignment on ARUtilitiesFunctionLibrary_UpdateCameraTextureParam");
static_assert(sizeof(ARUtilitiesFunctionLibrary_UpdateCameraTextureParam) == 0x000018, "Wrong size on ARUtilitiesFunctionLibrary_UpdateCameraTextureParam");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateCameraTextureParam, MaterialInstance) == 0x000000, "Member 'ARUtilitiesFunctionLibrary_UpdateCameraTextureParam::MaterialInstance' has a wrong offset!");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateCameraTextureParam, CameraTexture) == 0x000008, "Member 'ARUtilitiesFunctionLibrary_UpdateCameraTextureParam::CameraTexture' has a wrong offset!");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateCameraTextureParam, ColorScale) == 0x000010, "Member 'ARUtilitiesFunctionLibrary_UpdateCameraTextureParam::ColorScale' has a wrong offset!");

// Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateSceneDepthTexture
// 0x0018 (0x0018 - 0x0000)
struct ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               SceneDepthTexture;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DepthToMeterScale;                                 // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture) == 0x000008, "Wrong alignment on ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture");
static_assert(sizeof(ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture) == 0x000018, "Wrong size on ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture, MaterialInstance) == 0x000000, "Member 'ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture::MaterialInstance' has a wrong offset!");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture, SceneDepthTexture) == 0x000008, "Member 'ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture::SceneDepthTexture' has a wrong offset!");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture, DepthToMeterScale) == 0x000010, "Member 'ARUtilitiesFunctionLibrary_UpdateSceneDepthTexture::DepthToMeterScale' has a wrong offset!");

// Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateWorldToMeterScale
// 0x0010 (0x0010 - 0x0000)
struct ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldToMeterScale;                                 // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale) == 0x000008, "Wrong alignment on ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale");
static_assert(sizeof(ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale) == 0x000010, "Wrong size on ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale, MaterialInstance) == 0x000000, "Member 'ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale::MaterialInstance' has a wrong offset!");
static_assert(offsetof(ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale, WorldToMeterScale) == 0x000008, "Member 'ARUtilitiesFunctionLibrary_UpdateWorldToMeterScale::WorldToMeterScale' has a wrong offset!");

// Function ARUtilities.PassthroughMaterialUpdateComponent.AddAffectedComponent
// 0x0008 (0x0008 - 0x0000)
struct PassthroughMaterialUpdateComponent_AddAffectedComponent final
{
public:
	class UPrimitiveComponent*                    InComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PassthroughMaterialUpdateComponent_AddAffectedComponent) == 0x000008, "Wrong alignment on PassthroughMaterialUpdateComponent_AddAffectedComponent");
static_assert(sizeof(PassthroughMaterialUpdateComponent_AddAffectedComponent) == 0x000008, "Wrong size on PassthroughMaterialUpdateComponent_AddAffectedComponent");
static_assert(offsetof(PassthroughMaterialUpdateComponent_AddAffectedComponent, InComponent) == 0x000000, "Member 'PassthroughMaterialUpdateComponent_AddAffectedComponent::InComponent' has a wrong offset!");

// Function ARUtilities.PassthroughMaterialUpdateComponent.RemoveAffectedComponent
// 0x0008 (0x0008 - 0x0000)
struct PassthroughMaterialUpdateComponent_RemoveAffectedComponent final
{
public:
	class UPrimitiveComponent*                    InComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PassthroughMaterialUpdateComponent_RemoveAffectedComponent) == 0x000008, "Wrong alignment on PassthroughMaterialUpdateComponent_RemoveAffectedComponent");
static_assert(sizeof(PassthroughMaterialUpdateComponent_RemoveAffectedComponent) == 0x000008, "Wrong size on PassthroughMaterialUpdateComponent_RemoveAffectedComponent");
static_assert(offsetof(PassthroughMaterialUpdateComponent_RemoveAffectedComponent, InComponent) == 0x000000, "Member 'PassthroughMaterialUpdateComponent_RemoveAffectedComponent::InComponent' has a wrong offset!");

// Function ARUtilities.PassthroughMaterialUpdateComponent.SetPassthroughDebugColor
// 0x0010 (0x0010 - 0x0000)
struct PassthroughMaterialUpdateComponent_SetPassthroughDebugColor final
{
public:
	struct FLinearColor                           NewDebugColor;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PassthroughMaterialUpdateComponent_SetPassthroughDebugColor) == 0x000004, "Wrong alignment on PassthroughMaterialUpdateComponent_SetPassthroughDebugColor");
static_assert(sizeof(PassthroughMaterialUpdateComponent_SetPassthroughDebugColor) == 0x000010, "Wrong size on PassthroughMaterialUpdateComponent_SetPassthroughDebugColor");
static_assert(offsetof(PassthroughMaterialUpdateComponent_SetPassthroughDebugColor, NewDebugColor) == 0x000000, "Member 'PassthroughMaterialUpdateComponent_SetPassthroughDebugColor::NewDebugColor' has a wrong offset!");

}

