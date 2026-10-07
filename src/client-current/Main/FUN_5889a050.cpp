// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889a050.

// Ghidra body range 0x5889A050..0x5889A07B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a050_segment_00() {
    __asm {
        // 0x5889A050: push ecx
        __asm _emit 0x51
        // 0x5889A051: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A055: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A059: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889A05D: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5889A060: push eax
        __asm _emit 0x50
        // 0x5889A061: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889A065: push ecx
        __asm _emit 0x51
        // 0x5889A066: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889A06A: push edx
        __asm _emit 0x52
        // 0x5889A06B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889A06F: push eax
        __asm _emit 0x50
        // 0x5889A070: push ecx
        __asm _emit 0x51
        // 0x5889A071: push edx
        __asm _emit 0x52
        // 0x5889A072: call 0x58899b60
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A077: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5889A07A: ret
        __asm _emit 0xC3
    }
}
