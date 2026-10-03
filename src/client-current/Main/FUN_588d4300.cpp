// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 8646 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D4300 .. +0xB8D bytes.
extern "C" __declspec(naked) void FUN_588d4300_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 DE 93 98 58: push 0x589893de
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 EC 70 01 00 00: sub esp, 0x170
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x70
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
        ; Exact mapped bytes 89 84 24 6C 01 00 00: mov dword ptr [esp + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 84 01 00 00: lea eax, [esp + 0x184]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 58 21 00 00: je 0x588d64a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 4E 74: cmp dword ptr [esi + 0x74], ecx
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 75 10: jne 0x588d4363
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 09: jbe 0x588d4363
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 46 78: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes E9 3E 21 00 00: jmp 0x588d64a1
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9E 90 00 00 00: mov ebx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 8E D0 01 00 00: add dword ptr [esi + 0x1d0], ecx
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EB: imul ebx
        __asm _emit 0xf7
        __asm _emit 0xeb
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 8B BE D4 01 00 00: mov edi, dword ptr [esi + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF CB: imul ecx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcb
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes BA 10 27 00 00: mov edx, 0x2710
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F AF CA: imul ecx, edx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xca
        ; Exact mapped bytes B8 A9 A7 47 04: mov eax, 0x447a7a9
        __asm _emit 0xb8
        __asm _emit 0xa9
        __asm _emit 0xa7
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 0D: sar edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0d
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
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 81 FF 10 27 00 00: cmp edi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 05: jle 0x588d43c6
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes BF 10 27 00 00: mov edi, 0x2710
        __asm _emit 0xbf
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B 96 98 00 00 00: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF D7: imul edx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd7
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 66 83 BE D8 01 00 00 03: cmp word ptr [esi + 0x1d8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 89 8E 94 00 00 00: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE 98 00 00 00: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x588d441c
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 15 C0 44 A2 58: mov edx, dword ptr [0x58a244c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 01 96 9C 00 00 00: add dword ptr [esi + 0x9c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 22: jl 0x588d4448
        __asm _emit 0x7c
        __asm _emit 0x22
        ; Exact mapped bytes 81 C7 78 EC FF FF: add edi, 0xffffec78
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF F8: imul edi, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xf8
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
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
        ; Exact mapped bytes 89 86 9C 00 00 00: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 90 00 00 00: mov edi, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FF A0 0F 00 00: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E A6 08 00 00: jle 0x588d4d00
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 9C 00 00 00: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 1C 17: lea ebx, [edi + edx]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x17
        ; Exact mapped bytes 81 FB A0 0F 00 00: cmp ebx, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E C8 07 00 00: jle 0x588d4c37
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 8E 88 00 00 00: add dword ptr [esi + 0x88], ecx
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 AE 8C 00 00 00: add dword ptr [esi + 0x8c], ebp
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 00 00 00: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes 8B AE 8C 00 00 00: mov ebp, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 8B 6C 24 18: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B BE 88 00 00 00: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EB: imul ebx
        __asm _emit 0xf7
        __asm _emit 0xeb
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 ED 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E F4 01 00 00: mov ecx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 54 ED 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 03: cmp word ptr [esi + 0x1d8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x588d45df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E 58 02 00 00: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 EC 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 60 02 00 00 00: cmp dword ptr [esi + 0x260], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x588d45c5
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 86 5C 02 00 00: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 06 00 00 00: mov ecx, 6
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 86 58 02 00 00: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 5C 02 00 00: mov dword ptr [esi + 0x25c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes FF 86 5C 02 00 00: inc dword ptr [esi + 0x25c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 60 02 00 00: mov edx, dword ptr [esi + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 81 E2 03 00 00 80: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d45d9
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 CA FC: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xfc
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 89 96 60 02 00 00: mov dword ptr [esi + 0x260], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 01: cmp word ptr [esi + 0x1d8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6F 1D 00 00: jne 0x588d635c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9C ED FF FF: call 0x588d3390
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 3C: jne 0x588d4636
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 48 F4 FF FF: cmp eax, 0xfffff448
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8F 51 1D 00 00: jg 0x588d635c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 74 01: cmp dword ptr [esi + 0x74], 1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 75 25: jne 0x588d4636
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 3D 48 F4 FF FF: cmp eax, 0xfffff448
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8F 40 1D 00 00: jg 0x588d635c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 74 01: cmp dword ptr [esi + 0x74], 1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 36 1D 00 00: jne 0x588d635c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A8 34 1C 02 00: cmp dword ptr [eax + 0x21c34], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 05 00 00: jmp 0x588d4c0d
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE 44 02 00 00: cmp dword ptr [esi + 0x244], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 86 02 00 00: je 0x588d48c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 90 04 01 00: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 81 88 04 01 00: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8B 3C 90: mov edi, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x90
        ; Exact mapped bytes B8 AB AA AA AA: mov eax, 0xaaaaaaab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes F7 E7: mul edi
        __asm _emit 0xf7
        __asm _emit 0xe7
        ; Exact mapped bytes 8B 86 48 02 00 00: mov eax, dword ptr [esi + 0x248]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 3C 47: lea edi, [edi + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x47
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes E8 CD 85 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 AC 24 8C 01 00 00: mov dword ptr [esp + 0x18c], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B DD: cmp ebx, ebp
        __asm _emit 0x3b
        __asm _emit 0xdd
        ; Exact mapped bytes 74 20: je 0x588d46b5
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 8E 48 02 00 00: mov ecx, dword ptr [esi + 0x248]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F8 46 A2 58: mov ecx, dword ptr [0x58a246f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 D1 E5 FF: call 0x58731810
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 A1 2C EE FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes EB 04: jmp 0x588d46b9
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 28: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 8C 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x18c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes 39 9E 48 02 00 00: cmp dword ptr [esi + 0x248], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x588d47ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 85 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C7 84 24 8C 01 00 00 01 00 00 00: mov dword ptr [esp + 0x18c], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x588d4879
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 9A 24 05 01 00: mov ebx, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D F8 46 A2 58: mov ecx, dword ptr [0x58a246f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 ED A3 00 00 00: sub ebp, 0xa3
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 2D A6 00 00 00: sub eax, 0xa6
        __asm _emit 0x2d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 63 D0 E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 B2 84 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d4790
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 44 50 08: lea eax, [eax + edx*2 + 8]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes E8 87 29 EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x29
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x588d487b
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B 84 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 9C 24 8C 01 00 00: mov dword ptr [esp + 0x18c], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x588d4879
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B AA 24 05 01 00: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B D8: sub ebx, eax
        __asm _emit 0x2b
        __asm _emit 0xd8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D F8 46 A2 58: mov ecx, dword ptr [0x58a246f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 EB 64: sub ebx, 0x64
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x64
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 E8 64: sub eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 95 CF E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 E4 83 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d485e
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 44 50 08: lea eax, [eax + edx*2 + 8]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes E8 B9 28 EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x28
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588d487b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C7 84 24 90 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x190], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 8E E4 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 34 1C 02 00 00: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x588d48b9
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 0F: jne 0x588d48b9
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 88 04 1F 02 00: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes E8 67 08 02 00: call 0x588f5120
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 D9 1B 00 00: jmp 0x588d64a1
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 01 00 00: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x588d49d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 74 01: cmp dword ptr [esi + 0x74], 1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x588d49dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 1E: add edx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x1e
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E7 CE E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xce
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 6A 68: push 0x68
        __asm _emit 0x6a
        __asm _emit 0x68
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 4A 83 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 03 00 00 00: mov dword ptr [esp + 0x18c], 3
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x588d49a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D BC 44 A2 58: mov edi, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 98 24 05 01 00: mov ebx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 6B FF 64: imul edi, edi, 0x64
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 6F 17 00 00: push 0x176f
        __asm _emit 0x68
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 22 01 E6 FF: call 0x58734ac0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes EB 02: jmp 0x588d49a4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C7 84 24 94 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x194], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 8D 01 E6 FF: call 0x58734b60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 83 7E 74 01: cmp dword ptr [esi + 0x74], 1
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x588d4b27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes E8 6A 82 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 04 00 00 00: mov dword ptr [esp + 0x18c], 4
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3F: je 0x588d4a39
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D DC 46 A2 58: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 70 01 00 00 13: cmp dword ptr [ecx + 0x170], 0x13
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 7E 20: jle 0x588d4a29
        __asm _emit 0x7e
        __asm _emit 0x20
        ; Exact mapped bytes 83 B9 94 01 00 00 00: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x588d4a29
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 4C: mov edx, dword ptr [ecx + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 2D 29 EE FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x29
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 18: jmp 0x588d4a41
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1D 29 EE FF: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x29
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x588d4a41
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 18 00 00 00 00: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes C7 84 24 90 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x190], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FB 81 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 05 00 00 00: mov dword ptr [esp + 0x18c], 5
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x588d4bf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA 24 05 01 00: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 52 81 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d4af0
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 0A: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 CC E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 30 81 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d4b12
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 44 50 08: lea eax, [eax + edx*2 + 8]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x588d4bef
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes E8 20 81 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 06 00 00 00: mov dword ptr [esp + 0x18c], 6
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x588d4bf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA 24 05 01 00: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 96 90 00 00 00: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 96 04 02 00 00: mov edx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 83 C2 1A: add edx, 0x1a
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x1a
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 11 CC E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcc
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 60 80 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d4be2
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 8E 04 02 00 00: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 48 08: lea edx, [eax + ecx*2 + 8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 3A 25 EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x25
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C7 84 24 8C 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x18c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 34 1C 02 00 00: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x588d4c28
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 0F: jne 0x588d4c28
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 88 04 1F 02 00: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes E8 F8 04 02 00: call 0x588f5120
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 6A 18 00 00: jmp 0x588d64a1
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FF A0 0F 00 00: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x588d4d00
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9E 9C 00 00 00: mov ebx, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 87 60 F0 FF FF: lea eax, [edi - 0xfa0]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes C7 44 24 48 A0 0F 00 00: mov dword ptr [esp + 0x48], 0xfa0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 33 DA: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xda
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D3: imul edx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd3
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 03 86 88 00 00 00: add eax, dword ptr [esi + 0x88]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 0F AF D3: imul edx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd3
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 03 86 8C 00 00 00: add eax, dword ptr [esi + 0x8c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 89 16 01 00 00: jns 0x588d4dc8
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 BE 9C 00 00 00: idiv dword ptr [esi + 0x9c]
        __asm _emit 0xf7
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 33 FA: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xfa
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F AF EF: imul ebp, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xef
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 03 9E 88 00 00 00: add ebx, dword ptr [esi + 0x88]
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 03 BE 8C 00 00 00: add edi, dword ptr [esi + 0x8c]
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x588d4dd8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9E 9C 00 00 00: mov ebx, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 8C 00 00 00: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 86 90 00 00 00: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8D 04 3B: lea eax, [ebx + edi]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x3b
        ; Exact mapped bytes 89 54 24 44: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 47: jge 0x588d4d72
        __asm _emit 0x7d
        __asm _emit 0x47
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 33 FA: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xfa
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F AF EF: imul ebp, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xef
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 03 9E 88 00 00 00: add ebx, dword ptr [esi + 0x88]
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 03 BE 8C 00 00 00: add edi, dword ptr [esi + 0x8c]
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 66: jmp 0x588d4dd8
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 3D A0 0F 00 00: cmp eax, 0xfa0
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 4F: jle 0x588d4dc8
        __asm _emit 0x7e
        __asm _emit 0x4f
        ; Exact mapped bytes B8 A0 0F 00 00: mov eax, 0xfa0
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 33 FA: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xfa
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes 0F AF EF: imul ebp, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xef
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 03 9E 88 00 00 00: add ebx, dword ptr [esi + 0x88]
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 03 BE 8C 00 00 00: add edi, dword ptr [esi + 0x8c]
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 A0 0F 00 00: mov eax, 0xfa0
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x588d4dd8
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 8B 9E 88 00 00 00: mov ebx, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 8C 00 00 00: mov edi, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 03 FD: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 2D BC 44 A2 58: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B 4C 24 40: sub ecx, dword ptr [esp + 0x40]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 2B 44 24 48: sub eax, dword ptr [esp + 0x48]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 4C 24 3C: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 2B 4C 24 44: sub ecx, dword ptr [esp + 0x44]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 6B C9 75: imul ecx, ecx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 5C 24 1C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 7E 0B: jle 0x588d4e5f
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7C 24 18: idiv dword ptr [esp + 0x18]
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 07: jmp 0x588d4e66
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes D1 FD: sar ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xfd
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8E 9D 00 00 00: jle 0x588d4f1e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes EB 03: jmp 0x588d4e90
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D4E90 .. +0x1639 bytes.
extern "C" __declspec(naked) void FUN_588d4300_segment_01() {
    __asm {
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 03 4C 24 44: add ecx, dword ptr [esp + 0x44]
        __asm _emit 0x03
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 03 7C 24 48: add edi, dword ptr [esp + 0x48]
        __asm _emit 0x03
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 7C 24 2C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 03 44 24 54: add eax, dword ptr [esp + 0x54]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes E8 E6 E2 FF FF: call 0x588d31b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x588d4ef1
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 86 3C 02 00 00: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 38 04 00 00 01: cmp dword ptr [eax + 0x438], 1
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 39: jne 0x588d4f16
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 8E 00 02 00 00: mov ecx, dword ptr [esi + 0x200]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 90 54 03 00 00: mov dl, byte ptr [eax + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 91 54 03 00 00: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x588d4f16
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 5C 24 3C: add ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x03
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 01 4C 24 30: add dword ptr [esp + 0x30], ecx
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 01 54 24 18: add dword ptr [esp + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8C 7A FF FF FF: jl 0x588d4e90
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7C 24 20: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 39 6C 24 28: cmp dword ptr [esp + 0x28], ebp
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 84 0A 08 00 00: je 0x588d5732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 03: cmp word ptr [esi + 0x1d8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 FC 07 00 00: je 0x588d5732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 24 02 00 00 00: cmp dword ptr [esi + 0x224], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x588d4f6e
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 8E 40 02 00 00: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 1C: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 96 A4 00 00 00: lea edx, [esi + 0xa4]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 D0 01 00 00: mov edx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 7C 24 20: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8E 30 02 00 00: mov ecx, dword ptr [esi + 0x230]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 2B: je 0x588d4fa3
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 86 34 02 00 00: mov eax, dword ptr [esi + 0x234]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 7E 20: jle 0x588d4fa3
        __asm _emit 0x7e
        __asm _emit 0x20
        ; Exact mapped bytes 8B 96 38 02 00 00: mov edx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 56 04: lea edx, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 96 28 02 00 00: lea edx, [esi + 0x228]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 25 18 E6 FF: call 0x587367c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7C 24 20: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 BE 80 00 00 00 00: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 57 07 00 00: je 0x588d5707
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D BC 44 A2 58: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 6B C9 75: imul ecx, ecx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x75
        ; Exact mapped bytes 89 5C 24 34: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 7C 24 38: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 6C 24 24: imul dword ptr [esp + 0x24]
        __asm _emit 0xf7
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 54 7C 0A 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E8 5F 7C 0A 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 09: jne 0x588d5054
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 18: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 E2 7C 0A 00: call 0x5897cd52
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D B8 0F 9A 58: fmul qword ptr [0x589a0fb8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 38 CB 98 58: fmul qword ptr [0x5898cb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 7C 0A 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 33 DA: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xda
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 83 BE 4C 02 00 00 00: cmp dword ptr [esi + 0x24c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 74 4E: je 0x588d50e3
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 90 04 01 00: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 81 88 04 01 00: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 8D 44 01 03: lea eax, [ecx + eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x03
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C 90: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x90
        ; Exact mapped bytes B8 57 86 6F 44: mov eax, 0x446f8657
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x86
        __asm _emit 0x6f
        __asm _emit 0x44
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 06: shr eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 6B C0 65: imul eax, eax, 0x65
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x65
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 81 C1 5E 01 00 00: add ecx, 0x15e
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x588d50fa
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes E8 9C 1B 00 00: call 0x588d6c90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D BC 44 A2 58: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 90 04 01 00: mov eax, dword ptr [edx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 82 88 04 01 00: add eax, dword ptr [edx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 5B 84 03 00 00: lea ecx, [ebx + ebx*2 + 0x384]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 90: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x90
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 0C 9D 00 00 00 00: lea ecx, [ebx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 76 26: jbe 0x588d515e
        __asm _emit 0x76
        __asm _emit 0x26
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF 8E C4 01 00 00: imul ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes C7 44 24 30 02 00 00 00: mov dword ptr [esp + 0x30], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x588d5190
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 8E 9C 00 00 00: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C9: imul ecx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc9
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F AF 86 C4 01 00 00: imul eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 8D 14 49: lea edx, [ecx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x49
        ; Exact mapped bytes C7 44 24 30 01 00 00 00: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes 8B 9E CC 01 00 00: mov ebx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 89 88 88 88: mov eax, 0x88888889
        __asm _emit 0xb8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 0F AF FB: imul edi, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xfb
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F AF C3: imul eax, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc3
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 0F AF D9: imul ebx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd9
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F3: div ebx
        __asm _emit 0xf7
        __asm _emit 0xf3
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F B7 86 D8 01 00 00: movzx eax, word ptr [esi + 0x1d8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 77 73: ja 0x588d5248
        __asm _emit 0x77
        __asm _emit 0x73
        ; Exact mapped bytes FF 24 85 CC 64 8D 58: jmp dword ptr [eax*4 + 0x588d64cc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x64
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
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
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes EB 43: jmp 0x588d523c
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes C7 86 C0 01 00 00 AA 00 00 00: mov dword ptr [esi + 0x1c0], 0xaa
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D BC 44 A2 58: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 44 24 28 FF FF FF FF: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x588d5248
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E7: mul edi
        __asm _emit 0xf7
        __asm _emit 0xe7
        ; Exact mapped bytes C1 EA 07: shr edx, 7
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x07
        ; Exact mapped bytes EB 25: jmp 0x588d5246
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
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
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes B8 C5 B3 A2 91: mov eax, 0x91a2b3c5
        __asm _emit 0xb8
        __asm _emit 0xc5
        __asm _emit 0xb3
        __asm _emit 0xa2
        __asm _emit 0x91
        ; Exact mapped bytes F7 E7: mul edi
        __asm _emit 0xf7
        __asm _emit 0xe7
        ; Exact mapped bytes C1 EA 0A: shr edx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x588d528b
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 96 40 02 00 00: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 38: lea eax, [esp + 0x38]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6D 52 00 00: call 0x588da4d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 7E: jne 0x588d52e5
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x588d5285
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4C 24 34: lea ecx, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF 13 00 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 60: jne 0x588d52e5
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 8B 2D BC 44 A2 58: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BE 3C 02 00 00 00: cmp dword ptr [esi + 0x23c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BF 03 00 00: jne 0x588d5657
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 6B ED 64: imul ebp, ebp, 0x64
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x64
        ; Exact mapped bytes 6B C9 75: imul ecx, ecx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 33 0B F1 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 72 03 00 00: je 0x588d5657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 6C 24 28: imul dword ptr [esp + 0x28]
        __asm _emit 0xf7
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes C1 FA 12: sar edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x12
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
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 03: sar edx, 3
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x03
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
        ; Exact mapped bytes 83 3D 40 90 9C 58 00: cmp dword ptr [0x589c9040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 6D: je 0x588d538d
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 39: jle 0x588d535e
        __asm _emit 0x7e
        __asm _emit 0x39
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 7E 2D: jle 0x588d5357
        __asm _emit 0x7e
        __asm _emit 0x2d
        ; Exact mapped bytes 83 F8 78: cmp eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x78
        ; Exact mapped bytes 7E 21: jle 0x588d5350
        __asm _emit 0x7e
        __asm _emit 0x21
        ; Exact mapped bytes 3D 2C 01 00 00: cmp eax, 0x12c
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x588d5349
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3D F4 01 00 00: cmp eax, 0x1f4
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9E C1: setle cl
        __asm _emit 0x0f
        __asm _emit 0x9e
        __asm _emit 0xc1
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 E1 14: and ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x14
        ; Exact mapped bytes 83 C1 28: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x28
        ; Exact mapped bytes EB 1A: jmp 0x588d5363
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes B9 19 00 00 00: mov ecx, 0x19
        __asm _emit 0xb9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x588d5363
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes B9 0F 00 00 00: mov ecx, 0xf
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x588d5363
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes B9 0A 00 00 00: mov ecx, 0xa
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x588d5363
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes B9 05 00 00 00: mov ecx, 5
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 56 55 55 55: mov eax, 0x55555556
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 68 88 13 00 00: push 0x1388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 23 D9 FF FF: call 0x588d2cb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 86 3C 02 00 00: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x588d543f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 4C 02 00 00 00: cmp dword ptr [esi + 0x24c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x588d543f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 02 00 00: mov ecx, dword ptr [esi + 0x200]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 90 54 03 00 00: mov dl, byte ptr [eax + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 91 54 03 00 00: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 7B: je 0x588d543f
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 3F: push 0x3f
        __asm _emit 0x6a
        __asm _emit 0x3f
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes E8 DB 6A 01 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 66: jne 0x588d543f
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BB 21 00 00 00: mov ebx, 0x21
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 70 01 00 00: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588d5402
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588d5402
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588d5404
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 80 25 03 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 70 01 00 00: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588d5434
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588d5434
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588d5436
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E8 F2 77 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 81 E3 03 00 00 80: and ebx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d5453
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 83 CB FC: or ebx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xcb
        __asm _emit 0xfc
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C3 19: add ebx, 0x19
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x19
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CD E3 FF FF: call 0x588d3830
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 EC 01 00 00: jne 0x588d5657
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x588d55d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 77 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 2C: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C7 84 24 8C 01 00 00 07 00 00 00: mov dword ptr [esp + 0x18c], 7
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 42: je 0x588d54de
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 24 05 01 00: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 68 6F 17 00 00: push 0x176f
        __asm _emit 0x68
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8E 18 02 00 00: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 C3 E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 A4 27 03 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588d54e0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C7 84 24 90 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x190], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 29 D8 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes E8 50 77 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 2C: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C7 84 24 8C 01 00 00 08 00 00 00: mov dword ptr [esp + 0x18c], 8
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 40: je 0x588d5556
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 24 05 01 00: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8E 18 02 00 00: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A C2 E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc2
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 DA 1B EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C7 84 24 90 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x190], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 E6 76 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 09 00 00 00: mov dword ptr [esp + 0x18c], 9
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 37: je 0x588d55b7
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B A8 24 05 01 00: mov ebp, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 02 00 00: mov eax, dword ptr [esi + 0x214]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 1B 00 00: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 04 C2 E5 FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 FB 36 E7 FF: call 0x58748cb0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588d55b9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 02 01 00 00: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C7 84 24 90 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x190], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 50 D7 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x588d5657
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 76 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 81 E5 03 00 00 80: and ebp, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d55e9
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 4D: dec ebp
        __asm _emit 0x4d
        ; Exact mapped bytes 83 CD FC: or ebp, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xfc
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 19: add ebp, 0x19
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x19
        ; Exact mapped bytes E8 5B 76 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 2C: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0A 00 00 00: mov dword ptr [esp + 0x18c], 0xa
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 41: je 0x588d564c
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 24 05 01 00: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 54 24 1C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 96 18 02 00 00: mov edx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A4 C1 E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 E4 1A EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C7 84 24 8C 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x18c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 00 02 00 00: mov eax, dword ptr [esi + 0x200]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x588d5707
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 B4 0D 00 00: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AE B4 01 00 00: mov ebp, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes 79 02: jns 0x588d5687
        __asm _emit 0x79
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 8D 54 24 38: lea edx, [esp + 0x38]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DD 0F 00 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 C4 01 00 00: mov edx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E A0 00 00 00: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
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
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes B8 25 49 92 24: mov eax, 0x24924925
        __asm _emit 0xb8
        __asm _emit 0x25
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        ; Exact mapped bytes F7 E7: mul edi
        __asm _emit 0xf7
        __asm _emit 0xe7
        ; Exact mapped bytes 8B 86 E4 01 00 00: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes D1 EF: shr edi, 1
        __asm _emit 0xd1
        __asm _emit 0xef
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 96 00 02 00 00: mov edx, dword ptr [esi + 0x200]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EF 05: shr edi, 5
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x05
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 3C 02 00 00: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 6C: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 6C: mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 59 A6 F1 FF: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 40 02 00 00: mov eax, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 EC F4 FF FF: je 0x588d4c01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 63 2F F1 FF: call 0x587e8690
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2f
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 CF F4 FF FF: jmp 0x588d4c01
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7C 24 24 00: cmp dword ptr [esp + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F 97 0A 00 00: jg 0x588d61d4
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 24 02 00 00 00: cmp dword ptr [esi + 0x224], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x588d576d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8E 40 02 00 00: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 1C: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 96 A4 00 00 00: lea edx, [esi + 0xa4]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 D0 01 00 00: mov edx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 84 00 00 00: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 89 24 05 01 00: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 6E 04: lea ebp, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D7 E5 EE FF: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe5
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 2D 05 00 00: je 0x588d5cbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 38 00: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 24 05 00 00: je 0x588d5cbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 80 00 00 00 00: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 08 00 00: je 0x588d6071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 75: imul ecx, ecx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x75
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes C1 ED 1F: shr ebp, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x1f
        ; Exact mapped bytes 03 EA: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xea
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 7C 24 54: mov dword ptr [esp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 89 5C 24 58: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 33: je 0x588d5836
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 96 40 02 00 00: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 58: lea eax, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BC 4C 00 00: call 0x588da4d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 48: jne 0x588d5860
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x588d5836
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4C 24 54: lea ecx, [esp + 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E 0E 00 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2A: jne 0x588d5860
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 83 BE 3C 02 00 00 00: cmp dword ptr [esi + 0x23c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x588d5a2a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B8 05 F1 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x588d5a2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C2 DF FF FF: call 0x588d3830
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x588d5a2a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x588d59c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 73 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0B 00 00 00: mov dword ptr [esp + 0x18c], 0xb
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 3A: je 0x588d58e1
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 98 24 05 01 00: mov ebx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 6F 17 00 00: push 0x176f
        __asm _emit 0x68
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A BF E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbf
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A1 23 03 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588d58e3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 CD FF: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 AC 24 90 01 00 00: mov dword ptr [esp + 0x190], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 D4 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes E8 4E 73 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0C 00 00 00: mov dword ptr [esp + 0x18c], 0xc
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 3A: je 0x588d5952
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 99 24 05 01 00: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8E 18 02 00 00: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B BE E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DE 17 EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 AC 24 90 01 00 00: mov dword ptr [esp + 0x190], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE 72 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0D 00 00 00: mov dword ptr [esp + 0x18c], 0xd
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 38: je 0x588d59b0
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 9A 24 05 01 00: mov ebx, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 14 02 00 00: mov edx, dword ptr [esi + 0x214]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 1B 00 00: push 0x1b58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 0B BE E5 FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 02 33 E7 FF: call 0x58748cb0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588d59b2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 AC 24 90 01 00 00: mov dword ptr [esp + 0x190], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B D3 02 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x588d5a2a
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes E8 80 72 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0E 00 00 00: mov dword ptr [esp + 0x18c], 0xe
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 39: je 0x588d5a1f
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B B8 24 05 01 00: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CE BD E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbd
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 11 17 EE FF: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C7 84 24 8C 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x18c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 41 72 0A 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D B8 CE 98 58: fmul qword ptr [0x5898ceb8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xce
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 72 0A 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 09: jne 0x588d5a6d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B BE 9C 00 00 00: mov edi, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 C7 72 0A 00: call 0x5897cd52
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D B8 0F 9A 58: fmul qword ptr [0x589a0fb8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 38 CB 98 58: fmul qword ptr [0x5898cb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 72 0A 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 33 CA: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xca
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 90 04 01 00: mov eax, dword ptr [edx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 82 88 04 01 00: add eax, dword ptr [edx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D AC 49 84 03 00 00: lea ebp, [ecx + ecx*2 + 0x384]
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 04 90: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x90
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F5: div ebp
        __asm _emit 0xf7
        __asm _emit 0xf5
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 03 D5: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xd5
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 76 28: jbe 0x588d5b0c
        __asm _emit 0x76
        __asm _emit 0x28
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F AF CB: imul ecx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcb
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F AF 86 C4 01 00 00: imul eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 8D 7D 01: lea edi, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x01
        ; Exact mapped bytes EB 25: jmp 0x588d5b31
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F AF 86 C4 01 00 00: imul eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 0F: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 F9 04: sar ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 8B FD: mov edi, ebp
        __asm _emit 0x8b
        __asm _emit 0xfd
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 0F AF 8E CC 01 00 00: imul ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 73 B2 E7 45: mov eax, 0x45e7b273
        __asm _emit 0xb8
        __asm _emit 0x73
        __asm _emit 0xb2
        __asm _emit 0xe7
        __asm _emit 0x45
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 89 7C 24 70: mov dword ptr [esp + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 8B BE C8 01 00 00: mov edi, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 0E: shr edx, 0xe
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0e
        ; Exact mapped bytes 89 54 24 68: mov dword ptr [esp + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F AF DF: imul ebx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xdf
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 6C: mov dword ptr [esp + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F3: div ebx
        __asm _emit 0xf7
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 8E B4 01 00 00: mov ecx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 64: lea edx, [esp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 4C 24 7C: mov dword ptr [esp + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 44 24 68 0B 00 00 00: mov dword ptr [esp + 0x68], 0xb
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 80 00 00 00: mov dword ptr [esp + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 89 44 24 78: mov dword ptr [esp + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 8B 86 DC 01 00 00: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 3C 02 00 00: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 24 05 01 00: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 89 E8 EE FF: call 0x587c4450
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 57: jne 0x588d5c2e
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 66 39 AE D8 01 00 00: cmp word ptr [esi + 0x1d8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x588d5c2e
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 54 24 68: mov edx, dword ptr [esp + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
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
        ; Exact mapped bytes 89 44 24 68: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 8B 86 DC 01 00 00: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 4C 1C 02 00: mov ecx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 64: lea edx, [esp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 4C 02 00 00: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 48 1F EB FF: call 0x58787b70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 C4 18 02 00 00: cmp dword ptr [ecx + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 57: je 0x588d5c8e
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 66 39 AE D8 01 00 00: cmp word ptr [esi + 0x1d8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x588d5c8e
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 54 24 68: mov edx, dword ptr [esp + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
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
        ; Exact mapped bytes 89 44 24 68: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 8B 86 DC 01 00 00: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 4C 1C 02 00: mov ecx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 64: lea edx, [esp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 4C 02 00 00: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 38 24 EB FF: call 0x587880c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 34 1C 02 00 00: cmp dword ptr [ecx + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x588d5cb0
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 07: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 0F: jne 0x588d5cb0
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 89 04 1F 02 00: mov ecx, dword ptr [ecx + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes E8 70 F4 01 00: call 0x588f5120
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 E3 07 00 00: jmp 0x588d64a1
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 80 00 00 00 00: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A6 03 00 00: je 0x588d6071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 75: imul ecx, ecx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x75
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 89 7C 24 5C: mov dword ptr [esp + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 5C 24 60: mov dword ptr [esp + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 33: je 0x588d5d62
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 96 40 02 00 00: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 60: lea eax, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 47 00 00: call 0x588da4d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 48: jne 0x588d5d8c
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x588d5d62
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 09 00 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2A: jne 0x588d5d8c
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 83 BE 3C 02 00 00 00: cmp dword ptr [esi + 0x23c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x588d5e49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8C 00 F1 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x588d5e49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 6E 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d5d9d
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 8E 04 02 00 00: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 48 3C: lea eax, [eax + ecx*2 + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x3c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 20: lea edx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 78 DA FF FF: call 0x588d3830
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 6F: jne 0x588d5e2b
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes 6A 60: push 0x60
        __asm _emit 0x6a
        __asm _emit 0x60
        ; Exact mapped bytes E8 8B 6E 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 5C 24 18: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C7 84 24 8C 01 00 00 0F 00 00 00: mov dword ptr [esp + 0x18c], 0xf
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 45: je 0x588d5e20
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B B8 24 05 01 00: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 02 00 00: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D7 B9 E5 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 E0 46 A2 58: mov edx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 40 14 EE FF: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C7 84 24 8C 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x18c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 40 02 00 00: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 47 28 F1 FF: call 0x587e8690
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BE D8 01 00 00 01: cmp word ptr [esi + 0x1d8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0F: je 0x588d5e62
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4E CF FF FF: call 0x588d2db0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 30 02 00 00: mov ecx, dword ptr [esi + 0x230]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 20: je 0x588d5e8c
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 86 34 02 00 00: mov eax, dword ptr [esi + 0x234]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 7E 15: jle 0x588d5e8c
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 8B 96 38 02 00 00: mov edx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 96 28 02 00 00: lea edx, [esi + 0x228]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 34 09 E6 FF: call 0x587367c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 0F: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7B 09: lea edi, [ebx + 9]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x09
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x588d5f3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 01: cmp word ptr [esi + 0x1d8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x588d5f3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 01 00 00: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 B4 01 00 00: mov edx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 88 00 00 00: mov dword ptr [esp + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 94 00 00 00: mov dword ptr [esp + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 98 00 00 00: mov dword ptr [esp + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 01 00 00: mov ecx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 80 00 00 00: lea edx, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 4C 02 00 00: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 90 00 00 00: mov dword ptr [esp + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 94 00 00 00 00 00 00 00: mov dword ptr [esp + 0x94], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 9C 00 00 00: mov dword ptr [esp + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 A0 00 00 00 FF FF FF FF: mov dword ptr [esp + 0xa0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 4C 1C 02 00: mov eax, dword ptr [eax + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 36 1C EB FF: call 0x58787b70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1c
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 C4 18 02 00 00: cmp dword ptr [eax + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x588d5ff3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8E D8 01 00 00: movzx ecx, word ptr [esi + 0x1d8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA FF: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 94 00 00 00: jle 0x588d5ff3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 8A 00 00 00: jae 0x588d5ff3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 01 00 00: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 B4 01 00 00: mov edx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 C0 00 00 00: mov dword ptr [esp + 0xc0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 01 00 00: mov ecx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 CC 00 00 00: mov dword ptr [esp + 0xcc], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 D0 00 00 00: mov dword ptr [esp + 0xd0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 01 00 00: mov ecx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 B8 00 00 00: lea edx, [esp + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 4C 02 00 00: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 C8 00 00 00: mov dword ptr [esp + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 CC 00 00 00 00 00 00 00: mov dword ptr [esp + 0xcc], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 D4 00 00 00: mov dword ptr [esp + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 D8 00 00 00 FF FF FF FF: mov dword ptr [esp + 0xd8], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 4C 1C 02 00: mov eax, dword ptr [eax + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D2 20 EB FF: call 0x587880c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 96 C0 01 00 00: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B4 01 00 00: mov ecx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 A4 00 00 00: mov dword ptr [esp + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 C8 01 00 00: mov edx, dword ptr [esi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8C 24 B0 00 00 00: mov dword ptr [esp + 0xb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 24 B4 00 00 00: mov dword ptr [esp + 0xb4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 DC 01 00 00: mov edx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 9C 00 00 00: lea ecx, [esp + 0x9c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 24 A8 00 00 00: mov dword ptr [esp + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 AC 00 00 00 00 00 00 00: mov dword ptr [esp + 0xac], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 24 B4 00 00 00: mov dword ptr [esp + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 24 B8 00 00 00 FF FF FF FF: mov dword ptr [esp + 0xb8], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 50 1C 02 00: mov eax, dword ptr [eax + 0x21c50]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AF F0 EC FF: call 0x587a5120
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 86 D8 01 00 00: movzx eax, word ptr [esi + 0x1d8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 14: jne 0x588d6092
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 86 58 02 00 00: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 00 E8 FF FF: jmp 0x588d4892
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 F6 E7 FF FF: jne 0x588d4892
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 9C 01 00 00: push 0x19c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 6B 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 84 24 8C 01 00 00 10 00 00 00: mov dword ptr [esp + 0x18c], 0x10
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5B: je 0x588d6117
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B9 90 04 01 00: mov edi, dword ptr [ecx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 99 24 05 01 00: mov ebx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 B9 88 04 01 00: add edi, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 96 3C 02 00 00: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 84 03 00 00: push 0x384
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 4C 03 00 00: add edx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 52 04: movzx edx, word ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 54: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4D 5D E8 FF: call 0x5875be60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5d
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x588d6119
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 96 D8 01 00 00: movzx edx, word ptr [esi + 0x1d8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 84 24 6E 01 00 00: mov ax, word ptr [esp + 0x16e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E2 08: shl dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x08
        ; Exact mapped bytes 66 33 D0: xor dx, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 0F 00 00: mov ecx, 0xf00
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 66 33 C2: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 0F B7 96 C0 01 00 00: movzx edx, word ptr [esi + 0x1c0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 6B D2 0C: imul dx, dx, 0xc
        __asm _emit 0x66
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 84 24 6E 01 00 00: mov word ptr [esp + 0x16e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 C4 01 00 00: movzx eax, word ptr [esi + 0x1c4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 24 70 01 00 00: mov word ptr [esp + 0x170], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C7 84 24 94 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x194], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 84 24 7A 01 00 00: mov word ptr [esp + 0x17a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 59 E8 FF: call 0x5875bae0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x59
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 3C 02 00 00: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 24 D8 00 00 00: lea ecx, [esp + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 87 98 01 00 00: mov dword ptr [edi + 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 5A E8 FF: call 0x5875bc80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5a
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 34 1C 02 00 00: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0A E7 FF FF: jne 0x588d48b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 DA E6 FF FF: jne 0x588d4897
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 04 1F 02 00: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C1 94 00 00 00: add ecx, 0x94
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C1 E7 ED FF: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE E6 FF FF: jmp 0x588d4892
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 8E 88 00 00 00: add dword ptr [esi + 0x88], ecx
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 98 00 00 00: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 96 8C 00 00 00: add dword ptr [esi + 0x8c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 86 90 00 00 00: add dword ptr [esi + 0x90], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes 8B 9E 8C 00 00 00: mov ebx, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B AE 90 00 00 00: mov ebp, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 88 00 00 00: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 ED: imul ebp
        __asm _emit 0xf7
        __asm _emit 0xed
        ; Exact mapped bytes C1 FA 07: sar edx, 7
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x07
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
        ; Exact mapped bytes 2B D8: sub ebx, eax
        __asm _emit 0x2b
        __asm _emit 0xd8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 26 D0 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E F4 01 00 00: mov ecx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D7 CF 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 03: cmp word ptr [esi + 0x1d8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x588d63bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8E 58 02 00 00: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7A CF 02 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 60 02 00 00 00: cmp dword ptr [esi + 0x260], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x588d6342
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 86 5C 02 00 00: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 06 00 00 00: mov ecx, 6
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 86 58 02 00 00: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 5C 02 00 00: mov dword ptr [esi + 0x25c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes FF 86 5C 02 00 00: inc dword ptr [esi + 0x25c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 02 00 00: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 81 E1 03 00 00 80: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d6356
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 C9 FC: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xfc
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 8E 60 02 00 00: mov dword ptr [esi + 0x260], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D8 01 00 00 03: cmp word ptr [esi + 0x1d8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 55: jne 0x588d63bb
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B9 88 04 01 00: cmp dword ptr [ecx + 0x10488], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 47: jne 0x588d63c0
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 91 90 04 01 00: mov edx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 07 00 00 80: and edx, 0x80000007
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x588d638c
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 83 CA F8: or edx, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xf8
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 75 32: jne 0x588d63c0
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 86 50 02 00 00: mov eax, dword ptr [esi + 0x250]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x588d63c0
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 81 EA 5C 03 00 00: sub edx, 0x35c
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 81 EA E8 03 00 00: sub edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xea
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 54 02 00 00: mov edx, dword ptr [esi + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 F8 F0 FF: call 0x587e5cb0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x588d63c0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 8C 00 00 00: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 88 00 00 00: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 50: mov dword ptr [esp + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 4C: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 33: je 0x588d6411
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 96 40 02 00 00: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 50: lea eax, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 40 00 00: call 0x588da4d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 76: jne 0x588d6469
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x588d6411
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4C 24 4C: lea ecx, [esp + 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 02 00 00: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 02 00 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 58: jne 0x588d6469
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 83 BE 3C 02 00 00 00: cmp dword ptr [esi + 0x23c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 6E: jne 0x588d6488
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes 6B D2 75: imul edx, edx, 0x75
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x75
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 44 24 50: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 44 24 50: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AB F9 F0 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1F: je 0x588d6488
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 28: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 3D F0 00 00 00: cmp eax, 0xf0
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 09: jl 0x588d6480
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes C7 46 28 00 01 00 00: mov dword ptr [esi + 0x28], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x588d64a1
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 28: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes EB 19: jmp 0x588d64a1
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 83 7E 28 10: cmp dword ptr [esi + 0x28], 0x10
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x10
        ; Exact mapped bytes 7F 0B: jg 0x588d6499
        __asm _emit 0x7f
        __asm _emit 0x0b
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes EB 08: jmp 0x588d64a1
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 83 46 28 F0: add dword ptr [esi + 0x28], -0x10
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 8C 24 84 01 00 00: mov ecx, dword ptr [esp + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8C 24 6C 01 00 00: mov ecx, dword ptr [esp + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 18 67 0A 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 7C 01 00 00: add esp, 0x17c
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
