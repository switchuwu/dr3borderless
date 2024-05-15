#include "pch.h"
#include <iostream>
#include "utils/MemoryMgr.h"
#include "utils/addr.h"
#include "utils/Trampoline.h"

using namespace Memory::VP;

extern "C"
{
	__declspec(dllexport) void InitializeASI()
	{
		Patch<DWORD>(_addr(0x140BE198C) + 4, 0x80CF0000);
	}
}