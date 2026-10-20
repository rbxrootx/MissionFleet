// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58842200 .. +0x2CD bytes.
extern "C" __declspec(naked) void FUN_58842200_58842200() {
    __asm {
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 80 B8 D0 00 00 00 0F: cmp byte ptr [eax + 0xd0], 0xf
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 75 20: jne 0x58842231
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D F4 01 00 00: cmp eax, 0x1f4
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x58842227
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 86 C0 00 00 00: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x58842231
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 C0 00 00 00 00 00 00 00: mov dword ptr [esi + 0xc0], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 D1: test cl, dl
        __asm _emit 0x84
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 84 85 02 00 00: je 0x588424c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes BA 00 01 00 00: mov edx, 0x100
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x588422f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 7F: je 0x588422f2
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes BA 00 02 00 00: mov edx, 0x200
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 1D 02 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 84 01 00 00 00: cmp dword ptr [esi + 0x184], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x588422c0
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 0F B7 86 82 01 00 00: movzx eax, word ptr [esi + 0x182]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 14: jbe 0x588422b6
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 66 89 86 82 01 00 00: mov word ptr [esi + 0x182], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 88 01 00 00 00 00 00 00: mov dword ptr [esi + 0x188], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x588422c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 88 01 00 00 01 00 00 00: mov dword ptr [esi + 0x188], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 00 00 00: movzx eax, word ptr [esi + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0E: jne 0x588422da
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 86 08 01 00 00: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 48 50: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x588424aa
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 C6 01 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 01 00 00: mov edx, dword ptr [esi + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4A 50: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x50
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x588424aa
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8B 46 50: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 08: jne 0x58842304
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 3B 56 54: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x54
        ; Exact mapped bytes 74 7F: je 0x58842383
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4E 54: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes 2B 4E 08: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8D 50 07: lea edx, [eax + 7]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x07
        ; Exact mapped bytes 83 FA 0E: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 77 25: ja 0x58842339
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 8D 50 03: lea edx, [eax + 3]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x58842330
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 05: jge 0x58842325
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x58842344
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes EB 14: jmp 0x58842344
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes D1 FF: sar edi, 1
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x58842344
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C1 FF 02: sar edi, 2
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 8D 41 07: lea eax, [ecx + 7]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x07
        ; Exact mapped bytes 83 F8 0E: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 77 23: ja 0x5884236f
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes 8D 51 03: lea edx, [ecx + 3]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 12: ja 0x58842366
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D 05: jge 0x5884235d
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x5884237a
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 9F C0: setg al
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc0
        ; Exact mapped bytes EB 14: jmp 0x5884237a
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0B: jmp 0x5884237a
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8D 0A 0C 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2A: je 0x588423b7
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x588423a0
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x5884239b
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 15: jmp 0x588423b0
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes EB 0F: jmp 0x588423af
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x588423ac
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x588423b0
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 69 09 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 58: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4E 28: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x28
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2A: je 0x588423eb
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x588423d4
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x588423cf
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 15: jmp 0x588423e4
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes EB 0F: jmp 0x588423e3
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 20: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x20
        ; Exact mapped bytes 7F 03: jg 0x588423e0
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 04: jmp 0x588423e4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 E0: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F5 08 0C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 3B 46 50: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 3B 4E 54: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 58: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x58
        ; Exact mapped bytes 3B 56 28: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 3B 46 2C: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x588424aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 01 00 00: mov eax, 0x100
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 75 35: jne 0x5884246a
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes BA FF E2 00 00: mov edx, 0xe2ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 8E C8 00 00 00: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 C5 F1 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 68 D2 00 00 00: push 0xd2
        __asm _emit 0x68
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 08 0C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x588424aa
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 04 00 00: mov eax, 0x400
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 33: jne 0x588424aa
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E5 00 00: mov edx, 0xe5ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 05 00 00: mov eax, 0x500
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FE FF 00 00: mov eax, 0xfffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x588424c6
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 3C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes 74 0B: je 0x588424c9
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 EB: jne 0x588424b1
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
