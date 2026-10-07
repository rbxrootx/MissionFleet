// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 569 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861CE0 .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_58861ce0_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
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
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58861dad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 25: je 0x58861d21
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 16: je 0x58861d19
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 0C: je 0x58861d21
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x58861d03
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 04: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 2D 02 01 00 00: sub eax, 0x102
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58861db6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D FF 00 00 00: sub eax, 0xff
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 49: je 0x58861d7f
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 83 E8 09: sub eax, 9
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x09
        ; Exact mapped bytes 75 72: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 66 39 5F 0A: cmp word ptr [edi + 0xa], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 03: jle 0x58861d46
        __asm _emit 0x7e
        __asm _emit 0x03
        ; Exact mapped bytes 8D 58 01: lea ebx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E9 F7 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 52: je 0x58861dad
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 0F: je 0x58861d70
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 E8 E8 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 D9 E8 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 5C 0D 02 00 00: cmp dword ptr [eax + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E F0 00 00 00: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E F7 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x58861dad
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 13 E0 FF FF: call 0x5885fdc0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA 40 0D 02 00 00: cmp dword ptr [edx + 0x20d40], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 E8: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes D0 E9: shr cl, 1
        __asm _emit 0xd0
        __asm _emit 0xe9
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 D8: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 80 E0 04 01 00 00 00 00 00: mov dword ptr [eax + 0x104e0], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 E4 04 01 00 20 03 00 00: mov dword ptr [eax + 0x104e4], 0x320
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 83 E8 5B: sub eax, 0x5b
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x5b
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x58861eef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 02: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x58861ec6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 03: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 75 A5: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 B8 64 01 00 00 00: cmp word ptr [eax + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 92: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0x92
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 86 98 06 00 00 00: cmp dword ptr [esi + eax*4 + 0x698], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 82: jne 0x58861dad
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes 8B 8C 86 48 01 00 00: mov ecx, dword ptr [esi + eax*4 + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 73 FF FF FF: je 0x58861dad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 F9 0F: cmp ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0f
        ; Exact mapped bytes 77 5C: ja 0x58861e9c
        __asm _emit 0x77
        __asm _emit 0x5c
        ; Exact mapped bytes 0F B6 89 30 1F 86 58: movzx ecx, byte ptr [ecx + 0x58861f30]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 8D 1C 1F 86 58: jmp dword ptr [ecx*4 + 0x58861f1c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6B E5 FF FF: call 0x588603c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 45: jmp 0x58861e9c
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 42 E9 FF FF: call 0x588607a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3C: jmp 0x58861e9c
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 94 86 7C 06 00 00: mov edx, dword ptr [esi + eax*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes D0 E8: shr al, 1
        __asm _emit 0xd0
        __asm _emit 0xe8
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 2B: je 0x58861e9c
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 86 7C 06 00 00: mov ecx, dword ptr [esi + eax*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 50: mov ecx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x50
        ; Exact mapped bytes 83 F9 04: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 16: je 0x58861e9c
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 11: je 0x58861e9c
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 AD E6 FF FF: call 0x58860540
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58861e9c
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 24 CE FF FF: call 0x5885ecc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E2 5A 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6A F6 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 CF FE FF FF: je 0x58861dad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 69 E7 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 40 F6 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A5 FE FF FF: je 0x58861dad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3F E7 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
