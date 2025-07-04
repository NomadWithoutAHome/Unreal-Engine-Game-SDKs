﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XRBase

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class XRBase.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
	static void ClearXRTimedInputActionDelegate(const class FName& ActionPath);
	static EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, const int32 BitRate);
	static void DisconnectRemoteXRDevice();
	static bool EnableHMD(bool bEnable);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const class FName SystemId, EXRTrackedDeviceType DeviceType);
	static bool GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityAsAxisAndLength, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	static bool GetControllerTransformForTime2(class UObject* WorldContext, const int32 ControllerIndex, const class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FRotator* AngularVelocity, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	static bool GetCurrentInteractionProfile(const EControllerHand Hand, class FString* InteractionProfile);
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* position);
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* position);
	static void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	static class FName GetHMDDeviceName();
	static EHMDWornState GetHMDWornState();
	static void GetMotionControllerData(class UObject* WorldContext, const EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	static int32 GetNumOfTrackingSensors();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static float GetPixelDensity();
	static struct FVector2D GetPlayAreaBounds(EHMDTrackingOrigin Origin);
	static bool GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect);
	static EHMDTrackingOrigin GetTrackingOrigin();
	static bool GetTrackingOriginTransform(EHMDTrackingOrigin Origin, struct FTransform* OutTransform);
	static void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index_0);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static class FString GetVersionString();
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static int32 GetXRSystemFlags();
	static bool HasValidTrackingPosition();
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	static bool IsHeadMountedDisplayConnected();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsSpectatorScreenModeControllable();
	static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options);
	static void SetClippingPlanes(float Near, float Far);
	static bool SetHMDColorScaleAndBias(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorBias);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetTrackingOrigin(EHMDTrackingOrigin Origin);
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetXRDisconnectDelegate(const TDelegate<void(const class FString& OutReason)>& InDisconnectedDelegate);
	static void SetXRTimedInputActionDelegate(const class FName& ActionName, const TDelegate<void(const float Value, const struct FTimespan& Time)>& InDelegate);
	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeadMountedDisplayFunctionLibrary">();
	}
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeadMountedDisplayFunctionLibrary>();
	}
};
static_assert(alignof(UHeadMountedDisplayFunctionLibrary) == 0x000008, "Wrong alignment on UHeadMountedDisplayFunctionLibrary");
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x000028, "Wrong size on UHeadMountedDisplayFunctionLibrary");

// Class XRBase.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static TArray<class FName> EnumerateMotionSources();
	static class FName GetActiveTrackingSystemName();
	static int32 GetMaximumMotionTrackedControllerCount();
	static int32 GetMotionTrackingEnabledControllerCount();
	static bool IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrackedDeviceFunctionLibrary">();
	}
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrackedDeviceFunctionLibrary>();
	}
};
static_assert(alignof(UMotionTrackedDeviceFunctionLibrary) == 0x000008, "Wrong alignment on UMotionTrackedDeviceFunctionLibrary");
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x000028, "Wrong size on UMotionTrackedDeviceFunctionLibrary");

// Class XRBase.VRNotificationsComponent
// 0x00C0 (0x0160 - 0x00A0)
class UVRNotificationsComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void()>              HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDTrackingInitializedDelegate;                    // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDRecenteredDelegate;                             // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDLostDelegate;                                   // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDReconnectedDelegate;                            // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDConnectCanceledDelegate;                        // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDPutOnHeadDelegate;                              // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              HMDRemovedFromHeadDelegate;                        // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              VRControllerRecenteredDelegate;                    // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              XRTrackingOriginChangedDelegate;                   // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              XRPlayAreaChangedDelegate;                         // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              XRInteractionProfileChangedDelegate;               // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VRNotificationsComponent">();
	}
	static class UVRNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVRNotificationsComponent>();
	}
};
static_assert(alignof(UVRNotificationsComponent) == 0x000008, "Wrong alignment on UVRNotificationsComponent");
static_assert(sizeof(UVRNotificationsComponent) == 0x000160, "Wrong size on UVRNotificationsComponent");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 0x0000A0, "Member 'UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 0x0000B0, "Member 'UVRNotificationsComponent::HMDTrackingInitializedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 0x0000C0, "Member 'UVRNotificationsComponent::HMDRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 0x0000D0, "Member 'UVRNotificationsComponent::HMDLostDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 0x0000E0, "Member 'UVRNotificationsComponent::HMDReconnectedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 0x0000F0, "Member 'UVRNotificationsComponent::HMDConnectCanceledDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 0x000100, "Member 'UVRNotificationsComponent::HMDPutOnHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 0x000110, "Member 'UVRNotificationsComponent::HMDRemovedFromHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, VRControllerRecenteredDelegate) == 0x000120, "Member 'UVRNotificationsComponent::VRControllerRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, XRTrackingOriginChangedDelegate) == 0x000130, "Member 'UVRNotificationsComponent::XRTrackingOriginChangedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, XRPlayAreaChangedDelegate) == 0x000140, "Member 'UVRNotificationsComponent::XRPlayAreaChangedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, XRInteractionProfileChangedDelegate) == 0x000150, "Member 'UVRNotificationsComponent::XRInteractionProfileChangedDelegate' has a wrong offset!");

