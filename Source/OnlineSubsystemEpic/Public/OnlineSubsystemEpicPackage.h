// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

// Can't be #pragma once because other modules may define PACKAGE_SCOPE

// Intended to be the last include in an exported class definition
// Properly defines some members as "public to the module" vs "private to the consumer/user"

// [[ IncludeTool: Inline ]] // Markup to tell IncludeTool that this file is state changing and cannot be optimized out.

#undef PACKAGE_SCOPE
#ifdef ONLINESUBSYSTEMEPIC_PACKAGE
#define PACKAGE_SCOPE public
#else
#define PACKAGE_SCOPE protected
#endif

#ifndef EPIC_SUBSYSTEM
#define EPIC_SUBSYSTEM FName(TEXT("EPIC"))
#endif
