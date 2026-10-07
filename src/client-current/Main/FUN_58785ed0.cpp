// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785ed0.

// Ghidra body range 0x58785ED0..0x58785EDE; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785ed0_segment_00() {
    __asm {
        // 0x58785ED0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785ED3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785ED5: je 0x58785edb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785ED7: mov eax, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x48
        // 0x58785EDA: ret
        __asm _emit 0xC3
        // 0x58785EDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785EDD: ret
        __asm _emit 0xC3
    }
}
