// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_587540a0.

// Ghidra body range 0x587540A0..0x587540B3; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_587540a0_segment_00() {
    __asm {
        // 0x587540A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587540A4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587540A7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587540A9: push edx
        __asm _emit 0x52
        // 0x587540AA: push eax
        __asm _emit 0x50
        // 0x587540AB: call 0x58753cc0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587540B0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
