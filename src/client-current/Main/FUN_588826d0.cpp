// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_588826d0.

// Ghidra body range 0x588826D0..0x588826E5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_588826d0_segment_00() {
    __asm {
        // 0x588826D0: push esi
        __asm _emit 0x56
        // 0x588826D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588826D3: call 0x58881150
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588826D8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588826DD: je 0x588826e8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588826DF: push esi
        __asm _emit 0x56
        // 0x588826E0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xA5
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588826E8..0x588826EE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_588826d0_segment_01() {
    __asm {
        // 0x588826E8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588826EA: pop esi
        __asm _emit 0x5E
        // 0x588826EB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
