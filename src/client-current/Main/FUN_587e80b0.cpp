// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E80B0 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_587e80b0() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 8E 01 00 00: je 0x587e824e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7E 4C: mov edi, dword ptr [esi + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x4c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 3B: je 0x587e8109
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 19: jge 0x587e80f2
        __asm _emit 0x7d
        __asm _emit 0x19
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 8B 52 14: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 7F 48: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x48
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 E2: jne 0x587e80d2
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 17: jmp 0x587e8109
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 7F 48: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x48
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 E9: jne 0x587e80f2
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 83 BE BC 00 00 00 00: cmp dword ptr [esi + 0xbc], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x587e824b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 50: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x587e8122
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x587e8124
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 41 44: mov eax, dword ptr [ecx + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x44
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x587e8207
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 44 4A A2 58: mov ecx, dword ptr [0x58a24a44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 74 C0 98 58: mov edi, dword ptr [0x5898c074]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 86 94 00 00 00: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 86 24 05 01 00: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 14 01 00 00: mov ecx, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 54: mov edi, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x54
        ; Exact mapped bytes 8B 68 50: mov ebp, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 D4 00 00 00: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 8B 96 D0 00 00 00: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D5: sub edx, ebp
        __asm _emit 0x2b
        __asm _emit 0xd5
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 8B 96 C8 00 00 00: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D5: sub edx, ebp
        __asm _emit 0x2b
        __asm _emit 0xd5
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 60 C0 98 58: call dword ptr [0x5898c060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 43 50: mov eax, dword ptr [ebx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x587e81f8
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x587e81fa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 41 68: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 80 7E 74 01: cmp byte ptr [esi + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 75 3E: jne 0x587e824b
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 8E D0 00 00 00: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E C8 00 00 00: sub ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 7F 23: jg 0x587e8241
        __asm _emit 0x7f
        __asm _emit 0x23
        ; Exact mapped bytes 8B 96 D4 00 00 00: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 96 CC 00 00 00: sub edx, dword ptr [esi + 0xcc]
        __asm _emit 0x2b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FA 05: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 7F 12: jg 0x587e8241
        __asm _emit 0x7f
        __asm _emit 0x12
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C7 86 6C 1C 02 00 00 00 00 00: mov dword ptr [esi + 0x21c6c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 6C 1C 02 00 01 00 00 00: mov dword ptr [esi + 0x21c6c], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
