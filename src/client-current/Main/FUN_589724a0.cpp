// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_589724a0.

// Ghidra body range 0x589724A0..0x589724A7; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_589724a0_segment_00() {
    __asm {
        // 0x589724A0: mov eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589724A6: ret
        __asm _emit 0xC3
    }
}