// Class XRBase.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRAssetFunctionLibrary">();
	}
	static class UXRAssetFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRAssetFunctionLibrary>();
	}
};
static_assert(alignof(UXRAssetFunctionLibrary) == 0x000008, "Wrong alignment on UXRAssetFunctionLibrary");
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x000028, "Wrong size on UXRAssetFunctionLibrary");

// Class XRBase.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(const class UPrimitiveComponent* LoadedComponent)> OnModelLoaded;  // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class UPrimitiveComponent* LoadedComponent)> OnLoadFailure;  // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    SpawnedComponent;                                  // 0x0058(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTask_LoadXRDeviceVisComponent">();
	}
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncTask_LoadXRDeviceVisComponent>();
	}
};
static_assert(alignof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000008, "Wrong alignment on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000060, "Wrong size on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnModelLoaded) == 0x000030, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnModelLoaded' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnLoadFailure) == 0x000040, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnLoadFailure' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x000058, "Member 'UAsyncTask_LoadXRDeviceVisComponent::SpawnedComponent' has a wrong offset!");

// Class XRBase.XRDeviceVisualizationComponent
// 0x0050 (0x0630 - 0x05E0)
class UXRDeviceVisualizationComponent final : public UStaticMeshComponent
{
public:
	bool                                          bIsVisualizationActive;                            // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DisplayModelSource;                                // 0x05E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CustomDisplayMesh;                                 // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             DisplayMeshMaterialOverrides;                      // 0x05F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_608[0x28];                                     // 0x0608(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetDisplayModelSource(const class FName NewDisplayModelSource);
	void SetIsRenderingActive(bool bRenderingIsActive);
	void SetIsVisualizationActive(bool bNewVisualizationState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRDeviceVisualizationComponent">();
	}
	static class UXRDeviceVisualizationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRDeviceVisualizationComponent>();
	}
};
static_assert(alignof(UXRDeviceVisualizationComponent) == 0x000010, "Wrong alignment on UXRDeviceVisualizationComponent");
static_assert(sizeof(UXRDeviceVisualizationComponent) == 0x000630, "Wrong size on UXRDeviceVisualizationComponent");
static_assert(offsetof(UXRDeviceVisualizationComponent, bIsVisualizationActive) == 0x0005E0, "Member 'UXRDeviceVisualizationComponent::bIsVisualizationActive' has a wrong offset!");
static_assert(offsetof(UXRDeviceVisualizationComponent, DisplayModelSource) == 0x0005E4, "Member 'UXRDeviceVisualizationComponent::DisplayModelSource' has a wrong offset!");
static_assert(offsetof(UXRDeviceVisualizationComponent, CustomDisplayMesh) == 0x0005F0, "Member 'UXRDeviceVisualizationComponent::CustomDisplayMesh' has a wrong offset!");
static_assert(offsetof(UXRDeviceVisualizationComponent, DisplayMeshMaterialOverrides) == 0x0005F8, "Member 'UXRDeviceVisualizationComponent::DisplayMeshMaterialOverrides' has a wrong offset!");

// Class XRBase.XRLoadingScreenFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRLoadingScreenFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
	static void ClearLoadingScreenSplashes();
	static void HideLoadingScreen();
	static void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	static void ShowLoadingScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRLoadingScreenFunctionLibrary">();
	}
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRLoadingScreenFunctionLibrary>();
	}
};
static_assert(alignof(UXRLoadingScreenFunctionLibrary) == 0x000008, "Wrong alignment on UXRLoadingScreenFunctionLibrary");
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x000028, "Wrong size on UXRLoadingScreenFunctionLibrary");

}

