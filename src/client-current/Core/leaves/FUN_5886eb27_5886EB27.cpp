// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886EB27 .. +0x38C bytes.
extern "C" __declspec(naked) void FUN_5886eb27_5886EB27() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 EC 24: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x24
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 F9 FE: cmp ecx, -2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 75 18: jne 0x5886eb51
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 1C 39 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 20 00: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 39 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 09 00 00 00: mov dword ptr [eax], 9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 03 00 00: jmp 0x5886eeac
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 88 3B 03 00 00: js 0x5886ee94
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D B0 9B 96 58: cmp ecx, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 83 2F 03 00 00: jae 0x5886ee94
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes 6B F8 38: imul edi, eax, 0x38
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0x38
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 55 F8: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 89 5D E4: mov dword ptr [ebp - 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 04 95 B0 99 96 58: mov eax, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 7D F0: mov dword ptr [ebp - 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xf0
        ; Exact mapped bytes 8A 54 07 28: mov dl, byte ptr [edi + eax + 0x28]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x28
        ; Exact mapped bytes 88 55 FF: mov byte ptr [ebp - 1], dl
        __asm _emit 0x88
        __asm _emit 0x55
        __asm _emit 0xff
        ; Exact mapped bytes 84 D3: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 84 00 03 00 00: je 0x5886ee94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 81 FA FF FF FF 7F: cmp edx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 76 18: jbe 0x5886ebb7
        __asm _emit 0x76
        __asm _emit 0x18
        ; Exact mapped bytes E8 B6 38 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 20 00: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 38 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 02 00 00: jmp 0x5886eea7
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x5886ee90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 45 FF 02: test byte ptr [ebp - 1], 2
        __asm _emit 0xf6
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C7 02 00 00: jne 0x5886ee90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D 0C 00: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 D0: je 0x5886eb9f
        __asm _emit 0x74
        __asm _emit 0xd0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 07 18: mov esi, dword ptr [edi + eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x18
        ; Exact mapped bytes 8A 44 07 29: mov al, byte ptr [edi + eax + 0x29]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x29
        ; Exact mapped bytes 88 45 FF: mov byte ptr [ebp - 1], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xff
        ; Exact mapped bytes 89 75 EC: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 33: je 0x5886ec1b
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 24: jne 0x5886ec11
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 75 1C: jne 0x5886ec11
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 60 38 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 21 30: and dword ptr [eax], esi
        __asm _emit 0x21
        __asm _emit 0x30
        ; Exact mapped bytes E8 6E 38 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F 23 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x5886edc7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 74: jmp 0x5886ec8f
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 74 D2: je 0x5886ebf5
        __asm _emit 0x74
        __asm _emit 0xd2
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes D1 EB: shr ebx, 1
        __asm _emit 0xd1
        __asm _emit 0xeb
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 42 D8: cmovb ebx, eax
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xd8
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 9B E2 FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes E8 D2 DF FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB DF FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 75 F4: mov dword ptr [ebp - 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 1B: jne 0x5886ec6a
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 1B 38 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 0C 00 00 00: mov dword ptr [eax], 0xc
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB 37 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 08 00 00 00: mov dword ptr [eax], 8
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x5886edc7
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 96 26 00 00: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0C 8D B0 99 96 58: mov ecx, dword ptr [ecx*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 0F 20: mov dword ptr [edi + ecx + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x20
        ; Exact mapped bytes 89 54 0F 24: mov dword ptr [edi + ecx + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0x24
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 55 E0: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F6 44 08 28 48: test byte ptr [eax + ecx + 0x28], 0x48
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x5886ed6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 8A 44 10 2A: mov al, byte ptr [eax + edx + 0x2a]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 3C 0A: cmp al, 0xa
        __asm _emit 0x3c
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5886ed6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5886ed6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 88 02: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 80 7D FF 00: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 01 2A 0A: mov byte ptr [ecx + eax + 0x2a], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x2a
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 74 79: je 0x5886ed6a
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8A 44 01 2B: mov al, byte ptr [ecx + eax + 0x2b]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 3C 0A: cmp al, 0xa
        __asm _emit 0x3c
        __asm _emit 0x0a
        ; Exact mapped bytes 74 61: je 0x5886ed6a
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 5D: je 0x5886ed6a
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 88 02: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 80 7D FF 01: cmp byte ptr [ebp - 1], 1
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C6 44 01 2B 0A: mov byte ptr [ecx + eax + 0x2b], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 75 38: jne 0x5886ed6a
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8A 44 01 2C: mov al, byte ptr [ecx + eax + 0x2c]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 3C 0A: cmp al, 0xa
        __asm _emit 0x3c
        __asm _emit 0x0a
        ; Exact mapped bytes 74 20: je 0x5886ed6a
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 1C: je 0x5886ed6a
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 88 02: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C6 44 02 2C 0A: mov byte ptr [edx + eax + 0x2c], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x2c
        __asm _emit 0x0a
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 8B C4 00 00: call 0x5887b1fb
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6F: je 0x5886ede4
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 7C 01 28 00: cmp byte ptr [ecx + eax + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 7D 5B: jge 0x5886ede4
        __asm _emit 0x7d
        __asm _emit 0x5b
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes FF 15 CC 41 89 58: call dword ptr [0x588941cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4A: je 0x5886ede4
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 80 7D FF 02: cmp byte ptr [ebp - 1], 2
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 75 48: jne 0x5886ede8
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes D1 EB: shr ebx, 1
        __asm _emit 0xd1
        __asm _emit 0xeb
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5D F4: mov ebx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes FF 15 C8 41 89 58: call dword ptr [0x588941c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x5886edd9
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4D 36 FF FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 40 DE FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x5886eeaf
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8D 3C 47: lea edi, [edi + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x47
        ; Exact mapped bytes EB 27: jmp 0x5886ee0b
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes C6 45 E4 00: mov byte ptr [ebp - 0x1c], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 E8: lea eax, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5D F4: mov ebx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5C: je 0x5886ee5c
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 39 4D E8: cmp dword ptr [ebp - 0x18], ecx
        __asm _emit 0x39
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 77 54: ja 0x5886ee5c
        __asm _emit 0x77
        __asm _emit 0x54
        ; Exact mapped bytes 03 7D E8: add edi, dword ptr [ebp - 0x18]
        __asm _emit 0x03
        __asm _emit 0x7d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 04 85 B0 99 96 58: mov eax, dword ptr [eax*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 7C 02 28 00: cmp byte ptr [edx + eax + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 7D AB: jge 0x5886edca
        __asm _emit 0x7d
        __asm _emit 0xab
        ; Exact mapped bytes 80 7D FF 02: cmp byte ptr [ebp - 1], 2
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 17: je 0x5886ee3c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes D1 E9: shr ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 05 FA FF FF: call 0x5886e83a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 8E: jmp 0x5886edca
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes D1 EF: shr edi, 1
        __asm _emit 0xd1
        __asm _emit 0xef
        ; Exact mapped bytes 80 7D E4 00: cmp byte ptr [ebp - 0x1c], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 75 E0: push dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 74 0A: je 0x5886ee55
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes E8 41 FB FF FF: call 0x5886e991
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB E3: jmp 0x5886ee38
        __asm _emit 0xeb
        __asm _emit 0xe3
        ; Exact mapped bytes E8 20 F8 FF FF: call 0x5886e67a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB F4: jmp 0x5886ee50
        __asm _emit 0xeb
        __asm _emit 0xf4
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 17: jne 0x5886ee80
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 01 36 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 09 00 00 00: mov dword ptr [eax], 9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 35 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x5886edc7
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 6D: cmp eax, 0x6d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6d
        ; Exact mapped bytes 0F 85 37 FF FF FF: jne 0x5886edc0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A FF FF FF: jmp 0x5886edca
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 1B: jmp 0x5886eeaf
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes E8 C1 35 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 20 00: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 35 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 09 00 00 00: mov dword ptr [eax], 9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 20 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
