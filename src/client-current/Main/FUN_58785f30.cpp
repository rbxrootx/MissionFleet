// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f30.

// Ghidra body range 0x58785F30..0x58785F3E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f30_segment_00() {
    __asm {
        // 0x58785F30: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F33: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F35: je 0x58785f3b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785F37: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x58785F3A: ret
        __asm _emit 0xC3
        // 0x58785F3B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785F3D: ret
        __asm _emit 0xC3
    }
}
