﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MassRepresentation

#include "Basic.hpp"

#include "MassEntity_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "MassRepresentation_structs.hpp"
#include "MassSpawner_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MassRepresentation.MassDistanceLODProcessor
// 0x07F0 (0x08B0 - 0x00C0)
class alignas(0x10) UMassDistanceLODProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x7E8];                                     // 0x00C0(0x07E8)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x08A8(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassDistanceLODProcessor">();
	}
	static class UMassDistanceLODProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassDistanceLODProcessor>();
	}
};
static_assert(alignof(UMassDistanceLODProcessor) == 0x000010, "Wrong alignment on UMassDistanceLODProcessor");
static_assert(sizeof(UMassDistanceLODProcessor) == 0x0008B0, "Wrong size on UMassDistanceLODProcessor");
static_assert(offsetof(UMassDistanceLODProcessor, FilterTag) == 0x0008A8, "Member 'UMassDistanceLODProcessor::FilterTag' has a wrong offset!");

// Class MassRepresentation.MassDistanceVisualizationTrait
// 0x00F8 (0x0120 - 0x0028)
class UMassDistanceVisualizationTrait : public UMassEntityTraitBase
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStaticMeshInstanceVisualizationDesc   StaticMeshInstanceDesc;                            // 0x0030(0x0080)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     HighResTemplateActor;                              // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     LowResTemplateActor;                               // 0x00B8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;                    // 0x00C0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassRepresentationParameters          Params_0;                                          // 0x00C8(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMassDistanceLODParameters             LODParams;                                         // 0x00F0(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAllowServerSideVisualization;                     // 0x0110(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0xF];                                      // 0x0111(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassDistanceVisualizationTrait">();
	}
	static class UMassDistanceVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassDistanceVisualizationTrait>();
	}
};
static_assert(alignof(UMassDistanceVisualizationTrait) == 0x000010, "Wrong alignment on UMassDistanceVisualizationTrait");
static_assert(sizeof(UMassDistanceVisualizationTrait) == 0x000120, "Wrong size on UMassDistanceVisualizationTrait");
static_assert(offsetof(UMassDistanceVisualizationTrait, StaticMeshInstanceDesc) == 0x000030, "Member 'UMassDistanceVisualizationTrait::StaticMeshInstanceDesc' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, HighResTemplateActor) == 0x0000B0, "Member 'UMassDistanceVisualizationTrait::HighResTemplateActor' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, LowResTemplateActor) == 0x0000B8, "Member 'UMassDistanceVisualizationTrait::LowResTemplateActor' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, RepresentationSubsystemClass) == 0x0000C0, "Member 'UMassDistanceVisualizationTrait::RepresentationSubsystemClass' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, Params_0) == 0x0000C8, "Member 'UMassDistanceVisualizationTrait::Params_0' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, LODParams) == 0x0000F0, "Member 'UMassDistanceVisualizationTrait::LODParams' has a wrong offset!");
static_assert(offsetof(UMassDistanceVisualizationTrait, bAllowServerSideVisualization) == 0x000110, "Member 'UMassDistanceVisualizationTrait::bAllowServerSideVisualization' has a wrong offset!");

// Class MassRepresentation.MassVisualizationTrait
// 0x0118 (0x0140 - 0x0028)
class UMassVisualizationTrait : public UMassEntityTraitBase
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStaticMeshInstanceVisualizationDesc   StaticMeshInstanceDesc;                            // 0x0030(0x0080)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     HighResTemplateActor;                              // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     LowResTemplateActor;                               // 0x00B8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;                    // 0x00C0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassRepresentationParameters          Params_0;                                          // 0x00C8(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMassVisualizationLODParameters        LODParams;                                         // 0x00F0(0x0048)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bAllowServerSideVisualization;                     // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationTrait">();
	}
	static class UMassVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationTrait>();
	}
};
static_assert(alignof(UMassVisualizationTrait) == 0x000010, "Wrong alignment on UMassVisualizationTrait");
static_assert(sizeof(UMassVisualizationTrait) == 0x000140, "Wrong size on UMassVisualizationTrait");
static_assert(offsetof(UMassVisualizationTrait, StaticMeshInstanceDesc) == 0x000030, "Member 'UMassVisualizationTrait::StaticMeshInstanceDesc' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, HighResTemplateActor) == 0x0000B0, "Member 'UMassVisualizationTrait::HighResTemplateActor' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, LowResTemplateActor) == 0x0000B8, "Member 'UMassVisualizationTrait::LowResTemplateActor' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, RepresentationSubsystemClass) == 0x0000C0, "Member 'UMassVisualizationTrait::RepresentationSubsystemClass' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, Params_0) == 0x0000C8, "Member 'UMassVisualizationTrait::Params_0' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, LODParams) == 0x0000F0, "Member 'UMassVisualizationTrait::LODParams' has a wrong offset!");
static_assert(offsetof(UMassVisualizationTrait, bAllowServerSideVisualization) == 0x000138, "Member 'UMassVisualizationTrait::bAllowServerSideVisualization' has a wrong offset!");

