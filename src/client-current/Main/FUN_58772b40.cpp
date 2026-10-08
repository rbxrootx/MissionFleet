// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772b40.

// Ghidra body range 0x58772B40..0x58772B6B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_58772b40_segment_00() {
    __asm {
        // 0x58772B40: push ecx
        __asm _emit 0x51
        // 0x58772B41: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772B45: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772B49: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58772B4D: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58772B50: push eax
        __asm _emit 0x50
        // 0x58772B51: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B55: push ecx
        __asm _emit 0x51
        // 0x58772B56: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B5A: push edx
        __asm _emit 0x52
        // 0x58772B5B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772B5F: push eax
        __asm _emit 0x50
        // 0x58772B60: push ecx
        __asm _emit 0x51
        // 0x58772B61: push edx
        __asm _emit 0x52
        // 0x58772B62: call 0x58772640
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772B67: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58772B6A: ret
        __asm _emit 0xC3
    }
}
