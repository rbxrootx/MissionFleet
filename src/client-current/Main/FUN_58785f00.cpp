// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f00.

// Ghidra body range 0x58785F00..0x58785F0E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f00_segment_00() {
    __asm {
        // 0x58785F00: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F05: je 0x58785f0b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785F07: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x58785F0A: ret
        __asm _emit 0xC3
        // 0x58785F0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785F0D: ret
        __asm _emit 0xC3
    }
}
