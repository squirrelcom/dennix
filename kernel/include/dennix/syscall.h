/* Copyright (c) 2016, 2017, 2018, 2019 Dennis Wölfing
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

/* kernel/include/dennix/syscall.h
 * Syscall numbers.
 */

#ifndef _DENNIX_SYSCALL_H
#define _DENNIX_SYSCALL_H

#define SYSCALL_EXIT 0
#define SYSCALL_WRITE 1
#define SYSCALL_READ 2
#define SYSCALL_MMAP 3
#define SYSCALL_MUNMAP 4
#define SYSCALL_OPENAT 5
#define SYSCALL_CLOSE 6
#define SYSCALL_REGFORK 7
#define SYSCALL_EXECVE 8
#define SYSCALL_WAITPID 9
#define SYSCALL_FSTATAT 10
#define SYSCALL_READDIR 11
#define SYSCALL_CLOCK_NANOSLEEP 12
#define SYSCALL_TCGETATTR 13
#define SYSCALL_TCSETATTR 14
#define SYSCALL_FCHDIRAT 15
#define SYSCALL_CONFSTR 16
#define SYSCALL_FSTAT 17
#define SYSCALL_MKDIRAT 18
#define SYSCALL_UNLINKAT 19
#define SYSCALL_RENAMEAT 20
#define SYSCALL_LINKAT 21
#define SYSCALL_SYMLINKAT 22
#define SYSCALL_GETPID 23
#define SYSCALL_KILL 24
#define SYSCALL_SIGACTION 25
#define SYSCALL_ABORT 26
#define SYSCALL_CLOCK_GETTIME 27
#define SYSCALL_DUP3 28
#define SYSCALL_ISATTY 29
#define SYSCALL_PIPE2 30
#define SYSCALL_LSEEK 31
#define SYSCALL_UMASK 32
#define SYSCALL_FCHMODAT 33
#define SYSCALL_FCNTL 34
#define SYSCALL_UTIMENSAT 35
#define SYSCALL_DEVCTL 36
#define SYSCALL_GETPGID 37
#define SYSCALL_SETPGID 38
#define SYSCALL_READLINKAT 39
#define SYSCALL_FTRUNCATE 40
#define SYSCALL_SIGPROCMASK 41
#define SYSCALL_ALARM 42

#define NUM_SYSCALLS 43

#endif
