// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897ce92.

// Ghidra body range 0x5897CE92..0x5897CE98; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5897ce92_segment_00() {
    __asm {
        // 0x5897CE92: jmp dword ptr [0x5898c268]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x68
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
