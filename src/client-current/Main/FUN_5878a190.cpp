// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878a190.

// Ghidra body range 0x5878A190..0x5878A1D5; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_5878a190_segment_00() {
    __asm {
        // 0x5878A190: push ebx
        __asm _emit 0x53
        // 0x5878A191: push esi
        __asm _emit 0x56
        // 0x5878A192: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x5878A195: push edi
        __asm _emit 0x57
        // 0x5878A196: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878A198: je 0x5878a1c5
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5878A19A: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878A19E: mov ebx, dword ptr [0x5898c138]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x38
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878A1A4: cmp dword ptr [esi + 0x606c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A1AB: je 0x5878a1be
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5878A1AD: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A1B3: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5878A1B6: push eax
        __asm _emit 0x50
        // 0x5878A1B7: push edi
        __asm _emit 0x57
        // 0x5878A1B8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5878A1BA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A1BC: je 0x5878a1cd
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5878A1BE: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x5878A1C1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878A1C3: jne 0x5878a1a4
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5878A1C5: pop edi
        __asm _emit 0x5F
        // 0x5878A1C6: pop esi
        __asm _emit 0x5E
        // 0x5878A1C7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A1C9: pop ebx
        __asm _emit 0x5B
        // 0x5878A1CA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5878A1CD: pop edi
        __asm _emit 0x5F
        // 0x5878A1CE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878A1D0: pop esi
        __asm _emit 0x5E
        // 0x5878A1D1: pop ebx
        __asm _emit 0x5B
        // 0x5878A1D2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
