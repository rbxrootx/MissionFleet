// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 50 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887cb60.

// Ghidra body range 0x5887CB60..0x5887CB92; 50 mapped bytes.
extern "C" __declspec(naked) void FUN_5887cb60_segment_00() {
    __asm {
        // 0x5887CB60: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887CB64: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5887CB68: push ebx
        __asm _emit 0x53
        // 0x5887CB69: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5887CB6D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5887CB6F: je 0x5887cb90
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5887CB71: push esi
        __asm _emit 0x56
        // 0x5887CB72: push edi
        __asm _emit 0x57
        // 0x5887CB73: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887CB75: je 0x5887cb84
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5887CB77: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887CB7C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5887CB7E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887CB80: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5887CB82: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xA5
        // 0x5887CB84: add edx, 0x22
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x22
        // 0x5887CB87: add eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x22
        // 0x5887CB8A: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5887CB8C: jne 0x5887cb73
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x5887CB8E: pop edi
        __asm _emit 0x5F
        // 0x5887CB8F: pop esi
        __asm _emit 0x5E
        // 0x5887CB90: pop ebx
        __asm _emit 0x5B
        // 0x5887CB91: ret
        __asm _emit 0xC3
    }
}
