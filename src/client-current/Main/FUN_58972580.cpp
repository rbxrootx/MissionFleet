// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972580.

// Ghidra body range 0x58972580..0x58972584; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_58972580_segment_00() {
    __asm {
        // 0x58972580: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58972583: ret
        __asm _emit 0xC3
    }
}
