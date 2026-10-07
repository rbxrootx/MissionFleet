// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 13 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974000.

// Ghidra body range 0x58974000..0x5897400D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_58974000_segment_00() {
    __asm {
        // 0x58974000: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58974004: push eax
        __asm _emit 0x50
        // 0x58974005: call 0x58973fa0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897400A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
