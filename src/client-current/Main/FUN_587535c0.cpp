// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587535C0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_587535c0() {
    __asm {
        // 0x587535C0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587535C4: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587535C8: push ebx
        __asm _emit 0x53
        // 0x587535C9: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587535CD: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587535CF: je 0x587535f3
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587535D1: push esi
        __asm _emit 0x56
        // 0x587535D2: push edi
        __asm _emit 0x57
        // 0x587535D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587535D5: je 0x587535e2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587535D7: mov ecx, 0x202
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587535DC: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587535DE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587535E0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587535E2: add edx, 0x808
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587535E8: add eax, 0x808
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587535ED: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587535EF: jne 0x587535d3
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587535F1: pop edi
        __asm _emit 0x5F
        // 0x587535F2: pop esi
        __asm _emit 0x5E
        // 0x587535F3: pop ebx
        __asm _emit 0x5B
        // 0x587535F4: ret
        __asm _emit 0xC3
    }
}
