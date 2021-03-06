/*
 *  [ BSD License: http://opensource.org/licenses/bsd-license.php ]
 *  ===========================================================================
 *  Copyright (c) 2015, Lakutin Ivan
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 *  TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 *  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 *  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __IL_UTILS_H
#define __IL_UTILS_H

#include <Windows.h>
#include "..\native\native_utils.h"
#include "..\process\process_utils.h"
#include "..\logger\logger_utils.h"

BOOL
IlAllocate(
    HANDLE ProcessHandle,
    SIZE_T Size,
    DWORD Protect,
    LPVOID *Address
);

BOOL
IlWrite(
    HANDLE ProcessHandle,
    LPVOID Address,
    LPVOID Buffer,
    SIZE_T Size
);

BOOL
IlRead(
    HANDLE ProcessHandle,
    LPVOID Address,
    LPVOID Buffer,
    SIZE_T Size
);

BOOL
IlAllocateAndWrite(
    HANDLE ProcessHandle,
    LPVOID Buffer,
    SIZE_T Size,
    DWORD Protect,
    LPVOID *Address
);

BOOL
IlDeallocate(
    HANDLE ProcessHandle,
    LPVOID Address
);

BOOL
IlAllocateWideString(
    HANDLE ProcessHandle,
    LPCWSTR String,
    LPVOID *WideStringAddress
);

BOOL
IlAllocateUnicodeString(
    HANDLE ProcessHandle,
    LPCWSTR WideString,
    LPVOID *UnicodeStringAddress
);

BOOL
IlAllocateUnicodeString32(
    HANDLE ProcessHandle,
    LPCWSTR WideString,
    LPVOID *UnicodeStringAddress
);

BOOL
IlDeallocateUnicodeString(
    HANDLE ProcessHandle,
    LPVOID UnicodeStringAddress
);

BOOL
IlDeallocateUnicodeString32(
    HANDLE ProcessHandle,
    LPVOID UnicodeStringAddress
);

LPVOID
IlGetRemoteModuleProcAddress(
    HANDLE ProcessHandle,
    BOOL IsProcessInitialized,
    BOOL IsModule32,
    LPCWSTR ModuleName,
    LPCSTR ProcName
);

#endif
