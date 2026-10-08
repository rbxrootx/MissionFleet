// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_5883acb0.

// Ghidra body range 0x5883ACB0..0x5883ACC5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5883acb0_segment_00() {
    __asm {
        // 0x5883ACB0: push esi
        __asm _emit 0x56
        // 0x5883ACB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883ACB3: call 0x5883a4d0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883ACB8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5883ACBD: je 0x5883acc8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5883ACBF: push esi
        __asm _emit 0x56
        // 0x5883ACC0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x1F
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5883ACC8..0x5883ACCE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5883acb0_segment_01() {
    __asm {
        // 0x5883ACC8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5883ACCA: pop esi
        __asm _emit 0x5E
        // 0x5883ACCB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
