// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 5 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786220.

// Ghidra body range 0x58786220..0x58786225; 5 mapped bytes.
extern "C" __declspec(naked) void FUN_58786220_segment_00() {
    __asm {
        // 0x58786220: mov ax, word ptr [ecx + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x38
        // 0x58786224: ret
        __asm _emit 0xC3
    }
}
