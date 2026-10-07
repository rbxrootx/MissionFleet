// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 3 bytes in 1 exact ranges.
// Source symbol alias: FUN_589776a0.

// Ghidra body range 0x589776A0..0x589776A3; 3 mapped bytes.
extern "C" __declspec(naked) void FUN_589776a0_segment_00() {
    __asm {
        // 0x589776A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589776A2: ret
        __asm _emit 0xC3
    }
}