// Class MassRepresentation.MassMovableVisualizationTrait
// 0x0000 (0x0140 - 0x0140)
class UMassMovableVisualizationTrait final : public UMassVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassMovableVisualizationTrait">();
	}
	static class UMassMovableVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassMovableVisualizationTrait>();
	}
};
static_assert(alignof(UMassMovableVisualizationTrait) == 0x000010, "Wrong alignment on UMassMovableVisualizationTrait");
static_assert(sizeof(UMassMovableVisualizationTrait) == 0x000140, "Wrong size on UMassMovableVisualizationTrait");

// Class MassRepresentation.MassRepresentationActorManagement
// 0x0000 (0x0028 - 0x0028)
class UMassRepresentationActorManagement : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationActorManagement">();
	}
	static class UMassRepresentationActorManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationActorManagement>();
	}
};
static_assert(alignof(UMassRepresentationActorManagement) == 0x000008, "Wrong alignment on UMassRepresentationActorManagement");
static_assert(sizeof(UMassRepresentationActorManagement) == 0x000028, "Wrong size on UMassRepresentationActorManagement");

// Class MassRepresentation.MassRepresentationProcessor
// 0x02B0 (0x0370 - 0x00C0)
class UMassRepresentationProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x2A0];                                     // 0x00C0(0x02A0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMassRepresentationUpdateParams        UpdateParams;                                      // 0x0360(0x0001)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_361[0xF];                                      // 0x0361(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationProcessor">();
	}
	static class UMassRepresentationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationProcessor>();
	}
};
static_assert(alignof(UMassRepresentationProcessor) == 0x000008, "Wrong alignment on UMassRepresentationProcessor");
static_assert(sizeof(UMassRepresentationProcessor) == 0x000370, "Wrong size on UMassRepresentationProcessor");
static_assert(offsetof(UMassRepresentationProcessor, UpdateParams) == 0x000360, "Member 'UMassRepresentationProcessor::UpdateParams' has a wrong offset!");

// Class MassRepresentation.MassVisualizationProcessor
// 0x0000 (0x0370 - 0x0370)
class UMassVisualizationProcessor : public UMassRepresentationProcessor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationProcessor">();
	}
	static class UMassVisualizationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationProcessor>();
	}
};
static_assert(alignof(UMassVisualizationProcessor) == 0x000008, "Wrong alignment on UMassVisualizationProcessor");
static_assert(sizeof(UMassVisualizationProcessor) == 0x000370, "Wrong size on UMassVisualizationProcessor");

// Class MassRepresentation.MassRepresentationFragmentDestructor
// 0x02A8 (0x0380 - 0x00D8)
class UMassRepresentationFragmentDestructor final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_D8[0x2A8];                                     // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationFragmentDestructor">();
	}
	static class UMassRepresentationFragmentDestructor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationFragmentDestructor>();
	}
};
static_assert(alignof(UMassRepresentationFragmentDestructor) == 0x000008, "Wrong alignment on UMassRepresentationFragmentDestructor");
static_assert(sizeof(UMassRepresentationFragmentDestructor) == 0x000380, "Wrong size on UMassRepresentationFragmentDestructor");

