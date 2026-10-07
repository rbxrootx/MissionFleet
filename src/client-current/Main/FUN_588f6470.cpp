// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 16 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6470.

// Ghidra body range 0x588F6470..0x588F6480; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6470_segment_00() {
    __asm {
        // 0x588F6470: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F6474: push eax
        __asm _emit 0x50
        // 0x588F6475: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588F6478: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF0
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588F647D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
