// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EC530 .. +0x722 bytes.
extern "C" __declspec(naked) void FUN_100ec530_100EC530() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 10173fdah
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 2bch
        xor edx, edx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor ecx, ecx
        lea ebx, [ebp + 21ch]
        mov eax, ebx
        mov esi, ecx
        and esi, 80000007h
        ; Exact mapped bytes 79 05: jns 0x100ec56c
        __asm _emit 0x79
        __asm _emit 0x05
        dec esi
        or esi, 0fffffff8h
        inc esi
        mov dword ptr [ebp + esi*4 + 5cbch], edx
        mov dword ptr [eax - 0c4h], edx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 80h], edx
        inc ecx
        add eax, 4
        cmp ecx, 20h
        ; Exact mapped bytes 7C D3: jl 0x100ec55d
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov dword ptr [esp + 18h], 10h
        lea eax, [esp + 3eh]
        mov ecx, 2
        mov edx, 384h
        ; Exact mapped bytes 66 89 50 FE: mov word ptr [eax - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xfe
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F3: jne 0x100ec5a0
        __asm _emit 0x75
        __asm _emit 0xf3
        lea eax, [ebp + 0d74h]
        lea esi, [ebp + 1f8h]
        mov dword ptr [esp + 1ch], eax
        mov eax, 7b0h
        sub eax, ebp
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 30h], eax
        mov eax, 0fffffe08h
        sub eax, ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 04: jmp 0x100ec5dd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 10h]
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi - 20h]
        mov cl, byte ptr [esi]
        shl eax, 1
        mov dword ptr [esp + 20h], eax
        add eax, ecx
        mov dword ptr [esp + 24h], ecx
        lea edi, [esp + 54h]
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [esp + 30h]
        lea edx, [ebp + ecx*4]
        mov ecx, 7
        lea esi, [edx + 778h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edi, [eax + ebx]
        mov esi, dword ptr [edi + ebp + 328h]
        test esi, esi
        ; Exact mapped bytes 0F 84 DB 02 00 00: je 0x100ec901
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CC 02 00 00: jne 0x100ec901
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0ad8h]
        mov eax, dword ptr [ebp + 0e80h]
        mov ecx, 2dh
        lea edi, [esp + 70h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [edx + 3f8h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, 540h
        shr edx, 5
        and edx, 7fh
        mov eax, ecx
        ; Exact mapped bytes 0F BF 8C 24 1C 01 00 00: movsx ecx, word ptr [esp + 0x11c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 48h], 0
        ; Exact mapped bytes DF 6C 24 44: fild qword ptr [esp + 0x44]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        mov edi, dword ptr [esp + 62h]
        add eax, ecx
        and edi, 0ffffh
        ; Exact mapped bytes DD 5C 24 28: fstp qword ptr [esp + 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        imul edi, eax
        ; Exact mapped bytes DD 44 24 28: fld qword ptr [esp + 0x28]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DC 0D 30 52 17 10: fmul qword ptr [0x10175230]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [eax + eax*4]
        lea esi, [ecx + ecx*4]
        shl esi, 2
        ; Exact mapped bytes E8 FA 00 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        imul eax, esi
        mov ecx, eax
        mov eax, 60606061h
        imul ecx
        sar edx, 5
        mov eax, edx
        mov dword ptr [esp + 34h], ecx
        shr eax, 1fh
        add edx, eax
        lea ecx, [esi + esi*2]
        add edx, ecx
        mov ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 7E 02: jle 0x100ec6d3
        __asm _emit 0x7e
        __asm _emit 0x02
        mov edi, ecx
        lea edx, [edi + esi]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 20h]
        push edx
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [esp + 2ch]
        push ecx
        push edi
        inc edx
        push esi
        push edx
        push eax
        lea ecx, [esp + 1e8h]
        push 101ac520h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x100ec777
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 101aa390h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A3 F0 51 1C 10: mov dword ptr [0x101c51f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 38h]
        push 0
        lea eax, [esp + 1d0h]
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
        lea ecx, [esp + 1d4h]
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
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 64h]
        mov eax, 2710h
        and ecx, 0ffffh
        cdq
        add ecx, 64h
        idiv ecx
        mov edx, dword ptr [esp + 10eh]
        and edx, 0ffffh
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1]
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 8C 24 0E 01 00 00: mov word ptr [esp + 0x10e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 10ch]
        mov dword ptr [esp + 50h], edx
        and eax, 7fh
        ; Exact mapped bytes 66 39 44 24 18: cmp word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 76 04: jbe 0x100ec7db
        __asm _emit 0x76
        __asm _emit 0x04
        mov dword ptr [esp + 18h], eax
        mov esi, dword ptr [esp + 10h]
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi - 20h]
        mov cl, byte ptr [esi]
        lea edx, [ecx + eax*2]
        mov eax, dword ptr [esp + 10ah]
        shr eax, 4
        lea ecx, [esp + edx*2 + 3ch]
        and eax, 7fh
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 76 03: jbe 0x100ec804
        __asm _emit 0x76
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        push 243d0h
        ; Exact mapped bytes E8 92 FF 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        test eax, eax
        mov dword ptr [esp + 2d4h], 0
        ; Exact mapped bytes 74 52: je 0x100ec876
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [esp + 74h]
        ; Exact mapped bytes 8B 0D 5C 57 1C 10: mov ecx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        and edx, 0ffffh
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100ec851
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100ec851
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100ec851
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x100ec853
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 8D 90 3E 00 00: mov cx, word ptr [ebp + 0x3e90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esp + 2e4h]
        push ecx
        mov ecx, dword ptr [esp + 2e4h]
        push ecx
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 9C 74 F5 FF: call 0x10043d10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ec878
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 8B 15 5C 57 1C 10: mov edx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov ecx, eax
        mov dword ptr [esp + 2d8h], 0ffffffffh
        ; Exact mapped bytes E8 CD 73 F5 FF: call 0x10043c60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 85 2C 03 00 00: mov ax, word ptr [ebp + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, esi
        push eax
        lea edx, [esp + 74h]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 12 8A F5 FF: call 0x100452c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [esp + 28h]
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 50h]
        mov ecx, dword ptr [ebx]
        push eax
        push edi
        ; Exact mapped bytes E8 D9 81 F5 FF: call 0x10044aa0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 83 5A 0A 00 00: mov ax, word ptr [ebx + 0xa5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8B 58 0A 00 00: mov cx, word ptr [ebx + 0xa58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        and ecx, 0ffffh
        xor eax, 0aah
        xor ecx, 0aah
        push eax
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 4C 81 F5 FF: call 0x10044a40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        mov dword ptr [ebx - 0c4h], ecx
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x100eca68
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + ebp + 328h]
        test edi, edi
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x100eca68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x100eca68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0ad8h]
        mov edx, dword ptr [esp + 1ch]
        mov ecx, 2ah
        lea edi, [esp + 124h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 64h]
        mov esi, dword ptr [edx]
        mov eax, 2710h
        and ecx, 0ffffh
        cdq
        add ecx, 64h
        idiv ecx
        mov edx, dword ptr [esp + 1c4h]
        and edx, 0ffffh
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 1bch]
        shr eax, 4
        and eax, 7fh
        ; Exact mapped bytes 66 89 94 24 C4 01 00 00: mov word ptr [esp + 0x1c4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 44 24 18: cmp word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 76 04: jbe 0x100ec991
        __asm _emit 0x76
        __asm _emit 0x04
        mov dword ptr [esp + 18h], eax
        push 38f8h
        ; Exact mapped bytes E8 05 FE 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov dword ptr [esp + 2d4h], 1
        ; Exact mapped bytes 74 5A: je 0x100eca0b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [esp + 128h]
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        and edx, 0ffffh
        mov edi, dword ptr [ecx + 160h]
        add edx, 2
        cmp edi, edx
        ; Exact mapped bytes 7E 15: jle 0x100ec9e6
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100ec9e6
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [ecx + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100ec9e6
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x100ec9e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 8D 90 3E 00 00: mov cx, word ptr [ebp + 0x3e90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esp + 2e4h]
        push ecx
        mov ecx, dword ptr [esp + 2e4h]
        push ecx
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 87 96 F5 FF: call 0x10046090
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100eca0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx + 80h], eax
        ; Exact mapped bytes 66 8B 93 58 0A 00 00: mov dx, word ptr [ebx + 0xa58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B BD 2C 03 00 00: mov di, word ptr [ebp + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffffh
        xor edx, 0aah
        mov ecx, dword ptr [ebp + 0e74h]
        push edi
        mov edi, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 1ch]
        add edx, edi
        mov dword ptr [esp + 2dch], 0ffffffffh
        push edx
        lea edx, [esp + 130h]
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 04 9A F5 FF: call 0x10046460
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 80h]
        mov dword ptr [ebx - 0c4h], eax
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 10h]
        add ecx, 8
        inc eax
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esp + 14h]
        add ecx, eax
        add ebx, 4
        cmp ecx, 20h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 4B FB FF FF: jl 0x100ec5d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 0fffffffch
        mov edi, 0fffffea8h
        sub eax, ebp
        lea ebx, [ebp + 1f8h]
        mov dword ptr [esp + 20h], eax
        mov eax, 7ch
        sub eax, ebp
        sub edi, ebp
        mov dword ptr [esp + 10h], 114h
        lea esi, [ebp + 158h]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes EB 04: jmp 0x100ecac9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x100ecbe9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 B0 6C F5 FF: call 0x10043790
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        xor eax, eax
        mov al, byte ptr [ebx - 20h]
        mov dword ptr [ecx + 120h], eax
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi]
        and eax, 0ffffh
        cmp eax, 64h
        ; Exact mapped bytes 72 05: jb 0x100ecb02
        __asm _emit 0x72
        __asm _emit 0x05
        mov eax, 64h
        mov dword ptr [ecx + 0cch], eax
        mov eax, dword ptr [ebp + 0e74h]
        add edi, esi
        lea edx, [esi + eax]
        ; Exact mapped bytes 0F BF 8C 38 56 01 00 00: movsx ecx, word ptr [eax + edi + 0x156]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        push ecx
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 84 6B F5 FF: call 0x100436b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0e74h]
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 0F BF 94 38 D6 01 00 00: movsx edx, word ptr [eax + edi + 0x1d6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esp + 28h]
        add eax, esi
        push edx
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 8A 6B F5 FF: call 0x100436e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        mov edi, dword ptr [ebp + 0e74h]
        add eax, ebx
        mov ecx, 132h
        cdq
        and edx, 0fh
        add eax, edx
        mov edx, dword ptr [esp + 10h]
        sar eax, 4
        sub ecx, edx
        mov eax, dword ptr [edi + eax*4 + 260h]
        shr eax, cl
        mov ecx, dword ptr [esi]
        and eax, 3
        push eax
        ; Exact mapped bytes E8 36 6D F5 FF: call 0x100438c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 100h], 40000000h
        ; Exact mapped bytes 75 19: jne 0x100ecbb1
        __asm _emit 0x75
        __asm _emit 0x19
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [ebx - 20h]
        mov al, byte ptr [ebx]
        lea edx, [eax + edx*2]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 54 3C: mov ax, word ptr [esp + edx*2 + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x3c
        push eax
        ; Exact mapped bytes E8 9F 6B F5 FF: call 0x10043750
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0e74h]
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BF 04 01: movsx eax, word ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x01
        mov ecx, dword ptr [esi]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes E8 9E 64 F5 FF: call 0x10043070
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp byte ptr [ebx], 0
        mov al, byte ptr [ebp + 5c8dh]
        ; Exact mapped bytes 74 04: je 0x100ecbe1
        __asm _emit 0x74
        __asm _emit 0x04
        or al, 20h
        ; Exact mapped bytes EB 02: jmp 0x100ecbe3
        __asm _emit 0xeb
        __asm _emit 0x02
        or al, 10h
        mov byte ptr [ebp + 5c8dh], al
        mov edi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        add esi, 4
        add edi, 2
        inc ebx
        mov dword ptr [esp + 10h], edi
        lea eax, [ebx + edx]
        cmp eax, 20h
        ; Exact mapped bytes 0F 8C BD FE FF FF: jl 0x100ecac5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        ; Exact mapped bytes E8 91 FB 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov dword ptr [esp + 2d4h], 2
        ; Exact mapped bytes 74 0A: je 0x100ecc2f
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 53 5A F5 FF: call 0x10042680
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ecc31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 2cch]
        pop edi
        mov dword ptr [ebp + 218h], eax
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
        add esp, 2c8h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