// Class MassRepresentation.MassRepresentationSubsystem
// 0x0098 (0x00D0 - 0x0038)
class UMassRepresentationSubsystem : public UMassSubsystemBase
{
public:
	TArray<TSubclassOf<class AActor>>             TemplateActors;                                    // 0x0038(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMassVisualizationComponent*            VisualizationComponent;                            // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMassVisualizer*                        Visualizer;                                        // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMassActorSpawnerSubsystem*             ActorSpawnerSubsystem;                             // 0x0058(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorldPartitionSubsystem*               WorldPartitionSubsystem;                           // 0x0070(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_78[0x58];                                      // 0x0078(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassRepresentationSubsystem">();
	}
	static class UMassRepresentationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassRepresentationSubsystem>();
	}
};
static_assert(alignof(UMassRepresentationSubsystem) == 0x000008, "Wrong alignment on UMassRepresentationSubsystem");
static_assert(sizeof(UMassRepresentationSubsystem) == 0x0000D0, "Wrong size on UMassRepresentationSubsystem");
static_assert(offsetof(UMassRepresentationSubsystem, TemplateActors) == 0x000038, "Member 'UMassRepresentationSubsystem::TemplateActors' has a wrong offset!");
static_assert(offsetof(UMassRepresentationSubsystem, VisualizationComponent) == 0x000048, "Member 'UMassRepresentationSubsystem::VisualizationComponent' has a wrong offset!");
static_assert(offsetof(UMassRepresentationSubsystem, Visualizer) == 0x000050, "Member 'UMassRepresentationSubsystem::Visualizer' has a wrong offset!");
static_assert(offsetof(UMassRepresentationSubsystem, ActorSpawnerSubsystem) == 0x000058, "Member 'UMassRepresentationSubsystem::ActorSpawnerSubsystem' has a wrong offset!");
static_assert(offsetof(UMassRepresentationSubsystem, WorldPartitionSubsystem) == 0x000070, "Member 'UMassRepresentationSubsystem::WorldPartitionSubsystem' has a wrong offset!");

// Class MassRepresentation.MassStationaryDistanceVisualizationTrait
// 0x0000 (0x0120 - 0x0120)
class UMassStationaryDistanceVisualizationTrait final : public UMassDistanceVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryDistanceVisualizationTrait">();
	}
	static class UMassStationaryDistanceVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryDistanceVisualizationTrait>();
	}
};
static_assert(alignof(UMassStationaryDistanceVisualizationTrait) == 0x000010, "Wrong alignment on UMassStationaryDistanceVisualizationTrait");
static_assert(sizeof(UMassStationaryDistanceVisualizationTrait) == 0x000120, "Wrong size on UMassStationaryDistanceVisualizationTrait");

// Class MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
// 0x02A8 (0x0380 - 0x00D8)
class UMassStationaryISMRepresentationFragmentDestructor final : public UMassObserverProcessor
{
public:
	uint8                                         Pad_D8[0x2A8];                                     // 0x00D8(0x02A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryISMRepresentationFragmentDestructor">();
	}
	static class UMassStationaryISMRepresentationFragmentDestructor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryISMRepresentationFragmentDestructor>();
	}
};
static_assert(alignof(UMassStationaryISMRepresentationFragmentDestructor) == 0x000008, "Wrong alignment on UMassStationaryISMRepresentationFragmentDestructor");
static_assert(sizeof(UMassStationaryISMRepresentationFragmentDestructor) == 0x000380, "Wrong size on UMassStationaryISMRepresentationFragmentDestructor");

// Class MassRepresentation.MassStationaryISMSwitcherProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassStationaryISMSwitcherProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x2A0];                                     // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryISMSwitcherProcessor">();
	}
	static class UMassStationaryISMSwitcherProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryISMSwitcherProcessor>();
	}
};
static_assert(alignof(UMassStationaryISMSwitcherProcessor) == 0x000008, "Wrong alignment on UMassStationaryISMSwitcherProcessor");
static_assert(sizeof(UMassStationaryISMSwitcherProcessor) == 0x000360, "Wrong size on UMassStationaryISMSwitcherProcessor");

