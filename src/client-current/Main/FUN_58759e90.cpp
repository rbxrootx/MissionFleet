// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_58759e90.

// Ghidra body range 0x58759E90..0x58759EA2; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_58759e90_segment_00() {
    __asm {
        // 0x58759E90: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58759E96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58759E98: je 0x58759e9e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58759E9A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58759E9D: ret
        __asm _emit 0xC3
        // 0x58759E9E: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58759EA1: ret
        __asm _emit 0xC3
    }
}
