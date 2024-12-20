/* 
 * Copyright (C) 2024  Austin Larsen
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef _N2DE_ERROR_H_
#define _N2DE_ERROR_H_
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include "../config.h"

#define N2DE_ERROR(...) \
    _error(__FILE__, __FUNCTION__, __LINE__,  __VA_ARGS__);

void _error(const char *file, const char *function, uint16_t line, const char *fmt,...);

#endif // _N2DE_ERROR_H_
