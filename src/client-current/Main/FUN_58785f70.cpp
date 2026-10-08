// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 17 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785f70.

// Ghidra body range 0x58785F70..0x58785F81; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_58785f70_segment_00() {
    __asm {
        // 0x58785F70: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785F73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785F75: je 0x58785f7e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58785F77: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58785F7B: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58785F7E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
