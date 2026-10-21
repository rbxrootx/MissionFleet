// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C440 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5887c440_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 30 01 00 00: sub esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 2C 01 00 00: mov dword ptr [esp + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 34 01 00 00: mov eax, dword ptr [esp + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 78 08 02: cmp word ptr [eax + 8], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 85 7E 01 00 00: jne 0x5887c5ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 E4 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8D 9E C8 01 00 00: lea ebx, [esi + 0x1c8]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 0B 00 00 00: mov ebp, 0xb
        __asm _emit 0xbd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x5887c4c7
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F 7E FF FF 7F: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887c4bf
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887c4bf
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887c4a4
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887c4c3
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5887c4c4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 C2: jne 0x5887c491
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E F0 01 00 00: mov ecx, dword ptr [esi + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 57 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8E F4 01 00 00: lea ecx, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 03: lea edx, [ebp + 3]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x03
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887c4f2
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8D 8E 0C 02 00 00: lea ecx, [esi + 0x20c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 09 00 00 00: mov edx, 9
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887c510
        __asm _emit 0x75
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
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5887c5ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes EB 08: jmp 0x5887c550
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C550 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_5887c440_segment_01() {
    __asm {
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
        ; Exact mapped bytes 72 05: jb 0x5887c576
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B AC 24 44 01 00 00: mov ebp, dword ptr [esp + 0x144]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 BC 00 00 00: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 04: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B 44 1A 04: cmp ax, word ptr [edx + ebx + 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x1a
        __asm _emit 0x04
        ; Exact mapped bytes 75 33: jne 0x5887c5c1
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 8E C0 00 00 00: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
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
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887c5b0
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C2 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 BC 00 00 00: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 06: mov ax, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 44 13 06: cmp ax, word ptr [ebx + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x06
        ; Exact mapped bytes 74 46: je 0x5887c607
        __asm _emit 0x74
        __asm _emit 0x46
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
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 83 C3 22: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x22
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 0F 82 66 FF FF FF: jb 0x5887c550
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8C 24 3C 01 00 00: mov ecx, dword ptr [esp + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 DC 05 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 30 01 00 00: add esp, 0x130
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E C8 01 00 00: lea ecx, [esi + 0x1c8]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 0B 00 00 00: mov edx, 0xb
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887c612
        __asm _emit 0x75
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
        ; Exact mapped bytes 72 05: jb 0x5887c647
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes C1 E3 04: shl ebx, 4
        __asm _emit 0xc1
        __asm _emit 0xe3
        __asm _emit 0x04
        ; Exact mapped bytes 03 DF: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xdf
        ; Exact mapped bytes 03 DB: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xdb
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
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
        ; Exact mapped bytes 72 05: jb 0x5887c682
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 F0 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
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
        ; Exact mapped bytes 72 05: jb 0x5887c6b4
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 BE 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
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
        ; Exact mapped bytes 72 05: jb 0x5887c6e6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8C 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B AE BC 00 00 00: mov ebp, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0xae
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
        ; Exact mapped bytes 03 EB: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xeb
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887c714
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 5E 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 0F B7 51 14: movzx edx, word ptr [ecx + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F B7 48 12: movzx ecx, word ptr [eax + 0x12]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x12
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 34: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 0F B7 42 0A: movzx eax, word ptr [edx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 96 BC 00 00 00: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 4D 10: movzx ecx, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 44 13 0C: movzx eax, word ptr [ebx + edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 50: lea ecx, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 68 5C F2 99 58: push 0x5899f25c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 34 02 00 00: mov eax, dword ptr [esi + 0x234]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887c793
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8D 54 24 3C: lea edx, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes BD 80 00 00 00: mov ebp, 0x80
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 7E FF FF 7F: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887c78b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887c78b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887c770
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887c78f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 01: jne 0x5887c790
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
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
        ; Exact mapped bytes 72 05: jb 0x5887c7b9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B9 04 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 00 00 00: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 19 0A: mov edi, dword ptr [ecx + ebx + 0xa]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 54 19 0E: mov edx, dword ptr [ecx + ebx + 0xe]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 6C 19 12: mov ebp, dword ptr [ecx + ebx + 0x12]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x12
        ; Exact mapped bytes 8B 44 19 16: mov eax, dword ptr [ecx + ebx + 0x16]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x19
        __asm _emit 0x16
        ; Exact mapped bytes 8D 5C 19 0A: lea ebx, [ecx + ebx + 0xa]
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x19
        __asm _emit 0x0a
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E8 E3 88 F1 FF: call 0x587950d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 44 24 24: mov ax, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 82 F3 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5887c8a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 22: mov ax, word ptr [esp + 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 4C 24 12: mov cx, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 DA 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5887c8a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 26: mov ax, word ptr [esp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 4C 24 16: mov cx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 54 24 28: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 75 09: jne 0x5887c840
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 82 B1 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 7C 24 1A: mov di, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 5C 24 2A: mov bx, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 5A: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 09: jne 0x5887c85d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 82 94 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 47: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 1B: jne 0x5887c882
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 16: jne 0x5887c882
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 7C 24 1C: mov di, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 39 7C 24 2C: cmp word ptr [esp + 0x2c], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 72 79: jb 0x5887c8f1
        __asm _emit 0x72
        __asm _emit 0x79
        ; Exact mapped bytes 66 8B 7C 24 1A: mov di, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 5C 24 2A: mov bx, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 22: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 1D: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 18: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 54 24 1C: mov dx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 39 54 24 2C: cmp word ptr [esp + 0x2c], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 75 0C: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 44 24 2E: mov ax, word ptr [esp + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2e
        ; Exact mapped bytes 66 3B 44 24 1E: cmp ax, word ptr [esp + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1e
        ; Exact mapped bytes 72 48: jb 0x5887c8f1
        __asm _emit 0x72
        __asm _emit 0x48
        ; Exact mapped bytes 8D 8E 0C 02 00 00: lea ecx, [esi + 0x20c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 09 00 00 00: mov edx, 9
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887c8b4
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes B9 0B 00 00 00: mov ecx, 0xb
        __asm _emit 0xb9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 01 00 00: mov eax, dword ptr [esi + 0x1f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 EF: jne 0x5887c8d0
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C4 DF FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FC FF FF: jmp 0x5887c5ea
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 FC FF FF: jmp 0x5887c5ec
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
