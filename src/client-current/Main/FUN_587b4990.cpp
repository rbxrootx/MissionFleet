// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B4990 .. +0x93 bytes.
// Source symbol alias: FUN_587b4990.
extern "C" __declspec(naked) void FUN_587b4990() {
    __asm {
        // 0x587B4990: push esi
        __asm _emit 0x56
        // 0x587B4991: push edi
        __asm _emit 0x57
        // 0x587B4992: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B4994: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B4996: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587B4998: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B499B: jne 0x587b49dd
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587B499D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x82
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B49A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B49A5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B49A7: je 0x587b49cd
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587B49A9: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B49AD: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587B49B0: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587B49B3: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587B49B6: mov dword ptr [eax], 0x58999fc0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x9F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B49BC: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587B49BF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B49C2: pop edi
        __asm _emit 0x5F
        // 0x587B49C3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587B49C6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B49C9: pop esi
        __asm _emit 0x5E
        // 0x587B49CA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B49CD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B49CF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B49D2: pop edi
        __asm _emit 0x5F
        // 0x587B49D3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587B49D6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B49D9: pop esi
        __asm _emit 0x5E
        // 0x587B49DA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B49DD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x82
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B49E2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B49E5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B49E7: je 0x587b4a01
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587B49E9: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B49ED: mov dword ptr [eax], 0x58999fc0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x9F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B49F3: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587B49F6: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B49F9: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587B49FC: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587B49FF: jmp 0x587b4a03
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B4A01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B4A03: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B4A06: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587B4A09: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587B4A0C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B4A0F: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587B4A12: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587B4A15: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587B4A18: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587B4A1B: pop edi
        __asm _emit 0x5F
        // 0x587B4A1C: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B4A1F: pop esi
        __asm _emit 0x5E
        // 0x587B4A20: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
