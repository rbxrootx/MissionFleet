// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_589725a0.

// Ghidra body range 0x589725A0..0x589725A4; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_589725a0_segment_00() {
    __asm {
        // 0x589725A0: mov eax, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x589725A3: ret
        __asm _emit 0xC3
    }
}
