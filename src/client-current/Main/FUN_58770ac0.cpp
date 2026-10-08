// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58770ac0.

// Ghidra body range 0x58770AC0..0x58770AD5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58770ac0_segment_00() {
    __asm {
        // 0x58770AC0: push esi
        __asm _emit 0x56
        // 0x58770AC1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770AC3: call 0x58770930
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58770AC8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58770ACD: je 0x58770ad8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58770ACF: push esi
        __asm _emit 0x56
        // 0x58770AD0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xC1
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58770AD8..0x58770ADE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58770ac0_segment_01() {
    __asm {
        // 0x58770AD8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58770ADA: pop esi
        __asm _emit 0x5E
        // 0x58770ADB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
