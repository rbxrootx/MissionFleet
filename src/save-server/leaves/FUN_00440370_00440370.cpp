// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440370 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_00440370_00440370() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 B2 BE 58 00: push 0x58beb2
        __asm _emit 0x68
        __asm _emit 0xb2
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 58: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D A8: mov dword ptr [ebp - 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes C7 00 00 00 00 00: mov dword ptr [eax], 0
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes C7 41 04 00 00 00 00: mov dword ptr [ecx + 4], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 C2 08: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x08
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes C7 00 00 00 00 00: mov dword ptr [eax], 0
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 83 C9 FF: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        ; Exact mapped bytes F7 D1: not ecx
        __asm _emit 0xf7
        __asm _emit 0xd1
        ; Exact mapped bytes 83 C1 FF: add ecx, -1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 89 55 AC: mov dword ptr [ebp - 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8A 45 E8: mov al, byte ptr [ebp - 0x18]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 88 45 EC: mov byte ptr [ebp - 0x14], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 89 4D B0: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 55 B4: mov dword ptr [ebp - 0x4c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb4
        ; Exact mapped bytes 8A 45 DC: mov al, byte ptr [ebp - 0x24]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 88 45 E0: mov byte ptr [ebp - 0x20], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 2B 4D B4: sub ecx, dword ptr [ebp - 0x4c]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 C8: mov dword ptr [ebp - 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes B8 FE FF FF FF: mov eax, 0xfffffffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 39 45 C8: cmp dword ptr [ebp - 0x38], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 87 D6 00 00 00: ja 0x4404e3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D C8 00: cmp dword ptr [ebp - 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 CC 00 00 00: jbe 0x4404e3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D C8 00: cmp dword ptr [ebp - 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x4404b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7D C8 80 00 00 00: cmp dword ptr [ebp - 0x38], 0x80
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xc8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 11: jbe 0x44043b
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D C8: mov ecx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 2D C0 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes EB 76: jmp 0x4404b1
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes C1 EA 03: shr edx, 3
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 8D 04 95 54 50 68 00: lea eax, [edx*4 + 0x685054]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x440461
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes B9 94 50 68 00: mov ecx, 0x685094
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF FB FE FF: call 0x430020
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 D0: mov edx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 83 7D D8 00: cmp dword ptr [ebp - 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x44047f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes EB 0F: jmp 0x44048e
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D C8: mov ecx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 F8 44 FF FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 89 55 CC: mov dword ptr [ebp - 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0A: je 0x4404ab
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes B9 94 50 68 00: mov ecx, 0x685094
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 65 FC FE FF: call 0x430110
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 89 4D A4: mov dword ptr [ebp - 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 55 A4: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 89 55 A0: mov dword ptr [ebp - 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa0
        ; Exact mapped bytes EB 07: jmp 0x4404c0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 A0 00 00 00 00: mov dword ptr [ebp - 0x60], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4A 04: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 03 45 C8: add eax, dword ptr [ebp - 0x38]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes EB 0D: jmp 0x4404f0
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 68 18 0A 67 00: push 0x670a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 5B FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 89 45 BC: mov dword ptr [ebp - 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 89 4D C0: mov dword ptr [ebp - 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 55 B4: mov edx, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb4
        ; Exact mapped bytes 89 55 C4: mov dword ptr [ebp - 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 8B 45 C0: mov eax, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 45 C4: cmp eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 75 08: jne 0x440514
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D BC: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 89 4D 9C: mov dword ptr [ebp - 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes EB 22: jmp 0x440536
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 8B 55 C0: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 2B 55 C4: sub edx, dword ptr [ebp - 0x3c]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D BC: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 38 57 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 C0: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 2B 55 C4: sub edx, dword ptr [ebp - 0x3c]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
