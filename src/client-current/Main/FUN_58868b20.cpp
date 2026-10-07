// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58868b20.

// Ghidra body range 0x58868B20..0x58868B33; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58868b20_segment_00() {
    __asm {
        // 0x58868B20: mov dword ptr [ecx + 0x2d0], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868B2A: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58868B2D: or word ptr [ecx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58868B32: ret
        __asm _emit 0xC3
    }
}
