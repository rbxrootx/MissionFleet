// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 1897 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FD810 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_587fd810_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 81 C2 00 FE FF FF: add edx, 0xfffffe00
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FA 0A: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0a
        ; Exact mapped bytes 77 3B: ja 0x587fd85d
        __asm _emit 0x77
        __asm _emit 0x3b
        ; Exact mapped bytes 0F B6 92 78 D8 7F 58: movzx edx, byte ptr [edx + 0x587fd878]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x92
        __asm _emit 0x78
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 60 D8 7F 58: jmp dword ptr [edx*4 + 0x587fd860]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 D7 A5 FF FF: jmp 0x587f7e10
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 BE 11 FF FF: jmp 0x587eea00
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 05 17 FF FF: jmp 0x587eef50
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 7C A4 FE FF: jmp 0x587e7cd0
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 73 A4 FE FF: jmp 0x587e7cd0
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7CD0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_587fd810_segment_01() {
    __asm {
        ; Exact mapped bytes 83 B9 2C 0E 02 00 00: cmp dword ptr [ecx + 0x20e2c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 62: je 0x587e7d3b
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 2D 07 02 00 00: sub eax, 0x207
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x587e7d07
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 83 E8 03: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 75 4F: jne 0x587e7d3b
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 39 42 0A: cmp word ptr [edx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 9C C0: setl al
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc0
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 25 F4 01 00 00: and eax, 0x1f4
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 F4 01 00 00: add eax, 0x1f4
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 81 28 05 01 00: mov dword ptr [ecx + 0x10528], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 83 A2 58 00: cmp dword ptr [0x58a28330], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x587e7d27
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes C7 81 28 05 01 00 E8 03 00 00: mov dword ptr [ecx + 0x10528], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 30 83 A2 58 00 00 00 00: mov dword ptr [0x58a28330], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 28 05 01 00 F4 01 00 00: mov dword ptr [ecx + 0x10528], 0x1f4
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 30 83 A2 58 01 00 00 00: mov dword ptr [0x58a28330], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EEA00 .. +0x544 bytes.
extern "C" __declspec(naked) void FUN_587fd810_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 2D 04 02 00 00: sub eax, 0x204
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 84 6A 04 00 00: je 0x587eee82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 18 05 00 00: jne 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 38 99 FC 02 00 00: cmp byte ptr [ecx + 0x2fc], bl
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x587eea53
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D1 91 FF FF: call 0x587e7c10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C6 82 FC 02 00 00 00: mov byte ptr [edx + 0x2fc], 0
        __asm _emit 0xc6
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 38 5D 74: cmp byte ptr [ebp + 0x74], bl
        __asm _emit 0x38
        __asm _emit 0x5d
        __asm _emit 0x74
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x587eeb02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 45 A2 58: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x587eeb02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 1B: jl 0x587eea97
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 81 F9 BD 01 00 00: cmp ecx, 0x1bd
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 13: jg 0x587eea97
        __asm _emit 0x7f
        __asm _emit 0x13
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3D 91 02 00 00: cmp eax, 0x291
        __asm _emit 0x3d
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 09: jl 0x587eea97
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 3D 00 03 00 00: cmp eax, 0x300
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 02: jg 0x587eea97
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 78 78 00: cmp dword ptr [eax + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x00
        ; Exact mapped bytes 74 1A: je 0x587eeabc
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 81 F9 BE 01 00 00: cmp ecx, 0x1be
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 35: jl 0x587eeadf
        __asm _emit 0x7c
        __asm _emit 0x35
        ; Exact mapped bytes 81 F9 1B 03 00 00: cmp ecx, 0x31b
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 2D: jg 0x587eeadf
        __asm _emit 0x7f
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3D 66 02 00 00: cmp eax, 0x266
        __asm _emit 0x3d
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x587eead4
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 81 F9 BE 01 00 00: cmp ecx, 0x1be
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x587eeadf
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 81 F9 1B 03 00 00: cmp ecx, 0x31b
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 13: jg 0x587eeadf
        __asm _emit 0x7f
        __asm _emit 0x13
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3D 71 02 00 00: cmp eax, 0x271
        __asm _emit 0x3d
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 09: jl 0x587eeadf
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 3D 00 03 00 00: cmp eax, 0x300
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 02: jg 0x587eeadf
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 81 F9 1C 03 00 00: cmp ecx, 0x31c
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x587eeb02
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 81 F9 00 04 00 00: cmp ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 13: jg 0x587eeb02
        __asm _emit 0x7f
        __asm _emit 0x13
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 3D 52 02 00 00: cmp eax, 0x252
        __asm _emit 0x3d
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 09: jl 0x587eeb02
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 3D 00 03 00 00: cmp eax, 0x300
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 02: jg 0x587eeb02
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes 8A 45 74: mov al, byte ptr [ebp + 0x74]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x74
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x587eeb11
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 2C 04 00 00: jne 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x04
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
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 1B 04 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B9 7B 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 0E 04 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 85 06 04 00 00: jne 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 89 B5 C0 00 00 00: mov dword ptr [ebp + 0xc0], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 C4 00 00 00: mov dword ptr [ebp + 0xc4], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8D 98 00 00 00: lea ecx, [ebp + 0x98]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x587eeb6e
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 35 F8 47 A2 58: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 83 BC 07 98 13 00 00 00: cmp dword ptr [edi + eax + 0x1398], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1B: jne 0x587eeb83
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes C7 01 00 00 00 00: mov dword ptr [ecx], 0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 3D 80 00 00 00: cmp eax, 0x80
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C D3: jl 0x587eeb50
        __asm _emit 0x7c
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 35 F8 47 A2 58: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 FA 08: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 75 51: jne 0x587eebd9
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 83 BD 54 05 01 00 00: cmp dword ptr [ebp + 0x10554], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 34: jne 0x587eebc5
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 85 58 05 01 00: mov eax, dword ptr [ebp + 0x10558]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2A: je 0x587eebc5
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 3B 46 04: cmp eax, dword ptr [esi + 4]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 74 25: je 0x587eebc5
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 39 98 58 12 00 00: cmp dword ptr [eax + 0x1258], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x587eebc5
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 83 BD 80 03 00 00 00: cmp dword ptr [ebp + 0x380], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x587eebc5
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 52 AE FF FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 3E AE FF FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 F0 04 01 00: cmp dword ptr [eax + 0x104f0], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 4A 02 00 00: jne 0x587eee34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 81 C2 39 01 00 00: add edx, 0x139
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 04: shl edx, 4
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0C 02: mov ecx, dword ptr [edx + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 8B 51 0C: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 54 05 01 00: mov ecx, dword ptr [ebp + 0x10554]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x587eed3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 64 01 00 00 03: cmp word ptr [ecx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 72 1B: jb 0x587eec31
        __asm _emit 0x72
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 B2 CC 02 00 00: movzx esi, word ptr [edx + 0x2cc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xb2
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FE 02: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 16 03 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FE 04: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 0C 03 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B9 58 12 00 00 00: cmp dword ptr [ecx + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x587eed26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x587eed26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 82 CC 02 00 00: movzx eax, word ptr [edx + 0x2cc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 0A: je 0x587eec5d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x587eed3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 DD 00 00 00: push 0xdd
        __asm _emit 0x68
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 81 0E 00: call 0x588d6da0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 9D AD FF FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 45: push 0x45
        __asm _emit 0x6a
        __asm _emit 0x45
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes E8 2A D2 0F 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x587eed3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BE 1E 00 00 00: mov esi, 0x1e
        __asm _emit 0xbe
        __asm _emit 0x1e
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
        ; Exact mapped bytes 7E 14: jle 0x587eecb4
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
        ; Exact mapped bytes 74 0B: je 0x587eecb4
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4A 78: mov ecx, dword ptr [edx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x78
        ; Exact mapped bytes EB 02: jmp 0x587eecb6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 7E: jne 0x587eed3f
        __asm _emit 0x75
        __asm _emit 0x7e
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
        ; Exact mapped bytes 7E 14: jle 0x587eece2
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
        ; Exact mapped bytes 74 0B: je 0x587eece2
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 78: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x78
        ; Exact mapped bytes EB 02: jmp 0x587eece4
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
        ; Exact mapped bytes E8 A0 8C 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0x11
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
        ; Exact mapped bytes 7E 1D: jle 0x587eed1a
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 83 B8 94 01 00 00 00: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x587eed1a
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 78: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x78
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
        ; Exact mapped bytes EB 25: jmp 0x587eed3f
        __asm _emit 0xeb
        __asm _emit 0x25
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
        ; Exact mapped bytes EB 19: jmp 0x587eed3f
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 BA CC 02 00 00 02: cmp word ptr [edx + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x587eed3f
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D3 AC FF FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 83 BD 54 05 01 00 00: cmp dword ptr [ebp + 0x10554], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587eed50
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 ED 01 00 00: jne 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 B3 AC FF FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 2C C4 98 58: mov edi, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 2B 05 50 83 A2 58: sub eax, dword ptr [0x58a28350]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3D 88 13 00 00: cmp eax, 0x1388
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 B0 00 00 00: jbe 0x587eee26
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb0
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
        ; Exact mapped bytes 6A 1D: push 0x1d
        __asm _emit 0x6a
        __asm _emit 0x1d
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 29 D1 0F 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x587eee26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BE 28 00 00 00: mov esi, 0x28
        __asm _emit 0xbe
        __asm _emit 0x28
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
        ; Exact mapped bytes 7E 17: jle 0x587eedb8
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
        ; Exact mapped bytes 74 0E: je 0x587eedb8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 A0 00 00 00: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587eedba
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
        ; Exact mapped bytes 75 61: jne 0x587eee26
        __asm _emit 0x75
        __asm _emit 0x61
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
        ; Exact mapped bytes 7E 17: jle 0x587eede9
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
        ; Exact mapped bytes 74 0E: je 0x587eede9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 94 01 00 00: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 A0 00 00 00: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587eedeb
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
        ; Exact mapped bytes E8 99 8B 11 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8b
        __asm _emit 0x11
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
        ; Exact mapped bytes 7E 17: jle 0x587eee1b
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
        ; Exact mapped bytes 74 0E: je 0x587eee1b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 A0 00 00 00: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587eee1d
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
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes A3 50 83 A2 58: mov dword ptr [0x58a28350], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 4C 83 A2 58: mov ecx, dword ptr [0x58a2834c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 81 C1 D0 07 00 00: add ecx, 0x7d0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 73 29: jae 0x587eee75
        __asm _emit 0x73
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B B2 E4 02 00 00: mov esi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 9F 00 00 00: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 C1 99 58: push 0x5899c1d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xc1
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
        ; Exact mapped bytes E8 2B BD F8 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 89 3D 4C 83 A2 58: mov dword ptr [0x58a2834c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8A 45 74: mov al, byte ptr [ebp + 0x74]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x74
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x587eee91
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
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
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 78 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x587eef3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 90 13 00 00: mov edi, 0x1390
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9D 98 00 00 00: lea ebx, [ebp + 0x98]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3B 00: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x00
        ; Exact mapped bytes 74 6A: je 0x587eef2f
        __asm _emit 0x74
        __asm _emit 0x6a
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
        ; Exact mapped bytes 8B 04 17: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x17
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5A: je 0x587eef2f
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 70 0C: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 71 B3 F4 FF: call 0x5873a250
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4C: je 0x587eef2f
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 86 D8 04 00 00: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 42: je 0x587eef2f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 3B 85 54 05 01 00: cmp eax, dword ptr [ebp + 0x10554]
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x587eef2f
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes B9 2C 01 00 00: mov ecx, 0x12c
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 4A 08: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2b
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 2D 90 01 00 00: sub eax, 0x190
        __asm _emit 0x2d
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 84 FC FF: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 54 05 01 00: mov ecx, dword ptr [ebp + 0x10554]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 DE 00 00 00: push 0xde
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 7E 0E 00: call 0x588d6da0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 10: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x10
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 81 FF 10 14 00 00: cmp edi, 0x1410
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 83: jl 0x587eeec0
        __asm _emit 0x7c
        __asm _emit 0x83
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EEF50 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_587fd810_segment_03() {
    __asm {
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BE 24 05 01 00: mov edi, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F7 BF 14 01 00 00: idiv dword ptr [edi + 0x114]
        __asm _emit 0xf7
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 4F 50: add ecx, dword ptr [edi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4f
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D BC B1 A0 58: mov ecx, dword ptr [0x58a0b1bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 83 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B BE 24 05 01 00: mov edi, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 BF 14 01 00 00: idiv dword ptr [edi + 0x114]
        __asm _emit 0xf7
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 4F 54: add ecx, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x4f
        __asm _emit 0x54
        ; Exact mapped bytes B8 83 BE A0 2F: mov eax, 0x2fa0be83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x2f
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 0D C0 B1 A0 58: mov ecx, dword ptr [0x58a0b1c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 91 83 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE C4 18 02 00 00: cmp dword ptr [esi + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x587eefe2
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BE F0 05 01 00 0F: cmp word ptr [esi + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 0B: jne 0x587eefed
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8E 4C 1C 02 00: mov ecx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 83 F9 FF: call 0x58787370
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
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
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x587ef0a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DD 76 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x587ef0a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B8 00 00 00 00: cmp dword ptr [esi + 0xb8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x587ef0a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 24 05 01 00: mov edi, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes C7 86 BC 00 00 00 01 00 00 00: mov dword ptr [esi + 0xbc], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9F 14 01 00 00: mov ebx, dword ptr [edi + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 2D C8 84 A2 58: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 03 4F 50: add ecx, dword ptr [edi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4f
        __asm _emit 0x50
        ; Exact mapped bytes 8B 96 D8 00 00 00: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 03 47 54: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7E 0E: jle 0x587ef070
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 89 8E C8 00 00 00: mov dword ptr [esi + 0xc8], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 D0 00 00 00: mov dword ptr [esi + 0xd0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587ef07c
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 96 C8 00 00 00: mov dword ptr [esi + 0xc8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E D0 00 00 00: mov dword ptr [esi + 0xd0], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7E 11: jle 0x587ef097
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 86 CC 00 00 00: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E D4 00 00 00: mov dword ptr [esi + 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 89 8E CC 00 00 00: mov dword ptr [esi + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D4 00 00 00: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C7 86 9C 03 00 00 00 00 00 40: mov dword ptr [esi + 0x39c], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
