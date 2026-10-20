// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10008E50 .. +0xA00 bytes.
extern "C" __declspec(naked) void FUN_10008e50_10008E50() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016cfbah
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 120h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi + 4b8h], 0ah
        ; Exact mapped bytes 0F 84 B7 09 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 46ch]
        mov edi, dword ptr [esp + 140h]
        xor ebp, ebp
        mov ebx, 1
        cmp eax, ebp
        ; Exact mapped bytes 74 21: je 0x10008eb7
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 FF 16: cmp di, 0x16
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x16
        ; Exact mapped bytes 74 1B: je 0x10008eb7
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 480h]
        mov dword ptr [esi + 46ch], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x10008eb7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 480h], ebp
        cmp dword ptr [esi + 470h], ebp
        ; Exact mapped bytes 74 1B: je 0x10008eda
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 484h]
        mov dword ptr [esi + 470h], ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x10008eda
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 484h], ebp
        mov eax, edi
        mov dword ptr [esi + 474h], ebp
        and eax, 0ffffh
        cmp eax, 17h
        ; Exact mapped bytes 0F 87 45 09 00 00: ja 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1000987ch]
        ; Exact mapped bytes FF 24 8D 50 98 00 10: jmp dword ptr [ecx*4 + 0x10009850]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 144h]
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 27 09 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D D4 56 1C 10: cmp dword ptr [0x101c56d4], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 79: je 0x10008f8f
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [esi + 334h]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 4a0h]
        push edx
        mov edx, dword ptr [esi + 49ch]
        push edx
        mov edx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 10474h]
        mov eax, dword ptr [eax + 1047ch]
        add edx, 37ch
        push edx
        mov edx, dword ptr [esi + 78h]
        push edx
        mov edx, dword ptr [esi + 7ch]
        push edx
        push ecx
        push eax
        lea eax, [esp + 58h]
        push 1017f18ch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 30h
        lea ecx, [esp + 10h]
        lea edx, [esp + 30h]
        push ebp
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 3ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4b8h]
        mov edi, 4
        or edx, 0ffffffffh
        cmp eax, edi
        mov ecx, 2
        ; Exact mapped bytes 75 6A: jne 0x10009010
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes 66 8B 86 C0 02 00 00: mov ax, word ptr [esi + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x10008fd1
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 4c8h]
        mov dword ptr [esi + 310h], ecx
        cmp eax, ebp
        ; Exact mapped bytes 74 57: je 0x1000901a
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [eax + 5ce0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x1000901a
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 3E: jne 0x10009014
        __asm _emit 0x75
        __asm _emit 0x3e
        cmp dword ptr [esi + 310h], ebp
        ; Exact mapped bytes 7E 08: jle 0x10008fe6
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esi + 310h], ecx
        ; Exact mapped bytes EB 06: jmp 0x10008fec
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 4b8h], ebp
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0C: je 0x10009002
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 5ce0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 4cch], edx
        ; Exact mapped bytes EB 0A: jmp 0x1000901a
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, edx
        ; Exact mapped bytes 74 06: je 0x1000901a
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 4b8h], ebp
        mov eax, dword ptr [esi + 330h]
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 318h], eax
        mov eax, dword ptr [esi + 468h]
        mov dword ptr [esi + 4cch], edx
        mov dword ptr [esi + 4bch], ebp
        mov dword ptr [esi + 450h], ebp
        mov dword ptr [esi + 460h], ebp
        ; Exact mapped bytes 66 8B 13: mov dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x13
        ; Exact mapped bytes 66 8B 5B 02: mov bx, word ptr [ebx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0x02
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x10009144
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4]
        ; Exact mapped bytes 0F BF CB: movsx ecx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcb
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        mov edx, dword ptr [esi + 8]
        add eax, edi
        add ecx, edx
        mov dword ptr [esi + 490h], eax
        mov dword ptr [esi + 494h], ecx
        sub ecx, edx
        mov edx, ecx
        sub eax, edi
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 0C 37 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x37
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 FE 36 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x36
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [esi + 498h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 74h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 73 07 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 D7 36 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x36
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, ebp
        mov dword ptr [esp + 138h], ebp
        ; Exact mapped bytes 74 4B: je 0x10009126
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 10: jle 0x100090fa
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 190h]
        cmp edx, ebp
        ; Exact mapped bytes 74 06: je 0x100090fa
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebp, [edx + 880h]
        mov ecx, dword ptr [esi + 494h]
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        push ecx
        mov ecx, dword ptr [esi + 490h]
        mov edx, dword ptr [edx + 104e0h]
        push ecx
        push ebp
        push edx
        push 2
        mov ecx, eax
        ; Exact mapped bytes E8 0C 9D 01 00: call 0x10022e30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10009128
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 13ch], 0ffffffffh
        ; Exact mapped bytes E8 21 60 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 06 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 74h]
        shl eax, 4
        ; Exact mapped bytes 0F BF FA: movsx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfa
        mov eax, dword ptr [eax + ecx + 0f7ch]
        ; Exact mapped bytes 0F BF DB: movsx ebx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xdb
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 4]
        add edi, ecx
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        add ebx, ecx
        push ebx
        mov edx, ecx
        push edi
        push edx
        push eax
        ; Exact mapped bytes E8 CB 8D 01 00: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        lea eax, [eax + eax*4]
        add esp, 10h
        lea edx, [esp + 28h]
        shl eax, 1
        push eax
        push ecx
        push ebx
        push edi
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 2F 2D 00 00: call 0x1000bec0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 4]
        mov dword ptr [esi + 490h], ecx
        mov eax, dword ptr [eax + 4]
        sub ecx, edi
        mov dword ptr [esi + 494h], eax
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 D9 35 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 CB 35 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x35
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 498h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 41 06 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 A5 35 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x35
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, ebp
        mov dword ptr [esp + 138h], 1
        ; Exact mapped bytes 0F 84 11 FF FF FF: je 0x10009126
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 10: jle 0x10009234
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 190h]
        cmp edx, ebp
        ; Exact mapped bytes 74 06: je 0x10009234
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebp, [edx + 880h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1388h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 494h]
        push ecx
        mov ecx, dword ptr [esi + 490h]
        push ecx
        push ebp
        push edx
        push 2
        mov ecx, eax
        ; Exact mapped bytes E8 D2 9B 01 00: call 0x10022e30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 FE FF FF: jmp 0x10009128
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 2D D4 56 1C 10: cmp dword ptr [0x101c56d4], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 79: je 0x100092e4
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [esi + 334h]
        mov eax, dword ptr [esi + 4a0h]
        mov ecx, dword ptr [esi + 49ch]
        push edx
        mov edx, dword ptr [esi + 8]
        push eax
        mov eax, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push edx
        mov edx, dword ptr [esi + 78h]
        add ecx, 37ch
        push eax
        mov eax, dword ptr [esi + 7ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 58h]
        push 1017f130h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 30h
        lea ecx, [esp + 10h]
        lea edx, [esp + 30h]
        push ebp
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 3ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4b8h]
        cmp edx, -1
        ; Exact mapped bytes 0F 84 42 05 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 C0 02 00 00: mov ax, word ptr [esi + 0x2c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 32 05 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 28 05 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, 4
        ; Exact mapped bytes 74 09: je 0x10009321
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 14 05 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 AE CA 02 00 00: cmp word ptr [esi + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 07 05 00 00: jbe 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 144h]
        mov dword ptr [esi + 4bch], ebp
        cmp ecx, ebp
        mov dword ptr [esi + 450h], ebp
        ; Exact mapped bytes 0F 84 EC 04 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, edi
        ; Exact mapped bytes 74 73: je 0x100093c0
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 334h]
        cmp eax, dword ptr [esi + 318h]
        ; Exact mapped bytes 7C 61: jl 0x100093bc
        __asm _emit 0x7c
        __asm _emit 0x61
        xor eax, eax
        mov dword ptr [esi + 33ch], ebp
        mov dword ptr [esi + 4b8h], edi
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        mov dword ptr [esi + 4cch], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 51 2E 02 00: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 4c8h], eax
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 490h], ecx
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 494h], edx
        ; Exact mapped bytes E8 61 7C 0E 00: call 0x100f1000
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 04 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4c8h]
        mov eax, dword ptr [eax + 5ce0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 79 04 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, edi
        ; Exact mapped bytes 75 21: jne 0x100093e1
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [esi + 310h], ebx
        ; Exact mapped bytes 75 19: jne 0x100093e1
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 4cch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        cmp eax, edx
        ; Exact mapped bytes 0F 85 59 04 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 04 00 00: jmp 0x1000982f
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 460h], ebp
        mov esi, dword ptr [esi + 4c8h]
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 40 04 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 5ce0h]
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 04 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4b8h]
        mov edi, 5
        cmp eax, edi
        ; Exact mapped bytes 0F 84 1C 04 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D D4 56 1C 10: cmp dword ptr [0x101c56d4], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 79: je 0x1000949a
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 334h]
        mov ecx, dword ptr [esi + 4a0h]
        mov edx, dword ptr [esi + 49ch]
        push eax
        mov eax, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push edx
        mov edx, dword ptr [esi + 74h]
        push eax
        mov eax, dword ptr [esi + 78h]
        add edx, 37ch
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [esp + 50h]
        mov edx, dword ptr [eax + 10474h]
        mov eax, dword ptr [eax + 1047ch]
        push edx
        push eax
        push 1017f0d4h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 30h
        lea edx, [esp + 10h]
        lea eax, [esp + 30h]
        push ebp
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 38h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [esi + 4b8h], edi
        mov dword ptr [esi + 310h], ebp
        mov dword ptr [esi + 450h], ebp
        mov eax, dword ptr [eax + 5c44h]
        mov ecx, 0e10h
        add eax, 384h
        mov dword ptr [esp + 20h], 0ffffff38h
        cdq
        idiv ecx
        lea eax, [esp + 20h]
        mov dword ptr [esp + 24h], ebp
        push edx
        lea edx, [esp + 1ch]
        push edx
        push eax
        ; Exact mapped bytes E8 F2 89 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ebx, dword ptr [esp + 24h]
        mov edi, dword ptr [esp + 28h]
        add esp, 0ch
        mov ecx, dword ptr [eax + 4]
        add ecx, ebx
        mov dword ptr [esi + 490h], ecx
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 468h]
        sub edx, edi
        cmp ecx, ebp
        mov dword ptr [esi + 494h], edx
        ; Exact mapped bytes 0F 84 25 03 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 9C 7D 1A 10: cmp dword ptr [0x101a7d9c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 19 03 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 21a34h], ebp
        ; Exact mapped bytes 0F 85 07 03 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 144h], ebp
        ; Exact mapped bytes 75 42: jne 0x10009579
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 37: jne 0x10009579
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 26h
        ; Exact mapped bytes 7E 21: jle 0x10009571
        __asm _emit 0x7e
        __asm _emit 0x21
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 17: je 0x10009571
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [eax + 98h]
        push ebp
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 530h], ebp
        ; Exact mapped bytes E9 C4 02 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        push ebp
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 530h], ebp
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4b8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x10009596
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 9F 02 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        mov ecx, dword ptr [esi + 330h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 8B 02 00 00: jge 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 190h
        mov dword ptr [esi + 33ch], 64h
        mov dword ptr [esi + 318h], eax
        ; Exact mapped bytes E9 71 02 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4b8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100095d6
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 5F 02 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        add eax, 0fffffe70h
        cmp eax, 2710h
        ; Exact mapped bytes 0F 8E 49 02 00 00: jle 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 318h], eax
        mov dword ptr [esi + 33ch], 0ffffff9ch
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        mov ecx, dword ptr [esi + 330h]
        add eax, 190h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 1B 02 00 00: jge 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 318h], eax
        mov dword ptr [esi + 33ch], 0c8h
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        add eax, 0fffffe70h
        cmp eax, 2710h
        ; Exact mapped bytes 0F 8E F0 01 00 00: jle 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 318h], eax
        mov dword ptr [esi + 33ch], 0ffffff38h
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x10009835
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4b8h]
        mov edi, 4
        cmp eax, edi
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 AE CA 02 00 00: cmp word ptr [esi + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 BB 01 00 00: jbe 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 BE C0 02 00 00: cmp word ptr [esi + 0x2c0], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AE 01 00 00: jne 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 144h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x10009835
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 46ch], ebx
        mov dword ptr [esi + 470h], ebp
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        mov dword ptr [esi + 478h], ecx
        mov ecx, dword ptr [esi + 480h]
        ; Exact mapped bytes 0F BF 50 02: movsx edx, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x02
        cmp ecx, ebp
        mov dword ptr [esi + 47ch], edx
        mov dword ptr [esi + 4bch], ebp
        mov dword ptr [esi + 450h], ebp
        mov dword ptr [esi + 33ch], ebp
        mov dword ptr [esi + 4b8h], edi
        mov dword ptr [esi + 310h], ebp
        ; Exact mapped bytes 74 0B: je 0x100096e8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 480h], ebp
        mov ecx, dword ptr [esi + 484h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x100096fd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 484h], ebp
        push 58h
        ; Exact mapped bytes E8 9C 30 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebp
        mov dword ptr [esp + 138h], 2
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x100097a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x10009740
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x10009740
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 900h]
        ; Exact mapped bytes EB 02: jmp 0x10009742
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 47ch]
        mov edx, dword ptr [esi + 478h]
        push 1388h
        mov eax, dword ptr [eax + 104e0h]
        push ebp
        push ebp
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 46 52 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 29: je 0x100097a3
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100097a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 102h
        mov dword ptr [esp + 13ch], 0ffffffffh
        mov dword ptr [esi + 480h], ecx
        ; Exact mapped bytes E8 9C 59 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 6F: jmp 0x10009835
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 4b8h]
        mov edi, 4
        cmp eax, edi
        ; Exact mapped bytes 75 19: jne 0x100097ee
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [esi + 310h], ebx
        ; Exact mapped bytes 75 11: jne 0x100097ee
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 BE C0 02 00 00: cmp word ptr [esi + 0x2c0], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x100097ee
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 46ch], ebp
        ; Exact mapped bytes 75 41: jne 0x1000982f
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 66 83 BE C0 02 00 00 03: cmp word ptr [esi + 0x2c0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 3D: jne 0x10009835
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 334h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 32h
        ; Exact mapped bytes 7D 21: jge 0x10009835
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes 66 39 AE CA 02 00 00: cmp word ptr [esi + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 18: jbe 0x10009835
        __asm _emit 0x76
        __asm _emit 0x18
        mov dword ptr [esi + 4b8h], edi
        mov dword ptr [esi + 310h], ebx
        mov dword ptr [esi + 474h], ebx
        mov dword ptr [esi + 460h], ebx
        mov ecx, dword ptr [esp + 130h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 12ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
