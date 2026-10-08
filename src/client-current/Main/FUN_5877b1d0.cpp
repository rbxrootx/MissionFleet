// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_5877b1d0.

// Ghidra body range 0x5877B1D0..0x5877B1E5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5877b1d0_segment_00() {
    __asm {
        // 0x5877B1D0: push esi
        __asm _emit 0x56
        // 0x5877B1D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877B1D3: call 0x58779d10
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877B1D8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5877B1DD: je 0x5877b1e8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877B1DF: push esi
        __asm _emit 0x56
        // 0x5877B1E0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x1A
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877B1E8..0x5877B1EE; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5877b1d0_segment_01() {
    __asm {
        // 0x5877B1E8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877B1EA: pop esi
        __asm _emit 0x5E
        // 0x5877B1EB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
