// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772b10.

// Ghidra body range 0x58772B10..0x58772B3B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_58772b10_segment_00() {
    __asm {
        // 0x58772B10: push ecx
        __asm _emit 0x51
        // 0x58772B11: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772B15: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772B19: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58772B1D: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58772B20: push eax
        __asm _emit 0x50
        // 0x58772B21: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B25: push ecx
        __asm _emit 0x51
        // 0x58772B26: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B2A: push edx
        __asm _emit 0x52
        // 0x58772B2B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B2F: push eax
        __asm _emit 0x50
        // 0x58772B30: push ecx
        __asm _emit 0x51
        // 0x58772B31: push edx
        __asm _emit 0x52
        // 0x58772B32: call 0x587725e0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772B37: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58772B3A: ret
        __asm _emit 0xC3
    }
}
