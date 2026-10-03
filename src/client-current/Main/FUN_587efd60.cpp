// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 9247 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EFD60 .. +0x1523 bytes.
extern "C" __declspec(naked) void FUN_587efd60_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 98 25 98 58: push 0x58982598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x25
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
        ; Exact mapped bytes 81 EC 44 03 00 00: sub esp, 0x344
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x44
        __asm _emit 0x03
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
        ; Exact mapped bytes 89 84 24 40 03 00 00: mov dword ptr [esp + 0x340], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x03
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
        ; Exact mapped bytes 8D 84 24 58 03 00 00: lea eax, [esp + 0x358]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 74 03 00 00: mov edi, dword ptr [esp + 0x374]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9C 24 78 03 00 00: mov ebx, dword ptr [esp + 0x378]
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 20: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 5C 24 44: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 7E 51: jle 0x587efe0d
        __asm _emit 0x7e
        __asm _emit 0x51
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 AC 00 00 00: mov ecx, dword ptr [eax + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 40 01: cmp dword ptr [ecx + 0x40], 1
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x40
        __asm _emit 0x01
        ; Exact mapped bytes 75 3F: jne 0x587efe0d
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0E: je 0x587efde0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 83 BF 70 60 00 00 00: cmp dword ptr [edi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 75 05: jne 0x587efde5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes C6 44 24 34 03: mov byte ptr [esp + 0x34], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x03
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0E: je 0x587efdf7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 24 02: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 75 05: jne 0x587efdfc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes C6 44 24 24 03: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F3 90 FB FF: call 0x587a8f00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8B AC 24 68 03 00 00: mov ebp, dword ptr [esp + 0x368]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x587eff11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x587eff11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 90 03 00 00 01: cmp dword ptr [esp + 0x390], 1
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes C7 44 24 24 04 C4 99 58: mov dword ptr [esp + 0x24], 0x5899c404
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x587efe43
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 24 FC C3 99 58: mov dword ptr [esp + 0x24], 0x5899c3fc
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0C: cmp dword ptr [esp + 0x384], 0xc
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes BF 34 A0 99 58: mov edi, 0x5899a034
        __asm _emit 0xbf
        __asm _emit 0x34
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 74 05: je 0x587efe57
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes BF F4 C3 99 58: mov edi, 0x5899c3f4
        __asm _emit 0xbf
        __asm _emit 0xf4
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B AC 24 9C 03 00 00: mov ebp, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 9C 03 00 00: mov ebp, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 9C 03 00 00: mov ebp, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 98 03 00 00: mov ebp, dword ptr [esp + 0x398]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 98 03 00 00: mov ebp, dword ptr [esp + 0x398]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B AC 24 7C 03 00 00: mov ebp, dword ptr [esp + 0x37c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 91: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x91
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 88 03 00 00: mov edx, dword ptr [esp + 0x388]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 88 04 01 00: mov ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 90 04 01 00: mov eax, dword ptr [eax + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 8C 03 00 00: mov edx, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 44: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 81 C2 A0 03 00 00: add edx, 0x3a0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 93 A0 03 00 00: lea edx, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 50: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 90 00 00 00: lea eax, [esp + 0x90]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 C3 99 58: push 0x5899c378
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 44: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x44
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 54 24 5C: lea edx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 60: lea eax, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 BC 24 90 03 00 00 01: cmp dword ptr [esp + 0x390], 1
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x587eff29
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B BB 9C 0D 00 00: mov edi, dword ptr [ebx + 0xd9c]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 A4 0D 00 00: mov eax, dword ptr [ebx + 0xda4]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587eff35
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B BB A0 0D 00 00: mov edi, dword ptr [ebx + 0xda0]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 A8 0D 00 00: mov eax, dword ptr [ebx + 0xda8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0C: cmp dword ptr [esp + 0x384], 0xc
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 74 3A: je 0x587eff88
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
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
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 69 D2 E8 03 00 00: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8D 14 BD 28 00 00 00: lea edx, [edi*4 + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 73 0B: jae 0x587eff88
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes C7 84 24 8C 03 00 00 00 00 00 00: mov dword ptr [esp + 0x38c], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3E: je 0x587effcf
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 68 4C C3 99 58: push 0x5899c34c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 5C: lea eax, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 60: lea ecx, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0C: cmp dword ptr [esp + 0x384], 0xc
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes C7 44 24 40 00 00 00 00: mov dword ptr [esp + 0x40], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587effee
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 BB AC 0D 00 00 00: cmp dword ptr [ebx + 0xdac], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AE 06 00 00: jne 0x587f069c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 94 03 00 00: mov ecx, dword ptr [esp + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 95 06 00 00: jl 0x587f0692
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 31: je 0x587f0032
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 0F 8D 89 06 00 00: jge 0x587f0692
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
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
        ; Exact mapped bytes 8D 6C 7F 01: lea ebp, [edi + edi*2 + 1]
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x7f
        __asm _emit 0x01
        ; Exact mapped bytes 8B 14 90: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x90
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F5: div ebp
        __asm _emit 0xf7
        __asm _emit 0xf5
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 87 60 06 00 00: ja 0x587f0692
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 70 03 00 00: mov ecx, dword ptr [esp + 0x370]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 24 6C 03 00 00: mov edx, dword ptr [esp + 0x36c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes C7 44 24 30 00 00 00 00: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF C2 0E 00: call 0x588dc310
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 94 03 00 00: mov eax, dword ptr [esp + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 0A: je 0x587f0066
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x587f006d
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E0 46: and eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x46
        ; Exact mapped bytes 83 C0 14: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 5A: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5a
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 7E 08: jle 0x587f0081
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 30 5A 00 00 00: mov dword ptr [esp + 0x30], 0x5a
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 78: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x78
        ; Exact mapped bytes 69 C9 F0 00 00 00: imul ecx, ecx, 0xf0
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 08: shr edx, 8
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 94 11 00 00: cmp edx, 0x1194
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x587f00a7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes BA 94 11 00 00: mov edx, 0x1194
        __asm _emit 0xba
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 94 24 88 03 00 00: cmp dword ptr [esp + 0x388], edx
        __asm _emit 0x39
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 07: jbe 0x587f00b7
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes 89 94 24 88 03 00 00: mov dword ptr [esp + 0x388], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B B8 0D 00 00: mov ecx, dword ptr [ebx + 0xdb8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 8C 03 00 00: mov edi, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D7: imul edx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd7
        ; Exact mapped bytes B8 53 74 24 97: mov eax, 0x97247453
        __asm _emit 0xb8
        __asm _emit 0x53
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x97
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 8B 94 24 88 03 00 00: mov edx, dword ptr [esp + 0x388]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes B9 E8 03 00 00: mov ecx, 0x3e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF 8C 24 A0 03 00 00: imul ecx, dword ptr [esp + 0x3a0]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 84 24 68 03 00 00: mov eax, dword ptr [esp + 0x368]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 0B: sar edx, 0xb
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0b
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 89 BC 24 8C 03 00 00: mov dword ptr [esp + 0x38c], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7C 0A 64: lea edi, [edx + ecx + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x64
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
        ; Exact mapped bytes 8B 2C 90: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x90
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes C1 EA 0D: shr edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 69 D2 10 27 00 00: imul edx, edx, 0x2710
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 8D 0C 05 00 00: jge 0x587f0668
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 08: sar edx, 8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x08
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 15: jge 0x587f0186
        __asm _emit 0x7d
        __asm _emit 0x15
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 E2 06: shl edx, 6
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x06
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes BF 00 14 00 00: mov edi, 0x1400
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x587f0270
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 15: jge 0x587f01b0
        __asm _emit 0x7d
        __asm _emit 0x15
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 E2 05: shl edx, 5
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x05
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes BF 00 10 00 00: mov edi, 0x1000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x587f0270
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 15: jge 0x587f01da
        __asm _emit 0x7d
        __asm _emit 0x15
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 E2 04: shl edx, 4
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes BF 00 08 00 00: mov edi, 0x800
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x587f0270
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 12: jge 0x587f0201
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 04 D5 00 00 00 00: lea eax, [edx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 00 04 00 00: mov edi, 0x400
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x587f026c
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 12: jge 0x587f0228
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 04 95 00 00 00 00: lea eax, [edx*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 00 02 00 00: mov edi, 0x200
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x587f026c
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 0E: jge 0x587f024b
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 04 12: lea eax, [edx + edx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x12
        ; Exact mapped bytes BF 00 01 00 00: mov edi, 0x100
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x587f026c
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
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
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 93 FC 0D 00 00: mov edx, dword ptr [ebx + 0xdfc]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0x0d
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
        ; Exact mapped bytes 8D 44 02 64: lea eax, [edx + eax + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x64
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 40 01 00 00 00: mov dword ptr [esp + 0x40], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 83 14 10 00 00: mov eax, dword ptr [ebx + 0x1014]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 78 0A: movzx edi, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x78
        __asm _emit 0x0a
        ; Exact mapped bytes B8 10 27 00 00: mov eax, 0x2710
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 C7 64: add edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x64
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 26: jge 0x587f02fa
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 8B 8B 3C 02 00 00: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes C1 EA 04: shr edx, 4
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 69 D2 FA 00 00 00: imul edx, edx, 0xfa
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B EA: sub ebp, edx
        __asm _emit 0x2b
        __asm _emit 0xea
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes C7 44 24 44 03 00 00 00: mov dword ptr [esp + 0x44], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 FC FB FF: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes F6 86 78 03 00 00 40: test byte ptr [esi + 0x378], 0x40
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 61 03 00 00: je 0x587f0668
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8A 91 54 03 00 00: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 93 54 03 00 00: cmp dl, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4B 03 00 00: je 0x587f0668
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 A4 05 01 00 01: cmp word ptr [eax + 0x105a4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 38 03 00 00: je 0x587f0668
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 4C 24 34: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 7C 24 4C: mov dword ptr [esp + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 89 6C 24 50: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 38 0D 5F 48 A2 58: cmp byte ptr [0x58a2485f], cl
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x5f
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 AE 01 00 00: jne 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 96 F0 05 01 00: movzx edx, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 08: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 9D 01 00 00: je 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 09: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 80 06 0A 00 00: movzx eax, word ptr [eax + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 13: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x13
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 03: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x587f04fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9C 24 68 03 00 00: mov ebx, dword ptr [esp + 0x368]
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 38: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 81 C1 7C 04 00 00: add ecx, 0x47c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 48: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 54 24 2C: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 81 F2 00 00 A0 0A: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x0a
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 00 A8 02 00: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 14: shr edx, 0x14
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x14
        ; Exact mapped bytes 25 FF 03 00 00: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 FF 03 00 00: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
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
        ; Exact mapped bytes 8B 2C 90: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x90
        ; Exact mapped bytes 8D 3C 90: lea edi, [eax + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x90
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes 2B EA: sub ebp, edx
        __asm _emit 0x2b
        __asm _emit 0xea
        ; Exact mapped bytes 83 FD 0F: cmp ebp, 0xf
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x0f
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x587f04cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x587f04cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 BC 24 9C 03 00 00 EE 02 00 00: cmp dword ptr [esp + 0x39c], 0x2ee
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x587f04cf
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 48: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
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
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 6C 24 24: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 04 91: mov eax, dword ptr [ecx + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x91
        ; Exact mapped bytes 8D 4D 64: lea ecx, [ebp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x64
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 05 C8 00 00 00: add eax, 0xc8
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 0A: je 0x587f0477
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F5: div ebp
        __asm _emit 0xf7
        __asm _emit 0xf5
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes EB 02: jmp 0x587f0479
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
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
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 8D 54 24 3C: lea edx, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 50: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes E8 35 C1 0E 00: call 0x588dc5f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 50: add dword ptr [esp + 0x50], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 01 54 24 34: add dword ptr [esp + 0x34], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 01 44 24 4C: add dword ptr [esp + 0x4c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 44 24 2C 20: add dword ptr [esp + 0x2c], 0x20
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x20
        ; Exact mapped bytes 83 44 24 48 02: add dword ptr [esp + 0x48], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 0F 8C C4 FE FF FF: jl 0x587f03b0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5C 24 44: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 6C 24 50: mov ebp, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 7C 24 4C: mov edi, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8D 14 2F: lea edx, [edi + ebp]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x2f
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 2E: jle 0x587f0533
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 58 04: cmp ebx, dword ptr [eax + 4]
        __asm _emit 0x3b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 75 24: jne 0x587f0533
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 93 01 00: call 0x58809860
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 49 93 01 00: call 0x58809870
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 4D 93 01 00: call 0x58809880
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 57: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 51: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 4B: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 81 06 0A 00 00: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 38: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 F8 13: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x13
        ; Exact mapped bytes 74 32: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 81 BC 24 9C 03 00 00 EE 02 00 00: cmp dword ptr [esp + 0x39c], 0x2ee
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 25: jl 0x587f0597
        __asm _emit 0x7c
        __asm _emit 0x25
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 74 5A: je 0x587f05d9
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A 48 1C 02 00: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 EE 53 F8 FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 50: je 0x587f05e7
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 08: jne 0x587f05a3
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x587f0668
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x587f064e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 48 1C 02 00: mov ecx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6B FF 64: imul edi, edi, 0x64
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0x64
        ; Exact mapped bytes 8B 89 88 00 00 00: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF CD: imul ecx, ebp
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcd
        ; Exact mapped bytes 69 C9 90 01 00 00: imul ecx, ecx, 0x190
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 0D: shr edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x587f065e
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 93 54 03 00 00: mov dl, byte ptr [ebx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 90 54 03 00 00: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 B0: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8C 24 8C 03 00 00: mov ecx, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8E C3 0E 00: call 0x588dc990
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 91: je 0x587f0597
        __asm _emit 0x74
        __asm _emit 0x91
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 04: jne 0x587f060e
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 5A: je 0x587f0668
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x587f063b
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6B FF 64: imul edi, edi, 0x64
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0x64
        ; Exact mapped bytes 0F AF AA 88 00 00 00: imul ebp, dword ptr [edx + 0x88]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xaa
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 ED 90 01 00 00: imul ebp, ebp, 0x190
        __asm _emit 0x69
        __asm _emit 0xed
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes C1 EA 0D: shr edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes EB 23: jmp 0x587f065e
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 BE A2 05 01 00 07: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 74 23: je 0x587f0668
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8D 04 AF: lea eax, [edi + ebp*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xaf
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 11: jmp 0x587f065f
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 BE A2 05 01 00 07: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 74 10: je 0x587f0668
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8D 14 AF: lea edx, [edi + ebp*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xaf
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 68 5D FF FF: call 0x587e63d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x587f079e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 58: lea ecx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 68 30 C3 99 58: push 0x5899c330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x587f0779
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0C: cmp dword ptr [esp + 0x384], 0xc
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 75 36: jne 0x587f06d2
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 83 AC 0D 00 00: mov eax, dword ptr [ebx + 0xdac]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 8C 03 00 00: mov ecx, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7C 02: jl 0x587f06af
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8B B0 0D 00 00: mov ecx, dword ptr [ebx + 0xdb0]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 7C 06: jl 0x587f06c3
        __asm _emit 0x7c
        __asm _emit 0x06
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8C 24 8C 03 00 00: mov ecx, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 79 13: jns 0x587f06e1
        __asm _emit 0x79
        __asm _emit 0x13
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 0F: jmp 0x587f06e1
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 8C 24 8C 03 00 00: mov ecx, dword ptr [esp + 0x38c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 28 00 00 00 00: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 6C 24 24: imul dword ptr [esp + 0x24]
        __asm _emit 0xf7
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
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
        ; Exact mapped bytes 8D 54 02 32: lea edx, [edx + eax + 0x32]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x32
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 8B BB B8 0D 00 00: mov edi, dword ptr [ebx + 0xdb8]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 E1 7A 14 AE: mov eax, 0xae147ae1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x7a
        __asm _emit 0x14
        __asm _emit 0xae
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
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
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
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 79 06: jns 0x587f073b
        __asm _emit 0x79
        __asm _emit 0x06
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 30 14 00 00 00: mov dword ptr [esp + 0x30], 0x14
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 52: je 0x587f079e
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 83 AC 0D 00 00: mov eax, dword ptr [ebx + 0xdac]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4C 24 60: lea ecx, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 68 00 C3 99 58: push 0x5899c300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xc3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 5C: lea eax, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 60: lea ecx, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 74 20: je 0x587f07cf
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 1C: je 0x587f07cf
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8E 48 1C 02 00: mov ecx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 C0 51 F8 FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x587f07cf
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4B 7C: mov ecx, dword ptr [ebx + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x7c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 A1 54 F4 FF: call 0x58735c70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 36: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 30: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 2A: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 24: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 1E: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 74 18: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 12: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 0C: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f0812
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 56: jne 0x587f0868
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8A 85 54 03 00 00: mov al, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 83 54 03 00 00: cmp al, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 48: je 0x587f0868
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes F6 86 A8 05 01 00 01: test byte ptr [esi + 0x105a8], 1
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 33: je 0x587f085c
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 83 BD 70 60 00 00 00: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587f0850
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8C 86 6C 0A 01 00: lea ecx, [esi + eax*4 + 0x10a6c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 01 01: add dword ptr [ecx], eax
        __asm _emit 0x01
        __asm _emit 0x01
        ; Exact mapped bytes EB 18: jmp 0x587f0868
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 84 8E 6C 0A 01 00: lea eax, [esi + ecx*4 + 0x10a6c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x587f0866
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B6 D0: movzx edx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 84 96 6C 0A 01 00: lea eax, [esi + edx*4 + 0x10a6c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 01 38: add dword ptr [eax], edi
        __asm _emit 0x01
        __asm _emit 0x38
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 40 04: mov al, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 09: cmp al, 9
        __asm _emit 0x3c
        __asm _emit 0x09
        ; Exact mapped bytes 75 24: jne 0x587f089b
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0B: cmp dword ptr [esp + 0x384], 0xb
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 75 1A: jne 0x587f089b
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 84 24 9C 03 00 00: mov eax, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 58 02 00 00: cmp eax, 0x258
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F DC 00 00 00: jg 0x587f096f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 85 09 02 00 00: jne 0x587f0ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 95 54 03 00 00: mov dl, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 93 54 03 00 00: cmp dl, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x587f08c9
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 83 BB 38 04 00 00 01: cmp dword ptr [ebx + 0x438], 1
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f08c9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 BE 80 0B 01 00: add dword ptr [esi + 0x10b80], edi
        __asm _emit 0x01
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 6C 0C: cmp dword ptr [esi + 0x6c], 0xc
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x6c
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x587f0ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 BE 80 0B 01 00 10 27 00 00: cmp dword ptr [esi + 0x10b80], 0x2710
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C D2 01 00 00: jl 0x587f0ab5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
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
        ; Exact mapped bytes 83 B8 B4 63 00 00 00: cmp dword ptr [eax + 0x63b4], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BD 01 00 00: jne 0x587f0ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 04 01 00: mov ecx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF FF FF 0F: and ecx, 0xfffffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 81 C9 00 00 00 20: or ecx, 0x20000000
        __asm _emit 0x81
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 89 8E 74 04 01 00: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 04: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes 83 BF 0C 10 00 00 00: cmp dword ptr [edi + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x587f0a4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 E8 12 00 00: mov eax, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8F A0 03 00 00: lea ecx, [edi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 94 BD 99 58: push 0x5899bd94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xbd
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
        ; Exact mapped bytes 8D 54 24 60: lea edx, [esp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 83 BF 58 12 00 00 00: cmp dword ptr [edi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x587f0982
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 58: lea eax, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 23: jmp 0x587f0992
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 3D E8 03 00 00: cmp eax, 0x3e8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8F 1B FF FF FF: jg 0x587f0895
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 3C 7F: lea edi, [edi + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x7f
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x587f0897
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 54: lea ecx, [esp + 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 3C 0D 02 00: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 B3 11 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BD 1D 00 00 00: mov ebp, 0x1d
        __asm _emit 0xbd
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 A8 70 01 00 00: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f09bd
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
        ; Exact mapped bytes 74 0B: je 0x587f09bd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 74: mov ecx, dword ptr [edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587f09bf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C6 6F 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A8 70 01 00 00: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f09eb
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
        ; Exact mapped bytes 74 0B: je 0x587f09eb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 74: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587f09ed
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
        ; Exact mapped bytes 66 83 BE F0 05 01 00 07: cmp word ptr [esi + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 4B: jne 0x587f0a4b
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 83 BF 48 66 00 00 00: cmp dword ptr [edi + 0x6648], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f0a16
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 EA BC FD FF: call 0x587cc700
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes C7 87 4C 66 00 00 10 27 00 00: mov dword ptr [edi + 0x664c], 0x2710
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 79 04: cmp edi, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 75 20: jne 0x587f0a4b
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 A4 45 A2 58: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 82 D8 08 00 00 01 00 00 00: mov dword ptr [edx + 0x8d8], 1
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 1F 02 00: mov eax, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 AC 00 00 00 00 00 00 00: mov dword ptr [eax + 0xac], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C7 80 B4 63 00 00 01 00 00 00: mov dword ptr [eax + 0x63b4], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 98 03 00 00: mov edx, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 6C 12 00 00: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
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
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
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
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 90 04 01 00: mov edx, dword ptr [esi + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AB 8C FC FF: call 0x587b9760
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8B B4 0D 00 00: mov ecx, dword ptr [ebx + 0xdb4]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 0F AF CD: imul ecx, ebp
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcd
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
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F AF 4C 24 30: imul ecx, dword ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
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
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 89 6C 24 34: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 39 BC 24 90 03 00 00: cmp dword ptr [esp + 0x390], edi
        __asm _emit 0x39
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x587f0c4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 44 24 40 01: test byte ptr [esp + 0x40], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        ; Exact mapped bytes 89 4C 24 3C: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x587f0bc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 A8 03 00 00 00: cmp dword ptr [esp + 0x3a8], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B8 02 00 00: je 0x587f0dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E C1 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc1
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 84 24 60 03 00 00 00 00 00 00: mov dword ptr [esp + 0x360], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 65: je 0x587f0bab
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 31: cmp dword ptr [ecx + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7B 04: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x04
        ; Exact mapped bytes 7E 1B: jle 0x587f0b76
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f0b76
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 40 0C 00 00: add ecx, 0xc40
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x587f0b7e
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
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B0 C0 18 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 96 24 05 01 00: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 07 A2 F6 FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587f0bad
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 84 24 60 03 00 00 FF FF FF FF: mov dword ptr [esp + 0x360], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 1E 02 00 00: je 0x587f0dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x587f0d03
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 A8 03 00 00 00: cmp dword ptr [esp + 0x3a8], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x587f0dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 C0 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 84 24 60 03 00 00 01 00 00 00: mov dword ptr [esp + 0x360], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DC 01 00 00: je 0x587f0dd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CE 00 00 00: cmp dword ptr [ecx + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7B 04: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x04
        ; Exact mapped bytes 7E 1B: jle 0x587f0c2a
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f0c2a
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 33 00 00: add ecx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x587f0c32
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
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FC BF 18 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x587f0dbc
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 46: imul ecx, ecx, 0x46
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x46
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
        ; Exact mapped bytes F6 44 24 40 01: test byte ptr [esp + 0x40], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        ; Exact mapped bytes 89 54 24 3C: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x587f0d3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 A8 03 00 00 00: cmp dword ptr [esp + 0x3a8], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x587f0dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF BF 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 BC 24 60 03 00 00: mov dword ptr [esp + 0x360], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 65: je 0x587f0cf6
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 32: cmp dword ptr [ecx + 0x160], 0x32
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7B 04: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x04
        ; Exact mapped bytes 7E 1B: jle 0x587f0cc1
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f0cc1
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 0C 00 00: add ecx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x587f0cc9
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
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 BF 18 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 96 24 05 01 00: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 BC A0 F6 FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587f0cf8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 84 24 60 03 00 00 FF FF FF FF: mov dword ptr [esp + 0x360], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 33: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        ; Exact mapped bytes 7E 20: jle 0x587f0d32
        __asm _emit 0x7e
        __asm _emit 0x20
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x587f0d32
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 0C 00 00: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 F8 00 00 00: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x587f0dde
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 88 F8 00 00 00: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x587f0dde
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BC 24 A8 03 00 00 00: cmp dword ptr [esp + 0x3a8], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x587f0dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 BE 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C7 84 24 60 03 00 00 03 00 00 00: mov dword ptr [esp + 0x360], 3
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 66: je 0x587f0dd3
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CC 00 00 00: cmp dword ptr [ecx + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 08: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7B 04: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x04
        ; Exact mapped bytes 7E 1B: jle 0x587f0da0
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f0da0
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 33 00 00: add ecx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 08: jmp 0x587f0da8
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
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 86 BE 18 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 96 24 05 01 00: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 DD 9F F6 FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes C7 84 24 60 03 00 00 FF FF FF FF: mov dword ptr [esp + 0x360], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B BB 98 03 00 00: mov edi, dword ptr [ebx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C7 44 24 2C 00 00 00 00: mov dword ptr [esp + 0x2c], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 58 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x58
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 90 03 00 00: mov ecx, dword ptr [esp + 0x390]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 28: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 44 F4 0E 00: call 0x588e0260
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 7F 06: jg 0x587f0e2c
        __asm _emit 0x7f
        __asm _emit 0x06
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 7C 24 28: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 93 0C 10 00 00: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 04: mov al, byte ptr [edx + 4]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 09: cmp al, 9
        __asm _emit 0x3c
        __asm _emit 0x09
        ; Exact mapped bytes 75 4B: jne 0x587f0e86
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 83 BC 24 84 03 00 00 0B: cmp dword ptr [esp + 0x384], 0xb
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 75 41: jne 0x587f0e86
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 8B 84 24 9C 03 00 00: mov eax, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 58 02 00 00: cmp eax, 0x258
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 0D: jg 0x587f0e60
        __asm _emit 0x7f
        __asm _emit 0x0d
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
        ; Exact mapped bytes EB 22: jmp 0x587f0e82
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 3D E8 03 00 00: cmp eax, 0x3e8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 14: jg 0x587f0e7b
        __asm _emit 0x7f
        __asm _emit 0x14
        ; Exact mapped bytes B8 56 55 55 55: mov eax, 0x55555556
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes EB 0B: jmp 0x587f0e86
        __asm _emit 0xeb
        __asm _emit 0x0b
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
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 93 98 03 00 00: mov edx, dword ptr [ebx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 00 00 00 00: mov eax, 0
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9E C0: setle al
        __asm _emit 0x0f
        __asm _emit 0x9e
        __asm _emit 0xc0
        ; Exact mapped bytes 83 7C 24 20 00: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 0F 84 F0 10 00 00: je 0x587f1f99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 B9 6C 60 00 00 00: cmp dword ptr [ecx + 0x606c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B1 10 00 00: je 0x587f1f6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x587f0eeb
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8A 81 54 03 00 00: mov al, byte ptr [ecx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 83 54 03 00 00: cmp byte ptr [ebx + 0x354], al
        __asm _emit 0x38
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x587f0eeb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 38 82 54 03 00 00: cmp byte ptr [edx + 0x354], al
        __asm _emit 0x38
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x587f0eeb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 F5 57 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x57
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 75 08: jne 0x587f0efb
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 28 00 00 00 00: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 8B 54 03 00 00: mov cl, byte ptr [ebx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 88 54 03 00 00: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CE 0B 00 00: je 0x587f1adb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 93 0C 10 00 00: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7A 78: mov edi, dword ptr [edx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x78
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f0f2a
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 BD 18 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DF 7C 24 1C: fistp qword ptr [esp + 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 6C 24 1C: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 6C 24 28: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 85 AF F7 FF: call 0x5876bee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes F6 86 78 03 00 00 80: test byte ptr [esi + 0x378], 0x80
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 0F 84 09 04 00 00: je 0x587f1374
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 84 03 00 00: mov edi, dword ptr [esp + 0x384]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 6C 24 28: imul ebp, dword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 83 FF 0B: cmp edi, 0xb
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 75 31: jne 0x587f0fad
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7D 06: jge 0x587f0f8e
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 8E 20 0A 01 00: fmul dword ptr [esi + 0x10a20]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 9C 03 00 00: mov ecx, dword ptr [esp + 0x39c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 E8 03 00 00: add ecx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DA 74 24 18: fidiv dword ptr [esp + 0x18]
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC C0: fadd st(0), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc0
        ; Exact mapped bytes EB 1F: jmp 0x587f0fcc
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 89 6C 24 18: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 7D 06: jge 0x587f0fbf
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 8E 20 0A 01 00: fmul dword ptr [esi + 0x10a20]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DA B4 24 9C 03 00 00: fidiv dword ptr [esp + 0x39c]
        __asm _emit 0xda
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF BC 18 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 95 0C 10 00 00: mov edx, dword ptr [ebp + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4A 04: mov cl, byte ptr [edx + 4]
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 18: jne 0x587f0ffe
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 8D 0C C5 00 00 00 00: lea ecx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes F6 86 A8 05 01 00 01: test byte ptr [esi + 0x105a8], 1
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x587f110d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BD 70 60 00 00 00: cmp dword ptr [ebp + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x587f1039
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes EB 7B: jmp 0x587f10b4
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x587f116d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 5C 12 00 00: mov ecx, dword ptr [ebp + 0x125c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 0F: cmp ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0f
        ; Exact mapped bytes 7F 22: jg 0x587f1073
        __asm _emit 0x7f
        __asm _emit 0x22
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 69 C9 8C 00 00 00: imul ecx, ecx, 0x8c
        __asm _emit 0x69
        __asm _emit 0xc9
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
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x587f116d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 19: cmp ecx, 0x19
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x19
        ; Exact mapped bytes 7F 0B: jg 0x587f1083
        __asm _emit 0x7f
        __asm _emit 0x0b
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes EB 31: jmp 0x587f10b4
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 83 F9 23: cmp ecx, 0x23
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x23
        ; Exact mapped bytes 7F 20: jg 0x587f10a8
        __asm _emit 0x7f
        __asm _emit 0x20
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
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
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x587f116d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 2D: cmp ecx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x2d
        ; Exact mapped bytes 7F 25: jg 0x587f10d2
        __asm _emit 0x7f
        __asm _emit 0x25
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
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
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x587f116d
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 37: cmp ecx, 0x37
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x37
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 7F 18: jg 0x587f10f7
        __asm _emit 0x7f
        __asm _emit 0x18
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
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
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 76: jmp 0x587f116d
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
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
        ; Exact mapped bytes 89 4C 24 2C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes EB 60: jmp 0x587f116d
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 57: je 0x587f116d
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A 48 1C 02 00: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0B: cmp edi, 0xb
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 75 15: jne 0x587f113c
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8A DC 00 00 00: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes EB 2A: jmp 0x587f1166
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 75 15: jne 0x587f1156
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8A E0 00 00 00: mov ecx, dword ptr [edx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes EB 10: jmp 0x587f1166
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 8B 91 88 00 00 00: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 0D: shr edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 89 54 24 2C: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F B6 88 54 03 00 00: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AC 8E 2C 0A 01 00: mov ebp, dword ptr [esi + ecx*4 + 0x10a2c]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 8E 2C 0A 01 00: lea eax, [esi + ecx*4 + 0x10a2c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F5 AA AA AA AA: xor ebp, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 42: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 3C: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 36: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 30: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 2A: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 24: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 1E: je 0x587f11dd
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 6B C9 19: imul ecx, ecx, 0x19
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x19
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 03 E8: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xe8
        ; Exact mapped bytes EB 1C: jmp 0x587f11f9
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 7C 24 2C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 BE A2 05 01 00 02: cmp word ptr [esi + 0x105a2], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 02: jne 0x587f1205
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B D5: mov edx, ebp
        __asm _emit 0x8b
        __asm _emit 0xd5
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes E8 C4 54 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 00 40: cmp eax, 0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 4D: jne 0x587f1270
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 66 83 BE A2 05 01 00 05: cmp word ptr [esi + 0x105a2], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 02: jne 0x587f122f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 1E: je 0x587f125a
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 18: je 0x587f125a
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 12: je 0x587f125a
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 0C: je 0x587f125a
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f125a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 0C: jne 0x587f1266
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 CC 5B 0E 00: call 0x588d6e30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E0 BB 0E 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbb
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 79 0C: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x587f1374
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x587f1290
        __asm _emit 0xeb
        __asm _emit 0x0d
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F1290 .. +0xEFC bytes.
extern "C" __declspec(naked) void FUN_587efd60_segment_01() {
    __asm {
        ; Exact mapped bytes 8A 97 54 03 00 00: mov dl, byte ptr [edi + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 3A 90 54 03 00 00: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x587f1369
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 23 54 0E 00: call 0x588d66d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x587f1369
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x587f131f
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 8E 48 1C 02 00: mov ecx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 83 BA 34 01 00 00 03: cmp dword ptr [edx + 0x134], 3
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 76 4F: jbe 0x587f131f
        __asm _emit 0x76
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 8F 0C 10 00 00: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F AF 41 68: imul eax, dword ptr [ecx + 0x68]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes 0F B6 8F 54 03 00 00: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 A4 8E 4C 0A 01 00: mul dword ptr [esi + ecx*4 + 0x10a4c]
        __asm _emit 0xf7
        __asm _emit 0xa4
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 97 70 12 00 00: mov edx, dword ptr [edi + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes EB 3F: jmp 0x587f135e
        __asm _emit 0xeb
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 8F 0C 10 00 00: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x10
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
        ; Exact mapped bytes 0F AF 41 68: imul eax, dword ptr [ecx + 0x68]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x41
        __asm _emit 0x68
        ; Exact mapped bytes 0F B6 8F 54 03 00 00: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 A4 8E 4C 0A 01 00: mul dword ptr [esi + ecx*4 + 0x10a4c]
        __asm _emit 0xf7
        __asm _emit 0xa4
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 87 70 12 00 00: mov dword ptr [edi + 0x1270], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 1C FF FF FF: jne 0x587f1290
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 6A 04: cmp ebp, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 04 03 00 00: jne 0x587f168b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 84 03 00 00: mov edi, dword ptr [esp + 0x384]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 75 04: jne 0x587f1397
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes FF 44 24 28: inc dword ptr [esp + 0x28]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 8E D4 0B 01 00: mov ecx, dword ptr [esi + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 64: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 03 44 24 28: add eax, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 5F 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D4 0B 01 00: mov ecx, dword ptr [esi + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E E8 0B 01 00: mov ecx, dword ptr [esi + 0x10be8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A1 5F 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 6C 12 00 00: mov ecx, dword ptr [ebp + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x8d
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
        ; Exact mapped bytes 8B 8E D8 0B 01 00: mov ecx, dword ptr [esi + 0x10bd8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7F 5F 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 D8 0B 01 00: mov edx, dword ptr [esi + 0x10bd8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 64: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E EC 0B 01 00: mov ecx, dword ptr [esi + 0x10bec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6A 5F 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 E4 02 00 00 00: cmp dword ptr [ecx + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 82 02 00 00: je 0x587f168b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 09 02 00 00: je 0x587f161d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 30: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x30
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x587f152e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B A0 03 00 00: lea ecx, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 E0 C2 99 58: push 0x5899c2e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xc2
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
        ; Exact mapped bytes 8D 54 24 5C: lea edx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B8 E4 02 00 00: mov edi, dword ptr [eax + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 CD 98 58: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 2A 97 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A E4 02 00 00: mov ecx, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D 97 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes 01 8D 50 66 00 00: add dword ptr [ebp + 0x6650], ecx
        __asm _emit 0x01
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 50: jne 0x587f14fb
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 82 A4 09 00 00: mov eax, dword ptr [edx + 0x9a4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 89 8E 74 01 00 00: mov dword ptr [esi + 0x174], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 D2: movzx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd2
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 83 FA 08: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 0F 87 AA 01 00 00: ja 0x587f168b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 8C 21 7F 58: jmp dword ptr [edx*4 + 0x587f218c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes FF 84 C6 24 01 00 00: inc dword ptr [esi + eax*8 + 0x124]
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 8C C6 28 01 00 00: add dword ptr [esi + eax*8 + 0x128], ecx
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x587f168b
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 91 2C 01 00 00: mov edx, dword ptr [ecx + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 3E B9 0E 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 91 30 01 00 00: mov edx, dword ptr [ecx + 0x130]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 A7 4E FF FF: call 0x587e63d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x587f168b
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 A0 03 00 00: lea eax, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 C0 C2 99 58: push 0x5899c2c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xc2
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
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA E4 02 00 00: mov edi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 CD 98 58: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 25 96 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 E4 02 00 00: mov ecx, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 44 24 5C: lea eax, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 08 96 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 93 0C 10 00 00: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 74: mov eax, dword ptr [edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x74
        ; Exact mapped bytes 01 85 50 66 00 00: add dword ptr [ebp + 0x6650], eax
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BB 70 60 00 00 00: cmp dword ptr [ebx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3D: jne 0x587f15ed
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 91 A4 09 00 00: mov edx, dword ptr [ecx + 0x9a4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 50: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 89 86 74 01 00 00: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 83 FA 08: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 0F 87 A5 00 00 00: ja 0x587f168b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 B0 21 7F 58: jmp dword ptr [edx*4 + 0x587f21b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x21
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 50: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 88 2C 01 00 00: mov ecx, dword ptr [eax + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 4C B8 0E 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 50: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 88 30 01 00 00: mov ecx, dword ptr [eax + 0x130]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 B5 4D FF FF: call 0x587e63d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6E: jmp 0x587f168b
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 75 69: jne 0x587f168b
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 8D 93 A0 03 00 00: lea edx, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 A0 C2 99 58: push 0x5899c2a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0xc2
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
        ; Exact mapped bytes 8D 44 24 5C: lea eax, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B9 E4 02 00 00: mov edi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 CD 98 58: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 31 95 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 E4 02 00 00: mov ecx, dword ptr [eax + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 54 24 5C: lea edx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 15 95 F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x587f16c5
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8A 95 54 03 00 00: mov dl, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 90 54 03 00 00: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x587f16c5
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 88 70 12 00 00: mov ecx, dword ptr [eax + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
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
        ; Exact mapped bytes 8B 86 E4 0B 01 00: mov eax, dword ptr [esi + 0x10be4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 89 50 64: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes F6 86 78 03 00 00 40: test byte ptr [esi + 0x378], 0x40
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 0B 04 00 00: je 0x587f1add
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BC 24 84 03 00 00: mov edi, dword ptr [esp + 0x384]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0B: cmp edi, 0xb
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 75 3F: jne 0x587f171d
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 54 24 28: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 24 AC 03 00 00: mov edx, dword ptr [esp + 0x3ac]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 2D C0 FF FF: call 0x587ed730
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 BC 24 9C 03 00 00: idiv dword ptr [esp + 0x39c]
        __asm _emit 0xf7
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E9 C6 01 00 00: jmp 0x587f18e3
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x587f1830
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f1738
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DD 05 98 C2 99 58: fld qword ptr [0x5899c298]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B 95 0C 10 00 00: mov edx, dword ptr [ebp + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DC C9: fmul st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc9
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 42 04: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 83 E8 08: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 3D: je 0x587f17b3
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 70: jne 0x587f17eb
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D 06: jge 0x587f178d
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes EB 3A: jmp 0x587f17ed
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7D 06: jge 0x587f17c5
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes EB 02: jmp 0x587f17ed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 84 24 AC 03 00 00: mov eax, dword ptr [esp + 0x3ac]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8C 24 B0 03 00 00: mov ecx, dword ptr [esp + 0x3b0]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6A C3 FF FF: call 0x587edb80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 BC 24 9C 03 00 00: idiv dword ptr [esp + 0x39c]
        __asm _emit 0xf7
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x587f18e3
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0D: cmp edi, 0xd
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x587f18ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B 3C 02 00 00: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C E6 FB FF: call 0x587afeb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 3F B4 18 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb4
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes E8 4A B4 18 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb4
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes 8D 0C 8D F4 01 00 00: lea ecx, [ecx*4 + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 8C 24 A4 03 00 00: imul ecx, dword ptr [esp + 0x3a4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xa4
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
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F AF 44 24 28: imul eax, dword ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes DB 44 24 3C: fild dword ptr [esp + 0x3c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f189d
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 8E 24 0A 01 00: fmul dword ptr [esi + 0x10a24]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DA 4C 24 18: fimul dword ptr [esp + 0x18]
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 35 30 D7 98 58: fdiv qword ptr [0x5898d730]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 E1: fabs
        __asm _emit 0xd9
        __asm _emit 0xe1
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 DC B3 18 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 02 B5 0E 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 BC 24 9C 03 00 00: idiv dword ptr [esp + 0x39c]
        __asm _emit 0xf7
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 E6 B4 0E 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x587f1add
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7C 24 38 00 00 00 40: cmp dword ptr [esp + 0x38], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 85 DA 01 00 00: jne 0x587f1add
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE A2 05 01 00 0B: cmp word ptr [esi + 0x105a2], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 75 0E: jne 0x587f191b
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BE A4 05 01 00 02: cmp word ptr [esi + 0x105a4], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x587f1add
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 0B: cmp edi, 0xb
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0b
        ; Exact mapped bytes 75 59: jne 0x587f1979
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 8B 93 98 0D 00 00: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 8D 54 03 00 00: movzx ecx, byte ptr [ebp + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 8C 8E 8C 0A 01 00: lea ecx, [esi + ecx*4 + 0x10a8c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7D 06: jge 0x587f194c
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 90 C2 99 58: fdiv qword ptr [0x5899c290]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x587f1a4e
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 74: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 6E: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 68: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 62: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 5C: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 56: je 0x587f19fa
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 93 98 0D 00 00: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 85 54 03 00 00: movzx eax, byte ptr [ebp + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 8C 86 8C 0A 01 00: lea ecx, [esi + eax*4 + 0x10a8c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7D 06: jge 0x587f19d0
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 88 C2 99 58: fmul qword ptr [0x5899c288]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes EB 54: jmp 0x587f1a4e
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes 8B 93 98 0D 00 00: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 85 54 03 00 00: movzx eax, byte ptr [ebp + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 8C 86 8C 0A 01 00: lea ecx, [esi + eax*4 + 0x10a8c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7D 06: jge 0x587f1a26
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 90 C2 99 58: fdiv qword ptr [0x5899c290]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 44 24 14: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 0F B6 83 54 03 00 00: movzx eax, byte ptr [ebx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 93 98 0D 00 00: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C 86 8C 0A 01 00: lea ecx, [esi + eax*4 + 0x10a8c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 CD CC CC CC: mov eax, 0xcccccccd
        __asm _emit 0xb8
        __asm _emit 0xcd
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C1 EA 03: shr edx, 3
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 83 FF 0C: cmp edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 75 44: jne 0x587f1add
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 93 98 0D 00 00: mov edx, dword ptr [ebx + 0xd98]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 8B 54 03 00 00: movzx ecx, byte ptr [ebx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 8E AC 0A 01 00: mov ecx, dword ptr [esi + ecx*4 + 0x10aac]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
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
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 0F B6 85 54 03 00 00: movzx eax, byte ptr [ebp + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 8C 86 AC 0A 01 00: mov dword ptr [esi + eax*4 + 0x10aac], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f1add
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes F6 86 78 03 00 00 10: test byte ptr [esi + 0x378], 0x10
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 10 02 00 00: je 0x587f1cfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x587f1cfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 7C 24 38 00 00 00 40: cmp dword ptr [esp + 0x38], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 85 F7 01 00 00: jne 0x587f1cfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 85 54 03 00 00: mov al, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 C8: movzx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 8B BC 8E F4 09 01 00: mov edi, dword ptr [esi + ecx*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8A 8B 54 03 00 00: mov cl, byte ptr [ebx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 3A C8: cmp cl, al
        __asm _emit 0x3a
        __asm _emit 0xc8
        ; Exact mapped bytes 74 17: je 0x587f1b3a
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 93 0C 10 00 00: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 60: mov eax, dword ptr [edx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x60
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 52: je 0x587f1b89
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 48: jmp 0x587f1b82
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 3B DD: cmp ebx, ebp
        __asm _emit 0x3b
        __asm _emit 0xdd
        ; Exact mapped bytes 74 09: je 0x587f1b47
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 78 60: sub edi, dword ptr [eax + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x78
        __asm _emit 0x60
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
        ; Exact mapped bytes 3A 88 54 03 00 00: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x587f1b67
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 8B 0C 10 00 00: mov ecx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 60: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x60
        ; Exact mapped bytes 29 96 18 0A 01 00: sub dword ptr [esi + 0x10a18], edx
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7D 02: jge 0x587f1b6d
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x587f1b89
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 83 0C 10 00 00: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 60: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x60
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 27 49 FF FF: call 0x587e64b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes 8A 8D 54 03 00 00: mov cl, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 88 54 03 00 00: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x587f1ce6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE E8 04 01 00 00: cmp dword ptr [esi + 0x104e8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x587f1bc6
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 96 E0 0B 01 00: mov edx, dword ptr [esi + 0x10be0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 42 64: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E F4 0B 01 00: mov ecx, dword ptr [esi + 0x10bf4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 6A 04: cmp ebp, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 75 70: jne 0x587f1c47
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 6A 69: push 0x69
        __asm _emit 0x6a
        __asm _emit 0x69
        ; Exact mapped bytes 6A 66: push 0x66
        __asm _emit 0x6a
        __asm _emit 0x66
        ; Exact mapped bytes 6A 15: push 0x15
        __asm _emit 0x6a
        __asm _emit 0x15
        ; Exact mapped bytes E8 BE A3 0F 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x587f1ce6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 0A: cmp dword ptr [eax + 0x170], 0xa
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 14: jle 0x587f1c0c
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
        ; Exact mapped bytes 74 0B: je 0x587f1c0c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 28: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x28
        ; Exact mapped bytes EB 02: jmp 0x587f1c0e
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
        ; Exact mapped bytes E8 76 5D 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 0A: cmp dword ptr [eax + 0x170], 0xa
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 8E AF 00 00 00: jle 0x587f1cdb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x587f1cdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 28: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x28
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x587f1cdd
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 5E A2 0F 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587f1ce6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 09: cmp dword ptr [eax + 0x170], 9
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 7E 14: jle 0x587f1c7c
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
        ; Exact mapped bytes 74 0B: je 0x587f1c7c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 24: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes EB 02: jmp 0x587f1c7e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 5D: jne 0x587f1ce6
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 09: cmp dword ptr [eax + 0x170], 9
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 7E 14: jle 0x587f1cab
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
        ; Exact mapped bytes 74 0B: je 0x587f1cab
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 24: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes EB 02: jmp 0x587f1cad
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
        ; Exact mapped bytes E8 D7 5C 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 09: cmp dword ptr [eax + 0x170], 9
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 7E 14: jle 0x587f1cdb
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
        ; Exact mapped bytes 74 0B: je 0x587f1cdb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 24: mov ecx, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 02: jmp 0x587f1cdd
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
        ; Exact mapped bytes 0F B6 8D 54 03 00 00: movzx ecx, byte ptr [ebp + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 BC 8E F4 09 01 00: mov dword ptr [esi + ecx*4 + 0x109f4], edi
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE E8 04 01 00 01: cmp dword ptr [esi + 0x104e8], 1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 5D: jne 0x587f1d60
        __asm _emit 0x75
        __asm _emit 0x5d
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
        ; Exact mapped bytes 0F B6 80 54 03 00 00: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 77 0F: ja 0x587f1d27
        __asm _emit 0x77
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 84 81 6C 0A 01 00: mov eax, dword ptr [ecx + eax*4 + 0x10a6c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f1d29
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 96 E0 0B 01 00: mov edx, dword ptr [esi + 0x10be0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 42 64: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
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
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 07: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 77 0F: ja 0x587f1d55
        __asm _emit 0x77
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 84 82 6C 0A 01 00: mov eax, dword ptr [edx + eax*4 + 0x10a6c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f1d57
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F4 0B 01 00: mov ecx, dword ptr [esi + 0x10bf4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA E4 02 00 00 00: cmp dword ptr [edx + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CE 01 00 00: je 0x587f1f41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C3 01 00 00: je 0x587f1f41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BB BC 60 00 00 00: cmp dword ptr [ebx + 0x60bc], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xbc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x587f1e5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8A 93 54 03 00 00: mov dl, byte ptr [ebx + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 A0 03 00 00: lea eax, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 3A 91 54 03 00 00: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x587f1df8
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 68 68 C2 99 58: push 0x5899c268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 E4 02 00 00: mov eax, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 CD 98 58: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE 8D F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4C 24 54: lea ecx, [esp + 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes EB 4E: jmp 0x587f1e46
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 68 48 C2 99 58: push 0x5899c248
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 5C 02 00 00: lea ecx, [esp + 0x25c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 E4 02 00 00: mov eax, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 CD 98 58: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 8D F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8C 24 54 02 00 00: lea ecx, [esp + 0x254]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A E4 02 00 00: mov ecx, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 41 8D F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 83 E8 12 00 00: mov eax, dword ptr [ebx + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 8D E8 12 00 00: mov ecx, dword ptr [ebp + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 93 A0 03 00 00: lea edx, [ebx + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 A0 03 00 00: lea eax, [ebp + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 24 C2 99 58: push 0x5899c224
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 68 01 00 00: lea ecx, [esp + 0x168]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
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
        ; Exact mapped bytes 8A 8D 54 03 00 00: mov cl, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 3A 88 54 03 00 00: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x587f1ec9
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 8E 38 0D 02 00: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 FF 77 00: push 0x77ff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 8D 94 24 58 01 00 00: lea edx, [esp + 0x158]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 13: jmp 0x587f1edc
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 8E 3C 0D 02 00: mov ecx, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF 77 00 00: push 0x77ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 58 01 00 00: lea eax, [esp + 0x158]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AF 9E 11 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 1D 00 00 00: mov edi, 0x1d
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B8 70 01 00 00: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f1f07
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
        ; Exact mapped bytes 74 0B: je 0x587f1f07
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 74: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587f1f09
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7B 5A 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 70 01 00 00: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f1f36
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
        ; Exact mapped bytes 74 0B: je 0x587f1f36
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x587f1f38
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
        ; Exact mapped bytes 8A 8D 54 03 00 00: mov cl, byte ptr [ebp + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 8B 54 03 00 00: cmp cl, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x587f1f6b
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 95 64 12 00 00: mov edx, dword ptr [ebp + 0x1264]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 54 24 28: add edx, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 95 64 12 00 00: mov dword ptr [ebp + 0x1264], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8A 88 54 03 00 00: mov cl, byte ptr [eax + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 8B 54 03 00 00: cmp cl, byte ptr [ebx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x587f1f99
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 93 68 12 00 00: mov edx, dword ptr [ebx + 0x1268]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 54 24 28: add edx, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 93 68 12 00 00: mov dword ptr [ebx + 0x1268], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 2C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 6B C0 32: imul eax, eax, 0x32
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8B 74 12 00 00: mov ecx, dword ptr [ebx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 83 74 12 00 00: mov dword ptr [ebx + 0x1274], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 5A 04: cmp ebx, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x5a
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 87 01 00 00: jne 0x587f2162
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 34: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 83 F9 64: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x64
        ; Exact mapped bytes 7E 2B: jle 0x587f200f
        __asm _emit 0x7e
        __asm _emit 0x2b
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
        ; Exact mapped bytes 8D 4C 02 05: lea ecx, [edx + eax + 5]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x05
        ; Exact mapped bytes C7 86 A4 03 00 00 0C 00 00 00: mov dword ptr [esi + 0x3a4], 0xc
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 15 06 00: call 0x58853600
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x587f2022
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A C4 00 00 00: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 EE 34 0A 00: call 0x58895510
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes F6 44 24 40 02: test byte ptr [esp + 0x40], 2
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x02
        ; Exact mapped bytes 74 60: je 0x587f2089
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BE 05 00 00 00: mov esi, 5
        __asm _emit 0xbe
        __asm _emit 0x05
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
        ; Exact mapped bytes 7E 14: jle 0x587f204f
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
        ; Exact mapped bytes 74 0B: je 0x587f204f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 14: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes EB 02: jmp 0x587f2051
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
        ; Exact mapped bytes E8 33 59 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B0 70 01 00 00: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E E9 00 00 00: jle 0x587f2157
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x587f2157
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 14: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x587f2159
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C C2 9C 58 00: cmp dword ptr [0x589cc25c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 29: je 0x587f20bb
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 83 3D 74 90 9C 58 02: cmp dword ptr [0x589c9074], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 75 20: jne 0x587f20bb
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 5B: push 0x5b
        __asm _emit 0x6a
        __asm _emit 0x5b
        ; Exact mapped bytes 6A 5A: push 0x5a
        __asm _emit 0x6a
        __asm _emit 0x5a
        ; Exact mapped bytes 6A 11: push 0x11
        __asm _emit 0x6a
        __asm _emit 0x11
        ; Exact mapped bytes E8 F4 9E 0F 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 5C C2 9C 58 00 00 00 00: mov dword ptr [0x589cc25c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x587f2162
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 11: push 0x11
        __asm _emit 0x6a
        __asm _emit 0x11
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 E4 9D 0F 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x587f2162
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BE 04 00 00 00: mov esi, 4
        __asm _emit 0xbe
        __asm _emit 0x04
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
        ; Exact mapped bytes 7E 14: jle 0x587f20fa
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
        ; Exact mapped bytes 74 0B: je 0x587f20fa
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 10: mov ecx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f20fc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 5B: jne 0x587f2162
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B0 70 01 00 00: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f2128
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
        ; Exact mapped bytes 74 0B: je 0x587f2128
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 10: mov ecx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f212a
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
        ; Exact mapped bytes E8 5A 58 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B0 70 01 00 00: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 14: jle 0x587f2157
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
        ; Exact mapped bytes 74 0B: je 0x587f2157
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 10: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f2159
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
        ; Exact mapped bytes 8B 8C 24 58 03 00 00: mov ecx, dword ptr [esp + 0x358]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x03
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
        ; Exact mapped bytes 8B 8C 24 40 03 00 00: mov ecx, dword ptr [esp + 0x340]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 57 AA 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xaa
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 50 03 00 00: add esp, 0x350
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 48 00: ret 0x48
        __asm _emit 0xc2
        __asm _emit 0x48
        __asm _emit 0x00
    }
}
