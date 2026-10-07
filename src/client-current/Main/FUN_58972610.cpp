// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 11 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972610.

// Ghidra body range 0x58972610..0x5897261B; 11 mapped bytes.
extern "C" __declspec(naked) void FUN_58972610_segment_00() {
    __asm {
        // 0x58972610: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58972613: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972615: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58972617: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5897261A: ret
        __asm _emit 0xC3
    }
}
