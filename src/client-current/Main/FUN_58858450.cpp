// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858450.

// Ghidra body range 0x58858450..0x58858462; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_58858450_segment_00() {
    __asm {
        // 0x58858450: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58858454: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58858458: mov dword ptr [ecx + edx*4 + 0x8e8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885845F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
