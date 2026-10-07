// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f90.

// Ghidra body range 0x58785F90..0x58785F9E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f90_segment_00() {
    __asm {
        // 0x58785F90: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F93: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F95: je 0x58785f9b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785F97: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x58785F9A: ret
        __asm _emit 0xC3
        // 0x58785F9B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785F9D: ret
        __asm _emit 0xC3
    }
}
