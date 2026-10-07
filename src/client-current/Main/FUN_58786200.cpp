// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 5 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786200.

// Ghidra body range 0x58786200..0x58786205; 5 mapped bytes.
extern "C" __declspec(naked) void FUN_58786200_segment_00() {
    __asm {
        // 0x58786200: mov ax, word ptr [ecx + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58786204: ret
        __asm _emit 0xC3
    }
}
