// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887cb00.

// Ghidra body range 0x5887CB00..0x5887CB2B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_5887cb00_segment_00() {
    __asm {
        // 0x5887CB00: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887CB04: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5887CB08: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5887CB0A: je 0x5887cb2a
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5887CB0C: push ebx
        __asm _emit 0x53
        // 0x5887CB0D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887CB11: push esi
        __asm _emit 0x56
        // 0x5887CB12: push edi
        __asm _emit 0x57
        // 0x5887CB13: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887CB15: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887CB1A: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5887CB1C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5887CB1E: add eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x22
        // 0x5887CB21: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xA5
        // 0x5887CB23: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5887CB25: jne 0x5887cb13
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5887CB27: pop edi
        __asm _emit 0x5F
        // 0x5887CB28: pop esi
        __asm _emit 0x5E
        // 0x5887CB29: pop ebx
        __asm _emit 0x5B
        // 0x5887CB2A: ret
        __asm _emit 0xC3
    }
}
