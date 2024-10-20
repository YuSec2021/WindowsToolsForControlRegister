#pragma once
#include <Windows.h>


// 64bit
// ...


// 32bit
#define PAGE_4KB 0
#define PAGE_4MB 1
#define PAGE_2MB 2

// PAE = 1
// 2 9 9 12 - 4KB
#define OFFSET_29912 0xfff // 12
#define PTE_29912 0x1ff // 9
#define PDE_29912 0x1ff // 9
#define PDPTE_29912 0x3 // 2

// 2 9 21 - 2MB
#define OFFSET_2921 0xfff // 12
#define PDE_2921 0x1ff // 9
#define PDPTE_2921 0x3 // 2

// PAE = 0
// 10 22 - 4MB
#define OFFSET_1022 0x3fffff // 22
#define PDE_1022 0xfff // 10

// 10 10 12  - 4KB
#define OFFSET_101012 0xfff // 12
#define PTE_101012 0x3ff // 10
#define PDE_101012 0xfff // 10

// Attribute
// PDE and PTE attr
#define PRESENT 0x1
#define R_W 0x2
#define U_S 0x4
#define PWT 0x8
#define PCD 0x10
#define ACCESSED 0x20

// PDE only
#define PS 0x80

// PTE only
#define PAT 0x80
#define G 0x100


void analysisLinearAddress(WORD pae, WORD pagingMode, DWORD linearAddress);

void analysisPageTableAttribute(DWORD pde);
void analysisPageAttribute(DWORD pte);