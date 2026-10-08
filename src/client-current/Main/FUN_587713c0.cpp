// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_587713c0.

// Ghidra body range 0x587713C0..0x587713D5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587713c0_segment_00() {
    __asm {
        // 0x587713C0: push esi
        __asm _emit 0x56
        // 0x587713C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587713C3: call 0x58771200
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587713C8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587713CD: je 0x587713d8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587713CF: push esi
        __asm _emit 0x56
        // 0x587713D0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xB8
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587713D8..0x587713DE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_587713c0_segment_01() {
    __asm {
        // 0x587713D8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587713DA: pop esi
        __asm _emit 0x5E
        // 0x587713DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
