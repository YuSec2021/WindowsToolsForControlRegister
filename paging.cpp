#include <Windows.h>
#include "cr.h"

int main() {

	DWORD _cr4 = 0x000406d9;
	DWORD _cr0 = 0x80010031;
	DWORD _cr3 = 0x00185000;

	CR0(_cr0);
	CR3(_cr3);
	CR4(_cr4);
	

	return 0;
}