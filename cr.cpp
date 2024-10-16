#include <Windows.h>
#include <cstdio>
#include "cr.h"

VOID CR4(DWORD cr4) {
	if (cr4 & VME) {

	}

	if (cr4 & PVI) {

	}

	if (cr4 & TSD) {

	}

	if (cr4 & DE) {

	}

	if (cr4 & PSE) {

	}

	if (cr4 & PAE) {

	}

	if (cr4 & MCE) {

	}

	if (cr4 & PGE) {

	}

	if (cr4 & PCE) {

	}

	if (cr4 & OSFXSR) {

	}

	if (cr4 & OSXMMEXCPT) {

	}

	if (cr4 & UMIP) {

	}

	if (cr4 & VMXE) {

	}

	if (cr4 & SMXE) {

	}

	if (cr4 & FSGSBASE) {

	}

	if (cr4 & PCIDE) {

	}

	if (cr4 & OSXSAVE) {

	}

	if (cr4 & SMEP) {

	}

	if (cr4 & SMAP) {

	}

	if (cr4 & PKE) {

	}
}

VOID CR0(DWORD cr0) {
	if (cr0 & PE) {

	}

	if (cr0 & MP) {

	}

	if (cr0 & EM) {

	}

	if (cr0 & TS) {

	}

	if (cr0 & ET) {

	}

	if (cr0 & NE) {

	}

	if (cr0 & WP) {

	}

	if (cr0 & AM) {

	}

	if (cr0 & NW) {

	}

	if (cr0 & CD) {

	}

	if (cr0 & PG) {

	}



}

VOID CR3(DWORD cr3) {
	DWORD pdb = cr3 >> 12;
	if (cr3 & PCD) {

	}
	else {

	}

	if (cr3 & PWT) {

	}
	else {

	}
}