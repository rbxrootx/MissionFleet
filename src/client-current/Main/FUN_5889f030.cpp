// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5889f030.

// Ghidra body range 0x5889F030..0x5889F045; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5889f030_segment_00() {
    __asm {
        // 0x5889F030: push esi
        __asm _emit 0x56
        // 0x5889F031: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889F033: call 0x5889e430
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F038: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5889F03D: je 0x5889f048
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5889F03F: push esi
        __asm _emit 0x56
        // 0x5889F040: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xDB
        __asm _emit 0x0D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889F048..0x5889F04E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5889f030_segment_01() {
    __asm {
        // 0x5889F048: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889F04A: pop esi
        __asm _emit 0x5E
        // 0x5889F04B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
