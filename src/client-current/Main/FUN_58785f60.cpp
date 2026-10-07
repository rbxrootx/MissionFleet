// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f60.

// Ghidra body range 0x58785F60..0x58785F6E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f60_segment_00() {
    __asm {
        // 0x58785F60: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F63: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F65: je 0x58785f6b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785F67: mov eax, dword ptr [eax + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5C
        // 0x58785F6A: ret
        __asm _emit 0xC3
        // 0x58785F6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785F6D: ret
        __asm _emit 0xC3
    }
}
