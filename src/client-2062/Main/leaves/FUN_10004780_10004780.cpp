// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004780 .. +0x538 bytes.
extern "C" __declspec(naked) void FUN_10004780_10004780() {
    __asm {
        sub esp, 1ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes E8 E2 EB 03 00: call 0x10043380
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 38h]
        lea eax, [ebx + ebx*2]
        lea ecx, [ebx + eax*4]
        ; Exact mapped bytes 66 8B 44 8E 5C: mov ax, word ptr [esi + ecx*4 + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x8e
        __asm _emit 0x5c
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ebp, [esi + ecx*4]
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x100048ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 84h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x1000489d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 9E 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x1000489d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 84h]
        mov edi, dword ptr [ecx + 218h]
        test edi, edi
        ; Exact mapped bytes 0F 84 C2 04 00 00: je 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 5c44h]
        mov esi, 0e10h
        mov eax, dword ptr [edx*4 + 101ad160h]
        cdq
        idiv esi
        mov eax, dword ptr [edi + 50h]
        mov edi, 0e10h
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*2]
        mov esi, edx
        lea edx, [eax + eax*4]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        imul esi, edx
        imul esi
        mov esi, dword ptr [ecx + 4]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub esi, edx
        mov dword ptr [esp + 24h], esi
        mov edx, dword ptr [ecx + 5c44h]
        mov eax, dword ptr [edx*4 + 101b09a0h]
        cdq
        idiv edi
        mov eax, dword ptr [ecx + 218h]
        mov ecx, dword ptr [ecx + 8]
        mov eax, dword ptr [eax + 50h]
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*2]
        mov edi, edx
        lea edx, [eax + eax*4]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        imul edi, edx
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x10004950
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 30h], 0ffh
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x10004948
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 88h]
        test edi, edi
        ; Exact mapped bytes 0F 84 EB 03 00 00: je 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
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
        mov ecx, dword ptr [ecx + 21a4ch]
        mov eax, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ecx + 70h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 D1 03 00 00: je 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], edi
        ; Exact mapped bytes 74 11: je 0x100048f2
        __asm _emit 0x74
        __asm _emit 0x11
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x100048dd
        __asm _emit 0x75
        __asm _emit 0xf5
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4e8h]
        mov eax, 57619f1h
        mov esi, dword ptr [edx + 4]
        mov dword ptr [esp + 24h], esi
        mov ecx, dword ptr [edi + 2fch]
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 0fa89e60fh
        add esi, edx
        mov dword ptr [esp + 24h], esi
        mov ecx, dword ptr [edi + 4e8h]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [esp + 28h], ecx
        mov edi, dword ptr [edi + 300h]
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add ecx, edx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10004950
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [esp + 28h]
        mov esi, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 30h]
        push ecx
        push esi
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [edx + 4]
        lea edi, [edx + 4]
        push eax
        push ecx
        mov dword ptr [esp + 48h], edi
        ; Exact mapped bytes E8 D6 D5 01 00: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes 66 83 7D 5C 01: cmp word ptr [ebp + 0x5c], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x5c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x10004ad8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 28h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov esi, dword ptr [eax + 8]
        mov eax, edi
        sub eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 1ch], eax
        mov eax, edi
        mov edi, dword ptr [esp + 1ch]
        sub eax, esi
        cdq
        mov esi, dword ptr [esp + 24h]
        xor eax, edx
        sub eax, edx
        imul edi, eax
        mov eax, esi
        mov dword ptr [esp + 1ch], edi
        sub eax, ecx
        cdq
        mov edi, eax
        mov eax, esi
        xor edi, edx
        sub eax, ecx
        sub edi, edx
        cdq
        xor eax, edx
        sub eax, edx
        imul edi, eax
        mov eax, dword ptr [esp + 1ch]
        add eax, edi
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 1C: fstp qword ptr [esp + 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push ecx
        push edx
        ; Exact mapped bytes E8 C6 7D 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 B8 7D 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        mov esi, eax
        lea eax, [ebx + ebx*2 + 6]
        lea ecx, [ebx + eax*4 + 2]
        mov ebx, dword ptr [esp + 10h]
        cmp dword ptr [ebx + ecx*4], esi
        ; Exact mapped bytes 0F 82 C5 00 00 00: jb 0x10004aca
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 84h]
        ; Exact mapped bytes E8 C0 9B 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x10004aca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 5
        mov al, byte ptr [ebx + 30h]
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 21: jne 0x10004a4a
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 64h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 18: jle 0x10004a4a
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 60h]
        cmp dword ptr [ecx], esi
        ; Exact mapped bytes 77 0A: ja 0x10004a43
        __asm _emit 0x77
        __asm _emit 0x0a
        inc eax
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 7C F4: jl 0x10004a35
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 07: jmp 0x10004a4a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 66 89 85 8C 00 00 00: mov word ptr [ebp + 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 64h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 95 8C 00 00 00: mov dx, word ptr [ebp + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 7C 09: jl 0x10004a63
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        ; Exact mapped bytes 66 89 85 8C 00 00 00: mov word ptr [ebp + 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        lea ecx, [esp + 24h]
        push ecx
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 8C 06 00 00: call 0x10005100
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 384h
        cmp eax, 2a94h
        ; Exact mapped bytes 75 02: jne 0x10004a82
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        cdq
        mov ecx, 0e10h
        xor edi, edi
        idiv ecx
        cmp edx, edi
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 7D 06: jge 0x10004a9a
        __asm _emit 0x7d
        __asm _emit 0x06
        add edx, ecx
        mov dword ptr [esp + 1ch], edx
        mov esi, dword ptr [esp + 30h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 85 8C 00 00 00: mov ax, word ptr [ebp + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        push eax
        push edx
        ; Exact mapped bytes E8 50 E9 03 00: call 0x10043400
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi + 108h], edi
        mov dword ptr [esi + 10ch], edi
        mov edi, dword ptr [esp + 38h]
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes EB 12: jmp 0x10004adc
        __asm _emit 0xeb
        __asm _emit 0x12
        pop edi
        pop esi
        mov byte ptr [ebx + 30h], 0ffh
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 7D 5C 02: cmp word ptr [ebp + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x5c
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x10004bcc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 24h]
        push ecx
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 0C 06 00 00: call 0x10005100
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 384h
        cmp eax, 2a94h
        ; Exact mapped bytes 75 02: jne 0x10004b02
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov edi, edx
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x10004b12
        __asm _emit 0x7d
        __asm _emit 0x02
        add edi, ecx
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [edx + 0ch]
        mov esi, dword ptr [edx + 8]
        mov ebx, dword ptr [edx + 4]
        sub ecx, esi
        sub eax, ebx
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes DB 44 24 38: fild dword ptr [esp + 0x38]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes E8 5A 7C 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes E8 4F 7C 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 88h]
        mov esi, eax
        mov eax, 10624dd3h
        mov ecx, dword ptr [ecx + 334h]
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes DB 44 24 40: fild dword ptr [esp + 0x40]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes DD 5C 24 1C: fstp qword ptr [esp + 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 44 24 1C: fld qword ptr [esp + 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DC 0D 30 52 17 10: fmul qword ptr [0x10175230]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 15 7C 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 38 8C 03 00: call 0x1003d7d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, eax
        add esp, 10h
        cmp esi, 64h
        ; Exact mapped bytes 7D 05: jge 0x10004ba7
        __asm _emit 0x7d
        __asm _emit 0x05
        mov esi, 64h
        mov ebx, dword ptr [esp + 30h]
        push esi
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 4C E8 03 00: call 0x10043400
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 14h], 1
        mov dword ptr [ebx + 108h], eax
        mov dword ptr [ebx + 10ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x10004bd8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 30h]
        mov eax, dword ptr [ebx + 108h]
        test eax, eax
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 B9 E2 00 00 00 00: cmp word ptr [ecx + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 104h], 40000000h
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0f4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x10004cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 56 1C 10: mov eax, dword ptr [0x101c5638]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x10004c32
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 7E E8 03 00: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 34h]
        mov edx, ecx
        xor edx, eax
        and edx, 1fh
        xor ecx, edx
        ; Exact mapped bytes 66 83 7D 5C 02: cmp word ptr [ebp + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x5c
        __asm _emit 0x02
        ; Exact mapped bytes 75 20: jne 0x10004c6a
        __asm _emit 0x75
        __asm _emit 0x20
        and edi, 0fffh
        and esi, 3ffh
        shl edi, 0ah
        or edi, esi
        and ecx, 0f800001fh
        shl edi, 5
        or edi, ecx
        mov eax, edi
        ; Exact mapped bytes EB 26: jmp 0x10004c90
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B 85 8C 00 00 00: mov ax, word ptr [ebp + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0fffh
        and eax, 3ffh
        shl edx, 0ah
        or eax, edx
        and ecx, 0f800001fh
        shl eax, 5
        or eax, ecx
        and eax, 87ffffffh
        lea ecx, [esp + 30h]
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [ebx]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 42 00 04 00: call 0x10044cf0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
