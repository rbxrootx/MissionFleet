// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 4 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972590.

// Ghidra body range 0x58972590..0x58972594; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_58972590_segment_00() {
    __asm {
        // 0x58972590: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58972593: ret
        __asm _emit 0xC3
    }
}
