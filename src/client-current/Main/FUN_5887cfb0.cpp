// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 519 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CFB0 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_5887cfb0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 2C B8 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E B0 01 00 00: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 5A: add eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x5a
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 7E 7C: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x7c
        ; Exact mapped bytes E8 85 63 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 5D 01: lea ebx, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x01
        ; Exact mapped bytes 0F BF CF: movsx ecx, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcf
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 ED C8 EF FF: call 0x587798e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x5887cfe2
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 4F: dec edi
        __asm _emit 0x4f
        ; Exact mapped bytes 0F BF C7: movsx eax, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc7
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 7E 1F: jle 0x5887d025
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 B8 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E9: jne 0x5887d008
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 04: jmp 0x5887d025
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BF 54 24 10: movsx edx, word ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 45 01: lea eax, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A5 C8 EF FF: call 0x587798e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x5887d19c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4F 04: movzx ecx, word ptr [edi + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 0F B7 C5: movzx eax, bp
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc5
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 47 01 00 00: jne 0x5887d19c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 5F 0C: cmp dword ptr [edi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x5887d19c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E A4 00 00 00: sub ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xa4
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
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 64: je 0x5887d0e5
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E A4 00 00 00: sub ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xa4
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
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 72 05: jb 0x5887d0a9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C9 FB 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A4 00 00 00: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 2A 02: mov ax, word ptr [edx + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x2a
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 47 02: cmp ax, word ptr [edi + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes 74 23: je 0x5887d0dd
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 8E A8 00 00 00: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
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
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 83 C5 22: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x22
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 72 A8: jb 0x5887d083
        __asm _emit 0x72
        __asm _emit 0xa8
        ; Exact mapped bytes EB 08: jmp 0x5887d0e5
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 14 01 00 00 00: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9F 5C 05 00 00: mov ebx, dword ptr [edi + 0x55c]
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 83 FB FF: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5887d19c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 8C 9F 00 00 00: jl 0x5887d19c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 14 01: cmp dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 75 47: jne 0x5887d14c
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 0F B7 57 06: movzx edx, word ptr [edi + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x57
        __asm _emit 0x06
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5B D2 F0 FF: call 0x5878a370
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7F 08 02: cmp word ptr [edi + 8], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 75 24: jne 0x5887d140
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 47 06: movzx eax, word ptr [edi + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 4F 04: movzx ecx, word ptr [edi + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D1 F7 FF FF: call 0x5887c900
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 0C: je 0x5887d140
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 68 82 C2 EC 00: push 0xecc282
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 57 14: lea edx, [edi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 51: jmp 0x5887d191
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 68 FD F5 68 00: push 0x68f5fd
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 47 14: lea eax, [edi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 45: jmp 0x5887d191
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes 0F B7 4F 06: movzx ecx, word ptr [edi + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x06
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 D2 F0 FF: call 0x5878a370
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 82 C2 EC 00: push 0xecc282
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 6F 14: lea ebp, [edi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x14
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 6F B8 08 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 57 04: movzx edx, word ptr [edi + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 FA 03: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 75 21: jne 0x5887d19c
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 0F B7 47 06: movzx eax, word ptr [edi + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0x06
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 29: cmp eax, 0x29
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 74 05: je 0x5887d18a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 2A: cmp eax, 0x2a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 75 12: jne 0x5887d19c
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 68 FD F5 68 00: push 0x68f5fd
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 8E A4 01 00 00: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 B8 08 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes FF 44 24 10: inc dword ptr [esp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 85 77 FE FF FF: jne 0x5887d021
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 5E 7C: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x7c
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
