// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3103 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4440 .. +0xC1F bytes.
extern "C" __declspec(naked) void FUN_587a4440_segment_00() {
    __asm {
        push -1
        push 58980a58h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        lea eax, [esp + 3ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 D6 0B 00 00: je 0x587a504b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 138h]
        or ecx, 0ffffffffh
        cmp eax, ecx
        ; Exact mapped bytes 75 4F: jne 0x587a44d1
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, esi
        ; Exact mapped bytes E8 97 E7 15 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E0 E7 15 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x587a44c2
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [eax + 21c34h], 0
        ; Exact mapped bytes 75 20: jne 0x587a44c2
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 16: jne 0x587a44c2
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [eax + 21f04h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x587a44c2
        __asm _emit 0x74
        __asm _emit 0x0c
        push esi
        lea ecx, [eax + 84h]
        ; Exact mapped bytes E8 5E 0C 15 00: call 0x588f5120
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0c
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 41 0B 00 00: jmp 0x587a5012
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 34 0B 00 00: jne 0x587a5012
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 0F 85 E7 03 00 00: jne 0x587a48d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 86 14 04 00 00: cmp word ptr [esi + 0x414], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x587a451e
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [esi + 3e0h], eax
        ; Exact mapped bytes 74 21: je 0x587a451e
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 148h]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587a4510
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        ; Exact mapped bytes 74 12: je 0x587a4524
        __asm _emit 0x74
        __asm _emit 0x12
        push 40000000h
        mov ecx, esi
        ; Exact mapped bytes E8 42 E9 FF FF: call 0x587a2e60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 3e0h], ebx
        ; Exact mapped bytes 66 39 9E 14 04 00 00: cmp word ptr [esi + 0x414], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 77 02 00 00: jne 0x587a47a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 420h]
        mov eax, 51eb851fh
        imul ebx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        imul ecx, ebx
        ; Exact mapped bytes 8B 2D 8C B3 9C 58: mov ebp, dword ptr [0x589cb38c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, 51eb851fh
        imul ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, 2710h
        sub edx, ebp
        imul ecx, edx
        mov eax, 447a7a9h
        imul ecx
        sar edx, 0dh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add ebp, eax
        cmp ebp, 2710h
        ; Exact mapped bytes 89 2D 8C B3 9C 58: mov dword ptr [0x589cb38c], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 7E 0B: jle 0x587a459a
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ebp, 2710h
        ; Exact mapped bytes 89 2D 8C B3 9C 58: mov dword ptr [0x589cb38c], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 424h]
        imul ecx, ebp
        mov eax, 68db8badh
        imul ecx
        sar edx, 0ch
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 428h]
        imul edx, ebp
        mov eax, 68db8badh
        imul edx
        sar edx, 0ch
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov dword ptr [esi + 424h], ecx
        mov dword ptr [esi + 428h], edi
        ; Exact mapped bytes 8B 15 C0 44 A2 58: mov edx, dword ptr [0x58a244c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 32h
        add dword ptr [esi + 42ch], edx
        mov eax, dword ptr [esi + 42ch]
        ; Exact mapped bytes 78 22: js 0x587a4613
        __asm _emit 0x78
        __asm _emit 0x22
        lea edx, [ebp - 1388h]
        imul edx, eax
        add edx, edx
        mov eax, 68db8badh
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 42ch], eax
        cmp ebx, 0fa0h
        ; Exact mapped bytes 0F 8E A4 00 00 00: jle 0x587a46c3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 42ch]
        add edx, ebx
        cmp edx, 0fa0h
        ; Exact mapped bytes 0F 8E 90 00 00 00: jle 0x587a46c3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 418h], ecx
        add dword ptr [esi + 41ch], edi
        mov eax, dword ptr [esi + 42ch]
        add eax, ebx
        mov dword ptr [esi + 420h], eax
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ecx, ecx, 64h
        mov ebp, dword ptr [esi + 418h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, ebp
        cdq
        idiv ecx
        mov edi, dword ptr [esi + 41ch]
        mov dword ptr [esi + 180h], eax
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ecx, ecx, 75h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, edi
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 420h]
        mov edi, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub edi, eax
        mov dword ptr [esi + 184h], edi
        ; Exact mapped bytes E9 49 09 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 06 F2 FF FF: call 0x587a38d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1E: jne 0x587a46ed
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 5A F2 FF FF: call 0x587a3930
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c50h]
        push esi
        ; Exact mapped bytes E8 98 0C 00 00: call 0x587a5380
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 09 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 85 1D 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edi, eax
        and edi, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587a4701
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffeh
        inc edi
        push 60h
        add edi, 3eh
        ; Exact mapped bytes E8 43 85 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        xor ebp, ebp
        mov dword ptr [esp + 44h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 54: je 0x587a4770
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 16: jle 0x587a4741
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587a4741
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 140h
        ; Exact mapped bytes EB 02: jmp 0x587a4743
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push -1
        push 1770h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 E0 46 A2 58: mov edx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push edi
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 F0 2A 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3e8h]
        mov dword ptr [esp + 44h], 0ffffffffh
        mov dword ptr [esi + 134h], 1
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x587a4796
        __asm _emit 0x74
        __asm _emit 0x0a
        push 80h
        ; Exact mapped bytes E8 4A E5 15 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 53 E9 FF FF: call 0x587a30f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 3e0h], ebp
        ; Exact mapped bytes E9 64 08 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 148h]
        mov ebp, dword ptr [esi + 14ch]
        cmp edi, ebp
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8C D7 00 00 00: jl 0x587a4897
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 150h]
        ; Exact mapped bytes 7D 46: jge 0x587a480e
        __asm _emit 0x7d
        __asm _emit 0x46
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 86 D0 03 00 00: fld qword ptr [esi + 0x3d0]
        __asm _emit 0xdd
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes DD 05 28 99 99 58: fld qword ptr [0x58999928]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes DC C9: fmul st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc9
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes E8 BD 84 1D 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes DD 86 D8 03 00 00: fld qword ptr [esi + 0x3d8]
        __asm _emit 0xdd
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        sub ecx, eax
        mov dword ptr [esi + 180h], ecx
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes E8 A0 84 1D 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esi + 168h]
        sub edx, eax
        mov dword ptr [esi + 184h], edx
        cmp edi, ebp
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587a4897
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 31 84 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], ebx
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x587a488a
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 14: jle 0x587a484e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587a484e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x587a4850
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 160h]
        push -1
        push 1b58h
        push ecx
        mov ecx, dword ptr [esi + 15ch]
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 3fch]
        push edi
        push edx
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 D6 29 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 44h], 0ffffffffh
        ; Exact mapped bytes E9 75 07 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 150h]
        ; Exact mapped bytes 0F 8C 69 07 00 00: jl 0x587a500c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3e8h]
        mov dword ptr [esi + 134h], ebx
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x587a48bd
        __asm _emit 0x74
        __asm _emit 0x0a
        push 80h
        ; Exact mapped bytes E8 23 E4 15 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 2C E8 FF FF: call 0x587a30f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 3e0h], 0
        ; Exact mapped bytes E9 39 07 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 17 07 00 00: jne 0x587a4ff2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x587a4902
        __asm _emit 0x74
        __asm _emit 0x1d
        add dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 3e8h]
        mov ecx, dword ptr [eax + 50h]
        cmp ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes 75 09: jne 0x587a4902
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 154h]
        mov dword ptr [eax + 50h], ecx
        cmp dword ptr [esi + 13ch], 0
        mov ebx, 40000000h
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x587a49d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        movzx eax, word ptr [eax + 350h]
        cmp dword ptr [esi + 140h], eax
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x587a49b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 1A: jne 0x587a4959
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 3f4h]
        push 9
        ; Exact mapped bytes E8 14 2A 16 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3f4h]
        push 1
        ; Exact mapped bytes E8 97 CC F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        sub ecx, dword ptr [esi + 150h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, 9
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 3f4h]
        ; Exact mapped bytes E8 D7 29 16 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi + 148h]
        sub edx, dword ptr [esi + 150h]
        cmp edx, 0fah
        ; Exact mapped bytes 7E 2E: jle 0x587a49cb
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 3f4h]
        push 0
        mov dword ptr [esi + 13ch], ebx
        ; Exact mapped bytes E8 40 CC F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcc
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x587a49cb
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [esi + 148h]
        sub eax, dword ptr [esi + 150h]
        cmp eax, 0fah
        ; Exact mapped bytes 7E 06: jle 0x587a49cb
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 13ch], ebx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 8C E4 FF FF: call 0x587a2e60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ecx + 10524h]
        lea ebp, [esi + 4]
        push edx
        push eax
        ; Exact mapped bytes E8 70 F3 01 00: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D4 03 00 00: je 0x587a4dcc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 CB 03 00 00: jne 0x587a4dcc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 68 E7 FF FF: call 0x587a3170
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 FA 05 00 00: je 0x587a500c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 13ch], ebx
        ; Exact mapped bytes 0F 85 EE 05 00 00: jne 0x587a500c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 C9 CB F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3e8h]
        mov dword ptr [esi + 134h], 2
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x587a4a42
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 7E CB F8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp edi, 1
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x587a4b57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 5A 02 00 00: je 0x587a4cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 2
        ; Exact mapped bytes 0F 85 4E 03 00 00: jne 0x587a4dab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 EA 81 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x81
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], 6
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x587a4abd
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 15 F4 46 A2 58: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x587a4a97
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x587a4a97
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [edx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587a4a99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push 1770h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C5 31 16 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a4abf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebx, 0ffffffffh
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 48h], ebx
        ; Exact mapped bytes E8 4E E2 15 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0x15
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 75 81 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x81
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], 7
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x587a4b47
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x587a4b12
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587a4b12
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x587a4b14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push ebx
        push 1b58h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 3f8h]
        push edi
        push edx
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 19 27 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes E8 1E E8 FF FF: call 0x587a3370
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 54 02 00 00: jmp 0x587a4dab
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 90 9C 58 00: cmp dword ptr [0x589c9040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 60: je 0x587a4bc0
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 66 8B 86 22 01 00 00: mov ax, word ptr [esi + 0x122]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0aah
        ; Exact mapped bytes 66 33 C2: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc2
        mov ecx, 0fa0h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 76 23: jbe 0x587a4b9c
        __asm _emit 0x76
        __asm _emit 0x23
        mov edx, 1f40h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 76 12: jbe 0x587a4b95
        __asm _emit 0x76
        __asm _emit 0x12
        mov ecx, 2ee0h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        sbb eax, eax
        and eax, 8
        add eax, 20h
        ; Exact mapped bytes EB 0C: jmp 0x587a4ba1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 18h
        ; Exact mapped bytes EB 05: jmp 0x587a4ba1
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 10h
        push 1388h
        push 7
        push 3
        push eax
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 8]
        sar eax, 1
        push eax
        mov eax, dword ptr [ebp]
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 80 04 15 00: call 0x588f5040
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x15
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 87 80 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], 4
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x587a4c20
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x587a4bfa
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x587a4bfa
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587a4bfc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push 1770h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 62 30 16 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a4c22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebx, 0ffffffffh
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 48h], ebx
        ; Exact mapped bytes E8 EB E0 15 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 12 80 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], 5
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x587a4caa
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x587a4c75
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587a4c75
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x587a4c77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push ebx
        push 1b58h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 3f8h]
        push edi
        push edx
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 B6 25 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 44h], ebx
        mov ecx, esi
        ; Exact mapped bytes E8 BB E6 FF FF: call 0x587a3370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ech]
        mov ecx, dword ptr [esi + 8]
        sub ecx, dword ptr [eax + 8]
        mov edi, dword ptr [ebp]
        sub edi, dword ptr [eax + 4]
        imul ecx, ecx, 75h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + 122h]
        xor edx, 0aah
        imul edx, edx, 64h
        mov dword ptr [esp + 14h], edx
        mov ecx, eax
        mov edx, edi
        imul ecx, eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        imul edx, edi
        add ecx, edx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 80 7F 1D 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes DC 05 E0 CA 98 58: fadd qword ptr [0x5898cae0]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 3f0h]
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DC 7C 24 18: fdivr qword ptr [esp + 0x18]
        __asm _emit 0xdc
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 10490h]
        add edi, dword ptr [eax + 10488h]
        mov eax, dword ptr [esi + 408h]
        push eax
        push ebp
        ; Exact mapped bytes D9 6C 24 20: fldcw word ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DF 7C 24 20: fistp qword ptr [esp + 0x20]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x20
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 10 19 13 00: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x13
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 124h]
        push eax
        mov edx, dword ptr [esi + 144h]
        mov eax, dword ptr [esi + 140h]
        push 0
        push 0
        push 320h
        push ecx
        mov ecx, dword ptr [esi + 3ech]
        push 0
        push 2
        push ebx
        push 0
        push 0ch
        push edx
        mov edx, dword ptr [esi + 3f0h]
        push eax
        mov eax, dword ptr [ebp + 4]
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 B5 AF 04 00: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 13ch], 0
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c50h]
        push esi
        ; Exact mapped bytes E8 B9 05 00 00: call 0x587a5380
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x587a500c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 12ch]
        cmp dword ptr [esi + 12ch], 12h
        ; Exact mapped bytes 0F 8E 2D 02 00 00: jle 0x587a500c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3e8h]
        xor edi, edi
        mov ebx, 2
        mov dword ptr [esi + 134h], ebx
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x587a4dfc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C4 C7 F8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [esi + 13ch], edi
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587a4ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 3F 7E 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], ebx
        cmp eax, edi
        ; Exact mapped bytes 74 44: je 0x587a4e62
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 10: jle 0x587a4e3c
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 08: je 0x587a4e3c
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587a4e3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push 1770h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 20 2E 16 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587a4e64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebx, 0ffffffffh
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 48h], ebx
        ; Exact mapped bytes E8 A9 DE 15 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xde
        __asm _emit 0x15
        __asm _emit 0x00
        push 60h
        ; Exact mapped bytes E8 D0 7D 1D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 44h], 3
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x587a4eec
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x587a4eb7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587a4eb7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x587a4eb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push ebx
        push 1b58h
        push ecx
        mov ecx, dword ptr [ebp]
        push ecx
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 3f8h]
        push edi
        push edx
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 74 23 01 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes EB 6A: jmp 0x587a4f5c
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes 39 3D DC 8E 9C 58: cmp dword ptr [0x589c8edc], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 64: je 0x587a4f5e
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 1D 80 45 A2 58: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 1ch]
        sub eax, dword ptr [ebx + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 10524h]
        mov ecx, dword ptr [edi + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ecx
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [ebp]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, dword ptr [ebx + 18h]
        sub ecx, dword ptr [edi + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        add eax, dword ptr [edi + 54h]
        sub eax, dword ptr [esi + 8]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 410h]
        ; Exact mapped bytes E8 A4 24 01 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        xor edi, edi
        movzx eax, word ptr [esi + 122h]
        mov edx, dword ptr [esi + 16ch]
        xor eax, 0aah
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, dword ptr [ebp]
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 3f0h]
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov dword ptr [esp + 30h], 0ch
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 3ch], 2
        mov dword ptr [esp + 40h], edi
        mov dword ptr [esp + 44h], edi
        mov dword ptr [esp + 48h], 320h
        mov ecx, dword ptr [eax + 10524h]
        push edx
        ; Exact mapped bytes E8 93 F4 01 00: call 0x587c4450
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 13ch], edi
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c50h]
        push esi
        ; Exact mapped bytes E8 AB 03 00 00: call 0x587a5380
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 29: je 0x587a500c
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 3f4h]
        push 0
        ; Exact mapped bytes E8 00 C6 F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x587a500c
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp eax, 2
        ; Exact mapped bytes 75 15: jne 0x587a500c
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [esi + 138h], ecx
        mov dword ptr [esi + 134h], ecx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 54 DE FF FF: call 0x587a2e60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esi + 148h]
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x587a504b
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 1C: je 0x587a5049
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587a5020
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [esp + 3ch]
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
        add esp, 34h
        ret
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 3ch]
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
        add esp, 34h
        ret
    }
}
