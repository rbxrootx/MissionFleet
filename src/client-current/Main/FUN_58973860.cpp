// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973860.

// Ghidra body range 0x58973860..0x5897386E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58973860_segment_00() {
    __asm {
        // 0x58973860: mov edx, dword ptr [ecx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973866: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973868: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897386A: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5897386D: ret
        __asm _emit 0xC3
    }
}
