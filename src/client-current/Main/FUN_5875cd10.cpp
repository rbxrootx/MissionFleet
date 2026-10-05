// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875CD10 .. +0x1E bytes.
// Source symbol alias: FUN_5875cd10.
extern "C" __declspec(naked) void FUN_5875cd10() {
    __asm {
        // 0x5875CD10: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875CD15: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5875CD18: cmp eax, dword ptr [ecx + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875CD1B: je 0x5875cd22
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875CD1D: cmp eax, dword ptr [ecx + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5875CD20: jne 0x5875cd2d
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5875CD22: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875CD28: jmp 0x587ba550
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5875CD2D: ret
        __asm _emit 0xC3
    }
}
