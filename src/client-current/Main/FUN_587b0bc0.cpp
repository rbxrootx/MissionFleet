// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b0bc0.

// Ghidra body range 0x587B0BC0..0x587B0BD2; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_587b0bc0_segment_00() {
    __asm {
        // 0x587B0BC0: mov ecx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0BC6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B0BC8: je 0x587b0bcf
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587B0BCA: jmp 0x587891a0
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587B0BCF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
