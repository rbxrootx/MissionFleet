// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 1281 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DE620 .. +0x501 bytes.
extern "C" __declspec(naked) void FUN_588de620_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 44: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x44
        ; Exact mapped bytes B8 9E 02 00 00: mov eax, 0x29e
        __asm _emit 0xb8
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes B8 BC 02 00 00: mov eax, 0x2bc
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes B8 6C 02 00 00: mov eax, 0x26c
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 48 04: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 83 10 14 00 00: mov eax, dword ptr [ebx + 0x1410]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes C7 44 24 24 00 00 00 00: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 8C 24: mov ebp, dword ptr [esp + ecx*4 + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x8c
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8B 14 14 00 00: mov ecx, dword ptr [ebx + 0x1414]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 0C: mov dword ptr [esp + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4C 24 08: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8C 6C 04 00 00: jl 0x588deafb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 8D 66 04 00 00: jge 0x588deafd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 5B 04 00 00: je 0x588deb07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 74 24 18: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 81 BE 80 00 00 00 00 00 00 40: cmp dword ptr [esi + 0x80], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 85 1A 04 00 00: jne 0x588deade
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 B0 18 02 00 00: cmp dword ptr [eax + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x588de6eb
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 8B 88 48 1C 02 00: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 A1 72 E9 FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 11: jmp 0x588de6fc
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 8A 96 54 03 00 00: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3A 93 54 03 00 00: cmp dl, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DA 03 00 00: je 0x588deade
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 90 13 00 00: lea ecx, [esi + 0x1390]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 00 00 00 00: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 79 08 00: cmp dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A5 03 00 00: je 0x588deac5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9B 03 00 00: je 0x588deac5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 70 0C: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BE 60 04 00 00 00: cmp dword ptr [esi + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 66 03 00 00: jne 0x588deaad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 58 04 00 00 00: cmp dword ptr [esi + 0x458], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 59 03 00 00: jne 0x588deaad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 B0 04 00 00: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
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
        ; Exact mapped bytes 8B 53 08: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x08
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 69 D2 C8 00 00 00: imul edx, edx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4B 04: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x04
        ; Exact mapped bytes 2B 4E 04: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x04
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
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 EA E4 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 E4 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 40 03 00 00: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes 0F AF FF: imul edi, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xff
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 89 4C 24 24: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 B5 E4 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes F6 C4 41: test ah, 0x41
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        ; Exact mapped bytes 0F 85 C1 02 00 00: jne 0x588deaad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 40 03 00 00: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 04 97: lea eax, [edi + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x97
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 78 E4 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 38 D7 98 58: fmul qword ptr [0x5898d738]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 20 CF 98 58: fdiv qword ptr [0x5898cf20]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 E4 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 69 C0 B4 00 00 00: imul eax, eax, 0xb4
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FD: idiv ebp
        __asm _emit 0xf7
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 8E 40 03 00 00: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes B9 5E 01 00 00: mov ecx, 0x15e
        __asm _emit 0xb9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 6B C9 46: imul ecx, ecx, 0x46
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x46
        ; Exact mapped bytes B8 91 73 9F 5D: mov eax, 0x5d9f7391
        __asm _emit 0xb8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0x9f
        __asm _emit 0x5d
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes 8D 44 0A 1E: lea eax, [edx + ecx + 0x1e]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x1e
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 9C C1: setl cl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc1
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 23 C8: and ecx, eax
        __asm _emit 0x23
        __asm _emit 0xc8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 9C C2: setl dl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc2
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 23 D7: and edx, edi
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 0F AF CA: imul ecx, edx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xca
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B A8 90 04 01 00: mov ebp, dword ptr [eax + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 A9 88 04 01 00: add ebp, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0xa9
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes E8 B0 B9 E5 FF: call 0x5873a260
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 03 C5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xc5
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
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 90: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x90
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
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 0F 8E 44 01 00 00: jle 0x588dea29
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B 0C 10 00 00: mov ecx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 49 0C: movzx ecx, word ptr [ecx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
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
        ; Exact mapped bytes 75 02: jne 0x588de91d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 42 18: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x18
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x588dea29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes F6 80 78 03 00 00 80: test byte ptr [eax + 0x378], 0x80
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x588dea29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 34 1C 02 00 00: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x588de958
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 B8 B0 18 02 00 00: cmp dword ptr [eax + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 0A 00 00 00: mov edi, 0xa
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 02: jg 0x588de95a
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B FD: mov edi, ebp
        __asm _emit 0x8b
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 46: imul eax, eax, 0x46
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x46
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 E4 FF FF: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E A4 02 00 00: mov ecx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 29 83 8C 12 00 00: sub dword ptr [ebx + 0x128c], eax
        __asm _emit 0x29
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A4 02 00 00: mov ecx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 32: imul ecx, ecx, 0x32
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x32
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes E8 DD E3 FF FF: call 0x588dcd80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 5A 04: cmp dword ptr [edx + 4], ebx
        __asm _emit 0x39
        __asm _emit 0x5a
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 77 00 00 00: jne 0x588dea29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B 6C 12 00 00: mov ecx, dword ptr [ebx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AC 7A F0 FF: call 0x587e6480
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 80 3D 08 49 A2 58 00: cmp byte ptr [0x58a24908], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x588de9ff
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 56 74: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x74
        ; Exact mapped bytes 80 BA 54 03 00 00 04: cmp byte ptr [edx + 0x354], 4
        __asm _emit 0x80
        __asm _emit 0xba
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 16: jne 0x588de9ff
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 03: cmp word ptr [ecx + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 74 0C: je 0x588dea05
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 89 A9 30 1F 02 00: mov dword ptr [ecx + 0x21f30], ebp
        __asm _emit 0x89
        __asm _emit 0xa9
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 81 F0 05 01 00: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 17: je 0x588dea29
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x588dea29
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 0C: je 0x588dea29
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 06: je 0x588dea29
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 A9 38 1F 02 00: mov dword ptr [ecx + 0x21f38], ebp
        __asm _emit 0x89
        __asm _emit 0xa9
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 10 00: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x588deb13
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 29 6C 24 10: sub dword ptr [esp + 0x10], ebp
        __asm _emit 0x29
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 3D 60 90 9C 58 00: cmp dword ptr [0x589c9060], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x588dea7c
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8B B6 B0 04 00 00: mov esi, dword ptr [esi + 0x4b0]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes F7 EE: imul esi
        __asm _emit 0xf7
        __asm _emit 0xee
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4B 04: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 A6 D5 E8 FF: call 0x5876c010
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 B6 C7 FF FF: call 0x588db230
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x588deaad
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes A1 DC 46 A2 58: mov eax, dword ptr [0x58a246dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 0D: cmp dword ptr [eax + 0x170], 0xd
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 7E 14: jle 0x588dea9e
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588dea9e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 34: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x34
        ; Exact mapped bytes EB 02: jmp 0x588deaa0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 43 04: lea eax, [ebx + 4]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 DE E8 FF: call 0x5876c960
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 73 FC FF FF: jne 0x588de730
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 74 24 18: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
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
        ; Exact mapped bytes 0F 8C 38 FC FF FF: jl 0x588de716
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 C3 FB FF FF: jne 0x588de6b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 83 10 14 00 00: inc dword ptr [ebx + 0x1410]
        __asm _emit 0xff
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x14
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
        ; Exact mapped bytes 83 C4 44: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 08: jne 0x588deb07
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 89 8B 10 14 00 00: mov dword ptr [ebx + 0x1410], ecx
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 83 10 14 00 00: inc dword ptr [ebx + 0x1410]
        __asm _emit 0xff
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 44: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 01 AB 10 14 00 00: add dword ptr [ebx + 0x1410], ebp
        __asm _emit 0x01
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0x14
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
        ; Exact mapped bytes 83 C4 44: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
