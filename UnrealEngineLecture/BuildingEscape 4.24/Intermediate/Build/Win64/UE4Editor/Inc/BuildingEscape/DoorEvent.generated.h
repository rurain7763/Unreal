// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_DoorEvent_generated_h
#error "DoorEvent.generated.h already included, missing '#pragma once' in DoorEvent.h"
#endif
#define BUILDINGESCAPE_DoorEvent_generated_h

#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_10_DELEGATE \
static inline void FDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& DoorEvent) \
{ \
	DoorEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_SPARSE_DATA
#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_RPC_WRAPPERS
#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorEvent(); \
	friend struct Z_Construct_UClass_UDoorEvent_Statics; \
public: \
	DECLARE_CLASS(UDoorEvent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDoorEvent)


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDoorEvent(); \
	friend struct Z_Construct_UClass_UDoorEvent_Statics; \
public: \
	DECLARE_CLASS(UDoorEvent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDoorEvent)


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorEvent(UDoorEvent&&); \
	NO_API UDoorEvent(const UDoorEvent&); \
public:


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorEvent(UDoorEvent&&); \
	NO_API UDoorEvent(const UDoorEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorEvent)


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pressurePlate() { return STRUCT_OFFSET(UDoorEvent, pressurePlate); }


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_12_PROLOG
#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_SPARSE_DATA \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_RPC_WRAPPERS \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_INCLASS \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_SPARSE_DATA \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UDoorEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_4_24_Source_BuildingEscape_DoorEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
