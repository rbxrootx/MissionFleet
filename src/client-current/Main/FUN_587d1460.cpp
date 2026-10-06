// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 588 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D1460 .. +0x24C bytes.
extern "C" __declspec(naked) void FUN_587d1460_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 34 02 00 00: je 0x587d16a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C6 01 00 00: jne 0x587d163f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F4 07 00 00: mov eax, dword ptr [ecx + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 3B 08: cmp ecx, dword ptr [eax]
        __asm _emit 0x3b
        __asm _emit 0x08
        ; Exact mapped bytes 74 11: je 0x587d149a
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FE 09: cmp esi, 9
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x09
        ; Exact mapped bytes 7C F3: jl 0x587d1485
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 69 F6 84 0E 00 00: imul esi, esi, 0xe84
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE B2 AA 9B 58 00: cmp byte ptr [esi + 0x589baab2], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xb2
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x587d1541
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 69: je 0x587d1522
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7B 0C: mov edi, dword ptr [ebx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8F A4 00 00 00: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E1 FE: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0xfe
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 20: jne 0x587d14f1
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 0F B6 96 B2 AA 9B 58: movzx edx, byte ptr [esi + 0x589baab2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0xb2
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 50 87 FA FF: call 0x58779c30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5D: je 0x587d1541
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes 8A 47 5E: mov al, byte ptr [edi + 0x5e]
        __asm _emit 0x8a
        __asm _emit 0x47
        __asm _emit 0x5e
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 3A 86 B2 AA 9B 58: cmp al, byte ptr [esi + 0x589baab2]
        __asm _emit 0x3a
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 74 50: je 0x587d1541
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 8E B0 AA 9B 58: movzx ecx, word ptr [esi + 0x589baab0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 52 FB FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 4F FB FF: call 0x58786490
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 04: jne 0x587d151b
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 77 26: ja 0x587d1541
        __asm _emit 0x77
        __asm _emit 0x26
        ; Exact mapped bytes 8B 5B 08: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0x08
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 9E: jne 0x587d14c0
        __asm _emit 0x75
        __asm _emit 0x9e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 02 00 00: push 0x2bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BE A5 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F7 37 F9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x37
        __asm _emit 0xf9
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 86 B2 AA 9B 58: movzx eax, byte ptr [esi + 0x589baab2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 96 B3 AA 9B 58: movzx edx, byte ptr [esi + 0x589baab3]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 08: shl eax, 8
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x08
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 0B D0: or edx, eax
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 89 54 24 28: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 10 C0 98 58: mov edi, dword ptr [0x5898c010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 26: je 0x587d15a4
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8D 54 24 10: lea edx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 35 0C C0 98 58: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3D: je 0x587d1602
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8D 44 24 10: lea eax, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 3F 00 0F 00: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 72 99 58: push 0x58997258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 68 02 00 00 80: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 54 24 18: lea edx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 72 99 58: push 0x58997218
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 00 C0 98 58: call dword ptr [0x5898c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 23 73 0B 00: call 0x58888940
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 44 24 14: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 41 60: mov word ptr [ecx + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 95 FE FF: call 0x587bab60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x95
        __asm _emit 0xfe
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 60: je 0x587d16a4
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 83 F8 0C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 4A: jne 0x587d1693
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 51: je 0x587d16a4
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x587d166a
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 35: jne 0x587d16a4
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes A1 D4 48 A2 58: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
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
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3D AC EE 00 00: cmp eax, 0xeeac
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x587d16a4
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 81 D8 0A 00 00: mov dword ptr [ecx + 0xad8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
