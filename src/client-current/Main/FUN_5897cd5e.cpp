// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897cd5e.

// Ghidra body range 0x5897CD5E..0x5897CD64; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5897cd5e_segment_00() {
    __asm {
        // 0x5897CD5E: jmp dword ptr [0x5898c238]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x38
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
