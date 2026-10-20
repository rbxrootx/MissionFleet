// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A6A4 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_5886a6a4_5886A6A4() {
    __asm {
        ; Exact mapped bytes 8D 54 24 0C: lea edx, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 88 FD FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 9B: wait
        __asm _emit 0x9b
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 05: je 0x5886a6c1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 44 FD FF FF: call 0x5886a405
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E1 00 00 F0 7F: and ecx, 0x7ff00000
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 54 24 08: lea edx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 81 F9 00 00 F0 7F: cmp ecx, 0x7ff00000
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5886a773
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 FD FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5886a76f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 F0 7F: test eax, 0x7ff00000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x5886a7e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4C 24 0F: mov cl, byte ptr [esp + 0xf]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 80 E1 80: and cl, 0x80
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x80
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x5886a84c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 F1: fyl2x
        __asm _emit 0xd9
        __asm _emit 0xf1
        ; Exact mapped bytes E8 EF FC FF FF: call 0x5886a3f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 F9 01: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 02: jne 0x5886a708
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 79 FD FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0D A0 53 8C 58: lea ecx, [0x588c53a0]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes BA 1D 00 00 00: mov edx, 0x1d
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 FD FF FF: jmp 0x5886a4d9
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 5C FD FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0D A0 53 8C 58: lea ecx, [0x588c53a0]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes BA 1D 00 00 00: mov edx, 0x1d
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BE DA 00 00: call 0x58878200
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 54 24 08: lea edx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 E8 FC FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes DF E9: fucompi st(1)
        __asm _emit 0xdf
        __asm _emit 0xe9
        ; Exact mapped bytes 7A 05: jp 0x5886a758
        __asm _emit 0x7a
        __asm _emit 0x05
        ; Exact mapped bytes 74 0E: je 0x5886a763
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes EB 31: jmp 0x5886a789
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 E5: fxam
        __asm _emit 0xd9
        __asm _emit 0xe5
        ; Exact mapped bytes 9B: wait
        __asm _emit 0x9b
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes 9B: wait
        __asm _emit 0x9b
        ; Exact mapped bytes 9E: sahf
        __asm _emit 0x9e
        ; Exact mapped bytes 75 08: jne 0x5886a76b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 16: jmp 0x5886a789
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 25 FF FF 0F 00: and eax, 0xfffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0B 44 24 10: or eax, dword ptr [esp + 0x10]
        __asm _emit 0x0b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 75 C4: jne 0x5886a744
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes 8D 54 24 08: lea edx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 AC FC FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 25 00 00 F0 7F: and eax, 0x7ff00000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 81 E2 FF FF 0F 00: and edx, 0xfffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 F0 7F: cmp eax, 0x7ff00000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 75 06: jne 0x5886a7a7
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 0B 54 24 08: or edx, dword ptr [esp + 8]
        __asm _emit 0x0b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 75 B1: jne 0x5886a758
        __asm _emit 0x75
        __asm _emit 0xb1
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 C0: jne 0x5886a76b
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes 83 EC 74: sub esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x74
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 08: fstp qword ptr [esp + 8]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 9B: wait
        __asm _emit 0x9b
        ; Exact mapped bytes DD 71 08: fnsave dword ptr [ecx + 8]
        __asm _emit 0xdd
        __asm _emit 0x71
        __asm _emit 0x08
        ; Exact mapped bytes E8 0C DF 00 00: call 0x588786d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes DD 61 08: frstor dword ptr [ecx + 8]
        __asm _emit 0xdd
        __asm _emit 0x61
        __asm _emit 0x08
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes 83 C4 74: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x74
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 B6 FC FF FF: je 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x5886a725
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 25 FF FF 0F 00: and eax, 0xfffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0B 44 24 08: or eax, dword ptr [esp + 8]
        __asm _emit 0x0b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 0F 85 F8 FE FF FF: jne 0x5886a6ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 25 FF FF FF 7F: and eax, 0x7fffffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 0B 44 24 10: or eax, dword ptr [esp + 0x10]
        __asm _emit 0x0b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 74 3D: je 0x5886a843
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes E8 66 00 00 00: call 0x5886a871
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 6C 24 0F: mov ch, byte ptr [esp + 0xf]
        __asm _emit 0x8a
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes C0 ED 07: shr ch, 7
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0x07
        ; Exact mapped bytes F7 44 24 17 80 00 00 00: test dword ptr [esp + 0x17], 0x80
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x5886a832
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes DB 2D 20 AC 8C 58: fld xword ptr [0x588cac20]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0xac
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 84 CD: test ch, cl
        __asm _emit 0x84
        __asm _emit 0xcd
        ; Exact mapped bytes 74 02: je 0x5886a828
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 FE FF FF: jmp 0x5886a725
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes 84 CD: test ch, cl
        __asm _emit 0x84
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 84 52 FC FF FF: je 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes E9 4B FC FF FF: jmp 0x5886a48e
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes E9 42 FC FF FF: jmp 0x5886a48e
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes E8 1E 00 00 00: call 0x5886a871
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 9D FE FF FF: jne 0x5886a6fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DB 2D E0 AB 8C 58: fld xword ptr [0x588cabe0]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 FE FF FF: jmp 0x5886a725
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
