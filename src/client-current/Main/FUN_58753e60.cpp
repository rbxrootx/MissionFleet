// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753e60.

// Ghidra body range 0x58753E60..0x58753E73; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58753e60_segment_00() {
    __asm {
        // 0x58753E60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753E64: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58753E67: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58753E69: push edx
        __asm _emit 0x52
        // 0x58753E6A: push eax
        __asm _emit 0x50
        // 0x58753E6B: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753E70: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
