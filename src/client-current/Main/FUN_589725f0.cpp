// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 17 bytes in 1 exact ranges.
// Source symbol alias: FUN_589725f0.

// Ghidra body range 0x589725F0..0x58972601; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_589725f0_segment_00() {
    __asm {
        // 0x589725F0: fld dword ptr [ecx + 0x154]
        __asm _emit 0xD9
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589725F6: fadd dword ptr [0x589a3050]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589725FC: jmp 0x5897d5d0
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
