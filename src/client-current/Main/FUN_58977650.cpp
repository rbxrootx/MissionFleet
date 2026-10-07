// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 15 bytes in 1 exact ranges.
// Source symbol alias: FUN_58977650.

// Ghidra body range 0x58977650..0x5897765F; 15 mapped bytes.
extern "C" __declspec(naked) void FUN_58977650_segment_00() {
    __asm {
        // 0x58977650: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58977654: push eax
        __asm _emit 0x50
        // 0x58977655: call dword ptr [0x5898c30c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897765B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897765E: ret
        __asm _emit 0xC3
    }
}
