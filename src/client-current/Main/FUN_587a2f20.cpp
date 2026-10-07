// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 16 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a2f20.

// Ghidra body range 0x587A2F20..0x587A2F30; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_587a2f20_segment_00() {
    __asm {
        // 0x587A2F20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A2F22: cmp dword ptr [ecx + 0x13c], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A2F2C: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587A2F2F: ret
        __asm _emit 0xC3
    }
}
