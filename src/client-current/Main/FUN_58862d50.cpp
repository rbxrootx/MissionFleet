// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 319 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862D50 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_58862d50_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 84 FE 5C 01 00 00: mov eax, dword ptr [esi + edi*8 + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 FF: add eax, -1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xff
        ; Exact mapped bytes 78 07: js 0x58862d6b
        __asm _emit 0x78
        __asm _emit 0x07
        ; Exact mapped bytes 89 84 FE 5C 01 00 00: mov dword ptr [esi + edi*8 + 0x15c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C FE 5C 01 00 00: mov ecx, dword ptr [esi + edi*8 + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA D0 B2 E6 A0: mov edx, 0xa0e6b2d0
        __asm _emit 0xba
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xa0
        ; Exact mapped bytes 31 94 FE 84 01 00 00: xor dword ptr [esi + edi*8 + 0x184], edx
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 FE 84 01 00 00: mov eax, dword ptr [esi + edi*8 + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 31 94 FE 88 01 00 00: xor dword ptr [esi + edi*8 + 0x188], edx
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 FF: add eax, -1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xff
        ; Exact mapped bytes 89 8C FE 60 01 00 00: mov dword ptr [esi + edi*8 + 0x160], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 78 07: js 0x58862d9f
        __asm _emit 0x78
        __asm _emit 0x07
        ; Exact mapped bytes 89 84 FE 84 01 00 00: mov dword ptr [esi + edi*8 + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 FE 84 01 00 00: mov eax, dword ptr [esi + edi*8 + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 84 FE 88 01 00 00: mov dword ptr [esi + edi*8 + 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 31 94 FE 88 01 00 00: xor dword ptr [esi + edi*8 + 0x188], edx
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 89 84 FE 84 01 00 00: mov dword ptr [esi + edi*8 + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x84
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
        ; Exact mapped bytes E8 97 45 0A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 07 00 00: mov eax, dword ptr [esi + 0x704]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C FE 60 01 00 00: mov ecx, dword ptr [esi + edi*8 + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 64: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 83 BC FE 5C 01 00 00 00: cmp dword ptr [esi + edi*8 + 0x15c], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x58862e8a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 84 BE 48 01 00 00 10 00 00 00: mov dword ptr [esi + edi*4 + 0x148], 0x10
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 D2 FF FF: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B BE 1C 01 00 00: cmp edi, dword ptr [esi + 0x11c]
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x58862e8a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 1A: cmp dword ptr [eax + 0x160], 0x1a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        ; Exact mapped bytes 7E 16: jle 0x58862e2b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x58862e2b
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 80 06 00 00: add eax, 0x680
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58862e2d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 2C 07 00 00: mov ecx, dword ptr [esi + 0x72c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58862e62
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8E 1C 01 00 00: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 81 C1 39 01 00 00: add ecx, 0x139
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0C 01: mov ecx, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x01
        ; Exact mapped bytes 8B 51 0C: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes C7 82 78 04 00 00 01 00 00 00: mov dword ptr [edx + 0x478], 1
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
