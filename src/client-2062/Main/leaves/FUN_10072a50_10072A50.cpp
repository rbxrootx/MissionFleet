// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10072A50 .. +0x36F bytes.
extern "C" __declspec(naked) void FUN_10072a50_10072A50() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 5E 03 00 00: je 0x10072dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        ; Exact mapped bytes E8 EB 13 00 00: call 0x10073e50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x10072a7d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x10072bdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10072ab1
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10072a9a
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10072a95
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10072aaa
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10072aa9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10072aa6
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10072aaa
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AF C6 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10072ae5
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10072ace
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10072ac9
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10072ade
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10072add
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10072ada
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10072ade
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3B C6 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x10072bdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x10072bdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 5F: jne 0x10072b73
        __asm _emit 0x75
        __asm _emit 0x5f
        and eax, 0e2ffh
        push 0
        or eax, 202h
        push 66h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 E4 56 1C 10: mov edx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E B6 01 00 00: mov cx, word ptr [esi + 0x1b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 0ach], ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 5B A3 04 00: call 0x100bceb0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esi + 1b1h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 7fh
        mov ecx, dword ptr [ecx + 170h]
        inc eax
        push eax
        ; Exact mapped bytes E8 AF CB 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 68: jmp 0x10072bdb
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 61: jne 0x10072bdb
        __asm _emit 0x75
        __asm _emit 0x61
        xor edi, edi
        lea ebp, [esi + 150h]
        mov edx, dword ptr [esi + 108h]
        mov ebx, dword ptr [edi + edx]
        mov ecx, ebx
        ; Exact mapped bytes E8 CE C4 08 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 17 C5 08 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebx, dword ptr [ebp]
        mov ecx, ebx
        ; Exact mapped bytes E8 BD C4 08 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 06 C5 08 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        add ebp, 4
        cmp edi, 20h
        ; Exact mapped bytes 7C CD: jl 0x10072b82
        __asm _emit 0x7c
        __asm _emit 0xcd
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [ecx + 24h]
        shr al, 2
        test al, 1
        ; Exact mapped bytes 75 05: jne 0x10072bca
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 16 B6 FF FF: call 0x1006e1e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5f8h
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x10072d80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, ebp
        mov edi, dword ptr [edx + 0ch]
        cmp edi, ebp
        ; Exact mapped bytes 74 0E: je 0x10072c0a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [edi]
        mov ecx, edi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov edi, dword ptr [edi + 78h]
        cmp edi, ebp
        ; Exact mapped bytes 75 F2: jne 0x10072bfc
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 70h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x10072d17
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6ch], 40000000h
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x10072d0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 11ch]
        mov eax, dword ptr [esi + 0ech]
        mov ecx, dword ptr [edi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 43: jne 0x10072c78
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [edi + 54h]
        mov ebx, dword ptr [esi + 0f0h]
        cmp edx, ebx
        ; Exact mapped bytes 75 36: jne 0x10072c78
        __asm _emit 0x75
        __asm _emit 0x36
        mov dword ptr [esi + 6ch], ebp
        ; Exact mapped bytes A1 DC 58 1C 10: mov eax, dword ptr [0x101c58dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x10072d96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 1430h]
        mov dword ptr [eax + 4], ebp
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x10072d96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1424h]
        push eax
        ; Exact mapped bytes FF 15 F4 50 17 10: call dword ptr [0x101750f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x10072d96
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 54h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 0f0h]
        sub ecx, ebx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x10072cb4
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x10072cb4
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x10072cab
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x10072cab
        __asm _emit 0x7d
        __asm _emit 0x12
        cmp eax, ebp
        ; Exact mapped bytes 7D 05: jge 0x10072ca2
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x10072cbf
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ebx, ebx
        cmp eax, ebp
        setg bl
        ; Exact mapped bytes EB 14: jmp 0x10072cbf
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        ; Exact mapped bytes EB 0B: jmp 0x10072cbf
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov ebx, eax
        sar ebx, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10072cee
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10072cee
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10072ce5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10072ce5
        __asm _emit 0x7d
        __asm _emit 0x12
        cmp ecx, ebp
        ; Exact mapped bytes 7D 05: jge 0x10072cdc
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x10072cf9
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        cmp ecx, ebp
        setg al
        ; Exact mapped bytes EB 14: jmp 0x10072cf9
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10072cf9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [edi + 50h]
        mov ecx, dword ptr [edi + 54h]
        add edx, ebx
        add ecx, eax
        mov dword ptr [edi + 50h], edx
        mov dword ptr [edi + 54h], ecx
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x10072d96
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 EB 14 00 00: call 0x10074200
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7F: jmp 0x10072d96
        __asm _emit 0xeb
        __asm _emit 0x7f
        cmp eax, 40000000h
        ; Exact mapped bytes 75 78: jne 0x10072d96
        __asm _emit 0x75
        __asm _emit 0x78
        mov edi, dword ptr [esi + 0ach]
        mov eax, dword ptr [esi + 0a8h]
        inc edi
        cmp eax, ebp
        mov dword ptr [esi + 0ach], edi
        mov ecx, edi
        ; Exact mapped bytes 7E 2B: jle 0x10072d62
        __asm _emit 0x7e
        __asm _emit 0x2b
        cmp ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 7C 57: jl 0x10072d96
        __asm _emit 0x7c
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 120h]
        dec eax
        mov dword ptr [esi + 0a8h], eax
        mov dword ptr [esi + 0ach], ebp
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esi + 174h]
        ; Exact mapped bytes E8 20 26 05 00: call 0x100c5380
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x10072d96
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 62 A9 FD FF: call 0x1004d6e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x10072d96
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 66 3D 00 0D: cmp ax, 0xd00
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 10: jne 0x10072d96
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [esi + 21ch], 64h
        ; Exact mapped bytes 75 07: jne 0x10072d96
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 1D: je 0x10072dbc
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10072db7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10072d9f
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
