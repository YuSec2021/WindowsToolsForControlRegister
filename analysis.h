#pragma once
#include <Windows.h>




// 2 9 9 12 - 

// 10 22 - 4MB
#define OFFSET

// 10 10 12  - 4KB
#define OFFSET 0xfff
#define PDE 0x3ff
#define PTE 0xffc

void analysisLinearAddress(WORD pagingMode, DWORD linearAddress);