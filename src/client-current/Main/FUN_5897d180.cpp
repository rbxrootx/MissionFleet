// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897d180.

// Ghidra body range 0x5897D180..0x5897D186; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5897d180_segment_00() {
    __asm {
        // 0x5897D180: jmp dword ptr [0x5898c304]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
