#include "analysis.h"

void analysisLinearAddress(WORD pagingMode, DWORD linearAddress) {
	switch (pagingMode) {
	case Page4KB:
		break;
	case Page4MB:
		break;
	}
	DWORD pde = linearAddress & 0xffc00000;
	DWORD pte = linearAddress & 0x3ff000;
	DWORD offset = linearAddress & 0xfff;
}