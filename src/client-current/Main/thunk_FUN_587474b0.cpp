// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 5 bytes in 1 exact ranges.
// Source symbol alias: thunk_FUN_587474b0.

// Ghidra body range 0x58743070..0x58743075; 5 mapped bytes.
extern "C" __declspec(naked) void thunk_FUN_587474b0_segment_00() {
    __asm {
        // 0x58743070: jmp 0x587474b0
        __asm _emit 0xE9
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
