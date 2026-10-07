// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 5 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786230.

// Ghidra body range 0x58786230..0x58786235; 5 mapped bytes.
extern "C" __declspec(naked) void FUN_58786230_segment_00() {
    __asm {
        // 0x58786230: mov ax, word ptr [ecx + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x3A
        // 0x58786234: ret
        __asm _emit 0xC3
    }
}
