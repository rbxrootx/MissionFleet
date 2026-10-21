// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ECC0 .. +0x25D bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 14 09 00 00: sub esp, 0x914
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x09
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
        ; Exact mapped bytes 89 84 24 10 09 00 00: mov dword ptr [esp + 0x910], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BE A4 00 00 00: mov edi, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B BE A8 00 00 00: cmp edi, dword ptr [esi + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887eced
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 85 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 28 09 00 00: mov eax, dword ptr [esp + 0x928]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 48 06: movzx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x06
        ; Exact mapped bytes 8B AE 98 00 00 00: mov ebp, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C1: movzx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc1
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 F8 29: cmp eax, 0x29
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5887ee17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 2A: cmp eax, 0x2a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5887ee17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9E A8 00 00 00: mov ebx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 22: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x22
        ; Exact mapped bytes 39 9E A4 00 00 00: cmp dword ptr [esi + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x5887ed2e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 44 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 04: je 0x5887ed3c
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 74 05: je 0x5887ed41
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 31 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 39 5C 24 1C: cmp dword ptr [esp + 0x1c], ebx
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5887ee21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 3F: jne 0x5887ed8e
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 1E DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 48 10: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887ed64
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0E DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 84 24 28 09 00 00: mov eax, dword ptr [esp + 0x928]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 39: je 0x5887edae
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 1A: jne 0x5887ed93
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 F4 DE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 77 1A: ja 0x5887ed9f
        __asm _emit 0x77
        __asm _emit 0x1a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 0F: je 0x5887ed98
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5887ed9a
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x5887ed56
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB E8: jmp 0x5887ed80
        __asm _emit 0xeb
        __asm _emit 0xe8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 0C: cmp edi, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x5887eda4
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 CE DE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 1C 22: add dword ptr [esp + 0x1c], 0x22
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x22
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x5887ed18
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 06: mov ax, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 86 44 02 00 00: lea eax, [esi + 0x244]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 05 00 00 00: mov edx, 5
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 04 00 00 00: mov ebx, 4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887edd0
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C2 BA FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 84 24 28 09 00 00: mov eax, dword ptr [esp + 0x928]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 08: movzx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 76: jne 0x5887ee7b
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 28: lea ecx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5887ee9c
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes EB 9A: jmp 0x5887edbb
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 68 F8 99 58: push 0x5899f868
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 44 F8 99 58: push 0x5899f844
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E D0 01 00 00: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 20 F8 99 58: push 0x5899f820
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8E D4 01 00 00: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 77 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3A BA FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 15 00 00: jmp 0x58880446
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 0F: jne 0x5887ee8f
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 0D: jmp 0x5887ee9c
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 68 50 F5 99 58: push 0x5899f550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 29: cmp ax, 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 74 29: je 0x5887eed8
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 2A: cmp ax, 0x2a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 74 23: je 0x5887eed8
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 1A: jne 0x5887eed3
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 B4 DD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B 7D 10: cmp edi, dword ptr [ebp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5887eecc
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A6 DD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4F 08: movzx ecx, word ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 07: jmp 0x5887eeda
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B 6D 00: mov ebp, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x00
        ; Exact mapped bytes EB E6: jmp 0x5887eebe
        __asm _emit 0xeb
        __asm _emit 0xe6
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B 84 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C9 01 00 00: add edx, 0x1c9
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 66 44 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 86 F0 01 00 00: mov eax, dword ptr [esi + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 31: je 0x5887ef43
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5887ef20
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EF20 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_01() {
    __asm {
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
        ; Exact mapped bytes 74 11: je 0x5887ef3b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887ef3b
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
        ; Exact mapped bytes 75 E7: jne 0x5887ef20
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887ef3f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5887ef40
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E 38 02 00 00: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 B2 02 00 00: add edx, 0x2b2
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 88 43 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 38 02 00 00: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C2 01 00 00: add eax, 0x1c2
        __asm _emit 0x05
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F4 43 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE F4 01 00 00: lea edi, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 03 00 00 00: mov ebp, 3
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x5887ef80
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EF80 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C5 01 00 00: add ecx, 0x1c5
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes E8 CF 43 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E0: jne 0x5887ef80
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 FF 29: cmp di, 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x29
        ; Exact mapped bytes 74 06: je 0x5887efb0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FF 2A: cmp di, 0x2a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x2a
        ; Exact mapped bytes 75 3B: jne 0x5887efeb
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8D 8E F4 01 00 00: lea ecx, [esi + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5887efc0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EFC0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BD FE FF 00 00: mov ebp, 0xfffe
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5887efc0
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 01 00 00: mov eax, dword ptr [esi + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 0F BF EF: movsx ebp, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xef
        ; Exact mapped bytes 83 FD 2E: cmp ebp, 0x2e
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x2e
        ; Exact mapped bytes 0F 87 4F 14 00 00: ja 0x58880446
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 95 B4 04 88 58: movzx edx, byte ptr [ebp + 0x588804b4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 64 04 88 58: jmp dword ptr [edx*4 + 0x58880464]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0x58
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880446 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 8C 24 20 09 00 00: mov ecx, dword ptr [esp + 0x920]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
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
        ; Exact mapped bytes E8 82 C7 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 14 09 00 00: add esp, 0x914
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
