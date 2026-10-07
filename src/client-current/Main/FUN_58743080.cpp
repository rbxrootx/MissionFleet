// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 3 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743080.

// Ghidra body range 0x58743080..0x58743083; 3 mapped bytes.
extern "C" __declspec(naked) void FUN_58743080_segment_00() {
    __asm {
        // 0x58743080: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58743082: ret
        __asm _emit 0xC3
    }
}
