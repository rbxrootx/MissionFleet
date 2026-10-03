// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 3400 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4B70 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_587b4b70_segment_00() {
    __asm {
        push -1
        push 58980fb4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 148h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 160h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 170h]
        mov eax, dword ptr [eax]
        mov esi, ecx
        mov ecx, eax
        shr ecx, 5
        mov dword ptr [esi + 94h], eax
        and ecx, 3ffh
        shr eax, 0fh
        push ecx
        and eax, 0fffh
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 C4 FF FF: call 0x587b1090
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 94h]
        mov edi, eax
        shr edi, 0fh
        and edi, 0fffh
        mov dword ptr [esp + 50h], edi
        test eax, 60000000h
        ; Exact mapped bytes 74 09: je 0x587b4bfd
        __asm _emit 0x74
        __asm _emit 0x09
        movzx eax, byte ptr [esi + 22fh]
        ; Exact mapped bytes EB 07: jmp 0x587b4c04
        __asm _emit 0xeb
        __asm _emit 0x07
        movzx eax, byte ptr [esi + 22eh]
        movzx ecx, word ptr [esi + 228h]
        mov dl, cl
        lea ebp, [eax + eax*4]
        add ebp, ebp
        and dl, 0fh
        mov dword ptr [esp + 4ch], ebp
        mov dword ptr [esp + 48h], 0
        cmp dl, 1
        ; Exact mapped bytes 76 24: jbe 0x587b4c4a
        __asm _emit 0x76
        __asm _emit 0x24
        mov eax, ebp
        cdq
        sub eax, edx
        mov edx, eax
        sar edx, 1
        mov eax, edi
        sub eax, edx
        cdq
        mov edi, 0e10h
        idiv edi
        and ecx, 0fh
        mov eax, ebp
        dec ecx
        mov edi, edx
        cdq
        idiv ecx
        mov dword ptr [esp + 48h], eax
        test edi, edi
        ; Exact mapped bytes 7D 08: jge 0x587b4c56
        __asm _emit 0x7d
        __asm _emit 0x08
        add edi, 0e10h
        ; Exact mapped bytes EB 1B: jmp 0x587b4c71
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, 6e5d4c3bh
        imul edi
        sub edx, edi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add edi, eax
        mov dword ptr [esp + 1ch], edi
        mov edi, dword ptr [esi + 0e0h]
        xor ebx, ebx
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 20h], ebx
        test edi, edi
        ; Exact mapped bytes 0F 8F 3B 01 00 00: jg 0x587b4dc8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3b
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
        ; Exact mapped bytes 83 3D DC 8E 9C 58 00: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 63: je 0x587b4cff
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [esp + 18h], eax
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x587b4cff
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 1D 80 45 A2 58: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 1ch]
        sub eax, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ecx + 10524h]
        mov ebp, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov edi, dword ptr [esi + 4]
        sub edi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, dword ptr [ebx + 18h]
        sub edi, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        sub eax, dword ptr [esi + 8]
        add eax, dword ptr [ecx + 54h]
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes E8 05 27 00 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 2ch]
        mov ecx, esi
        ; Exact mapped bytes E8 4A CB FF FF: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        xor dword ptr [esi + 2ech], 0aaaaaaaah
        mov eax, dword ptr [esi + 2ech]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 12 C3 FF FF: call 0x587b1030
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi + 228h]
        and ecx, 0fh
        cmp eax, ecx
        mov dword ptr [esi + 2ech], eax
        ; Exact mapped bytes 7D 02: jge 0x587b4d34
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, eax
        mov dword ptr [esi + 0e0h], ecx
        mov ecx, dword ptr [esi + 88h]
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 2ech], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3A 0B 00 00: je 0x587b588d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 606ch], 1
        ; Exact mapped bytes 0F 85 2D 0B 00 00: jne 0x587b588d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 1330h], 0
        ; Exact mapped bytes 0F 85 20 0B 00 00: jne 0x587b588d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 204h]
        mov edi, dword ptr [esi + 3908h]
        mov ebp, dword ptr [edx + 104f4h]
        sub ebp, edi
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 BC 0A 00 00: je 0x587b5853
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 B2 0A 00 00: je 0x587b5853
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 390ch]
        lea edx, [ebx + ebx*4]
        add edx, edx
        add edx, edx
        add edx, edx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        ; Exact mapped bytes E9 9C 0A 00 00: jmp 0x587b585b
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4DC0 .. +0xAF9 bytes.
extern "C" __declspec(naked) void FUN_587b4b70_segment_01() {
    __asm {
        mov ebp, dword ptr [esp + 4ch]
        mov ebx, dword ptr [esp + 20h]
        movzx eax, word ptr [esi + 258h]
        mov ecx, dword ptr [esp + 170h]
        mov edi, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 78 02 00 00: jne 0x587b505c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 5A 02 00 00 01: cmp word ptr [esi + 0x25a], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6A 02 00 00: jne 0x587b505c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        test bl, 1
        ; Exact mapped bytes 75 22: jne 0x587b4e20
        __asm _emit 0x75
        __asm _emit 0x22
        sub edi, eax
        ; Exact mapped bytes 79 06: jns 0x587b4e08
        __asm _emit 0x79
        __asm _emit 0x06
        add edi, 0e10h
        mov ecx, dword ptr [esi + 130h]
        add ecx, dword ptr [esi + 0a8h]
        sub ecx, eax
        ; Exact mapped bytes 79 34: jns 0x587b4e4c
        __asm _emit 0x79
        __asm _emit 0x34
        add ecx, 0e10h
        ; Exact mapped bytes EB 2C: jmp 0x587b4e4c
        __asm _emit 0xeb
        __asm _emit 0x2c
        add edi, eax
        cmp edi, 0e10h
        ; Exact mapped bytes 7C 06: jl 0x587b4e30
        __asm _emit 0x7c
        __asm _emit 0x06
        sub edi, 0e10h
        mov ecx, dword ptr [esi + 130h]
        add ecx, dword ptr [esi + 0a8h]
        add ecx, eax
        cmp ecx, 0e10h
        ; Exact mapped bytes 7C 06: jl 0x587b4e4c
        __asm _emit 0x7c
        __asm _emit 0x06
        add ecx, 0fffff1f0h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 DC B7 FF FF: call 0x587b0630
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi*4 + 58a0b4d8h]
        mov ecx, dword ptr [edi*4 + 58a0ed18h]
        mov edx, eax
        neg edx
        mov dword ptr [esp + 54h], ecx
        mov dword ptr [esp + 18h], edx
        test ecx, ecx
        ; Exact mapped bytes 7D 02: jge 0x587b4e74
        __asm _emit 0x7d
        __asm _emit 0x02
        neg ecx
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x587b4e7a
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, edx
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes DB 44 24 54: fild dword ptr [esp + 0x54]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 4]
        lea ecx, [ebx + ebx*8]
        ; Exact mapped bytes D8 F1: fdiv st(1)
        __asm _emit 0xd8
        __asm _emit 0xf1
        lea eax, [edx + ecx*4]
        lea ecx, [eax + eax*2]
        lea ebx, [esi + ecx*8]
        mov ecx, dword ptr [ebx + 2fch]
        lea edx, [eax + eax*2 + 60h]
        mov eax, edi
        sub eax, dword ptr [esi + edx*8]
        add ecx, ebp
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DD 05 38 CB 98 58: fld qword ptr [0x5898cb38]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC C9: fmul st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc9
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DE F4: fdivrp st(4)
        __asm _emit 0xde
        __asm _emit 0xf4
        ; Exact mapped bytes D8 CB: fmul st(3)
        __asm _emit 0xd8
        __asm _emit 0xcb
        ; Exact mapped bytes DD 05 28 CF 98 58: fld qword ptr [0x5898cf28]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC CB: fmul st(3), st(0)
        __asm _emit 0xdc
        __asm _emit 0xcb
        ; Exact mapped bytes DE CC: fmulp st(4)
        __asm _emit 0xde
        __asm _emit 0xcc
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes E8 C2 7D 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebx + 304h]
        add eax, ecx
        add eax, ebp
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes E8 AD 7D 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        sub eax, dword ptr [ebx + 308h]
        add eax, edi
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes E8 9C 7D 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 30ch]
        add edi, eax
        add edi, ebp
        ; Exact mapped bytes E8 8D 7D 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ebp, eax
        sub ebp, dword ptr [ebx + 310h]
        push 438h
        add ebp, dword ptr [esi + 8]
        ; Exact mapped bytes E8 26 7D 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 0
        test eax, eax
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x587b4fba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esi + 94h], 18000000h
        ; Exact mapped bytes 74 0D: je 0x587b4f5b
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx edx, word ptr [esi + 2e0h]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 0B: jmp 0x587b4f66
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx ecx, word ptr [esi + 2dch]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10490h]
        mov ebx, dword ptr [ecx + 10524h]
        add edx, dword ptr [ecx + 10488h]
        mov ecx, dword ptr [esp + 1ch]
        push 40h
        push 0
        push 0
        push 0
        push ebp
        push edi
        push ebx
        push ecx
        movzx ecx, word ptr [esp + 34h]
        push ecx
        movzx ecx, word ptr [esi + 18ch]
        push ecx
        mov ecx, dword ptr [esp + 50h]
        push 0
        push ecx
        mov ecx, dword ptr [esp + 54h]
        push ecx
        mov ecx, dword ptr [esp + 54h]
        add edx, ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8A EB FE FF: call 0x587a3b40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x587b4fbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push edx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 170h], 0ffffffffh
        ; Exact mapped bytes E8 58 DE FE FF: call 0x587a2e30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ebx + 3f0h], ecx
        mov edx, dword ptr [esi + 3904h]
        push edx
        lea eax, [esi + 238h]
        push eax
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 85 DD FE FF: call 0x587a2d80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2f4h]
        mov ecx, eax
        imul ecx, eax
        mov dword ptr [ebx + 16ch], eax
        mov dword ptr [ebx + 40ch], ecx
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c50h]
        push ebx
        ; Exact mapped bytes E8 7C 05 FF FF: call 0x587a55a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 0F 85 41 07 00 00: jne 0x587b5778
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 07: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 33 07 00 00: jne 0x587b5778
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 21f04h]
        push ebx
        add ecx, 84h
        ; Exact mapped bytes E8 49 6E F8 FF: call 0x5873bea0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 16 07 00 00: jmp 0x587b5772
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 3D 03 00 00: jne 0x587b53a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 5A 02 00 00 01: cmp word ptr [esi + 0x25a], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 2F 03 00 00: jne 0x587b53a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [ecx], 18000000h
        ; Exact mapped bytes 74 14: je 0x587b5090
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 86 D0 02 00 00: mov ax, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx eax, ax
        ; Exact mapped bytes EB 0E: jmp 0x587b509e
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 8E D0 02 00 00: mov cx, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx eax, cx
        mov edi, dword ptr [esp + 1ch]
        mov edx, dword ptr [edi*4 + 58a0ed18h]
        movzx ecx, ax
        lea ecx, [ecx + ecx*4]
        add ecx, ecx
        imul edx, ecx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [edi*4 + 58a0b4d8h]
        imul edx, ecx
        mov dword ptr [esp + 38h], eax
        mov eax, 10624dd3h
        imul edx
        mov dword ptr [esp + 44h], ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, ebp
        cdq
        mov dword ptr [esp + 3ch], ecx
        mov ecx, dword ptr [esi + 130h]
        add ecx, dword ptr [esi + 0a8h]
        sub eax, edx
        sar eax, 1
        mov dword ptr [esp + 40h], 0
        test bl, 1
        ; Exact mapped bytes 75 0C: jne 0x587b5118
        __asm _emit 0x75
        __asm _emit 0x0c
        sub ecx, eax
        ; Exact mapped bytes 79 18: jns 0x587b5128
        __asm _emit 0x79
        __asm _emit 0x18
        add ecx, 0e10h
        ; Exact mapped bytes EB 10: jmp 0x587b5128
        __asm _emit 0xeb
        __asm _emit 0x10
        add ecx, eax
        cmp ecx, 0e10h
        ; Exact mapped bytes 7C 06: jl 0x587b5128
        __asm _emit 0x7c
        __asm _emit 0x06
        add ecx, 0fffff1f0h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 00 B5 FF FF: call 0x587b0630
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a0h]
        mov ebp, dword ptr [esi + 4]
        lea edx, [ebx + ebx*8]
        lea edx, [eax + edx*4]
        lea ecx, [edx + edx*2]
        mov eax, dword ptr [esi + ecx*8 + 2fch]
        lea ecx, [esi + ecx*8]
        add eax, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esi + 8]
        lea edi, [edx + edx*2 + 60h]
        mov edx, eax
        sub edx, dword ptr [esi + edi*8]
        mov edi, dword ptr [ecx + 30ch]
        mov ebx, eax
        sub eax, dword ptr [ecx + 310h]
        sub ebx, dword ptr [ecx + 308h]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [ecx + 304h]
        add edx, ebp
        add eax, 0ch
        add edi, ebp
        push 94h
        mov dword ptr [esp + 34h], edx
        add ebx, 7
        mov ebp, eax
        ; Exact mapped bytes E8 B8 7A 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 1
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x587b5220
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [esi + 2f8h]
        ; Exact mapped bytes 8B 15 74 46 A2 58: mov edx, dword ptr [0x58a24674]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x587b51dc
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x587b51dc
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 0F: je 0x587b51dc
        __asm _emit 0x74
        __asm _emit 0x0f
        shl ecx, 6
        add ecx, dword ptr [edx + 190h]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x587b51e4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 10524h]
        push 0
        push 0
        push 0
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push ecx
        push edx
        push 0
        push 24h
        lea edx, [esp + 5ch]
        push edx
        push 0
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 76 9A FA FF: call 0x5875ec90
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x587b5228
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [esp + 14h]
        push 0
        push eax
        mov dword ptr [esp + 170h], 0ffffffffh
        ; Exact mapped bytes E8 1B 9A FA FF: call 0x5875ec60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 48 26: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x587b5261
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, eax
        push edx
        ; Exact mapped bytes E8 EF DC 14 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xdc
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x587b5274
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, eax
        push edx
        ; Exact mapped bytes E8 6C DC 14 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        push 101h
        ; Exact mapped bytes E8 9E DA 14 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xda
        __asm _emit 0x14
        __asm _emit 0x00
        push 19ch
        ; Exact mapped bytes E8 C2 79 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x79
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 2
        test eax, eax
        ; Exact mapped bytes 0F 84 7A 00 00 00: je 0x587b5320
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esi + 94h], 18000000h
        ; Exact mapped bytes 74 0D: je 0x587b52bf
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx eax, word ptr [esi + 2e0h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x587b52ca
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx ecx, word ptr [esi + 2dch]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10524h]
        mov edx, dword ptr [ecx + 10490h]
        add edx, dword ptr [ecx + 10488h]
        movzx ecx, word ptr [esp + 14h]
        push 40h
        push 0
        push 0
        push 0
        push ebp
        push edi
        push eax
        mov eax, dword ptr [esp + 38h]
        push eax
        movzx eax, word ptr [esi + 18ch]
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        push eax
        mov eax, dword ptr [esp + 4ch]
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        add edx, ecx
        mov ecx, dword ptr [esp + 44h]
        push eax
        push edx
        ; Exact mapped bytes E8 46 6B FA FF: call 0x5875be60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x587b5328
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 14h]
        push ebx
        push edx
        mov dword ptr [esp + 170h], 0ffffffffh
        ; Exact mapped bytes E8 9E 67 FA FF: call 0x5875bae0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 198h], eax
        mov edx, dword ptr [esi + 3904h]
        push edx
        lea eax, [esi + 238h]
        push eax
        push 0
        ; Exact mapped bytes E8 59 68 FA FF: call 0x5875bbc0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 0F 85 FE 03 00 00: jne 0x587b5778
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 07: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 F0 03 00 00: jne 0x587b5778
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [ecx + 21f04h]
        push eax
        add ecx, 94h
        ; Exact mapped bytes E8 F2 F5 FF FF: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CF 03 00 00: jmp 0x587b5772
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [ecx], 18000000h
        ; Exact mapped bytes 74 14: je 0x587b53bf
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 8E D0 02 00 00: mov cx, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx eax, cx
        ; Exact mapped bytes EB 0E: jmp 0x587b53cd
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 96 D0 02 00 00: mov dx, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        mov ebp, dword ptr [esp + 1ch]
        mov edx, dword ptr [ebp*4 + 58a0ed18h]
        movzx ecx, ax
        lea ecx, [ecx + ecx*4]
        add ecx, ecx
        imul edx, ecx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [esp + 44h], ecx
        mov edi, dword ptr [eax + 100ch]
        mov dl, byte ptr [edi + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 23: jne 0x587b5436
        __asm _emit 0x75
        __asm _emit 0x23
        mov edi, dword ptr [ebp*4 + 58a0b4d8h]
        imul edi, ecx
        mov eax, 0d00d00d1h
        imul edi
        add edx, edi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes EB 1F: jmp 0x587b5455
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp*4 + 58a0b4d8h]
        imul edx, ecx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov dword ptr [esp + 3ch], ecx
        mov eax, dword ptr [esi + 0a0h]
        mov ebp, dword ptr [esi + 4]
        lea edx, [ebx + ebx*8]
        lea edx, [eax + edx*4]
        mov eax, dword ptr [esi + 8]
        lea ecx, [edx + edx*2]
        lea edi, [edx + edx*2 + 60h]
        mov dword ptr [esp + 40h], 0
        mov ebx, dword ptr [esi + ecx*8 + 2fch]
        mov edx, eax
        sub edx, dword ptr [esi + edi*8]
        mov edi, dword ptr [esi + ecx*8 + 30ch]
        lea ecx, [esi + ecx*8]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [ecx + 304h]
        add edx, ebp
        mov dword ptr [esp + 30h], edx
        mov edx, eax
        sub eax, dword ptr [ecx + 310h]
        sub edx, dword ptr [ecx + 308h]
        add eax, 0ch
        add ebx, ebp
        add edi, ebp
        mov ebp, eax
        mov eax, dword ptr [esi + 88h]
        movzx eax, word ptr [eax + 164h]
        add edx, 7
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 66 01 00 00: jne 0x587b5636
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 74 77 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x77
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 3
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x587b5550
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [esi + 2f8h]
        ; Exact mapped bytes A1 74 46 A2 58: mov eax, dword ptr [0x58a24674]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 18: jle 0x587b551b
        __asm _emit 0x7e
        __asm _emit 0x18
        test edx, edx
        ; Exact mapped bytes 7C 14: jl 0x587b551b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587b551b
        __asm _emit 0x74
        __asm _emit 0x0b
        shl edx, 6
        add edx, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587b551d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10524h]
        mov eax, dword ptr [esp + 28h]
        push 0
        push 0
        push 0
        push eax
        push ebx
        push edx
        push ecx
        push 0
        push 24h
        lea ecx, [esp + 5ch]
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push 0
        push 0
        ; Exact mapped bytes E8 44 97 FA FF: call 0x5875ec90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x587b5552
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esi + 0a0h]
        push 0
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 170h], 0ffffffffh
        ; Exact mapped bytes E8 F3 96 FA FF: call 0x5875ec60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 40h]
        mov eax, 3e8h
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587b5583
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 CD D9 14 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587b5590
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 50 D9 14 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x00
        push 101h
        mov ecx, ebx
        ; Exact mapped bytes E8 84 D7 14 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x14
        __asm _emit 0x00
        push 440h
        ; Exact mapped bytes E8 A8 76 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x76
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 4
        test eax, eax
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x587b56d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esi + 94h], 18000000h
        ; Exact mapped bytes 74 0D: je 0x587b55d9
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx ecx, word ptr [esi + 2e0h]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x587b55e4
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx edx, word ptr [esi + 2dch]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 10524h]
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebx + 10490h]
        add edx, dword ptr [ebx + 10488h]
        push 0
        push ebp
        push edi
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push ecx
        movzx ecx, word ptr [esp + 34h]
        push ecx
        lea ecx, [esp + 5ch]
        push ecx
        movzx ecx, word ptr [esi + 18ch]
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        push 0
        add edx, ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 4F FB 13 00: call 0x588f5180
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfb
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x587b56d2
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 440h
        ; Exact mapped bytes E8 0E 76 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 168h], 5
        test eax, eax
        ; Exact mapped bytes 0F 84 76 00 00 00: je 0x587b56d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esi + 94h], 18000000h
        ; Exact mapped bytes 74 0D: je 0x587b5673
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx edx, word ptr [esi + 2e0h]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 0B: jmp 0x587b567e
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx ecx, word ptr [esi + 2dch]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ebx + 10490h]
        mov ecx, dword ptr [ebx + 10524h]
        add edx, dword ptr [ebx + 10488h]
        push 40h
        push 0
        push 0
        push 0
        lea ebx, [ebp - 2]
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push ecx
        movzx ecx, word ptr [esp + 34h]
        push ecx
        lea ecx, [esp + 5ch]
        push ecx
        movzx ecx, word ptr [esi + 18ch]
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        push 0
        add edx, ecx
        push 3
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B2 FA 13 00: call 0x588f5180
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587b56d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 88h]
        mov ebx, eax
        mov eax, dword ptr [edx + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        mov dword ptr [esp + 168h], 0ffffffffh
        cmp cl, 9
        ; Exact mapped bytes 75 09: jne 0x587b56ff
        __asm _emit 0x75
        __asm _emit 0x09
        push 1
        mov ecx, ebx
        ; Exact mapped bytes E8 81 F3 13 00: call 0x588f4a80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push edx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 80 F2 13 00: call 0x588f4990
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ebx + 3fch], ecx
        mov edx, dword ptr [esi + 3904h]
        push edx
        lea eax, [esi + 238h]
        push eax
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 7D F1 13 00: call 0x588f48b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2f4h]
        mov ecx, eax
        imul ecx, eax
        mov dword ptr [ebx + 184h], eax
        mov dword ptr [ebx + 41ch], ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 75 1F: jne 0x587b5778
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 07: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 15: jne 0x587b5778
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 21f04h]
        push ebx
        add ecx, 74h
        ; Exact mapped bytes E8 8E 66 F8 FF: call 0x5873be00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x587b5810
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov edx, dword ptr [eax + 6028h]
        mov ebx, dword ptr [edx + 88h]
        mov edx, dword ptr [edx + 84h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push edx
        mov edx, dword ptr [esp + 44h]
        push ebx
        push ebp
        push edi
        push edx
        mov edx, dword ptr [esp + 50h]
        push edx
        mov edx, dword ptr [esp + 60h]
        push edx
        add eax, 3a0h
        push eax
        mov eax, dword ptr [ecx + 10488h]
        mov ecx, dword ptr [ecx + 10490h]
        push 5899a034h
        push eax
        push ecx
        lea edx, [esp + 8ch]
        push 58999fc8h
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 38h
        push 0
        lea eax, [esp + 5ch]
        push eax
        lea ecx, [esp + 64h]
        push ecx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        lea edx, [esp + 68h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 04: jmp 0x587b5814
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 1ch]
        add ebx, dword ptr [esp + 48h]
        mov eax, 6e5d4c3bh
        imul ebx
        sub edx, ebx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ebx, eax
        mov eax, dword ptr [esp + 20h]
        inc eax
        cmp eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8C 76 F5 FF FF: jl 0x587b4dc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 2ch]
        ; Exact mapped bytes E9 40 F4 FF FF: jmp 0x587b4c93
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esi + 390ch]
        mov edx, ebx
        cmp ebp, edx
        ; Exact mapped bytes 73 17: jae 0x587b5876
        __asm _emit 0x73
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 76 13: jbe 0x587b5876
        __asm _emit 0x76
        __asm _emit 0x13
        test edi, edi
        ; Exact mapped bytes 76 0F: jbe 0x587b5876
        __asm _emit 0x76
        __asm _emit 0x0f
        mov eax, ebp
        imul eax, eax, 64h
        xor edx, edx
        div ebx
        push eax
        ; Exact mapped bytes E8 FA 7A 12 00: call 0x588dd370
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7a
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 104f4h]
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esi + 3908h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587b588f
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, edi
        mov ecx, dword ptr [esp + 160h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 148h]
        xor ecx, esp
        ; Exact mapped bytes E8 2A 73 1C 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 158h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
