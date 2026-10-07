// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f0b0.

// Ghidra body range 0x5882F0B0..0x5882F0B4; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f0b0_segment_00() {
    __asm {
        // 0x5882F0B0: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5882F0B3: ret
        __asm _emit 0xC3
    }
}
