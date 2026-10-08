// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 23 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828da0.

// Ghidra body range 0x58828DA0..0x58828DB7; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_58828da0_segment_00() {
    __asm {
        // 0x58828DA0: mov eax, dword ptr [ecx + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DA6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828DA8: jle 0x58828db6
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58828DAA: dec eax
        __asm _emit 0x48
        // 0x58828DAB: mov dword ptr [ecx + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DB1: jmp 0x58828cb0
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828DB6: ret
        __asm _emit 0xC3
    }
}
