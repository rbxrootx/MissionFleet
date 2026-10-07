// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 823 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B4B0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_5887b4b0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 14 01 00 00: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x14
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
        ; Exact mapped bytes 89 84 24 10 01 00 00: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 89 46 78: mov word ptr [esi + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 89 AE 80 00 00 00: mov dword ptr [esi + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 44 02 00 00: lea edi, [esi + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 58 05: lea ebx, [eax + 5]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x05
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes E8 08 D3 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887b4e1
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 6C 24 14: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 F9 0A: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0a
        ; Exact mapped bytes 77 21: ja 0x5887b523
        __asm _emit 0x77
        __asm _emit 0x21
        ; Exact mapped bytes 0F B6 91 F8 B7 87 58: movzx edx, byte ptr [ecx + 0x5887b7f8]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 EC B7 87 58: jmp dword ptr [edx*4 + 0x5887b7ec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5887b523
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes B8 05 00 00 00: mov eax, 5
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5887b523
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes B8 0A 00 00 00: mov eax, 0xa
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 14: mov edi, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x14
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 84 94 02 00 00: je 0x5887b7c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 0A: jmp 0x5887b547
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B540 .. +0x2AA bytes.
extern "C" __declspec(naked) void FUN_5887b4b0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 58 7A: movzx ebx, word ptr [eax + 0x7a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x58
        __asm _emit 0x7a
        ; Exact mapped bytes 0F B7 50 5A: movzx edx, word ptr [eax + 0x5a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x50
        __asm _emit 0x5a
        ; Exact mapped bytes 0F B7 40 5C: movzx eax, word ptr [eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x5c
        ; Exact mapped bytes 81 F3 AA 00 00 00: xor ebx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 10: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 77 05: ja 0x5887b578
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D3: mov edx, ebx
        __asm _emit 0x8b
        __asm _emit 0xd3
        ; Exact mapped bytes 6B D2 32: imul edx, edx, 0x32
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x32
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 05: shr ebp, 5
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 74 0A: je 0x5887b598
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 05: je 0x5887b598
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 09: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 75 11: jne 0x5887b5a9
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 6B C9 2D: imul ecx, ecx, 0x2d
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x2d
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 05: shr ebp, 5
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x05
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 44 02 00 00: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F8 D2 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8E 48 02 00 00: mov ecx, dword ptr [esi + 0x248]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 C2: movzx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8F D5 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 0C: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 41 5E: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x5e
        ; Exact mapped bytes FF 44 24 14: inc dword ptr [esp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes C1 E2 04: shl edx, 4
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 81 A4 00 00 00: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 8D 0C D0: lea ecx, [eax + edx*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xd0
        ; Exact mapped bytes 69 C9 E0 00 00 00: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 A8 FC 9C 58: add ecx, 0x589cfca8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 50 02 00 00: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 90 D2 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 88 C0 01 00 00: mov ecx, dword ptr [eax + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 01: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 04: jne 0x5887b657
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes EB 1B: jmp 0x5887b672
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 0E: jne 0x5887b66a
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 3C 02 00 00: mov ecx, dword ptr [eax + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 6C: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 12: jmp 0x5887b67c
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 0F B7 48 5E: movzx ecx, word ptr [eax + 0x5e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 83 E1 0F: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 90 3C 02 00 00: mov edx, dword ptr [eax + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 6C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 4C 02 00 00: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 49 D2 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 0C 02: lea ecx, [edx + eax]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 76 11: jbe 0x5887b6a7
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 80 F1 99 58: push 0x5899f180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x5887b7a4
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 72 1A: jb 0x5887b6cd
        __asm _emit 0x72
        __asm _emit 0x1a
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x5887b6bc
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 01: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 11: jne 0x5887b6cd
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 64 F1 99 58: push 0x5899f164
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x5887b7a4
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 54 24 10: cmp dword ptr [esp + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 73 11: jae 0x5887b6e4
        __asm _emit 0x73
        __asm _emit 0x11
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 48 F1 99 58: push 0x5899f148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x5887b7a4
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x5887b6f6
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7D 06: jge 0x5887b708
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DD 05 40 F1 99 58: fld qword ptr [0x5899f140]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 DA: fcomp st(2)
        __asm _emit 0xd8
        __asm _emit 0xda
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 05: test ah, 5
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x05
        ; Exact mapped bytes 7A 21: jp 0x5887b73a
        __asm _emit 0x7a
        __asm _emit 0x21
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 74 0A: je 0x5887b728
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 05: je 0x5887b728
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 08: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 75 12: jne 0x5887b73a
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 68 20 F1 99 58: push 0x5899f120
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 6A: jmp 0x5887b7a4
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes DD 05 18 F1 99 58: fld qword ptr [0x5899f118]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 DA: fcomp st(2)
        __asm _emit 0xd8
        __asm _emit 0xda
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 05: test ah, 5
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x05
        ; Exact mapped bytes 7A 21: jp 0x5887b76c
        __asm _emit 0x7a
        __asm _emit 0x21
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 74 0A: je 0x5887b75a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 05: je 0x5887b75a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 09: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 75 12: jne 0x5887b76c
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 68 64 F1 99 58: push 0x5899f164
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 38: jmp 0x5887b7a4
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes DC 0D 60 CF 98 58: fmul qword ptr [0x5898cf60]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 05: test ah, 5
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x05
        ; Exact mapped bytes 7A 1D: jp 0x5887b798
        __asm _emit 0x7a
        __asm _emit 0x1d
        ; Exact mapped bytes 83 F9 04: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 0A: je 0x5887b78a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F9 07: cmp ecx, 7
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 74 05: je 0x5887b78a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F9 0A: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0a
        ; Exact mapped bytes 75 0E: jne 0x5887b798
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 68 CE 48 48 00: push 0x4848ce
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 64 F1 99 58: push 0x5899f164
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 0C: jmp 0x5887b7a4
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 04 F1 99 58: push 0x5899f104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 54 02 00 00: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 17 D1 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 8B 7F 08: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 78 FD FF FF: jne 0x5887b540
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 71 FA FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 20 01 00 00: mov ecx, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x20
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
        ; Exact mapped bytes E8 F9 13 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 14 01 00 00: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
