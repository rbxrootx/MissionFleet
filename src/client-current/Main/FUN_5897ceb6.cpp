// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897ceb6.

// Ghidra body range 0x5897CEB6..0x5897CEBC; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5897ceb6_segment_00() {
    __asm {
        // 0x5897CEB6: jmp dword ptr [0x5898c280]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
