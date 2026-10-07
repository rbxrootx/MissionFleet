// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 11 bytes in 1 exact ranges.
// Source symbol alias: FUN_58888960.

// Ghidra body range 0x58888960..0x5888896B; 11 mapped bytes.
extern "C" __declspec(naked) void FUN_58888960_segment_00() {
    __asm {
        // 0x58888960: mov dword ptr [ecx + 0xc8], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5888896A: ret
        __asm _emit 0xC3
    }
}
