// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3571 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873F020 .. +0xDF3 bytes.
extern "C" __declspec(naked) void FUN_5873f020_segment_00() {
    __asm {
        push -1
        push 5897de9ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        lea eax, [esp + 30h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes E8 42 B3 FF FF: call 0x5873a390
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 348h]
        mov dword ptr [esi + 334h], eax
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        mov ecx, dword ptr [eax*4 + 58a0ed18h]
        imul ecx, dword ptr [esi + 230h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 314h], eax
        mov eax, dword ptr [esi + 4c8h]
        mov ebx, 64h
        xor ebp, ebp
        mov dword ptr [esp + 14h], ebx
        cmp eax, 2
        ; Exact mapped bytes 75 09: jne 0x5873f0a5
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 39 86 CC 02 00 00: cmp word ptr [esi + 0x2cc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 34: je 0x5873f0d9
        __asm _emit 0x74
        __asm _emit 0x34
        cmp eax, 4
        ; Exact mapped bytes 74 2F: je 0x5873f0d9
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp eax, -1
        ; Exact mapped bytes 74 2A: je 0x5873f0d9
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp edi, ebp
        ; Exact mapped bytes 7E 10: jle 0x5873f0c3
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 340h]
        cmp ecx, dword ptr [esi + 324h]
        ; Exact mapped bytes 7E 18: jle 0x5873f0d9
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes EB 10: jmp 0x5873f0d3
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 7D 14: jge 0x5873f0d9
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [esi + 340h]
        cmp edx, dword ptr [esi + 324h]
        ; Exact mapped bytes 7D 06: jge 0x5873f0d9
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esi + 348h], ebp
        mov ecx, 1
        cmp eax, -1
        ; Exact mapped bytes 75 10: jne 0x5873f0f3
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, esi
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes E8 62 C8 FF FF: call 0x5873b950
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 0B 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 75 2A: jne 0x5873f121
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, esi
        mov dword ptr [esp + 14h], 32h
        ; Exact mapped bytes E8 FA B1 FF FF: call 0x5873a300
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 328h], ebx
        ; Exact mapped bytes 0F 8D F8 0A 00 00: jge 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 45ch], 1
        ; Exact mapped bytes E9 E9 0A 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 75 19: jne 0x5873f13e
        __asm _emit 0x75
        __asm _emit 0x19
        mov dword ptr [esp + 14h], 1eh
        cmp dword ptr [esi + 4f8h], ebp
        ; Exact mapped bytes 75 58: jne 0x5873f18d
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [esi + 74h]
        cmp eax, ebp
        ; Exact mapped bytes 74 51: je 0x5873f18d
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes EB 23: jmp 0x5873f161
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp eax, ebx
        ; Exact mapped bytes 75 62: jne 0x5873f1a4
        __asm _emit 0x75
        __asm _emit 0x62
        mov dword ptr [esp + 14h], 1eh
        cmp dword ptr [esi + 4f8h], ebp
        ; Exact mapped bytes 75 23: jne 0x5873f175
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [esi + 74h], ebp
        ; Exact mapped bytes 74 1E: je 0x5873f175
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 4d8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 14: je 0x5873f175
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4a0h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 4a4h], eax
        ; Exact mapped bytes EB 18: jmp 0x5873f18d
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp dword ptr [esi + 4d8h], ebp
        ; Exact mapped bytes 75 10: jne 0x5873f18d
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 4dch], 0ffffffffh
        cmp dword ptr [esi + 328h], ebx
        ; Exact mapped bytes 0F 8D 71 0A 00 00: jge 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 45ch], ecx
        ; Exact mapped bytes E9 66 0A 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 42 04 00 00: jne 0x5873f5ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 8C C3 FF FF: call 0x5873b540
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BE CC 02 00 00 02: cmp word ptr [esi + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        mov ebx, eax
        ; Exact mapped bytes 75 1F: jne 0x5873f1df
        __asm _emit 0x75
        __asm _emit 0x1f
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 68 C8 FF FF: call 0x5873ba30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 31ch]
        dec eax
        neg eax
        sbb eax, eax
        and eax, 32h
        add eax, 46h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5873f1e7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 41h
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 1B 0A 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        mov edi, dword ptr [esi + 334h]
        mov dword ptr [esi + 4a0h], ecx
        mov ecx, dword ptr [ebx + 4b0h]
        mov eax, 57619f1h
        imul ecx
        movzx ecx, word ptr [esi + 2deh]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, 32h
        mov dword ptr [esi + 4a4h], eax
        ; Exact mapped bytes 0F 8E 1E 02 00 00: jle 0x5873f449
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 66666667h
        imul ecx
        mov ecx, dword ptr [esi + 230h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 0F 8E 1F 02 00 00: jle 0x5873f46f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov dword ptr [esi + 230h], ecx
        cmp dword ptr [esi + 328h], 50h
        ; Exact mapped bytes 7C 11: jl 0x5873f287
        __asm _emit 0x7c
        __asm _emit 0x11
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 8C 09 00 00: jl 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 32h
        ; Exact mapped bytes 0F 8D 83 09 00 00: jge 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4c0h], ebp
        ; Exact mapped bytes 0F 85 77 09 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [esi + 228h]
        ; Exact mapped bytes 66 83 BE CC 02 00 00 02: cmp word ptr [esi + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        mov eax, dword ptr [esi + 228h]
        ; Exact mapped bytes 75 0C: jne 0x5873f2b5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 514h]
        push eax
        ; Exact mapped bytes E8 AB 80 1C 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D DC 8E 9C 58: cmp dword ptr [0x589c8edc], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 66: je 0x5873f323
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 2D 80 45 A2 58: mov ebp, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 1ch]
        sub eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        mov edi, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv edi
        mov dword ptr [esp + 18h], edi
        mov edi, dword ptr [esi + 4]
        sub edi, eax
        mov eax, dword ptr [ebp + 20h]
        sub eax, dword ptr [ebp + 18h]
        sub edi, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv dword ptr [esp + 18h]
        sub eax, dword ptr [esi + 8]
        add eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 524h]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x5873f323
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 DD 80 07 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4b0h]
        mov eax, 57619f1h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        mov dword ptr [esi + 224h], 0ah
        mov edx, dword ptr [ebx + 4b0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ecx, eax
        imul ecx, ecx, 0c8h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [ebx + 340h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov edi, dword ptr [esi + 4]
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 340h]
        sub edi, dword ptr [ebx + 4]
        mov dword ptr [esp + 18h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ebp, eax
        mov eax, dword ptr [esp + 18h]
        sub ebp, eax
        mov edx, ecx
        mov eax, edi
        imul edx, ecx
        imul eax, edi
        add eax, edx
        push eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 14 CB 02 00: call 0x5876bee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        mov edi, ebp
        imul ecx, eax
        imul edi, ebp
        add ecx, edi
        push ecx
        ; Exact mapped bytes E8 EF CA 02 00: call 0x5876bee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 93 D8 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E D8 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, eax
        imul edx, eax
        add edx, edi
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 7A D8 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes E8 85 D8 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x00
        cmp eax, 64h
        movzx ecx, word ptr [esi + 2d2h]
        mov dword ptr [esi + 4c0h], ecx
        ; Exact mapped bytes 0F 8D D9 07 00 00: jge 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 460h], 0
        ; Exact mapped bytes 74 40: je 0x5873f47a
        __asm _emit 0x74
        __asm _emit 0x40
        mov dword ptr [esi + 4cch], 0
        ; Exact mapped bytes E9 C1 07 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 230h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 10 FE FF FF: jge 0x5873f267
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [eax + eax*2]
        add ecx, ecx
        add ecx, ecx
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 230h], eax
        ; Exact mapped bytes E9 F3 FD FF FF: jmp 0x5873f26d
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi + 2ceh]
        mov edx, 78h
        sub edx, eax
        imul ecx, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 18h]
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 84 5C 07 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4cch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [ecx + 378h], 80h
        ; Exact mapped bytes 0F 84 3F 07 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 34 07 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 72 19 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 27 07 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 21c34h], 0
        ; Exact mapped bytes 75 21: jne 0x5873f512
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [eax + 218b0h], 0
        ; Exact mapped bytes 7E 18: jle 0x5873f512
        __asm _emit 0x7e
        __asm _emit 0x18
        mov dl, byte ptr [eax + 105a8h]
        and dl, 1
        movzx edi, dl
        neg edi
        sbb edi, edi
        and edi, 0fffffff7h
        add edi, 0ah
        ; Exact mapped bytes EB 05: jmp 0x5873f517
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 1
        ; Exact mapped bytes 66 83 BE CC 02 00 00 02: cmp word ptr [esi + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        mov ebp, dword ptr [ebx + 2a4h]
        ; Exact mapped bytes 75 14: jne 0x5873f53b
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [ebp + ebp*2]
        add ecx, ecx
        add ecx, ecx
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        mov ebp, edx
        mov eax, ebp
        imul eax, eax, 46h
        xor edx, edx
        div edi
        mov ecx, dword ptr [esi + 74h]
        push eax
        ; Exact mapped bytes E8 03 D9 19 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd9
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, ebp
        shl eax, 4
        sub eax, ebp
        add eax, eax
        add eax, eax
        xor edx, edx
        div edi
        mov ecx, dword ptr [esi + 74h]
        cdq
        xor eax, edx
        sub eax, edx
        sub dword ptr [ecx + 128ch], eax
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 85 8E 06 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 126ch]
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        mul ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 E2 6E 0A 00: call 0x587e6480
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 2a4h]
        mov ecx, dword ptr [ebx + 74h]
        imul edx, edx, 32h
        push edx
        ; Exact mapped bytes E8 D0 D7 19 00: call 0x588dcd80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd7
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 08 49 A2 58 00: cmp byte ptr [0x58a24908], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4D 06 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 74h]
        cmp byte ptr [eax + 354h], 4
        ; Exact mapped bytes 0F 85 3D 06 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 03: cmp word ptr [eax + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 2A 06 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 21f30h], 1
        ; Exact mapped bytes E9 1B 06 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 49: jne 0x5873f63d
        __asm _emit 0x75
        __asm _emit 0x49
        movzx eax, word ptr [esi + 2cch]
        sub eax, 3
        mov dword ptr [esp + 14h], 78h
        ; Exact mapped bytes 74 29: je 0x5873f631
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, ecx
        ; Exact mapped bytes 0F 85 FA 05 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C9 EE FF FF: call 0x5873e4e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 31ch], 1
        ; Exact mapped bytes 0F 85 E6 05 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], 14h
        ; Exact mapped bytes E9 D9 05 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A8 E4 FF FF: call 0x5873dae0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CD 05 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 0F 85 D1 01 00 00: jne 0x5873f817
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov edi, 50h
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes E8 89 70 19 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 05 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 31ch]
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x5873f741
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [ecx + 6060h]
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        lea eax, [esp + 20h]
        mov dword ptr [esp + 20h], 0ffffff10h
        mov dword ptr [esp + 24h], ebp
        push edx
        lea edx, [esp + 2ch]
        push edx
        push eax
        ; Exact mapped bytes E8 01 C9 02 00: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [esp + 34h]
        add esp, 0ch
        mov dword ptr [esi + 4a0h], ecx
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 338h]
        sub edx, dword ptr [esp + 2ch]
        mov eax, ecx
        imul eax, eax, 3e8h
        mov dword ptr [esi + 4a4h], edx
        cmp dword ptr [esi + 324h], eax
        ; Exact mapped bytes 74 18: je 0x5873f6ed
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 328h], edi
        ; Exact mapped bytes 7D 10: jge 0x5873f6ed
        __asm _emit 0x7d
        __asm _emit 0x10
        mov dword ptr [esi + 324h], eax
        mov dword ptr [esi + 348h], 0ffffff6ah
        imul ecx, ecx, 7d0h
        cmp dword ptr [esi + 340h], ecx
        ; Exact mapped bytes 0F 8F 0B 05 00 00: jg 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 230h]
        add ecx, ecx
        mov dword ptr [esi + 324h], eax
        add ecx, ecx
        add ecx, ecx
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 230h], eax
        mov dword ptr [esi + 348h], 0ffffffceh
        mov dword ptr [esi + 31ch], 1
        ; Exact mapped bytes E9 C9 04 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 42: jne 0x5873f788
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 4a0h], ecx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 338h]
        imul eax, eax, 3e8h
        cmp dword ptr [esi + 340h], eax
        mov dword ptr [esi + 4a4h], edx
        ; Exact mapped bytes 0F 8F 97 04 00 00: jg 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 31ch], 2
        mov dword ptr [esi + 348h], ebp
        ; Exact mapped bytes E9 82 04 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 79 04 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 328h], 14h
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 4a0h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 4a4h], edx
        mov dword ptr [esp + 14h], 78h
        ; Exact mapped bytes 0F 8D 4F 04 00 00: jge 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 A8 64 01 00 00: cmp word ptr [eax + 0x164], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5873f7cf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dword ptr [esi + 4c8h], ebp
        ; Exact mapped bytes E9 3B 04 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 31ch], 3
        mov dword ptr [esi + 308h], eax
        mov dword ptr [esi + 30ch], eax
        mov dword ptr [esi + 310h], eax
        mov dword ptr [esi + 314h], eax
        mov ecx, dword ptr [esi + 520h]
        mov dword ptr [esi + 470h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x5873f80a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 CE CA FF FF: call 0x5873c2e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F3 03 00 00: jmp 0x5873fc0a
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 0F 84 EA 03 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 E1 03 00 00: jne 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 348h]
        cmp eax, 0fffffc7ch
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 7C 0B: jl 0x5873f845
        __asm _emit 0x7c
        __asm _emit 0x0b
        add eax, -0ah
        mov dword ptr [esi + 348h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5873f84f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 348h], 0fffffc7ch
        cmp dword ptr [esi + 340h], ebp
        ; Exact mapped bytes 0F 8F B9 02 00 00: jg 0x5873fb14
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 520h]
        mov dword ptr [esi + 470h], ebp
        mov dword ptr [esi + 31ch], 3
        mov dword ptr [esi + 4c8h], 5
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x5873f886
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 508h]
        push ebp
        ; Exact mapped bytes E8 2E 1D FF FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 0ch]
        cmp edi, ebp
        ; Exact mapped bytes 74 35: je 0x5873f8d3
        __asm _emit 0x74
        __asm _emit 0x35
        mov edi, edi
        mov ecx, edi
        ; Exact mapped bytes E8 39 6E 19 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6e
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5873f8cc
        __asm _emit 0x74
        __asm _emit 0x21
        movzx eax, word ptr [edi + 164h]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 73 14: jae 0x5873f8cc
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ebp
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 98 70 19 00: call 0x588d6960
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x5873f921
        __asm _emit 0x75
        __asm _emit 0x55
        mov edi, dword ptr [edi + 78h]
        cmp edi, ebp
        ; Exact mapped bytes 75 CD: jne 0x5873f8a0
        __asm _emit 0x75
        __asm _emit 0xcd
        push 60h
        ; Exact mapped bytes E8 74 D3 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd3
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 38h], 2
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 FC 01 00 00: je 0x5873faed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 0F 8E B9 01 00 00: jle 0x5873fabd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 0F 84 AD 01 00 00: je 0x5873fabd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x5873fabf
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes E8 0C D3 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, eax
        and edi, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5873f939
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffch
        inc edi
        push 60h
        add edi, 7
        ; Exact mapped bytes E8 0B D3 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd3
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 38h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 4B: je 0x5873f99d
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 16: jle 0x5873f977
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x5873f977
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 380h
        ; Exact mapped bytes EB 02: jmp 0x5873f979
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
        push 1770h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        push ebx
        push edi
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 93 77 07 00: call 0x587b7130
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 38h], 0ffffffffh
        xor ebp, ebp
        ; Exact mapped bytes E8 8A D2 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0x23
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5873f9b8
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        test eax, eax
        ; Exact mapped bytes 7E 7F: jle 0x5873fa3b
        __asm _emit 0x7e
        __asm _emit 0x7f
        push 84h
        ; Exact mapped bytes E8 88 D2 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0x23
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 38h], 1
        test edi, edi
        ; Exact mapped bytes 74 42: je 0x5873fa1d
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [edx + 10524h]
        push 1388h
        push eax
        push ecx
        ; Exact mapped bytes E8 3D D2 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0x23
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5873fa05
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 6
        push eax
        ; Exact mapped bytes E8 CC 1D FF FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 F3 C3 02 00: call 0x5876be10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 38h], 0ffffffffh
        inc ebp
        ; Exact mapped bytes E8 0B D2 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0x23
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5873fa37
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        cmp ebp, eax
        ; Exact mapped bytes 7C 81: jl 0x5873f9bc
        __asm _emit 0x7c
        __asm _emit 0x81
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10490h]
        mov eax, dword ptr [ecx + 10488h]
        lea ebx, [edx + eax]
        xor edx, edx
        mov eax, ebx
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
        push 64h
        push 1
        mov ebp, dword ptr [esi + 74h]
        push 0
        push 0
        push 190h
        push 2710h
        push -1
        push 1
        mov edi, dword ptr [eax + edx*4]
        mov eax, 51eb851fh
        mul edi
        mov eax, dword ptr [esp + 38h]
        shr edx, 6
        imul edx, edx, 0c8h
        sub edi, edx
        movzx edx, word ptr [eax + 350h]
        add edi, 64h
        push edi
        push 0
        push 0dh
        push edx
        movzx edx, word ptr [ebp + 350h]
        push edx
        mov edx, dword ptr [esi + 4]
        push eax
        mov eax, dword ptr [esi + 8]
        push ebp
        push eax
        push edx
        push ebx
        ; Exact mapped bytes E8 A7 02 0B 00: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes EB 38: jmp 0x5873faf5
        __asm _emit 0xeb
        __asm _emit 0x38
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
        push edi
        push 3ch
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 73 77 07 00: call 0x587b7260
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 38h], 0ffffffffh
        cmp dword ptr [esi + 460h], ebp
        ; Exact mapped bytes 75 23: jne 0x5873fb20
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [esi + 464h], ebp
        ; Exact mapped bytes 74 0F: je 0x5873fb14
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, esi
        mov dword ptr [esi + 464h], ebp
        ; Exact mapped bytes E8 CC C7 FF FF: call 0x5873c2e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 460h], ebp
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 44 90 9C 58: cmp dword ptr [0x589c9044], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5873fc0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4bch]
        dec eax
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5873fb3f
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ebp, dword ptr [esi + eax*8 + 354h]
        mov eax, dword ptr [esi + eax*8 + 358h]
        push 60h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes E8 F6 D0 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 38h], 3
        test ecx, ecx
        ; Exact mapped bytes 74 61: je 0x5873fbce
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 1eh
        ; Exact mapped bytes 7E 17: jle 0x5873fb92
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5873fb92
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 780h
        ; Exact mapped bytes EB 02: jmp 0x5873fb94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 10524h]
        mov edx, dword ptr [esi + 340h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 1ch]
        push eax
        push 1388h
        push edx
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes E8 86 B9 1A 00: call 0x588eb550
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5873fbd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 33ch]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push 0fffffeffh
        mov ecx, edi
        mov dword ptr [esp + 3ch], 0ffffffffh
        mov dword ptr [edi + 5ch], eax
        ; Exact mapped bytes E8 22 31 1C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x31
        __asm _emit 0x1c
        __asm _emit 0x00
        push 0c8h
        mov ecx, edi
        ; Exact mapped bytes E8 D6 30 1C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 348h]
        cdq
        xor eax, edx
        sub eax, edx
        ; Exact mapped bytes 78 07: js 0x5873fc1e
        __asm _emit 0x78
        __asm _emit 0x07
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 0A: jl 0x5873fc28
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 348h], 0
        mov ecx, dword ptr [esi + 334h]
        imul ecx, dword ptr [esp + 14h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        add dword ptr [esi + 34ch], ecx
        mov eax, dword ptr [esi + 34ch]
        ; Exact mapped bytes 79 08: jns 0x5873fc5c
        __asm _emit 0x79
        __asm _emit 0x08
        lea ebx, [eax + 0e10h]
        ; Exact mapped bytes EB 0A: jmp 0x5873fc66
        __asm _emit 0xeb
        __asm _emit 0x0a
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov ebx, edx
        mov edi, dword ptr [esi + 314h]
        mov dword ptr [esi + 34ch], ebx
        mov ecx, dword ptr [ebx*4 + 58a0ed18h]
        imul ecx, edi
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 308h], eax
        mov ecx, dword ptr [ebx*4 + 58a0b4d8h]
        imul ecx, edi
        mov edi, dword ptr [esi + 348h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        lea ebp, [eax*4 + 58a0b4d8h]
        mov eax, dword ptr [esi + 230h]
        mov dword ptr [esi + 30ch], ecx
        mov ecx, dword ptr [ebp]
        imul ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 310h], eax
        mov eax, 4
        cmp dword ptr [esi + 4c8h], eax
        ; Exact mapped bytes 75 33: jne 0x5873fd2b
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 66 39 86 CC 02 00 00: cmp word ptr [esi + 0x2cc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2A: jne 0x5873fd2b
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [esi + 31ch], 1
        ; Exact mapped bytes 75 21: jne 0x5873fd2b
        __asm _emit 0x75
        __asm _emit 0x21
        mov ebp, dword ptr [ebp]
        imul ebp, dword ptr [esi + 230h]
        mov eax, 5d9f7391h
        imul ebp
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov dword ptr [esi + 310h], ecx
        mov eax, dword ptr [esi + 310h]
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x5873fd37
        __asm _emit 0x7d
        __asm _emit 0x02
        neg eax
        mov ecx, dword ptr [esi + 30ch]
        mov edx, dword ptr [esi + 308h]
        sub dword ptr [esi + 4b0h], ecx
        mov ebp, dword ptr [esi + 88h]
        add dword ptr [esi + 4ach], edx
        add dword ptr [esi + 340h], eax
        xor ecx, ecx
        mov dword ptr [esi + 310h], eax
        cmp ebp, 1
        ; Exact mapped bytes 74 33: je 0x5873fd9b
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, 51eb851fh
        test edi, edi
        ; Exact mapped bytes 7C 16: jl 0x5873fd87
        __asm _emit 0x7c
        __asm _emit 0x16
        add edi, 0c8h
        imul edi
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 2]
        ; Exact mapped bytes EB 14: jmp 0x5873fd9b
        __asm _emit 0xeb
        __asm _emit 0x14
        add edi, 0ffffff38h
        imul edi
        sar edx, 7
        mov ecx, edx
        shr ecx, 1fh
        lea ecx, [edx + ecx + 2]
        add ebx, 0fffffc7ch
        ; Exact mapped bytes 79 06: jns 0x5873fda9
        __asm _emit 0x79
        __asm _emit 0x06
        add ebx, 0e10h
        mov eax, dword ptr [esi + 8ch]
        add eax, ebx
        cdq
        idiv dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 98h]
        imul eax, ebp
        add eax, ecx
        imul eax, dword ptr [esi + 84h]
        mov dword ptr [esi + 94h], eax
        add edx, eax
        mov eax, dword ptr [esi + 4fch]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 4fch]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [esi + 500h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 4fch]
        mov edx, dword ptr [esi + 50ch]
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esp + 30h]
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
        add esp, 28h
        ret
    }
}
