// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772e50.

// Ghidra body range 0x58772E50..0x58772E7C; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_58772e50_segment_00() {
    __asm {
        // 0x58772E50: push ecx
        __asm _emit 0x51
        // 0x58772E51: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772E55: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58772E59: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58772E5C: push eax
        __asm _emit 0x50
        // 0x58772E5D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772E61: push edx
        __asm _emit 0x52
        // 0x58772E62: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772E66: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58772E69: push ecx
        __asm _emit 0x51
        // 0x58772E6A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772E6E: push eax
        __asm _emit 0x50
        // 0x58772E6F: push ecx
        __asm _emit 0x51
        // 0x58772E70: push edx
        __asm _emit 0x52
        // 0x58772E71: call 0x58772900
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772E76: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58772E79: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
