// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_5876ed60.

// Ghidra body range 0x5876ED60..0x5876ED75; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ed60_segment_00() {
    __asm {
        // 0x5876ED60: push esi
        __asm _emit 0x56
        // 0x5876ED61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876ED63: call 0x5876ebe0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876ED68: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5876ED6D: je 0x5876ed78
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5876ED6F: push esi
        __asm _emit 0x56
        // 0x5876ED70: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xDE
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876ED78..0x5876ED7E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ed60_segment_01() {
    __asm {
        // 0x5876ED78: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876ED7A: pop esi
        __asm _emit 0x5E
        // 0x5876ED7B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
