// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 5 bytes in 1 exact ranges.
// Source symbol alias: FUN_587863b0.

// Ghidra body range 0x587863B0..0x587863B5; 5 mapped bytes.
extern "C" __declspec(naked) void FUN_587863b0_segment_00() {
    __asm {
        // 0x587863B0: mov ax, word ptr [ecx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x40
        // 0x587863B4: ret
        __asm _emit 0xC3
    }
}
