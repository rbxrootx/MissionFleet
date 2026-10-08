// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 17 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f10.

// Ghidra body range 0x58785F10..0x58785F21; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f10_segment_00() {
    __asm {
        // 0x58785F10: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F13: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F15: je 0x58785f1e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58785F17: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58785F1B: mov dword ptr [eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x58785F1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
