// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 504 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C900 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_5887c900_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 20: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 2C: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E BC 00 00 00: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5887c9d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E BC 00 00 00: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887c966
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0C 03 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 00 00 00: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 54 0B 04: movzx edx, word ptr [ebx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x04
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 37: jne 0x5887c9ac
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E BC 00 00 00: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887c99b
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 D7 02 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 00 00 00: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 54 0B 06: movzx edx, word ptr [ebx + ecx + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x06
        ; Exact mapped bytes 3B 54 24 34: cmp edx, dword ptr [esp + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 74 35: je 0x5887c9e1
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E BC 00 00 00: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 82 6B FF FF FF: jb 0x5887c940
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E BC 00 00 00: sub ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887ca07
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6B 02 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes C1 E2 04: shl edx, 4
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 74 50 0A: mov esi, dword ptr [eax + edx*2 + 0xa]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4C 50 0E: mov ecx, dword ptr [eax + edx*2 + 0xe]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 7C 50 12: mov edi, dword ptr [eax + edx*2 + 0x12]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x50
        __asm _emit 0x12
        ; Exact mapped bytes 8B 6C 50 16: mov ebp, dword ptr [eax + edx*2 + 0x16]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x50
        __asm _emit 0x16
        ; Exact mapped bytes 8D 44 50 0A: lea eax, [eax + edx*2 + 0xa]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 74 24 24: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 7C 24 2C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 6C 24 30: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes E8 8E 86 F1 FF: call 0x587950d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x86
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 44 24 14: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 82 96 00 00 00: jb 0x5887cae9
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5887cada
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 12: mov ax, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 4C 24 22: mov cx, word ptr [esp + 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x22
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 7D 00 00 00: jb 0x5887cae9
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 6C: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 66 8B 44 24 16: mov ax, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 4C 24 26: mov cx, word ptr [esp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x26
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 72 6C: jb 0x5887cae9
        __asm _emit 0x72
        __asm _emit 0x6c
        ; Exact mapped bytes 66 8B 54 24 18: mov dx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 05: jne 0x5887ca89
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 72 60: jb 0x5887cae9
        __asm _emit 0x72
        __asm _emit 0x60
        ; Exact mapped bytes 66 8B 74 24 2A: mov si, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 5C 24 1A: mov bx, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1a
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 42: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 05: jne 0x5887caa2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B DE: cmp bx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes 72 47: jb 0x5887cae9
        __asm _emit 0x72
        __asm _emit 0x47
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 33: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 0C: jne 0x5887cab8
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3B DE: cmp bx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes 75 07: jne 0x5887cab8
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 39 6C 24 1C: cmp word ptr [esp + 0x1c], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 72 31: jb 0x5887cae9
        __asm _emit 0x72
        __asm _emit 0x31
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 1D: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 18: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 3B DE: cmp bx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes 75 13: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 66 39 6C 24 1C: cmp word ptr [esp + 0x1c], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 75 0C: jne 0x5887cada
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 44 24 1E: mov ax, word ptr [esp + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1e
        ; Exact mapped bytes 66 3B 44 24 2E: cmp ax, word ptr [esp + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2e
        ; Exact mapped bytes 72 0F: jb 0x5887cae9
        __asm _emit 0x72
        __asm _emit 0x0f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
