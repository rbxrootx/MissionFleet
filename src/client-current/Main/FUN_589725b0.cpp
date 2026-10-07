// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_589725b0.

// Ghidra body range 0x589725B0..0x589725B4; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_589725b0_segment_00() {
    __asm {
        // 0x589725B0: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x589725B3: ret
        __asm _emit 0xC3
    }
}
