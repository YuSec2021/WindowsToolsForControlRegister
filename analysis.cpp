#include "analysis.h"
#include <cstdio>

void analysisLinearAddress(WORD pagingMode, DWORD linearAddress) {
	DWORD pde = 0;
	DWORD pte = 0;
	DWORD offset = 0;
	switch (pagingMode) {
	case PAGE_4KB:
		pde = (linearAddress >> 22) & PDE_101012;
		pte = (linearAddress >> 12)& PTE_101012;
		offset = linearAddress & OFFSET_101012;
		printf("pde:%x, pte:%x, offset:%x\n", pde, pte, offset);
		break;
	case PAGE_4MB:
		break;
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