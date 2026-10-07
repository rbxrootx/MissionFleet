// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972740.

// Ghidra body range 0x58972740..0x58972744; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_58972740_segment_00() {
    __asm {
        // 0x58972740: lea eax, [ecx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x44
        // 0x58972743: ret
        __asm _emit 0xC3
    }
}
