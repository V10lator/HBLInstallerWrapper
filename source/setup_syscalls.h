#pragma once

#include <stdint.h>

#define KERN_SYSCALL_TBL_1                          0xFFE84C70 // unknown
#define KERN_SYSCALL_TBL_2                          0xFFE85070 // works with games
#define KERN_SYSCALL_TBL_3                          0xFFE85470 // works with loader
#define KERN_SYSCALL_TBL_4                          0xFFEAAA60 // works with home menu
#define KERN_SYSCALL_TBL_5                          0xFFEAAE60 // works with browser (previously KERN_SYSCALL_TBL)

extern "C" void SC_0x25_KernelCopyData(unsigned int addr, unsigned int src, unsigned int len);

extern "C" void kern_write(void *addr, uint32_t value);

void SetupSyscall();