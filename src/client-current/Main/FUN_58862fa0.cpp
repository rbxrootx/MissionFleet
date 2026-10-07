// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 838 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862FA0 .. +0x346 bytes.
extern "C" __declspec(naked) void FUN_58862fa0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 02: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BB 5C 0D 02 00 00: cmp dword ptr [ebx + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 02 03 00 00: jne 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B 96 F4 00 00 00: cmp edx, dword ptr [esi + 0xf4]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x58862ff5
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 A3 CE FF FF: call 0x5885fe90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xce
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 28 07 00 00: cmp edx, dword ptr [esi + 0x728]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 70: jne 0x5886306d
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B B6 1C 01 00 00: mov esi, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 83 BC 01 98 13 00 00 00: cmp dword ptr [ecx + eax + 0x1398], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C0 02 00 00: je 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C6 39 01 00 00: add esi, 0x139
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E6 04: shl esi, 4
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0x04
        ; Exact mapped bytes 8B 14 06: mov edx, dword ptr [esi + eax]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x06
        ; Exact mapped bytes 8B 72 0C: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 83 24 05 01 00: mov eax, dword ptr [ebx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B B8 14 01 00 00: mov edi, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 00 D0 07 00: mov eax, 0x7d000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 00 DC 05 00: mov eax, 0x5dc00
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 8B 2C 05 01 00: mov dword ptr [ebx + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 91 30 05 01 00: mov dword ptr [ecx + 0x10530], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 30 07 00 00: cmp edx, dword ptr [esi + 0x730]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x58863084
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 D5 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd5
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 34 07 00 00: cmp edx, dword ptr [esi + 0x734]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x5886309b
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 BD D5 FF FF: call 0x58860650
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd5
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 3B 96 2C 07 00 00: cmp edx, dword ptr [esi + 0x72c]
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x588631a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 8E 98 06 00 00 00: cmp dword ptr [esi + ecx*4 + 0x698], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 23 02 00 00: jne 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 8E 48 01 00 00: mov eax, dword ptr [esi + ecx*4 + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 14 02 00 00: je 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 04: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 BA 64 01 00 00 00: cmp word ptr [edx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x58863113
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 13: je 0x588630f5
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 83 F8 10: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 07: je 0x588630ee
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 68 EC EB 99 58: push 0x5899ebec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 0C: jmp 0x588630fa
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 68 C0 EB 99 58: push 0x5899ebc0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x588630fa
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 68 94 EB 99 58: push 0x5899eb94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 B5 C7 FF FF: call 0x5885f8c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc7
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 83 FA 0F: cmp edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0f
        ; Exact mapped bytes 77 62: ja 0x5886317d
        __asm _emit 0x77
        __asm _emit 0x62
        ; Exact mapped bytes 0F B6 92 FC 32 86 58: movzx edx, byte ptr [edx + 0x588632fc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 E8 32 86 58: jmp dword ptr [edx*4 + 0x588632e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 4F: jne 0x5886317d
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8B D2 FF FF: call 0x588603c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x5886317d
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 62 D6 FF FF: call 0x588607a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x5886317d
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 84 8E 7C 06 00 00: mov eax, dword ptr [esi + ecx*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 2B: je 0x5886317d
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 86 1C 01 00 00: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 86 7C 06 00 00: mov edx, dword ptr [esi + eax*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 50: mov ecx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x50
        ; Exact mapped bytes 83 F9 04: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 16: je 0x5886317d
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 11: je 0x5886317d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CC D3 FF FF: call 0x58860540
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x5886317d
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 43 BB FF FF: call 0x5885ecc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 FC 48 A2 58: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xa1
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 48 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
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
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8E 7C 06 00 00: lea ecx, [esi + 0x67c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 3B 51 6C: cmp edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 74 15: je 0x588631ca
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 3B 11: cmp edx, dword ptr [ecx]
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 74 21: je 0x588631da
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 7C EE: jl 0x588631b0
        __asm _emit 0x7c
        __asm _emit 0xee
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6E ED FF FF: call 0x58861f40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xed
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 86 48 01 00 00 04: cmp dword ptr [esi + eax*4 + 0x148], 4
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x588632de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 BA 64 01 00 00 00: cmp word ptr [edx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x588630f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 94 8E 7C 06 00 00: mov edx, dword ptr [esi + ecx*4 + 0x67c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        ; Exact mapped bytes C6 84 31 10 01 00 00 32: mov byte ptr [ecx + esi + 0x110], 0x32
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        ; Exact mapped bytes C7 84 8E FC 00 00 00 01 00 00 00: mov dword ptr [esi + ecx*4 + 0xfc], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 8C 86 D0 05 00 00: mov cl, byte ptr [esi + eax*4 + 0x5d0]
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 B4 C6 84 01 00 00 D0 B2 E6 A0: xor dword ptr [esi + eax*8 + 0x184], 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 88 4C 24 14: mov byte ptr [esp + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8C C6 84 01 00 00: mov ecx, dword ptr [esi + eax*8 + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A D1: mov dl, cl
        __asm _emit 0x8a
        __asm _emit 0xd1
        ; Exact mapped bytes 81 F1 D0 B2 E6 A0: xor ecx, 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 89 8C C6 84 01 00 00: mov dword ptr [esi + eax*8 + 0x184], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 88 44 24 16: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 16: push 0x16
        __asm _emit 0x6a
        __asm _emit 0x16
        ; Exact mapped bytes 88 54 24 21: mov byte ptr [esp + 0x21], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x21
        ; Exact mapped bytes E8 00 28 F8 FF: call 0x587e5a70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BE 1B 00 00 00: mov esi, 0x1b
        __asm _emit 0xbe
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B0 70 01 00 00: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x58863296
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
        ; Exact mapped bytes 74 0B: je 0x58863296
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes EB 02: jmp 0x58863298
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
        ; Exact mapped bytes E8 EC 46 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B0 70 01 00 00: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 23: jle 0x588632d4
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1A: je 0x588632d4
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 6C: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
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
    }
}
