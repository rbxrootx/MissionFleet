// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10099A60 .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_10099a60_10099A60() {
    __asm {
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 98 44 0D 00 00: mov ebx, dword ptr [eax + 0xd44]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B0 0C 0D 00 00: mov esi, dword ptr [eax + 0xd0c]
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 0C: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 89 6C 24 10: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 43: jne 0x10099ad2
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 43 25: mov al, byte ptr [ebx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x43
        __asm _emit 0x25
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 20 02 00 00: jne 0x10099cbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B FC 02 00 00: mov ecx, dword ptr [ebx + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8A 02: mov al, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x02
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 0B 02 00 00: jne 0x10099cbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 93 00 02 00 00: mov edx, dword ptr [ebx + 0x200]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 4A 25: mov cl, byte ptr [edx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 E9 02: sub cl, 2
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F6 D9: neg cl
        __asm _emit 0xf6
        __asm _emit 0xd9
        ; Exact mapped bytes 1B C9: sbb ecx, ecx
        __asm _emit 0x1b
        __asm _emit 0xc9
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E9 EE 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 1C: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 25: jne 0x10099afe
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 90 48 0D 00 00: mov edx, dword ptr [eax + 0xd48]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 82 A8 00 00 00: mov eax, dword ptr [edx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 25: mov cl, byte ptr [eax + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 E9 02: sub cl, 2
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F6 D9: neg cl
        __asm _emit 0xf6
        __asm _emit 0xd9
        ; Exact mapped bytes 1B C9: sbb ecx, ecx
        __asm _emit 0x1b
        __asm _emit 0xc9
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x10099cbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE BC 08 00 00: mov edi, dword ptr [esi + 0x8bc]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 7D 80 05 00: call 0x100f1b90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7D 2C: jge 0x10099b43
        __asm _emit 0x7d
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 82 48 0D 00 00: mov eax, dword ptr [edx + 0xd48]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 A8 00 00 00: mov edx, dword ptr [eax + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 4A 25: mov cl, byte ptr [edx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 58 0B 00 00: mov eax, dword ptr [esi + 0xb58]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 34: jne 0x10099b81
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 4B 25: mov cl, byte ptr [ebx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x4b
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 1D: jne 0x10099b77
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 93 FC 02 00 00: mov edx, dword ptr [ebx + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 0F: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 80 F9 03: cmp cl, 3
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 0A: jne 0x10099b77
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes BE 07 00 00 00: mov esi, 7
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE 06 00 00 00: mov esi, 6
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 54 0B 00 00: mov eax, dword ptr [esi + 0xb54]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 34: jne 0x10099bbf
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 53 25: mov dl, byte ptr [ebx + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x53
        __asm _emit 0x25
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 1D: jne 0x10099bb5
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 83 FC 02 00 00: mov eax, dword ptr [ebx + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 80 E2 0F: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 0A: jne 0x10099bb5
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes BE 09 00 00 00: mov esi, 9
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE 08 00 00 00: mov esi, 8
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x10099cc0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 4C 0B 00 00: mov edx, dword ptr [esi + 0xb4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes C7 44 24 14 01 00 00 00: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 8E D4 00 00 00: jle 0x10099cb7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 54 02 00 00: mov edx, dword ptr [edx + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C6 4C 09 00 00: add esi, 0x94c
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 00 00 00 80: mov ebp, 0x80000000
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes D3 ED: shr ebp, cl
        __asm _emit 0xd3
        __asm _emit 0xed
        ; Exact mapped bytes 85 EA: test edx, ebp
        __asm _emit 0x85
        __asm _emit 0xea
        ; Exact mapped bytes 75 29: jne 0x10099c23
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B AE 80 00 00 00: mov ebp, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 1E: je 0x10099c23
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 8B 2E: mov bp, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x2e
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 66 81 F5 AA 00: xor bp, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x10099c23
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 66 8B 6E 02: mov bp, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x02
        ; Exact mapped bytes 66 81 F5 AA 00: xor bp, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x10099c23
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 14 00 00 00 00: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7C C4: jl 0x10099bef
        __asm _emit 0x7c
        __asm _emit 0xc4
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 04: je 0x10099c33
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 04: jmp 0x10099c37
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 3A: jge 0x10099c75
        __asm _emit 0x7d
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 48 25: mov cl, byte ptr [eax + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x25
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 02: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x10099c6a
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 90 FC 02 00 00: mov edx, dword ptr [eax + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 0F: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 80 F9 05: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 0B: jne 0x10099c6a
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 0B 00 00 00: mov esi, 0xb
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x10099cc0
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 0A 00 00 00: mov esi, 0xa
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x10099cc0
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 3A: jne 0x10099cb3
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 50 25: mov dl, byte ptr [eax + 0x25]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x25
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x10099ca8
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 80 FC 02 00 00: mov eax, dword ptr [eax + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 80 E2 0F: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 80 FA 0B: cmp dl, 0xb
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x0b
        ; Exact mapped bytes 75 0B: jne 0x10099ca8
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 0D 00 00 00: mov esi, 0xd
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x10099cc0
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 0C 00 00 00: mov esi, 0xc
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x10099cc0
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BE 0E 00 00 00: mov esi, 0xe
        __asm _emit 0xbe
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10099cc0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 66 83 FE FF: cmp si, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 B5 76 02 00 00: mov word ptr [ebp + 0x276], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 0A: je 0x10099cd9
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 8D 78 02 00 00: mov ecx, dword ptr [ebp + 0x278]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 07: jne 0x10099ce0
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 8B B5 74 02 00 00: mov si, word ptr [ebp + 0x274]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B B5 74 02 00 00: cmp si, word ptr [ebp + 0x274]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x10099cf2
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 1E 00 00 00: call 0x10099d10
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 06 05 00 00: call 0x1009a200
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B C6: mov ax, si
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
