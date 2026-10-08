// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889b5a0.

// Ghidra body range 0x5889B5A0..0x5889B5B5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b5a0_segment_00() {
    __asm {
        // 0x5889B5A0: push esi
        __asm _emit 0x56
        // 0x5889B5A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889B5A3: call 0x5889b410
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B5A8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5889B5AD: je 0x5889b5b8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5889B5AF: push esi
        __asm _emit 0x56
        // 0x5889B5B0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x16
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5889B5B8..0x5889B5BE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b5a0_segment_01() {
    __asm {
        // 0x5889B5B8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889B5BA: pop esi
        __asm _emit 0x5E
        // 0x5889B5BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
