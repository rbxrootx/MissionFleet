// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_587921c0.

// Ghidra body range 0x587921C0..0x587921EC; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_587921c0_segment_00() {
    __asm {
        // 0x587921C0: push ecx
        __asm _emit 0x51
        // 0x587921C1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587921C5: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587921C9: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x587921CC: push eax
        __asm _emit 0x50
        // 0x587921CD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587921D1: push edx
        __asm _emit 0x52
        // 0x587921D2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587921D6: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x587921D9: push ecx
        __asm _emit 0x51
        // 0x587921DA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587921DE: push eax
        __asm _emit 0x50
        // 0x587921DF: push ecx
        __asm _emit 0x51
        // 0x587921E0: push edx
        __asm _emit 0x52
        // 0x587921E1: call 0x58791fe0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587921E6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587921E9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
