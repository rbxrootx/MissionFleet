// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0370 .. +0x51D bytes.
extern "C" __declspec(naked) void FUN_100f0370_100F0370() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 148h
        mov eax, 29eh
        push ebx
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], eax
        push ebp
        mov eax, 2bch
        push esi
        push edi
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 40h], eax
        mov edi, ecx
        mov eax, 26ch
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 48h], eax
        mov dword ptr [esp + 4ch], eax
        mov dword ptr [esp + 50h], eax
        mov eax, dword ptr [edi + 0e74h]
        mov dword ptr [esp + 30h], 0
        mov dword ptr [esp + 54h], 0
        mov cl, byte ptr [eax + 2]
        mov eax, dword ptr [edi + 0ffch]
        and ecx, 1fh
        test eax, eax
        mov ebx, dword ptr [esp + ecx*4 + 30h]
        mov ecx, dword ptr [edi + 1000h]
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 8C 7F 04 00 00: jl 0x100f086c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 79 04 00 00: jge 0x100f086e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0ch]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 84 6E 04 00 00: je 0x100f0878
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        cmp dword ptr [edx + 84h], 40000000h
        ; Exact mapped bytes 0F 85 3D 04 00 00: jne 0x100f085b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx + 330h]
        mov cl, byte ptr [edi + 330h]
        cmp al, cl
        ; Exact mapped bytes 0F 84 29 04 00 00: je 0x100f085b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + 0f7ch]
        mov dword ptr [esp + 24h], 0
        mov dword ptr [esp + 20h], ecx
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 F3 03 00 00: je 0x100f0842
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 0F 84 E9 03 00 00: je 0x100f0842
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 2ch], ecx
        mov eax, dword ptr [esi + 454h]
        test eax, eax
        ; Exact mapped bytes 0F 85 BD 03 00 00: jne 0x100f082e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 44ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 03 00 00: jne 0x100f082e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [esi + 4]
        sub ecx, edx
        mov edx, dword ptr [esi + 4a0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi + 8]
        sub eax, edx
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 10h], eax
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
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes E8 C8 C2 07 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD C2 07 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov ebp, eax
        mov eax, 10624dd3h
        imul ebp, ebp
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        imul ecx, edx
        add ecx, ebp
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 85 C2 07 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 38: fild dword ptr [esp + 0x38]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        add esp, 10h
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 5C 24 10: fcomp qword ptr [esp + 0x10]
        __asm _emit 0xdc
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 0F 84 ED 02 00 00: je 0x100f082e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov eax, edx
        imul eax, edx
        lea ecx, [ebp + eax*4]
        mov dword ptr [esp + 10h], ecx
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
        ; Exact mapped bytes E8 30 C2 07 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 88 5C 17 10: fmul qword ptr [0x10175c88]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes DC 35 70 53 17 10: fdiv qword ptr [0x10175370]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 16 C2 07 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, ebx
        sub ecx, eax
        lea eax, [ecx + ecx*4]
        mov ecx, dword ptr [esi + 334h]
        lea eax, [eax + eax*8]
        shl eax, 2
        cdq
        idiv ebx
        mov ebp, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        mov eax, 15eh
        shr ecx, 1fh
        add edx, ecx
        sub eax, edx
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, 5d9f7391h
        lea ecx, [ecx + ecx*4]
        shl ecx, 1
        imul ecx
        sar edx, 7
        mov eax, edx
        xor ecx, ecx
        shr eax, 1fh
        lea eax, [edx + eax + 1eh]
        test eax, eax
        setl cl
        dec ecx
        xor edx, edx
        and ecx, eax
        mov eax, 51eb851fh
        test ebp, ebp
        setl dl
        dec edx
        and edx, ebp
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, esi
        shr eax, 1fh
        add edx, eax
        mov ebp, edx
        ; Exact mapped bytes E8 FE A2 F1 FF: call 0x1000a910
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 1047ch]
        add eax, edx
        mov edx, dword ptr [ecx + 10474h]
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 64 45 1C 10: mov ecx, dword ptr [0x101c4564]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, 64h
        cdq
        idiv ecx
        cmp ebp, edx
        ; Exact mapped bytes 0F 8E 9B 01 00 00: jle 0x100f07e4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0e74h]
        mov eax, 55555556h
        ; Exact mapped bytes 66 8B 4A 0A: mov cx, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x0a
        and ecx, 3ffh
        imul ecx
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx, ebp
        imul edx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes 75 05: jne 0x100f0682
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, 1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 D6 9B F1 FF: call 0x1000a260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9b
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x100f07e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [eax + 368h], 80h
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x100f07e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x100f06bd
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 21710h]
        mov ebp, 0ah
        test ecx, ecx
        ; Exact mapped bytes 7F 05: jg 0x100f06c2
        __asm _emit 0x7f
        __asm _emit 0x05
        mov ebp, 1
        mov ecx, dword ptr [esi + 298h]
        xor edx, edx
        lea eax, [ecx*8]
        sub eax, ecx
        lea eax, [eax + eax*4]
        shl eax, 1
        div ebp
        mov edx, dword ptr [edi + 0eb0h]
        xor edx, 0aaaaaaaah
        add eax, edx
        xor edx, edx
        xor eax, 0aaaaaaaah
        mov dword ptr [edi + 0eb0h], eax
        mov ecx, dword ptr [esi + 298h]
        mov eax, ecx
        shl eax, 4
        sub eax, ecx
        shl eax, 3
        div ebp
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [edi + 0ed0h]
        sub edx, eax
        mov dword ptr [edi + 0ed0h], edx
        mov eax, dword ptr [esi + 298h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 74h]
        lea eax, [eax + eax*4]
        ; Exact mapped bytes 66 8B 89 94 05 01 00: mov cx, word ptr [ecx + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        shl eax, 1
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x100f0744
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 06: jne 0x100f074a
        __asm _emit 0x75
        __asm _emit 0x06
        add dword ptr [edx + 0ee8h], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], edi
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x100f07e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0eb0h]
        mov eax, 51eb851fh
        xor ecx, 0aaaaaaaah
        mul ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 B5 FA F7 FF: call 0x10070230
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfa
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 2cch]
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x100f07e4
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [esi + 298h]
        xor edx, edx
        shr eax, 1
        div ebp
        push eax
        lea eax, [esp + 5ch]
        push 101ac63ch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ecx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 68 89 F3 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea edx, [esp + 5ch]
        push 1
        mov ecx, dword ptr [eax + 2cch]
        push edx
        ; Exact mapped bytes E8 4C 89 F3 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x89
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100f0878
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov esi, dword ptr [esi + 4a0h]
        dec eax
        mov dword ptr [esp + 18h], eax
        mov eax, 57619f1h
        imul esi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        mov edx, dword ptr [edi + 4]
        push ecx
        mov ecx, dword ptr [edi + 8]
        push ecx
        push edx
        ; Exact mapped bytes E8 22 17 F3 FF: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xff
        lea eax, [eax + eax*4]
        add esp, 10h
        shl eax, 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 42 EB FF FF: call 0x100ef370
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 1F FC FF FF: jne 0x100f0459
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 24h]
        add ecx, 10h
        inc eax
        mov dword ptr [esp + 20h], ecx
        cmp eax, 8
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C E9 FB FF FF: jl 0x100f0444
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edx + 78h]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 A0 FB FF FF: jne 0x100f040a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x100f0878
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 75 08: jne 0x100f0878
        __asm _emit 0x75
        __asm _emit 0x08
        neg ecx
        mov dword ptr [edi + 0ffch], ecx
        mov eax, dword ptr [edi + 0ffch]
        inc eax
        mov dword ptr [edi + 0ffch], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
