// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873BD60 .. +0x93 bytes.
// Source symbol alias: FUN_5873bd60.
extern "C" __declspec(naked) void FUN_5873bd60() {
    __asm {
        // 0x5873BD60: push esi
        __asm _emit 0x56
        // 0x5873BD61: push edi
        __asm _emit 0x57
        // 0x5873BD62: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873BD64: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873BD66: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5873BD68: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5873BD6B: jne 0x5873bdad
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5873BD6D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x0E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BD72: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BD75: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BD77: je 0x5873bd9d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5873BD79: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BD7D: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BD80: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BD83: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BD86: mov dword ptr [eax], 0x5898cb24
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BD8C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873BD8F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BD92: pop edi
        __asm _emit 0x5F
        // 0x5873BD93: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BD96: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BD99: pop esi
        __asm _emit 0x5E
        // 0x5873BD9A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BD9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BD9F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BDA2: pop edi
        __asm _emit 0x5F
        // 0x5873BDA3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BDA6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BDA9: pop esi
        __asm _emit 0x5E
        // 0x5873BDAA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BDAD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x0E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BDB2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BDB5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BDB7: je 0x5873bdd1
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5873BDB9: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BDBD: mov dword ptr [eax], 0x5898cb24
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BDC3: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BDC6: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5873BDC9: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BDCC: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BDCF: jmp 0x5873bdd3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873BDD1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BDD3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BDD6: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5873BDD9: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BDDC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873BDDF: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873BDE2: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BDE5: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5873BDE8: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BDEB: pop edi
        __asm _emit 0x5F
        // 0x5873BDEC: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BDEF: pop esi
        __asm _emit 0x5E
        // 0x5873BDF0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
