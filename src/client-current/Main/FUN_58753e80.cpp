// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753e80.

// Ghidra body range 0x58753E80..0x58753E93; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58753e80_segment_00() {
    __asm {
        // 0x58753E80: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753E84: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58753E87: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58753E89: push edx
        __asm _emit 0x52
        // 0x58753E8A: push eax
        __asm _emit 0x50
        // 0x58753E8B: call 0x58753980
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753E90: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
