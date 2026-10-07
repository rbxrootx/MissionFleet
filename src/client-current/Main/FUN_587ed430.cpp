// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ED430 .. +0x174 bytes.
// Source symbol alias: FUN_587ed430.
extern "C" __declspec(naked) void FUN_587ed430() {
    __asm {
        // 0x587ED430: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED435: mov byte ptr [eax + 0x2fc], 0
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED43C: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED441: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587ED443: mov eax, dword ptr [eax + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED449: push esi
        __asm _emit 0x56
        // 0x587ED44A: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED44F: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x587ED453: mov eax, dword ptr [edx + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ED459: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587ED45B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ED45F: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED464: cmp dword ptr [eax + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED46B: push edi
        __asm _emit 0x57
        // 0x587ED46C: jne 0x587ed4c3
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587ED46E: cmp dword ptr [eax + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED475: je 0x587ed5a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED47B: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED481: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587ED483: mov eax, dword ptr [0x58a2833c]
        __asm _emit 0xA1
        __asm _emit 0x3C
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED488: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED48D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587ED48F: jae 0x587ed4ba
        __asm _emit 0x73
        __asm _emit 0x29
        // 0x587ED491: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED497: mov esi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED49D: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED4A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED4A4: push 0x5899c090
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ED4A9: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED4AF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ED4B2: push eax
        __asm _emit 0x50
        // 0x587ED4B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED4B5: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xD6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587ED4BA: mov dword ptr [0x58a2833c], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x3C
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED4C0: pop edi
        __asm _emit 0x5F
        // 0x587ED4C1: pop esi
        __asm _emit 0x5E
        // 0x587ED4C2: ret
        __asm _emit 0xC3
        // 0x587ED4C3: cmp dword ptr [eax + 0x2ec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED4CA: jne 0x587ed4e3
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587ED4CC: cmp dword ptr [eax + 0x2f0], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587ED4D3: je 0x587ed4e3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587ED4D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED4D7: push 0x5a
        __asm _emit 0x6A
        __asm _emit 0x5A
        // 0x587ED4D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED4DB: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED4E0: pop edi
        __asm _emit 0x5F
        // 0x587ED4E1: pop esi
        __asm _emit 0x5E
        // 0x587ED4E2: ret
        __asm _emit 0xC3
        // 0x587ED4E3: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED4E9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED4EB: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x587ED4ED: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587ED4EF: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x2F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587ED4F4: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED4FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ED4FC: jle 0x587ed553
        __asm _emit 0x7E
        __asm _emit 0x55
        // 0x587ED4FE: cmp dword ptr [edx + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED505: je 0x587ed5a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED50B: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED511: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587ED513: mov eax, dword ptr [0x58a28338]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED518: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED51D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587ED51F: jae 0x587ed54a
        __asm _emit 0x73
        __asm _emit 0x29
        // 0x587ED521: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED527: mov esi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED52D: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED532: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED534: push 0x5899c068
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ED539: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED53F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ED542: push eax
        __asm _emit 0x50
        // 0x587ED543: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED545: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xD6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587ED54A: mov dword ptr [0x58a28338], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED550: pop edi
        __asm _emit 0x5F
        // 0x587ED551: pop esi
        __asm _emit 0x5E
        // 0x587ED552: ret
        __asm _emit 0xC3
        // 0x587ED553: cmp dword ptr [edx + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED55A: je 0x587ed5a1
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x587ED55C: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED562: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587ED564: mov eax, dword ptr [0x58a28334]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED569: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED56E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587ED570: jae 0x587ed59b
        __asm _emit 0x73
        __asm _emit 0x29
        // 0x587ED572: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED578: mov esi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED57E: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ED583: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED585: push 0x5899c040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ED58A: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ED590: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ED593: push eax
        __asm _emit 0x50
        // 0x587ED594: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ED596: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xD6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587ED59B: mov dword ptr [0x58a28334], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ED5A1: pop edi
        __asm _emit 0x5F
        // 0x587ED5A2: pop esi
        __asm _emit 0x5E
        // 0x587ED5A3: ret
        __asm _emit 0xC3
    }
}
