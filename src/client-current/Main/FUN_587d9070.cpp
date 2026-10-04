// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D9070 .. +0x7E bytes.
// Source symbol alias: FUN_587d9070.
extern "C" __declspec(naked) void FUN_587d9070() {
    __asm {
        // 0x587D9070: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D9074: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9076: jne 0x587d90ba
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x587D9078: mov dl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587D907B: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D9081: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D9084: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D9086: je 0x587d90b7
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587D9088: push esi
        __asm _emit 0x56
        // 0x587D9089: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9090: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9096: cmp byte ptr [esi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D909C: jne 0x587d90a6
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D909E: cmp dword ptr [ecx + 0xec], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90A4: je 0x587d90b4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D90A6: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D90AE: jne 0x587d9090
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D90B0: pop esi
        __asm _emit 0x5E
        // 0x587D90B1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D90B4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D90B6: pop esi
        __asm _emit 0x5E
        // 0x587D90B7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D90BA: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90C1: je 0x587d90d0
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D90C3: mov dword ptr [esp + 4], 0xff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90CB: jmp 0x587d8ef0
        __asm _emit 0xE9
        __asm _emit 0x20
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D90D0: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90D6: mov dl, byte ptr [edx + 0x35c]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90DC: cmp dl, byte ptr [ecx + 0x61]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587D90DF: je 0x587d90b7
        __asm _emit 0x74
        __asm _emit 0xD6
        // 0x587D90E1: mov dword ptr [esp + 4], 0xff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D90E9: jmp 0x587d8ef0
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
