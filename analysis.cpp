#include "analysis.h"
#include <cstdio>

void analysisLinearAddress(WORD pae, WORD pagingMode, DWORD linearAddress) {
	DWORD pde = 0;
	DWORD pte = 0;
	DWORD offset = 0;
	DWORD pdpte = 0;
	if (pae) {
		if (pagingMode == PAGE_4KB) {
			pdpte = (linearAddress >> 30) & PDPTE_29912;
			pde = (linearAddress >> 21) & PDE_29912;
			pte = (linearAddress >> 12) & PTE_29912;
			offset = linearAddress & OFFSET_29912;
			printf("pdpte: %x, pde:%x, pte:%x, offset:%x\n", pdpte, pde, pte, offset);
		}
		else if (pagingMode == PAGE_2MB) {
			pdpte = (linearAddress >> 22) & PDPTE_2921;
			pde = (linearAddress >> 12) & PDE_2921;
			offset = linearAddress & OFFSET_2921;
			printf("pdpte:%x, pde:%x, offset:%x\n", pdpte, pde, offset);
		}
		else {
			return;
		}
	} else{
		if (pagingMode == PAGE_4KB) {
			pde = (linearAddress >> 22) & PDE_101012;
			pte = (linearAddress >> 12) & PTE_101012;
			offset = linearAddress & OFFSET_101012;
			printf("pde:%x, pte:%x, offset:%x\n", pde, pte, offset);
		}
		else if (pagingMode == PAGE_4MB) {
			pde = (linearAddress >> 22) & PDE_1022;
			offset = linearAddress & OFFSET_1022;
			printf("pde:%x, offset:%x\n", pde, offset);
		}
		else {
			return;
		}
	}
}

void analysisPageTableAttribute(DWORD pde) {
	WORD pteAttr = pde & 0xfff;
	if (pteAttr & PRESENT) {
		printf("Page-Table is valid\n");
	}
	else {
		printf("Page-Table is invalid\n");
	}

	if (pteAttr & R_W) {
		printf("Page-Table is writeable\n");
	}
	else {
		printf("Page-Table is read-only\n");
	}
	
	if (pteAttr & U_S) {
		printf("Ring 3 can access\n");
	}
	else {
		printf("Only Ring 0 can access\n");
	}

	if (pteAttr & ACCESSED) {
		printf("Page-Table is Accessed\n");
	}
	else {
		printf("Page-Table is not access\n");
	}

	if (pteAttr & PWT) {

	}

	if (pteAttr & PCD) {

	}

}

void analysisPageAttribute(DWORD pte) {
	WORD pageAttr = pte & 0xfff;
	if (pageAttr & PRESENT) {
		printf("Page is valid\n");
	}
	else {
		printf("Page is invalid\n");
	}

	if (pageAttr & R_W) {
		printf("Page is writeable\n");
	}
	else {
		printf("Page is read-only\n");
	}

	if (pageAttr & U_S) {
		printf("Ring 3 can access\n");
	}
	else {
		printf("Only Ring 0 can access\n");
	}

	if (pageAttr & ACCESSED) {
		printf("Page is Accessed\n");
	}
	else {
		printf("Page is not access\n");
	}

	if (pageAttr & PWT) {

	}

	if (pageAttr & PCD) {

	}

	if (pageAttr & PAT) {

	}

	if (pageAttr & G) {

	}
}