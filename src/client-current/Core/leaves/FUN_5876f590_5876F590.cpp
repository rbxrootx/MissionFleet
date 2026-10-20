// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876F590 .. +0xDE1 bytes.
extern "C" __declspec(naked) void FUN_5876f590_5876F590() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888ffeah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 444h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 328h], ecx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        and cl, 1fh
        movzx edx, cl
        mov dword ptr [ebp - 340h], edx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + 1]
        mov byte ptr [ebp - 329h], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 2]
        mov byte ptr [ebp - 321h], al
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + 3]
        mov byte ptr [ebp - 335h], dl
        mov eax, dword ptr [ebp - 328h]
        add eax, 34ch
        mov dword ptr [ebp - 400h], eax
        mov ecx, dword ptr [ebp - 340h]
        push ecx
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 46 DA D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 B0 FC FF FF: mov word ptr [ebp - 0x350], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 335h]
        mov dword ptr [ebp - 444h], edx
        movzx eax, word ptr [ebp - 350h]
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 17 0D 00 00: jne 0x58770355
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        shr dl, 5
        and dl, 7
        movzx eax, dl
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 07 00 00: jne 0x5876fdfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        mov dword ptr [ebp - 434h], ecx
        push 1
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 96 D9 D1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd9
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 35ch], eax
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x5876f7a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea ecx, [ebp - 220h]
        push ecx
        ; Exact mapped bytes E8 6A D7 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 328h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 66 B0 DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        mov eax, dword ptr [ebp - 328h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 5F 9F D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 5E CD D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xcd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 53 D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x53
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 62 D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x62
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 5F D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        mov ecx, dword ptr [ebp - 35ch]
        push ecx
        movzx edx, byte ptr [ebp - 321h]
        push edx
        movzx eax, byte ptr [ebp - 329h]
        push eax
        mov ecx, dword ptr [ebp - 438h]
        push ecx
        mov edx, dword ptr [ebp - 43ch]
        push edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 390h]
        push ecx
        mov edx, dword ptr [ebp - 394h]
        push edx
        push 588b5130h
        lea eax, [ebp - 220h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 28h
        lea ecx, [ebp - 220h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 398h], eax
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 39ch], edx
        push 0
        lea eax, [ebp - 448h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        lea edx, [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 39ch]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        movzx esi, byte ptr [ebp - 329h]
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        ; Exact mapped bytes E8 21 52 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x52
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx edx, cx
        cmp esi, edx
        ; Exact mapped bytes 7E 61: jle 0x5876f830
        __asm _emit 0x7e
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 71 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 328h]
        ; Exact mapped bytes 75 4E: jne 0x5876f830
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        ; Exact mapped bytes E8 ED 51 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x51
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8D AE FC FF FF: mov word ptr [ebp - 0x352], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 352h]
        push edx
        ; Exact mapped bytes 66 0F B6 85 D7 FC FF FF: movzx ax, byte ptr [ebp - 0x329]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        push ecx
        push 5
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C D1 E0 FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd1
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 CC 0B 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 380h], 0
        mov dword ptr [ebp - 348h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876f855
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 348h]
        add edx, 1
        mov dword ptr [ebp - 348h], edx
        movzx eax, byte ptr [ebp - 329h]
        cmp dword ptr [ebp - 348h], eax
        ; Exact mapped bytes 0F 8D 4D 05 00 00: jge 0x5876fdb5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 55ch
        ; Exact mapped bytes E8 92 17 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 364h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 364h], 0
        ; Exact mapped bytes 74 70: je 0x5876f8fb
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 328h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 3a0h], edx
        mov eax, dword ptr [ebp - 328h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3a4h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 71 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        push 2710h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 3a0h]
        push edx
        mov eax, dword ptr [ebp - 3a4h]
        push eax
        mov ecx, dword ptr [ebp - 3a8h]
        push ecx
        mov edx, dword ptr [ebp - 348h]
        push edx
        mov eax, dword ptr [ebp - 328h]
        push eax
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 2D 21 D2 FF: call 0x58491a20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5876f905
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 368h], 0
        mov ecx, dword ptr [ebp - 368h]
        mov dword ptr [ebp - 3ach], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3ach]
        mov dword ptr [ebp - 334h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 61 D2 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x61
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x5876f94a
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 78 D6 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 3A: jne 0x5876f984
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 328h]
        cmp dword ptr [ecx + 6218h], 0
        ; Exact mapped bytes 74 2B: je 0x5876f984
        __asm _emit 0x74
        __asm _emit 0x2b
        movzx edx, byte ptr [ebp - 321h]
        mov eax, dword ptr [ebp - 328h]
        mov ecx, dword ptr [eax + edx*4 + 6180h]
        movzx edx, byte ptr [ecx + 2]
        cmp edx, 0eh
        ; Exact mapped bytes 75 0E: jne 0x5876f984
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 2D ED FF FF: call 0x5876e6b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx eax, byte ptr [ebp - 321h]
        mov ecx, dword ptr [ebp - 328h]
        mov edx, dword ptr [ecx + eax*4 + 6180h]
        mov dword ptr [ebp - 3b4h], edx
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        ; Exact mapped bytes E8 31 50 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x50
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 75 0C: jne 0x5876f9cb
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 36ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x5876f9d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 36ch], 0
        mov edx, dword ptr [ebp - 328h]
        add edx, 34ch
        mov dword ptr [ebp - 3b0h], edx
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 47 D6 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 3b8h], eax
        mov ecx, dword ptr [ebp - 328h]
        mov eax, dword ptr [ecx + 5ebch]
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 3bch], edx
        mov edx, dword ptr [ebp - 3b4h]
        push edx
        mov eax, dword ptr [ebp - 36ch]
        push eax
        movzx ecx, byte ptr [ebp - 321h]
        push ecx
        mov edx, dword ptr [ebp - 3b8h]
        push edx
        mov eax, dword ptr [ebp - 3bch]
        push eax
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 73 60 D2 FF: call 0x58495ac0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x60
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        mov dword ptr [ebp - 3c0h], ecx
        push 1
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 9C 02 D4 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5876fb3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 35ch], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x5876fb3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        ; Exact mapped bytes E8 46 4F D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4f
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 0C: jne 0x5876fab6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 370h], 1
        ; Exact mapped bytes EB 0A: jmp 0x5876fac0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 370h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 6E D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6e
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 328h]
        ; Exact mapped bytes 75 0C: jne 0x5876fadf
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 374h], 1
        ; Exact mapped bytes EB 0A: jmp 0x5876fae9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 374h], 0
        mov edx, dword ptr [ebp - 328h]
        add edx, 34ch
        mov dword ptr [ebp - 3c4h], edx
        push 1
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 01 02 D4 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3c8h], eax
        mov ecx, dword ptr [ebp - 370h]
        push ecx
        mov edx, dword ptr [ebp - 374h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 3c8h]
        push eax
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 59 D3 D2 FF: call 0x5849ce90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 48: jmp 0x5876fb82
        __asm _emit 0xeb
        __asm _emit 0x48
        push 4
        ; Exact mapped bytes E8 C3 14 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3cch], eax
        mov ecx, dword ptr [ebp - 3cch]
        mov dword ptr [ebp - 378h], ecx
        push 4
        push 0
        mov edx, dword ptr [ebp - 378h]
        push edx
        ; Exact mapped bytes E8 AA D2 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 378h]
        push eax
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 0F D3 D2 FF: call 0x5849ce90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 6E D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6e
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 328h]
        ; Exact mapped bytes 0F 85 E0 01 00 00: jne 0x5876fd79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 380h], 0
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x5876fcfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 334h]
        push ecx
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 48 14 FF FF: call 0x58761000
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 A7 5D D2 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, word ptr [eax + 98h]
        mov eax, dword ptr [ebp - 328h]
        movzx ecx, byte ptr [eax + edx + 12bfh]
        cmp dword ptr [ebp - 37ch], ecx
        ; Exact mapped bytes 0F 8C E3 00 00 00: jl 0x5876fccd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 6D 5D D2 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, word ptr [eax + 98h]
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 34ch]
        sub ecx, 1
        mov dword ptr [ebp - 34ch], ecx
        cmp dword ptr [ebp - 34ch], 3
        ; Exact mapped bytes 77 5B: ja 0x5876fc83
        __asm _emit 0x77
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes FF 24 95 74 03 77 58: jmp dword ptr [edx*4 + 0x58770374]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0x58
        push 588b5184h
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 3A: jmp 0x5876fc83
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 588b518ch
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 26: jmp 0x5876fc83
        __asm _emit 0xeb
        __asm _emit 0x26
        push 588b5194h
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 12: jmp 0x5876fc83
        __asm _emit 0xeb
        __asm _emit 0x12
        push 588b51a4h
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        movzx ecx, byte ptr [ebp - 329h]
        mov dword ptr [ebp - 358h], ecx
        mov edx, dword ptr [ebp - 358h]
        shl edx, 10h
        or edx, dword ptr [ebp - 37ch]
        mov dword ptr [ebp - 358h], edx
        push 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        push ecx
        push 6
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 CC E0 FF: call 0x5857c970
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 C7 0B 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x5876fcf2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 328h]
        add edx, 12b4h
        mov dword ptr [ebp - 3d0h], edx
        lea eax, [ebp - 334h]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 2F 85 D1 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 380h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 6C D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 C7 D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc7
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 4C D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4c
        __asm _emit 0xd1
        __asm _emit 0xff
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
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 2B: jne 0x5876fd50
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 5C D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        push 1
        push 0
        movzx eax, byte ptr [ebp - 321h]
        push eax
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 F3 1A F2 FF: call 0x58691840
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5876fd79
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 5C D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 3d8h], eax
        push 1
        push 0
        movzx ecx, byte ptr [ebp - 321h]
        push ecx
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 68 59 F1 FF: call 0x586856e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        movzx edx, byte ptr [ebp - 321h]
        shl edx, 4
        mov eax, dword ptr [ebp - 328h]
        lea ecx, [eax + edx + 11f4h]
        mov dword ptr [ebp - 3dch], ecx
        mov edx, dword ptr [ebp - 348h]
        push edx
        mov eax, dword ptr [ebp - 334h]
        push eax
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 71 02 E5 FF: call 0x585c0020
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 91 FA FF FF: jmp 0x5876f846
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 34ch
        mov dword ptr [ebp - 3e0h], ecx
        push 0
        mov edx, dword ptr [ebp - 35ch]
        xor edx, 55h
        push edx
        push 1
        mov eax, dword ptr [ebp - 340h]
        push eax
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 29 47 FE FF: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 328h]
        mov dword ptr [ecx + 1274h], 0
        ; Exact mapped bytes E9 59 05 00 00: jmp 0x58770355
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        shr al, 5
        and al, 7
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A2 02 00 00: jne 0x587700b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x5876ff24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 320h]
        push edx
        ; Exact mapped bytes E8 DE CF 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xcf
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 328h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 DA A8 DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 3e4h], eax
        mov ecx, dword ptr [ebp - 328h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 D3 97 D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 D2 C5 D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB 4B D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4b
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 3ech], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 5B D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 57 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x57
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 3f4h], eax
        movzx edx, byte ptr [ebp - 321h]
        push edx
        mov eax, dword ptr [ebp - 3e4h]
        push eax
        mov ecx, dword ptr [ebp - 3e8h]
        push ecx
        mov edx, dword ptr [ebp - 3ech]
        push edx
        mov eax, dword ptr [ebp - 3f0h]
        push eax
        mov ecx, dword ptr [ebp - 3f4h]
        push ecx
        push 588b51b0h
        lea edx, [ebp - 320h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea eax, [ebp - 320h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 3f8h], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3fch], ecx
        push 0
        lea edx, [ebp - 44ch]
        push edx
        mov eax, dword ptr [ebp - 3f8h]
        push eax
        lea ecx, [ebp - 320h]
        push ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 330h], 0
        movzx eax, byte ptr [ebp - 321h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 328h]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 76 6A D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 11: jmp 0x5876ff63
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 53 C1 D1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc1
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        cmp dword ptr [ebp - 330h], 0
        ; Exact mapped bytes 74 39: je 0x5876ffa5
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 69 BF D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbf
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 5B D2 FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5876ffa3
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 53 BF D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbf
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        push 0
        push 5
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 9E D2 D2 FF: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd2
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AD: jmp 0x5876ff52
        __asm _emit 0xeb
        __asm _emit 0xad
        mov dword ptr [ebp - 344h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876ffc0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 344h]
        add edx, 1
        mov dword ptr [ebp - 344h], edx
        cmp dword ptr [ebp - 344h], 8
        ; Exact mapped bytes 0F 83 E2 00 00 00: jae 0x587700af
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 321h]
        cmp dword ptr [ebp - 344h], eax
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x587700aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 32ah], 1
        mov dword ptr [ebp - 360h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58770002
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 360h]
        add ecx, 1
        mov dword ptr [ebp - 360h], ecx
        mov edx, dword ptr [ebp - 360h]
        cmp edx, dword ptr [ebp - 344h]
        ; Exact mapped bytes 73 11: jae 0x58770021
        __asm _emit 0x73
        __asm _emit 0x11
        movzx eax, byte ptr [ebp - 32ah]
        shl eax, 1
        mov byte ptr [ebp - 32ah], al
        ; Exact mapped bytes EB D2: jmp 0x5876fff3
        __asm _emit 0xeb
        __asm _emit 0xd2
        movzx ecx, byte ptr [ebp - 329h]
        movzx edx, byte ptr [ebp - 32ah]
        and ecx, edx
        ; Exact mapped bytes 74 77: je 0x587700aa
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 344h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 328h]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 72 69 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x69
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 11: jmp 0x58770067
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 4F C0 D1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        cmp dword ptr [ebp - 330h], 0
        ; Exact mapped bytes 74 3A: je 0x587700aa
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 65 BE D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE 59 D2 FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x59
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x587700a8
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 4E BE D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 404h], eax
        push 0
        push 5
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 99 D1 D2 FF: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AC: jmp 0x58770056
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x5876ffb1
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x58770355
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        shr al, 5
        and al, 7
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 8B 02 00 00: jne 0x58770355
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x587701dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 26 CD 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 328h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 22 A6 DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 408h], eax
        mov ecx, dword ptr [ebp - 328h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 1B 95 D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x95
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 1A C3 D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 49 D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x49
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 410h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 58 D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x58
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 55 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        movzx edx, byte ptr [ebp - 321h]
        push edx
        mov eax, dword ptr [ebp - 408h]
        push eax
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        mov edx, dword ptr [ebp - 410h]
        push edx
        mov eax, dword ptr [ebp - 414h]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        push ecx
        push 588b51f0h
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 41ch], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 420h], ecx
        push 0
        lea edx, [ebp - 450h]
        push edx
        mov eax, dword ptr [ebp - 41ch]
        push eax
        lea ecx, [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 420h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 33ch], 0
        movzx eax, byte ptr [ebp - 321h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 328h]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 BE 67 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes EB 11: jmp 0x5877021b
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 9B BE D1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        cmp dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x58770355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 AD BC D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 58 D2 FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x58770350
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 336h], 61h
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 8C BC D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        lea edx, [ebp - 336h]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 D2 CF D2 FF: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 56 D2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x58770350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 53 BC D1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 55 D2 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 67 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x67
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x58770350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 29h
        push 24h
        push 6
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 1A 00 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58770350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 27h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 47 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        mov eax, dword ptr [ebp - 384h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x58770350
        __asm _emit 0x75
        __asm _emit 0x64
        push 27h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 47 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 42ch], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 440h], ecx
        mov edx, dword ptr [ebp - 440h]
        push edx
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 A3 BA 04 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        push 27h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 47 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 430h], edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes FF 95 D0 FB FF FF: call dword ptr [ebp - 0x430]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 FE FF FF: jmp 0x5877020a
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E5 0C 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
