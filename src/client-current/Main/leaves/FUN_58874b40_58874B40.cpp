// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874B40 .. +0x380 bytes.
extern "C" __declspec(naked) void FUN_58874b40_58874B40() {
    __asm {
        ; Exact mapped bytes 83 EC 28: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x28
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B B8 78 0D 00 00: mov edi, dword ptr [eax + 0xd78]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AF C0 0C 00 00: mov ebp, dword ptr [edi + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 74 24 34: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 71: je 0x58874bd5
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 39 9F CC 0C 00 00: cmp dword ptr [edi + 0xccc], ebx
        __asm _emit 0x39
        __asm _emit 0x9f
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 69: je 0x58874bd5
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 39 9F C8 0C 00 00: cmp dword ptr [edi + 0xcc8], ebx
        __asm _emit 0x39
        __asm _emit 0x9f
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x58874bd5
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 8F 4C 0A 00 00: mov ecx, dword ptr [edi + 0xa4c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 57 4C: mov edx, dword ptr [edi + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x4c
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 16: je 0x58874ba3
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes B0 07: mov al, 7
        __asm _emit 0xb0
        __asm _emit 0x07
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 87 1C 03 00 00: ja 0x58874eb8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 C0 4E 87 58: jmp dword ptr [eax*4 + 0x58874ec0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x4e
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8F 70 0A 00 00: mov ecx, dword ptr [edi + 0xa70]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 3B 45 78: cmp eax, dword ptr [ebp + 0x78]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x78
        ; Exact mapped bytes 76 04: jbe 0x58874bc9
        __asm _emit 0x76
        __asm _emit 0x04
        ; Exact mapped bytes B0 08: mov al, 8
        __asm _emit 0xb0
        __asm _emit 0x08
        ; Exact mapped bytes EB C6: jmp 0x58874b8f
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 39 9F A4 09 00 00: cmp dword ptr [edi + 0x9a4], ebx
        __asm _emit 0x39
        __asm _emit 0x9f
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x58874bd9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes B0 04: mov al, 4
        __asm _emit 0xb0
        __asm _emit 0x04
        ; Exact mapped bytes EB BA: jmp 0x58874b8f
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes EB B6: jmp 0x58874b8f
        __asm _emit 0xeb
        __asm _emit 0xb6
        ; Exact mapped bytes 89 5C 24 20: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 5D 0C: movzx ebx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 8B 88 68 02 00 00: mov ecx, dword ptr [eax + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 6C 02 00 00: mov edx, dword ptr [eax + 0x26c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EB 0A: shr ebx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 83 E3 1F: and ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0x1f
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F 8E 36 01 00 00: jle 0x58874d41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 87 C0 0B 00 00: lea eax, [edi + 0xbc0]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D AF 40 0B 00 00: lea ebp, [edi + 0xb40]
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 09: je 0x58874c47
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F B6 32: movzx esi, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 FE 05: cmp si, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 74 0C: je 0x58874c53
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C1: test ecx, eax
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x58874d15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58874c68
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C1: test ecx, eax
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x58874d94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 23 44 24 18: and eax, dword ptr [esp + 0x18]
        __asm _emit 0x23
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 23 4C 24 10: and ecx, dword ptr [esp + 0x10]
        __asm _emit 0x23
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 74 0B: je 0x58874c7f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes EB 07: jmp 0x58874c86
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 84 87 A4 09 00 00: mov eax, dword ptr [edi + eax*4 + 0x9a4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 7C: je 0x58874d0d
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 74 24 2C: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 83 3C 2E 00: cmp dword ptr [esi + ebp], 0
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x2e
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x58874d09
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 80 B4 00 00 00: mov eax, dword ptr [eax + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 76 68: mov esi, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x68
        ; Exact mapped bytes 23 C6: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xc6
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x58874d9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 2D: je 0x58874ce1
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 74 24 1C: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 06: jne 0x58874cc2
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 53: jmp 0x58874d15
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 66 8B 4E 02: mov cx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 4A 02: cmp cx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes 75 0E: jne 0x58874cda
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 3A 02: cmp al, byte ptr [edx]
        __asm _emit 0x3a
        __asm _emit 0x02
        ; Exact mapped bytes 75 08: jne 0x58874cda
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8A 4E 01: mov cl, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes 3A 4A 01: cmp cl, byte ptr [edx + 1]
        __asm _emit 0x3a
        __asm _emit 0x4a
        __asm _emit 0x01
        ; Exact mapped bytes 74 3B: je 0x58874d15
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes B0 09: mov al, 9
        __asm _emit 0xb0
        __asm _emit 0x09
        ; Exact mapped bytes E9 AE FE FF FF: jmp 0x58874b8f
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 74 24 20: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 06: jne 0x58874cef
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 54 24 20: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes EB 26: jmp 0x58874d15
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 46 02: mov ax, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 42 02: cmp ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 75 E1: jne 0x58874cda
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes 8A 0E: mov cl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x0e
        ; Exact mapped bytes 3A 0A: cmp cl, byte ptr [edx]
        __asm _emit 0x3a
        __asm _emit 0x0a
        ; Exact mapped bytes 75 DB: jne 0x58874cda
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 8A 46 01: mov al, byte ptr [esi + 1]
        __asm _emit 0x8a
        __asm _emit 0x46
        __asm _emit 0x01
        ; Exact mapped bytes 3A 42 01: cmp al, byte ptr [edx + 1]
        __asm _emit 0x3a
        __asm _emit 0x42
        __asm _emit 0x01
        ; Exact mapped bytes 75 D3: jne 0x58874cda
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes EB 0C: jmp 0x58874d15
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 08: jne 0x58874d15
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58874da2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4C 24 28: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 44 24 14 08: add dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8C F9 FE FF FF: jl 0x58874c30
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B AF C0 0C 00 00: mov ebp, dword ptr [edi + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 34: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 45 60: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x60
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 06 26 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E1 00 00: mov eax, 0xe1ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 01 00 00: mov ecx, 0x100
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 30: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x30
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B0 03: mov al, 3
        __asm _emit 0xb0
        __asm _emit 0x03
        ; Exact mapped bytes E9 F4 FD FF FF: jmp 0x58874b8f
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B0 05: mov al, 5
        __asm _emit 0xb0
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED FD FF FF: jmp 0x58874b8f
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B0 06: mov al, 6
        __asm _emit 0xb0
        __asm _emit 0x06
        ; Exact mapped bytes E9 E6 FD FF FF: jmp 0x58874b8f
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 99 03 00 00: push 0x399
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 37 6D EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6d
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 70 FF EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A1 03 00 00: push 0x3a1
        __asm _emit 0x68
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 6D EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6d
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 51 FF EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A2 03 00 00: push 0x3a2
        __asm _emit 0x68
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 32 FF EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A3 03 00 00: push 0x3a3
        __asm _emit 0x68
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 13 FF EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 03 00 00: push 0x3a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F4 FE EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9A 03 00 00: push 0x39a
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D5 FE EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 03 00 00: push 0x3a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7D 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B6 FE EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A9 03 00 00: push 0x3a9
        __asm _emit 0x68
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 97 FE EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 AA 03 00 00: push 0x3aa
        __asm _emit 0x68
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F 6C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 78 FE EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
