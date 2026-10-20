// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF1A0 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_100ff1a0_100FF1A0() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 41 4C: mov eax, dword ptr [ecx + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x4c
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x100ff281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 45 48: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x48
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x100ff281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 70 26: mov si, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B D6: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 7F 1D: jg 0x100ff1ed
        __asm _emit 0x7f
        __asm _emit 0x1d
        ; Exact mapped bytes 75 14: jne 0x100ff1e6
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 20: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x20
        ; Exact mapped bytes 8B 70 08: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x08
        ; Exact mapped bytes 8B 5D 08: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes 03 D6: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 75 20: mov esi, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 03 F3: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xf3
        ; Exact mapped bytes 3B F2: cmp esi, edx
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 7F 07: jg 0x100ff1ed
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100ff273
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 5A 44: mov ebx, dword ptr [edx + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x44
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 74 25: je 0x100ff21b
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 72 26: mov si, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 78 26: mov di, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B F7: cmp si, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 7F 14: jg 0x100ff217
        __asm _emit 0x7f
        __asm _emit 0x14
        ; Exact mapped bytes 75 42: jne 0x100ff247
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 72 20: mov esi, dword ptr [edx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x20
        ; Exact mapped bytes 8B 7A 08: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x08
        ; Exact mapped bytes 03 F7: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 78 20: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 03 78 08: add edi, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 7E 30: jle 0x100ff247
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 8B D3: mov edx, ebx
        __asm _emit 0x8b
        __asm _emit 0xd3
        ; Exact mapped bytes EB D4: jmp 0x100ff1ef
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 70 48: mov esi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x48
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 06: je 0x100ff228
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 78 44: mov edi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x44
        ; Exact mapped bytes 89 7E 44: mov dword ptr [esi + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x44
        ; Exact mapped bytes 8B 70 44: mov esi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x44
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 06: je 0x100ff235
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 78 48: mov edi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x48
        ; Exact mapped bytes 89 7E 48: mov dword ptr [esi + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x48
        ; Exact mapped bytes 89 50 48: mov dword ptr [eax + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes 89 48 44: mov dword ptr [eax + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x44
        ; Exact mapped bytes 89 42 44: mov dword ptr [edx + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x44
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 42 4C: mov dword ptr [edx + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4c
        ; Exact mapped bytes EB 2C: jmp 0x100ff273
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 70 48: mov esi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x48
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 06: je 0x100ff254
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 78 44: mov edi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x44
        ; Exact mapped bytes 89 7E 44: mov dword ptr [esi + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x44
        ; Exact mapped bytes 8B 70 44: mov esi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x44
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 06: je 0x100ff261
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 78 48: mov edi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x48
        ; Exact mapped bytes 89 7E 48: mov dword ptr [esi + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x48
        ; Exact mapped bytes 8B 72 48: mov esi, dword ptr [edx + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x48
        ; Exact mapped bytes 89 50 44: mov dword ptr [eax + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes 89 70 48: mov dword ptr [eax + 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x48
        ; Exact mapped bytes 8B 72 48: mov esi, dword ptr [edx + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x48
        ; Exact mapped bytes 89 46 44: mov dword ptr [esi + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x44
        ; Exact mapped bytes 89 42 48: mov dword ptr [edx + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x48
        ; Exact mapped bytes 8B 45 48: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x48
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 45 FF FF FF: jne 0x100ff1c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
