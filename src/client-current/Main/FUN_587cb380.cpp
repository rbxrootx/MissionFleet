// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb380.

// Ghidra body range 0x587CB380..0x587CB387; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb380_segment_00() {
    __asm {
        // 0x587CB380: mov eax, dword ptr [ecx + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB386: ret
        __asm _emit 0xC3
    }
}
