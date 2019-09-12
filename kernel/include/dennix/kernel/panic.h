/* Copyright (c) 2019 Dennis Wölfing
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* kernel/include/dennix/kernel/panic.h
 * Kernel panic.
 */

#ifndef KERNEL_PANIC_H
#define KERNEL_PANIC_H

#include <dennix/kernel/kernel.h>

struct InterruptContext;

NORETURN void panic(const char* file, unsigned int line, const char* func,
        const char* format, ...) PRINTF_LIKE(4, 5);
NORETURN void panic(const char* file, unsigned int line, const char* func,
        const InterruptContext* context, const char* format, ...)
        PRINTF_LIKE(5, 6);

#define PANIC(...) panic(__FILE__, __LINE__, __func__, __VA_ARGS__)

#endif
