// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_58797460.

// Ghidra body range 0x58797460..0x58797467; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_58797460_segment_00() {
    __asm {
        // 0x58797460: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58797462: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58797465: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
