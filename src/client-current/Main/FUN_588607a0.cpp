// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 577 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588607A0 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_588607a0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C C6 58 06 00 00: mov ecx, dword ptr [esi + eax*8 + 0x658]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x06
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
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 8E 15 02 00 00: jle 0x588609df
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 96 48 01 00 00 01 00 00 00: mov dword ptr [esi + edx*4 + 0x148], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 C0 D4 00 00 00: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8C 30 44 02 00 00: movzx ecx, word ptr [eax + esi + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 8E E0 05 00 00: mov edx, dword ptr [esi + ecx*4 + 0x5e0]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 84 8E E0 05 00 00: lea eax, [esi + ecx*4 + 0x5e0]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 34 0E F4 FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 69 C9 D4 00 00 00: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8C 31 44 02 00 00: movzx ecx, word ptr [ecx + esi + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 8E E0 05 00 00: mov edi, dword ptr [esi + ecx*4 + 0x5e0]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 8E 08 07 00 00: mov ecx, dword ptr [esi + ecx*4 + 0x708]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 BC C6 5C 01 00 00: add edi, dword ptr [esi + eax*8 + 0x15c]
        __asm _emit 0x03
        __asm _emit 0xbc
        __asm _emit 0xc6
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1D 6B 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 D2 D4 00 00 00: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 84 32 44 02 00 00: movzx eax, word ptr [edx + esi + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BC 86 E0 05 00 00: mov dword ptr [esi + eax*4 + 0x5e0], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 C9 D4 00 00 00: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 94 31 44 02 00 00: movzx edx, word ptr [ecx + esi + 0x244]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 84 96 E0 05 00 00: lea eax, [esi + edx*4 + 0x5e0]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 54 0D F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 9C 8E FC 00 00 00: mov dword ptr [esi + ecx*4 + 0xfc], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 16 10 01 00 00: mov byte ptr [esi + edx + 0x110], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 86 20 01 00 00: mov dword ptr [esi + eax*4 + 0x120], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C CE 5C 01 00 00: mov dword ptr [esi + ecx*8 + 0x15c], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xce
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C D6 60 01 00 00: mov dword ptr [esi + edx*8 + 0x160], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xd6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 86 20 01 00 00: lea ecx, [esi + eax*4 + 0x120]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 0C F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C D6 84 01 00 00: mov dword ptr [esi + edx*8 + 0x184], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xd6
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C C6 88 01 00 00: mov dword ptr [esi + eax*8 + 0x188], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 B4 CE 84 01 00 00 D0 B2 E6 A0: xor dword ptr [esi + ecx*8 + 0x184], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xce
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 B4 D6 88 01 00 00 D0 B2 E6 A0: xor dword ptr [esi + edx*8 + 0x188], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xd6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 8D 84 CE 84 01 00 00: lea eax, [esi + ecx*8 + 0x184]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 D6 88 01 00 00: lea eax, [esi + edx*8 + 0x188]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C C6 54 06 00 00: mov dword ptr [esi + eax*8 + 0x654], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C CE 58 06 00 00: mov dword ptr [esi + ecx*8 + 0x658], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 96 C0 06 00 00: mov eax, dword ptr [esi + edx*4 + 0x6c0]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 8E AC 06 00 00: mov ecx, dword ptr [esi + ecx*4 + 0x6ac]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 34 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 96 14 06 00 00: mov dword ptr [esi + edx*4 + 0x614], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 86 7C 06 00 00: mov eax, dword ptr [esi + eax*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 1C 01 00 00: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9C 96 98 06 00 00: mov dword ptr [esi + edx*4 + 0x698], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 69 C9 D4 00 00 00: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 94 31 5C 02 00 00: movzx edx, word ptr [ecx + esi + 0x25c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 94 86 34 01 00 00: mov dword ptr [esi + eax*4 + 0x134], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C C6 60 01 00 00: mov ecx, dword ptr [esi + eax*8 + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 04 07 00 00: mov ecx, dword ptr [esi + 0x704]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 69 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 93 F6 FF FF: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