// Class MassRepresentation.MassStationaryVisualizationTrait
// 0x0000 (0x0140 - 0x0140)
class UMassStationaryVisualizationTrait final : public UMassVisualizationTrait
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassStationaryVisualizationTrait">();
	}
	static class UMassStationaryVisualizationTrait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassStationaryVisualizationTrait>();
	}
};
static_assert(alignof(UMassStationaryVisualizationTrait) == 0x000010, "Wrong alignment on UMassStationaryVisualizationTrait");
static_assert(sizeof(UMassStationaryVisualizationTrait) == 0x000140, "Wrong size on UMassStationaryVisualizationTrait");

// Class MassRepresentation.MassUpdateISMProcessor
// 0x02A0 (0x0360 - 0x00C0)
class UMassUpdateISMProcessor final : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0x2A0];                                     // 0x00C0(0x02A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassUpdateISMProcessor">();
	}
	static class UMassUpdateISMProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassUpdateISMProcessor>();
	}
};
static_assert(alignof(UMassUpdateISMProcessor) == 0x000008, "Wrong alignment on UMassUpdateISMProcessor");
static_assert(sizeof(UMassUpdateISMProcessor) == 0x000360, "Wrong size on UMassUpdateISMProcessor");

// Class MassRepresentation.MassVisualizationComponent
// 0x0160 (0x0200 - 0x00A0)
class UMassVisualizationComponent final : public UActorComponent
{
public:
	TArray<struct FMassInstancedStaticMeshInfo>   InstancedStaticMeshInfos;                          // 0x00A0(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_B0[0x150];                                     // 0x00B0(0x0150)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationComponent">();
	}
	static class UMassVisualizationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationComponent>();
	}
};
static_assert(alignof(UMassVisualizationComponent) == 0x000008, "Wrong alignment on UMassVisualizationComponent");
static_assert(sizeof(UMassVisualizationComponent) == 0x000200, "Wrong size on UMassVisualizationComponent");
static_assert(offsetof(UMassVisualizationComponent, InstancedStaticMeshInfos) == 0x0000A0, "Member 'UMassVisualizationComponent::InstancedStaticMeshInfos' has a wrong offset!");

// Class MassRepresentation.MassVisualizationLODProcessor
// 0x0AA0 (0x0B60 - 0x00C0)
class alignas(0x10) UMassVisualizationLODProcessor : public UMassProcessor
{
public:
	uint8                                         Pad_C0[0xA88];                                     // 0x00C0(0x0A88)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptStruct*                          FilterTag;                                         // 0x0B48(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDoAdjustmentFromCount;                            // 0x0B50(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B51[0xF];                                      // 0x0B51(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizationLODProcessor">();
	}
	static class UMassVisualizationLODProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassVisualizationLODProcessor>();
	}
};
static_assert(alignof(UMassVisualizationLODProcessor) == 0x000010, "Wrong alignment on UMassVisualizationLODProcessor");
static_assert(sizeof(UMassVisualizationLODProcessor) == 0x000B60, "Wrong size on UMassVisualizationLODProcessor");
static_assert(offsetof(UMassVisualizationLODProcessor, FilterTag) == 0x000B48, "Member 'UMassVisualizationLODProcessor::FilterTag' has a wrong offset!");
static_assert(offsetof(UMassVisualizationLODProcessor, bDoAdjustmentFromCount) == 0x000B50, "Member 'UMassVisualizationLODProcessor::bDoAdjustmentFromCount' has a wrong offset!");

// Class MassRepresentation.MassVisualizer
// 0x0008 (0x0298 - 0x0290)
class AMassVisualizer final : public AActor
{
public:
	class UMassVisualizationComponent*            VisComponent;                                      // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassVisualizer">();
	}
	static class AMassVisualizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMassVisualizer>();
	}
};
static_assert(alignof(AMassVisualizer) == 0x000008, "Wrong alignment on AMassVisualizer");
static_assert(sizeof(AMassVisualizer) == 0x000298, "Wrong size on AMassVisualizer");
static_assert(offsetof(AMassVisualizer, VisComponent) == 0x000290, "Member 'AMassVisualizer::VisComponent' has a wrong offset!");

}

