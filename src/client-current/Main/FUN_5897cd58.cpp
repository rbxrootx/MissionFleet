// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897cd58.

// Ghidra body range 0x5897CD58..0x5897CD5E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5897cd58_segment_00() {
    __asm {
        // 0x5897CD58: jmp dword ptr [0x5898c234]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x34
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
