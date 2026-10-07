// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973780.

// Ghidra body range 0x58973780..0x58973787; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_58973780_segment_00() {
    __asm {
        // 0x58973780: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58973783: shl eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x58973786: ret
        __asm _emit 0xC3
    }
}
