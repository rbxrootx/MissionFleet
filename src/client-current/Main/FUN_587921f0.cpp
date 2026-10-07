// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_587921f0.

// Ghidra body range 0x587921F0..0x5879221B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_587921f0_segment_00() {
    __asm {
        // 0x587921F0: push ecx
        __asm _emit 0x51
        // 0x587921F1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587921F5: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587921F9: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587921FD: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58792200: push eax
        __asm _emit 0x50
        // 0x58792201: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58792205: push ecx
        __asm _emit 0x51
        // 0x58792206: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879220A: push edx
        __asm _emit 0x52
        // 0x5879220B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879220F: push eax
        __asm _emit 0x50
        // 0x58792210: push ecx
        __asm _emit 0x51
        // 0x58792211: push edx
        __asm _emit 0x52
        // 0x58792212: call 0x58792160
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792217: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5879221A: ret
        __asm _emit 0xC3
    }
}
