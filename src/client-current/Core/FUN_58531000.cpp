// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58531000 .. +0xFFF bytes.
extern "C" __declspec(naked) void FUN_58531000() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588828f9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 104h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 64h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x585310ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 64h], 0
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x58531056
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB B3 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x58531096
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes A1 94 75 94 58: mov eax, dword ptr [0x58947594]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 18: je 0x58531085
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853108c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585310ab
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 B3 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x585310ec
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 18: je 0x585310db
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x585310e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes C7 05 98 75 94 58 00 00 00 00: mov dword ptr [0x58947598], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 02: shr ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 EC 0E 00 00: je 0x58531ff2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 32: je 0x5853114f
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 74 1B: je 0x5853114f
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 0eh
        ; Exact mapped bytes 0F 85 02 04 00 00: jne 0x58531551
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585311e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 38: jle 0x585311a7
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 24h
        ; Exact mapped bytes 7F 12: jg 0x58531192
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 43 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585311a5
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 24h
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 43 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x585311dd
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 24h
        ; Exact mapped bytes 7F 12: jg 0x585311ca
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 43 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x585311dd
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        sub eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 43 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A 03 00 00: jmp 0x5853154c
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D7 01 00 00: jne 0x585313d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 12148h], 8
        ; Exact mapped bytes 73 62: jae 0x5853126b
        __asm _emit 0x73
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12154h], 0
        ; Exact mapped bytes 75 3C: jne 0x58531251
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58531237
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x58531246
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D BE FF FF: call 0x5852d0c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x5853124f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 BF FF FF: call 0x5852d160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58531266
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12154h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12154h], eax
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x585313a0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 700h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 02: or ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12148h], 8
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58531387
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov dword ptr [ebp - 110h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 100h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12148h]
        add eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12148h], eax
        push 14ch
        ; Exact mapped bytes E8 FE FC 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 24: je 0x5853133d
        __asm _emit 0x74
        __asm _emit 0x24
        push 2af8h
        push 300h
        push 400h
        push 54h
        push 70h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 38 6F 1B 00: call 0x586e8270
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58531344
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 121b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 121b0h]
        ; Exact mapped bytes E8 A5 A4 1B 00: call 0x586eb810
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121b0h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 121b0h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 19: jmp 0x585313a0
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 12148h], 14h
        ; Exact mapped bytes 75 0D: jne 0x585313a0
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12148h], 15h
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12148h], 5
        ; Exact mapped bytes 76 23: jbe 0x585313cf
        __asm _emit 0x76
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 17: je 0x585313cf
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 92 58 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x5853154c
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58531477
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 800h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F 83 FF FF: call 0x58529770
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C 06 96 58: mov eax, dword ptr [0x5896063c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 CE 19 00: call 0x586ce2d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xce
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x5853154c
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 0eh
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x5853154c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585314a7
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A AF 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x585314e8
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 18: je 0x585314d7
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x585314de
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585314fd
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 AF 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x5853153e
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 98 75 94 58: mov edx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 18: je 0x5853152d
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58531534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes C7 05 98 75 94 58 00 00 00 00: mov dword ptr [0x58947598], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 A6 0A 00 00: jmp 0x58531ff2
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 0A 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 0F 85 33 04 00 00: jne 0x5853199f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C 2C 00 00: call 0x585341d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12148h], 9
        ; Exact mapped bytes 0F 85 92 01 00 00: jne 0x58531717
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12148h], 10h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 40000000h
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x585315d7
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 0D 38 73 94 58: mov ecx, dword ptr [0x58947338]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [eax + 88h], ecx
        ; Exact mapped bytes EB 2E: jmp 0x58531605
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 54 20 96 58 00: cmp dword ptr [0x58962054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x585315f8
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        ; Exact mapped bytes 8B 0D 54 20 96 58: mov ecx, dword ptr [0x58962054]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 34 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x34
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58531605
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 6F: je 0x58531680
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 74 50: je 0x58531672
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 64 20 96 58: mov ecx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        ; Exact mapped bytes A3 F8 1F 96 58: mov dword ptr [0x58961ff8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 48 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        push 20000h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 BA 1F 00: call 0x5872d130
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xba
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121b8h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 58 34 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 50 48 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 121b8h]
        mov dword ptr [ebp - 90h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 E4 47 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 47 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 EC 90 94 58: mov dword ptr [0x589490ec], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E9 83 02 00 00: jmp 0x5853199a
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12148h], 11h
        ; Exact mapped bytes 0F 85 73 02 00 00: jne 0x5853199a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 68 F5 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes E8 85 48 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 24h
        cmp edx, 100h
        ; Exact mapped bytes 0F 8D 70 01 00 00: jge 0x585318cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0b4h]
        ; Exact mapped bytes E8 57 48 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 6
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AA 3D 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes E8 1D 48 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 6
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 70 3D 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585317e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 45: jge 0x5853182e
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        ; Exact mapped bytes E8 C2 47 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 6
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 15 3D 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AC: jmp 0x585317da
        __asm _emit 0xeb
        __asm _emit 0xac
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 121c0h]
        ; Exact mapped bytes E8 73 47 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 6
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 C6 3C 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 121c0h]
        mov dword ptr [ebp - 0b8h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 121c0h]
        ; Exact mapped bytes E8 27 47 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 6
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 7A 3C 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x5853199a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 0bch], edx
        push 100h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 55 3C 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0c0h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 36 3C 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5853191d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 26: jge 0x58531949
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 0c4h], edx
        push 100h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 FA 3B 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CB: jmp 0x58531914
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 0c8h], eax
        push 100h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 CF 3B 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 121c0h]
        mov dword ptr [ebp - 0cch], eax
        push 100h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 A7 3B 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA 05 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 75 45: jne 0x585319fb
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 75 34: jne 0x585319f6
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes E9 5E 05 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 55 01 00 00: jne 0x58531b6b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1214ch], 16h
        ; Exact mapped bytes 0F 85 40 01 00 00: jne 0x58531b66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 121b8h]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 121b8h]
        ; Exact mapped bytes E8 6D A6 F5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        sub eax, 2
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 D2 3C 28 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 75 09: jne 0x58531a74
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D 10 00 00: call 0x58532ad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 7B FF FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax], 28h
        ; Exact mapped bytes 7D 12: jge 0x58531a93
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 7B FF FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 10: jmp 0x58531aa3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 7B FF FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 7
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 0ffh
        ; Exact mapped bytes 0F 8E A3 00 00 00: jle 0x58531b59
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 600h
        ; Exact mapped bytes E8 44 F5 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf5
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 19: je 0x58531aec
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 69 D6 F8 FF: call 0x584bf150
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58531af3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes 89 0D 08 06 96 58: mov dword ptr [0x58960608], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 08 06 96 58: mov edx, dword ptr [0x58960608]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F D2 F7 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        push 2af8h
        ; Exact mapped bytes 8B 0D 08 06 96 58: mov ecx, dword ptr [0x58960608]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 43 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 08 06 96 58: mov ecx, dword ptr [0x58960608]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 F2 F8 FF: call 0x584c0de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        push 588a6f24h
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0D: jmp 0x58531b66
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B 3A 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3a
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE 03 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 85 D3 03 00 00: jne 0x58531f59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12168h], 64h
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x58531c3c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a6f30h
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push -1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1215ch]
        push ecx
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1215ch]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 BA FF FF: call 0x5852d5d0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12148h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E B5 FF FF: call 0x5852d160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58531c05
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 124h]
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 7D 23: jge 0x58531c37
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 0dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 AC 42 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C5: jmp 0x58531bfc
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes E9 1D 03 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 128h], 64h
        ; Exact mapped bytes 73 1A: jae 0x58531c62
        __asm _emit 0x73
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 128h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 128h], ecx
        ; Exact mapped bytes E9 F7 02 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 124h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 130h], ecx
        ; Exact mapped bytes 0F 8D DB 02 00 00: jge 0x58531f59
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0e8h]
        ; Exact mapped bytes E8 3A 43 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 27: jne 0x58531cc2
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0e8h]
        mov dword ptr [ebp - 0e0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 1F 42 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 130h], 0
        ; Exact mapped bytes 0F 8C BF 00 00 00: jl 0x58531d91
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 0e4h]
        ; Exact mapped bytes E8 E6 42 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 0ah
        test edx, edx
        ; Exact mapped bytes 7E 51: jle 0x58531d44
        __asm _emit 0x7e
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        ; Exact mapped bytes E8 AC 42 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        sub ecx, 0ah
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 FF 37 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4D: jmp 0x58531d91
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 D6 37 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 50 41 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12ch], 0
        ; Exact mapped bytes 0F 86 F7 00 00 00: jbe 0x58531e98
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 130h], -1
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x58531e98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e8h]
        ; Exact mapped bytes E8 07 42 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 2
        cmp ecx, 100h
        ; Exact mapped bytes 7D 65: jge 0x58531e3b
        __asm _emit 0x7d
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e8h]
        mov dword ptr [ebp - 0f8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0e8h]
        ; Exact mapped bytes E8 C9 41 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 2
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 1C 37 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], eax
        ; Exact mapped bytes EB 58: jmp 0x58531e93
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e8h]
        mov dword ptr [ebp - 0fch], edx
        push 100h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 DC 36 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 130h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 128h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], 0
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x58531f59
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 0e8h]
        ; Exact mapped bytes E8 20 41 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 0ah
        cmp edx, 100h
        ; Exact mapped bytes 7D 51: jge 0x58531f0e
        __asm _emit 0x7d
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0e8h]
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e8h]
        ; Exact mapped bytes E8 E2 40 F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 0ah
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 35 36 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4B: jmp 0x58531f59
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0e8h]
        mov dword ptr [ebp - 108h], eax
        push 100h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 09 36 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 130h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 128h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F EF FF FF: call 0x58530ea0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58531f83
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58531f83
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 60: je 0x58531ff2
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58531fa6
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB E6: jmp 0x58531f8c
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 62 36 F6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58531fca
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58531ff2
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58531ff0
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E 36 F6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 9A: jmp 0x58531f8c
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
    }
}
