// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef SUMMERPROJECT2015_SummerProject2015GameMode_generated_h
#error "SummerProject2015GameMode.generated.h already included, missing '#pragma once' in SummerProject2015GameMode.h"
#endif
#define SUMMERPROJECT2015_SummerProject2015GameMode_generated_h

#define ASummerProject2015GameMode_EVENTPARMS
#define ASummerProject2015GameMode_RPC_WRAPPERS
#define ASummerProject2015GameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	static inline void StaticChecks_Implementation_Validate() \
	{ \
	}


#define ASummerProject2015GameMode_CALLBACK_WRAPPERS
#define ASummerProject2015GameMode_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASummerProject2015GameMode(); \
	friend SUMMERPROJECT2015_API class UClass* Z_Construct_UClass_ASummerProject2015GameMode(); \
	public: \
	DECLARE_CLASS(ASummerProject2015GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, SummerProject2015, NO_API) \
	DECLARE_SERIALIZER(ASummerProject2015GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ASummerProject2015GameMode*>(this); }


#define ASummerProject2015GameMode_INCLASS \
	private: \
	static void StaticRegisterNativesASummerProject2015GameMode(); \
	friend SUMMERPROJECT2015_API class UClass* Z_Construct_UClass_ASummerProject2015GameMode(); \
	public: \
	DECLARE_CLASS(ASummerProject2015GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, SummerProject2015, NO_API) \
	DECLARE_SERIALIZER(ASummerProject2015GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ASummerProject2015GameMode*>(this); }


#define ASummerProject2015GameMode_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASummerProject2015GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASummerProject2015GameMode) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASummerProject2015GameMode(const ASummerProject2015GameMode& InCopy); \
public:


#define ASummerProject2015GameMode_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASummerProject2015GameMode(const class FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASummerProject2015GameMode(const ASummerProject2015GameMode& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASummerProject2015GameMode)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ASummerProject2015GameMode


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ASummerProject2015GameMode_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASummerProject2015GameMode_RPC_WRAPPERS \
	ASummerProject2015GameMode_CALLBACK_WRAPPERS \
	ASummerProject2015GameMode_INCLASS \
	ASummerProject2015GameMode_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASummerProject2015GameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	ASummerProject2015GameMode_CALLBACK_WRAPPERS \
	ASummerProject2015GameMode_INCLASS_NO_PURE_DECLS \
	ASummerProject2015GameMode_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP

