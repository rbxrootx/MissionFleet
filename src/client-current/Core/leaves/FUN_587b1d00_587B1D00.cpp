// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1D00 .. +0x5A3 bytes.
extern "C" __declspec(naked) void FUN_587b1d00_587B1D00() {
    __asm {
        ; Exact mapped bytes 81 EC 8C 00 00 00: sub esp, 0x8c
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 88 00 00 00: mov dword ptr [esp + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 24 9C 00 00 00: mov edx, dword ptr [esp + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 9C 24 98 00 00 00: mov ebx, dword ptr [esp + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 AC 00 00 00: mov ebp, dword ptr [esp + 0xac]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BC 24 B0 00 00 00: mov edi, dword ptr [esp + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 50: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 89 54 24 3C: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 7C 24 54: mov dword ptr [esp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 89 6C 24 48: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C7 44 24 44 00 00 00 00: mov dword ptr [esp + 0x44], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 40 00 00 00 00: mov dword ptr [esp + 0x40], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 30 00 00 00 00: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 89 4C 04 58: mov word ptr [esp + eax + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 76 F1: jbe 0x587b1d60
        __asm _emit 0x76
        __asm _emit 0xf1
        ; Exact mapped bytes 8B B4 24 A8 00 00 00: mov esi, dword ptr [esp + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 14: je 0x587b1d8e
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 04 4B: movzx eax, word ptr [ebx + ecx*2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x4b
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 66 FF 44 44 58: inc word ptr [esp + eax*2 + 0x58]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x58
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 72 F2: jb 0x587b1d80
        __asm _emit 0x72
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 8D 44 24 72: lea eax, [esp + 0x72]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x72
        ; Exact mapped bytes BF 0F 00 00 00: mov edi, 0xf
        __asm _emit 0xbf
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 78 04 00: cmp word ptr [eax + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x587b1ddf
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 78 02 00: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 30: jne 0x587b1dde
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x587b1dd9
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 78 FE 00: cmp word ptr [eax - 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x587b1dd4
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 78 FC 00: cmp word ptr [eax - 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587b1dcf
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 EF 05: sub edi, 5
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x05
        ; Exact mapped bytes 83 E8 0A: sub eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 83 FF 01: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 73 D3: jae 0x587b1da0
        __asm _emit 0x73
        __asm _emit 0xd3
        ; Exact mapped bytes EB 10: jmp 0x587b1ddf
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 83 EF 04: sub edi, 4
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x04
        ; Exact mapped bytes EB 0B: jmp 0x587b1ddf
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 83 EF 03: sub edi, 3
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x03
        ; Exact mapped bytes EB 06: jmp 0x587b1ddf
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 83 EF 02: sub edi, 2
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x02
        ; Exact mapped bytes EB 01: jmp 0x587b1ddf
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 46 C1: cmovbe eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x46
        __asm _emit 0xc1
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 2B: jne 0x587b1e15
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0A: mov ecx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes C7 44 24 10 40 01 00 00: mov dword ptr [esp + 0x10], 0x140
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 83 02 04: add dword ptr [edx], 4
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0A: mov ecx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4C 24 54: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 83 02 04: add dword ptr [edx], 4
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 01 01 00 00 00: mov dword ptr [ecx], 1
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 04 00 00: jmp 0x587b228a
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 76 11: jbe 0x587b1e33
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 7C 5C 58 00: cmp word ptr [esp + ebx*2 + 0x58], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x587b1e2f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 72 F3: jb 0x587b1e22
        __asm _emit 0x72
        __asm _emit 0xf3
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 43 C8: cmovae ecx, eax
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 0F B7 44 4C 58: movzx eax, word ptr [esp + ecx*2 + 0x58]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x4c
        __asm _emit 0x58
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 88 33 04 00 00: js 0x587b2287
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 F9 0F: cmp ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0f
        ; Exact mapped bytes 76 EB: jbe 0x587b1e45
        __asm _emit 0x76
        __asm _emit 0xeb
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 94 24 A0 00 00 00: mov edx, dword ptr [esp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x587b1e76
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 1A 04 00 00: je 0x587b2287
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 01: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 11 04 00 00: jne 0x587b2287
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 02 00 00 00: mov ecx, 2
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 24 7A: mov word ptr [esp + 0x7a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7a
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 66 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 0C 58: mov ax, word ptr [esp + ecx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x58
        ; Exact mapped bytes 66 03 44 0C 78: add ax, word ptr [esp + ecx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x78
        ; Exact mapped bytes 66 89 44 0C 7A: mov word ptr [esp + ecx + 0x7a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x7a
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 83 F9 1E: cmp ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x1e
        ; Exact mapped bytes 72 E9: jb 0x587b1e90
        __asm _emit 0x72
        __asm _emit 0xe9
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 29: je 0x587b1ed6
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 5C 24 50: mov ebx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 04 4B: movzx eax, word ptr [ebx + ecx*2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x4b
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 13: je 0x587b1ecd
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 44 44 78: movzx eax, word ptr [esp + eax*2 + 0x78]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x78
        ; Exact mapped bytes 66 89 4C 45 00: mov word ptr [ebp + eax*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 04 4B: movzx eax, word ptr [ebx + ecx*2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x4b
        ; Exact mapped bytes 66 FF 44 44 78: inc word ptr [esp + eax*2 + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x78
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 72 DF: jb 0x587b1eb1
        __asm _emit 0x72
        __asm _emit 0xdf
        ; Exact mapped bytes 8B 5C 24 24: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C7 44 24 38 FF FF FF FF: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x587b203a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x587b1fe3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587b1f93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 6C 24 44: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 6C 24 40: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 89 74 24 20: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 48 FF: lea ecx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        ; Exact mapped bytes 89 6C 24 30: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 4C 24 34: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 BC 24 A0 00 00 00 01: cmp dword ptr [esp + 0xa0], 1
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587b202d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 A0 00 00 00 02: cmp dword ptr [esp + 0xa0], 2
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 74 24 20: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 6C 24 44: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 6C 24 40: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 6C 24 30: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 44 24 38 FF FF FF FF: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 54 24 34: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x587b2070
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x587b1fce
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 74 24 2C: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C7 44 24 44 A0 D0 8B 58: mov dword ptr [esp + 0x44], 0x588bd0a0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes C7 44 24 40 E0 D0 8B 58: mov dword ptr [esp + 0x40], 0x588bd0e0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0xe0
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 54 24 34: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 3D 50 02 00 00: cmp eax, 0x250
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 97 00 00 00: jbe 0x587b2070
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x587b228a
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 2C: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C7 44 24 44 20 D0 8B 58: mov dword ptr [esp + 0x44], 0x588bd020
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes C7 44 24 40 60 D0 8B 58: mov dword ptr [esp + 0x40], 0x588bd060
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 30 01 01 00 00: mov dword ptr [esp + 0x30], 0x101
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 54 24 34: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes EB 04: jmp 0x587b2031
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3D 54 03 00 00: cmp eax, 0x354
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 A1: ja 0x587b1fd9
        __asm _emit 0x77
        __asm _emit 0xa1
        ; Exact mapped bytes EB 36: jmp 0x587b2070
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 2C: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes C7 44 24 30 14 00 00 00: mov dword ptr [esp + 0x30], 0x14
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8A C3: mov al, bl
        __asm _emit 0x8a
        __asm _emit 0xc3
        ; Exact mapped bytes 2A C1: sub al, cl
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes 88 44 24 11: mov byte ptr [esp + 0x11], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x11
        ; Exact mapped bytes 8B 44 24 48: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 0F B7 10: movzx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x10
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 8D 41 01: lea eax, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 3B 44 24 30: cmp eax, dword ptr [esp + 0x30]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 73 0C: jae 0x587b2096
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes C6 44 24 10 00: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 54 24 12: mov word ptr [esp + 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes EB 2B: jmp 0x587b20c1
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 72 17: jb 0x587b20b5
        __asm _emit 0x72
        __asm _emit 0x17
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 44 24 40: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8A 04 48: mov al, byte ptr [eax + ecx*2]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x48
        ; Exact mapped bytes 88 44 24 10: mov byte ptr [esp + 0x10], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 66 8B 04 48: mov ax, word ptr [eax + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x48
        ; Exact mapped bytes EB 07: jmp 0x587b20bc
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C6 44 24 10 60: mov byte ptr [esp + 0x10], 0x60
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x60
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 44 24 12: mov word ptr [esp + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4C 24 1C: sub ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 E0 02: shl eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 4C: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes D3 E8: shr eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 0C 81: lea ecx, [ecx + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x81
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4C 24 4C: sub ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 2B 54 24 14: sub edx, dword ptr [esp + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 75 F4: jne 0x587b2100
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8D 4B FF: lea ecx, [ebx - 1]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0xff
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 85 D5: test ebp, edx
        __asm _emit 0x85
        __asm _emit 0xd5
        ; Exact mapped bytes 74 0C: je 0x587b2126
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes 85 D5: test ebp, edx
        __asm _emit 0x85
        __asm _emit 0xd5
        ; Exact mapped bytes 75 FA: jne 0x587b2120
        __asm _emit 0x75
        __asm _emit 0xfa
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 09: je 0x587b2133
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8D 42 FF: lea eax, [edx - 1]
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xff
        ; Exact mapped bytes 23 E8: and ebp, eax
        __asm _emit 0x23
        __asm _emit 0xe8
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes EB 02: jmp 0x587b2135
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes B8 FF FF 00 00: mov eax, 0xffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 66 01 44 5C 58: add word ptr [esp + ebx*2 + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x5c
        __asm _emit 0x58
        ; Exact mapped bytes 89 4C 24 48: mov dword ptr [esp + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 75 17: jne 0x587b2163
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x587b2251
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 01: movzx eax, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4C 24 50: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 1C 41: movzx ebx, word ptr [ecx + eax*2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1c
        __asm _emit 0x41
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B DA: cmp ebx, edx
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 0F 86 FD FE FF FF: jbe 0x587b2070
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 23 C5: and eax, ebp
        __asm _emit 0x23
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 4C: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 3B 44 24 38: cmp eax, dword ptr [esp + 0x38]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 84 E9 FE FF FF: je 0x587b2070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 44 C2: cmove eax, edx
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 14 8A: lea edx, [edx + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x8a
        ; Exact mapped bytes 89 54 24 20: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B D3: mov edx, ebx
        __asm _emit 0x8b
        __asm _emit 0xd3
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 73 2B: jae 0x587b21e1
        __asm _emit 0x73
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 54 24 58: lea edx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 8D 14 5A: lea edx, [edx + ebx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x5a
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 0F B7 0A: movzx ecx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0a
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 0B: jle 0x587b21d5
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C2 02: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x02
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 72 EC: jb 0x587b21c1
        __asm _emit 0x72
        __asm _emit 0xec
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 5C 24 24: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4C 24 28: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 84 24 A0 00 00 00: mov eax, dword ptr [esp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 08: jne 0x587b2208
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 81 F9 54 03 00 00: cmp ecx, 0x354
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587b2213
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0C: jne 0x587b2219
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 81 F9 50 02 00 00: cmp ecx, 0x250
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 C0 FD FF FF: ja 0x587b1fd9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 74 24 4C: mov esi, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 89 74 24 38: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 88 14 B0: mov byte ptr [eax + esi*4], dl
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 88 54 B0 01: mov byte ptr [eax + esi*4 + 1], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 B1 02: mov word ptr [ecx + esi*4 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xb1
        __asm _emit 0x02
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E9 1F FE FF FF: jmp 0x587b2070
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 17: je 0x587b226c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 10 40: mov byte ptr [esp + 0x10], 0x40
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 44 24 12: mov word ptr [esp + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 04 A9: mov dword ptr [ecx + ebp*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xa9
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes C1 E0 02: shl eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes 01 01: add dword ptr [ecx], eax
        __asm _emit 0x01
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4C 24 54: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 03: jmp 0x587b228a
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 98 00 00 00: mov ecx, dword ptr [esp + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 B4 ED 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 8C 00 00 00: add esp, 0x8c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
