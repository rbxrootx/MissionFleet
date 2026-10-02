// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970C70 .. +0x29F bytes.
extern "C" __declspec(naked) void FUN_58970c70() {
    __asm {
        ; Exact mapped bytes 83 EC 3C: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x3c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 08: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 83 F9 FF: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 80 02 00 00: je 0x58970f06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 44 00: cmp dword ptr [esi + 0x44], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x58970e78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 4C: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 54 24 50: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 7C 24 58: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes C7 44 24 08 00 00 00 00: mov dword ptr [esp + 8], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 04 03 02 01: mov dword ptr [esp + 0x18], 0x1020304
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x01
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 7C 24 28: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 3D 0F 00 02 80: cmp eax, 0x8002000f
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x80
        ; Exact mapped bytes 75 09: jne 0x58970cd1
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 89 44 24 08: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x58970da6
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 79 01: lea edi, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x01
        ; Exact mapped bytes 8D 71 02: lea esi, [ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x02
        ; Exact mapped bytes 8D 51 03: lea edx, [ecx + 3]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x03
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 0F BE 6C 04 20: movsx ebp, byte ptr [esp + eax + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x20
        ; Exact mapped bytes 0F BE 5C 14 20: movsx ebx, byte ptr [esp + edx + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x20
        ; Exact mapped bytes 83 C3 0D: add ebx, 0xd
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AF DA: imul ebx, edx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xda
        ; Exact mapped bytes 83 C5 0D: add ebp, 0xd
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AF E8: imul ebp, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xe8
        ; Exact mapped bytes 03 EB: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xeb
        ; Exact mapped bytes 0F BE 5C 34 20: movsx ebx, byte ptr [esp + esi + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x34
        __asm _emit 0x20
        ; Exact mapped bytes 83 C3 0D: add ebx, 0xd
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AF DE: imul ebx, esi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xde
        ; Exact mapped bytes 03 EB: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xeb
        ; Exact mapped bytes 0F BE 5C 3C 20: movsx ebx, byte ptr [esp + edi + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x3c
        __asm _emit 0x20
        ; Exact mapped bytes 83 C3 0D: add ebx, 0xd
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AF DF: imul ebx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xdf
        ; Exact mapped bytes 03 EB: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xeb
        ; Exact mapped bytes 0F BE 5C 0C 20: movsx ebx, byte ptr [esp + ecx + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x20
        ; Exact mapped bytes 83 C3 0D: add ebx, 0xd
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AF D9: imul ebx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd9
        ; Exact mapped bytes 03 EB: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xeb
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 6B ED 0B: imul ebp, ebp, 0xb
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x0b
        ; Exact mapped bytes 03 DD: add ebx, ebp
        __asm _emit 0x03
        __asm _emit 0xdd
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 83 C1 05: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x05
        ; Exact mapped bytes 83 C2 05: add edx, 5
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x05
        ; Exact mapped bytes 83 C6 05: add esi, 5
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x05
        ; Exact mapped bytes 83 C7 05: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x05
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 18: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x18
        ; Exact mapped bytes 72 A0: jb 0x58970ce3
        __asm _emit 0x72
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 7C 24 60: mov edi, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 76 25: jbe 0x58970d72
        __asm _emit 0x76
        __asm _emit 0x25
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 5C: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes 83 C0 1D: add eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1d
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 14 C5 00 00 00 00: lea edx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 72 E2: jb 0x58970d50
        __asm _emit 0x72
        __asm _emit 0xe2
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 7E 4C 00: cmp dword ptr [esi + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x58970d9a
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 6E 58: mov ebp, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 40: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x40
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F AF C3: imul eax, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc3
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 71 04: div dword ptr [ecx + 4]
        __asm _emit 0xf7
        __asm _emit 0x71
        __asm _emit 0x04
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 33 1C 90: xor ebx, dword ptr [eax + edx*4]
        __asm _emit 0x33
        __asm _emit 0x1c
        __asm _emit 0x90
        ; Exact mapped bytes 83 C5 11: add ebp, 0x11
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x11
        ; Exact mapped bytes 89 6E 58: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x58
        ; Exact mapped bytes EB 06: jmp 0x58970da0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 81 F3 06 A1 8B 7C: xor ebx, 0x7c8ba106
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0x7c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 89 5C 24 0C: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 54 24 54: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes B8 03 00 00 00: mov eax, 3
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 30: mov dword ptr [esp + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C7 44 24 2C 14 00 00 00: mov dword ptr [esp + 0x2c], 0x14
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 38: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 12: je 0x58970ddd
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8D 4C 24 08: lea ecx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 4C 24 40: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes C7 44 24 3C 04 00 00 00: mov dword ptr [esp + 0x3c], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x58970df2
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8D 54 24 08: lea edx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 38: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C7 44 24 34 04 00 00 00: mov dword ptr [esp + 0x34], 4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 5C: mov edx, dword ptr [esp + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4E 08: lea ecx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8D 54 24 40: lea edx, [esp + 0x40]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 44 C4 98 58: call dword ptr [0x5898c444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58970ef9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 48 C4 98 58: call dword ptr [0x5898c448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 3D E5 03 00 00: cmp eax, 0x3e5
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x58970ef9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 30 00: cmp dword ptr [esi + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 74 3A: je 0x58970e6e
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 39 7E 04: cmp dword ptr [esi + 4], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 74 35: je 0x58970e6e
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 54 C4 98 58: call dword ptr [0x5898c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 58 C4 98 58: call dword ptr [0x5898c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 1C 06 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7E 04: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes C7 46 30 00 00 00 00: mov dword ptr [esi + 0x30], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 4C: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B 44 24 50: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 89 54 24 34: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 44 24 58: mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 30: lea edx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 54 24 20: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 54 24 58: mov edx, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 54 24 28: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 54 24 60: mov edx, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 8D 46 08: lea eax, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8D 54 24 2C: lea edx, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 44 24 48 04 03 02 01: mov dword ptr [esp + 0x48], 0x1020304
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x01
        ; Exact mapped bytes C7 44 24 34 14 00 00 00: mov dword ptr [esp + 0x34], 0x14
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 44 C4 98 58: call dword ptr [0x5898c444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 1E: jne 0x58970ef9
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes FF 15 48 C4 98 58: call dword ptr [0x5898c448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 3D E5 03 00 00: cmp eax, 0x3e5
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x58970ef9
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F1 FB FF FF: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
