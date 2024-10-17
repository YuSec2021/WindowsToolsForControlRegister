#include <Windows.h>
#include "cr.h"
#include "analysis.h"
#include <cstdio>

int main() {

	//DWORD _cr4 = 0x000406d9;
	//DWORD _cr0 = 0x80010031;
	//DWORD _cr3 = 0x00185000;

	//CR0(_cr0);
	//CR3(_cr3);
	//CR4(_cr4);
	
	DWORD linearaddress = 0;
	while (true) {
		printf("Input LinearAddress: ");
		scanf("%x", &linearaddress);
		analysisLinearAddress(0, linearaddress);
	}


	//DWORD pde = 0;
	//printf("PDE: ");
	//scanf("%x", &pde);
	//analysisPageTableAttribute(pde);

	//DWORD pte = 0;
	//printf("PTE: ");
	//scanf("%x", &pte);
	//analysisPageAttribute(pte);

	return 0;
}