#pragma once


// CR0
// Bit 0 - Bit 31
#define PE 0x1 // Bit 0
#define MP 0x2 // Bit 1
#define EM 0x4 // Bit 2
#define TS 0x8 // Bit 3
#define ET 0x10 // Bit 4
#define NE 0x20 // BIt 5
#define WP 0x10000 // Bit 16
#define AM 0x40000 // Bit 18
#define NW 0x2000000 // Bit 29
#define CD 0x4000000 // Bit 30
#define PG 0x8000000 // Bit 31

//  CR3
#define PWT 0x8
#define PCD 0x10

// CR4
// Bit 0 - Bit 31
#define VME 0x1 // Bit 0
#define PVI 0x2 // Bit 1
#define TSD 0x4 // Bit 2
#define DE 0x8 // Bit 3
#define PSE 0x10 // Bit 4
#define PAE 0x20 // Bit 5
#define MCE 0x40 // Bit 6
#define PGE 0x80 // Bit 7
#define PCE 0x100 // Bit 8
#define OSFXSR 0x200 // Bit 9
#define OSXMMEXCPT 0x400 // Bit 10
#define UMIP 0x800 // Bit 11
#define VMXE 0x1000 // Bit 13
#define SMXE 0x2000 // Bit 14
#define FSGSBASE 0x10000 // Bit 16
#define PCIDE 0x20000 // Bit 17
#define OSXSAVE 0x40000 // Bit 18
#define SMEP 0x100000 // Bit 20
#define SMAP 0x200000 // Bit 21
#define PKE 0x400000 // Bit 22

VOID CR0(DWORD cr0);
VOID CR3(DWORD cr3);
VOID CR4(DWORD cr4);