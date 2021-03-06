/*
 * Copyright 2019 Alexandre Julliard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/* this function is part of the import lib */
#if 0
#pragma makedep implib
#endif

#include <stdarg.h>
#include "msvcrt.h"

int __cdecl __stdio_common_vsprintf(unsigned __int64 options, char *str, MSVCRT_size_t len,
                                    const char *format, MSVCRT__locale_t locale, __ms_va_list valist);

int __cdecl _vsnprintf( char *buf, MSVCRT_size_t size, const char *fmt, __ms_va_list args )
{
    return __stdio_common_vsprintf( UCRTBASE_PRINTF_STANDARD_SNPRINTF_BEHAVIOUR,
                                    buf, size, fmt, NULL, args );
}
