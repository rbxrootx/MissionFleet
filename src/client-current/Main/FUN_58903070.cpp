// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903070 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_58903070() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 41 4C: mov eax, dword ptr [ecx + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x4c
        ; Exact mapped bytes 89 0C 24: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58903156
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 45 48: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x58903155
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F B7 55 26: movzx edx, word ptr [ebp + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 0F B7 70 26: movzx esi, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B D6: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 7F 19: jg 0x589030b6
        __asm _emit 0x7f
        __asm _emit 0x19
        ; Exact mapped bytes 75 10: jne 0x589030af
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 20: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 8B 55 20: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x20
        ; Exact mapped bytes 03 48 08: add ecx, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 03 55 08: add edx, dword ptr [ebp + 8]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7F 07: jg 0x589030b6
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x58903147
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D 44 00: cmp dword ptr [ebp + 0x44], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 75 44: lea esi, [ebp + 0x44]
        __asm _emit 0x8d
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 74 2A: je 0x589030eb
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 0F B7 58 26: movzx ebx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x58
        __asm _emit 0x26
        ; Exact mapped bytes 0F B7 7A 26: movzx edi, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7F 12: jg 0x589030e0
        __asm _emit 0x7f
        __asm _emit 0x12
        ; Exact mapped bytes 75 4B: jne 0x5890311b
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 4A 20: mov ecx, dword ptr [edx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x20
        ; Exact mapped bytes 8B 78 20: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x20
        ; Exact mapped bytes 03 4A 08: add ecx, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes 03 78 08: add edi, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 7E 3B: jle 0x5890311b
        __asm _emit 0x7e
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 83 7A 44 00: cmp dword ptr [edx + 0x44], 0
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 72 44: lea esi, [edx + 0x44]
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x44
        ; Exact mapped bytes 75 DA: jne 0x589030c5
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes 8B 70 48: mov esi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 06: je 0x589030f8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 44: mov ecx, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        ; Exact mapped bytes 89 4E 44: mov dword ptr [esi + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x44
        ; Exact mapped bytes 8B 70 44: mov esi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x44
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 06: je 0x58903105
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 48: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x48
        ; Exact mapped bytes 89 4E 48: mov dword ptr [esi + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x48
        ; Exact mapped bytes 89 50 48: mov dword ptr [eax + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes C7 40 44 00 00 00 00: mov dword ptr [eax + 0x44], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes EB 2C: jmp 0x58903147
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 70 48: mov esi, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 06: je 0x58903128
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 44: mov ecx, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        ; Exact mapped bytes 89 4E 44: mov dword ptr [esi + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x44
        ; Exact mapped bytes 8B 70 44: mov esi, dword ptr [eax + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x44
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 06: je 0x58903135
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 48: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x48
        ; Exact mapped bytes 89 4E 48: mov dword ptr [esi + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4A 48: mov ecx, dword ptr [edx + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x48
        ; Exact mapped bytes 89 48 48: mov dword ptr [eax + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x48
        ; Exact mapped bytes 89 50 44: mov dword ptr [eax + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4A 48: mov ecx, dword ptr [edx + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x48
        ; Exact mapped bytes 89 41 44: mov dword ptr [ecx + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x44
        ; Exact mapped bytes 89 42 48: mov dword ptr [edx + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x48
        ; Exact mapped bytes 8B 45 48: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x58903090
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
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
