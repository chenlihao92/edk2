/*++

Copyright (c) 2007, Intel Corporation
All rights reserved. This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

Module Name:

  EdbCmdBreak.c

Abstract:


--*/

#include "Edb.h"

EFI_DEBUG_STATUS
DebuggerBreakOnCALL (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnCALL

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOC) == EFI_DEBUG_FLAG_EBC_BOC) {
      EDBPrint (L"BOC on\n");
    } else {
      EDBPrint (L"BOC off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOC;
    EDBPrint (L"BOC on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOC;
    EDBPrint (L"BOC off\n");
  } else {
    EDBPrint (L"BOC - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}

EFI_DEBUG_STATUS
DebuggerBreakOnCALLEX (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnCALLEX

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOCX) == EFI_DEBUG_FLAG_EBC_BOCX) {
      EDBPrint (L"BOCX on\n");
    } else {
      EDBPrint (L"BOCX off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOCX;
    EDBPrint (L"BOCX on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOCX;
    EDBPrint (L"BOCX off\n");
  } else {
    EDBPrint (L"BOCX - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}

EFI_DEBUG_STATUS
DebuggerBreakOnRET (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnRET

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOR) == EFI_DEBUG_FLAG_EBC_BOR) {
      EDBPrint (L"BOR on\n");
    } else {
      EDBPrint (L"BOR off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOR;
    EDBPrint (L"BOR on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOR;
    EDBPrint (L"BOR off\n");
  } else {
    EDBPrint (L"BOR - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}

EFI_DEBUG_STATUS
DebuggerBreakOnEntrypoint (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnEntrypoint

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOE) == EFI_DEBUG_FLAG_EBC_BOE) {
      EDBPrint (L"BOE on\n");
    } else {
      EDBPrint (L"BOE off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOE;
    EDBPrint (L"BOE on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOE;
    EDBPrint (L"BOE off\n");
  } else {
    EDBPrint (L"BOE - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}

EFI_DEBUG_STATUS
DebuggerBreakOnThunk (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnThunk

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOT) == EFI_DEBUG_FLAG_EBC_BOT) {
      EDBPrint (L"BOT on\n");
    } else {
      EDBPrint (L"BOT off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOT;
    EDBPrint (L"BOT on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOT;
    EDBPrint (L"BOT off\n");
  } else {
    EDBPrint (L"BOT - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}

EFI_DEBUG_STATUS
DebuggerBreakOnKey (
  IN     CHAR16                    *CommandArg,
  IN     EFI_DEBUGGER_PRIVATE_DATA *DebuggerPrivate,
  IN     EFI_EXCEPTION_TYPE        ExceptionType,
  IN OUT EFI_SYSTEM_CONTEXT        SystemContext
  )
/*++

Routine Description:

  DebuggerCommand - BreakOnKey

Arguments:

  CommandArg      - The argument for this command
  DebuggerPrivate - EBC Debugger private data structure
  InterruptType   - Interrupt type.
  SystemContext   - EBC system context.

Returns:

  EFI_DEBUG_CONTINUE - formal return value

--*/
{
  //
  // Check argument
  //
  if (CommandArg == NULL) {
    if ((DebuggerPrivate->FeatureFlags & EFI_DEBUG_FLAG_EBC_BOK) == EFI_DEBUG_FLAG_EBC_BOK) {
      EDBPrint (L"BOK on\n");
    } else {
      EDBPrint (L"BOK off\n");
    }
  } else if (StriCmp (CommandArg, L"on") == 0) {
    DebuggerPrivate->FeatureFlags |= EFI_DEBUG_FLAG_EBC_BOK;
    EDBPrint (L"BOK on\n");
  } else if (StriCmp (CommandArg, L"off") == 0) {
    DebuggerPrivate->FeatureFlags &= ~EFI_DEBUG_FLAG_EBC_B_BOK;
    EDBPrint (L"BOK off\n");
  } else {
    EDBPrint (L"BOK - argument error\n");
  }

  //
  // Done
  //
  return EFI_DEBUG_CONTINUE;
}
