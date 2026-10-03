// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 30 bytes across one range.

// Ghidra range: 0x588504A0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588504A0_segment_00() {
    __asm {
        // 0x588504A0: push esi
        __asm _emit 0x56
        // 0x588504A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588504A3: call 0x588502c0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588504A8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588504AD: je 0x588504b8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588504AF: push esi
        __asm _emit 0x56
        // 0x588504B0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xC7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588504B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588504B8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588504BA: pop esi
        __asm _emit 0x5E
        // 0x588504BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
