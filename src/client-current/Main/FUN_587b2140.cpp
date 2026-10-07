// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 23 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b2140.

// Ghidra body range 0x587B2140..0x587B2157; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_587b2140_segment_00() {
    __asm {
        // 0x587B2140: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B2144: mov dword ptr [ecx + 0x3dc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B214A: mov dword ptr [ecx + 0x3e0], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2154: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
