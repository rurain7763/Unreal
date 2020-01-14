// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/DoorEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorEvent() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDoorEvent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDoorEvent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "DoorEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDoorEvent::StaticRegisterNativesUDoorEvent()
	{
	}
	UClass* Z_Construct_UClass_UDoorEvent_NoRegister()
	{
		return UDoorEvent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorEvent.h" },
		{ "ModuleRelativePath", "DoorEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorEvent_Statics::NewProp_pressurePlate_MetaData[] = {
		{ "Category", "DoorEvent" },
		{ "ModuleRelativePath", "DoorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorEvent_Statics::NewProp_pressurePlate = { "pressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorEvent, pressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorEvent_Statics::NewProp_pressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorEvent_Statics::NewProp_pressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorEvent_Statics::NewProp_onClose_MetaData[] = {
		{ "ModuleRelativePath", "DoorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDoorEvent_Statics::NewProp_onClose = { "onClose", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorEvent, onClose), Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDoorEvent_Statics::NewProp_onClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorEvent_Statics::NewProp_onClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorEvent_Statics::NewProp_onOpen_MetaData[] = {
		{ "ModuleRelativePath", "DoorEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDoorEvent_Statics::NewProp_onOpen = { "onOpen", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorEvent, onOpen), Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDoorEvent_Statics::NewProp_onOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorEvent_Statics::NewProp_onOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorEvent_Statics::NewProp_pressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorEvent_Statics::NewProp_onClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorEvent_Statics::NewProp_onOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorEvent_Statics::ClassParams = {
		&UDoorEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorEvent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorEvent, 2225785016);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UDoorEvent>()
	{
		return UDoorEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorEvent(Z_Construct_UClass_UDoorEvent, &UDoorEvent::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UDoorEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
