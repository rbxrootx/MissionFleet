// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753590 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58753590() {
    __asm {
        // 0x58753590: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753594: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58753598: push ebx
        __asm _emit 0x53
        // 0x58753599: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875359D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5875359F: je 0x587535be
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587535A1: push esi
        __asm _emit 0x56
        // 0x587535A2: push edi
        __asm _emit 0x57
        // 0x587535A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587535A5: je 0x587535b2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587535A7: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587535AC: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587535AE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587535B0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587535B2: add edx, 0x48
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x48
        // 0x587535B5: add eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x48
        // 0x587535B8: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587535BA: jne 0x587535a3
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587535BC: pop edi
        __asm _emit 0x5F
        // 0x587535BD: pop esi
        __asm _emit 0x5E
        // 0x587535BE: pop ebx
        __asm _emit 0x5B
        // 0x587535BF: ret
        __asm _emit 0xC3
    }
}
