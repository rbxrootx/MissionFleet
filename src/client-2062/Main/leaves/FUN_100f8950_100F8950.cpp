// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F8950 .. +0x49A bytes.
extern "C" __declspec(naked) void FUN_100f8950_100F8950() {
    __asm {
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 30h
        mov eax, dword ptr [eax + 0d0ch]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        cmp eax, ebx
        mov edi, ecx
        ; Exact mapped bytes 74 6A: je 0x100f89d4
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [eax + 0b4ch]
        mov ecx, 20h
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 25ch]
        shr esi, 0ah
        and esi, 1fh
        test eax, 80000000h
        ; Exact mapped bytes 74 01: je 0x100f898d
        __asm _emit 0x74
        __asm _emit 0x01
        inc esi
        shl eax, 1
        dec ecx
        ; Exact mapped bytes 75 F3: jne 0x100f8985
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [edi + 118h]
        ; Exact mapped bytes E8 A3 B4 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp eax, esi
        ; Exact mapped bytes 7E 30: jle 0x100f89d4
        __asm _emit 0x7e
        __asm _emit 0x30
        lea ebx, [esi - 8]
        test ebx, ebx
        ; Exact mapped bytes 7D 02: jge 0x100f89ad
        __asm _emit 0x7d
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [edi + 118h]
        push ebx
        ; Exact mapped bytes E8 A7 B4 00 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [edi + 11ch]
        mov ebp, 4
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 94 B4 00 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x100f89c4
        __asm _emit 0x75
        __asm _emit 0xf2
        xor ebx, ebx
        mov ecx, dword ptr [edi + 118h]
        mov dword ptr [edi + 3f4h], 0ffffffffh
        mov dword ptr [edi + 3d4h], ebx
        mov dword ptr [edi + 3d0h], ebx
        mov dword ptr [edi + 3dch], ebx
        mov dword ptr [edi + 3d8h], ebx
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes E8 37 B4 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, eax
        mov dword ptr [esp + 3ch], ecx
        mov eax, dword ptr [edx + 0d0ch]
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 7A 03 00 00: je 0x100f8d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b4ch]
        xor ebp, ebp
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        lea esi, [edi + 98h]
        shr edx, 0ah
        and edx, 1fh
        mov dword ptr [edi + 3e0h], edx
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        mov edx, dword ptr [eax + 258h]
        mov dword ptr [esp + 34h], edx
        mov edx, dword ptr [eax + 254h]
        mov eax, dword ptr [eax + 25ch]
        mov dword ptr [esp + 1ch], edx
        lea edx, [ecx + ecx*4]
        mov dword ptr [esp + 20h], eax
        lea eax, [ecx + edx*2]
        mov dword ptr [esp + 18h], eax
        mov eax, 8b4h
        sub eax, edi
        mov dword ptr [esp + 30h], eax
        mov eax, 934h
        sub eax, edi
        mov dword ptr [esp + 2ch], eax
        mov eax, 0ffffff68h
        sub eax, edi
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100f8abd
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f8abd
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        ; Exact mapped bytes 66 39 54 24 24: cmp word ptr [esp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x100f8b9c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esp + 1ch], 80000000h
        ; Exact mapped bytes 74 6B: je 0x100f8b82
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [esp + 2ch]
        lea edx, [eax + ecx]
        mov ecx, dword ptr [edx + esi]
        test ecx, ecx
        ; Exact mapped bytes 74 48: je 0x100f8b6d
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [eax + ebx*8 + 0a4ch]
        test edx, edx
        ; Exact mapped bytes 74 3D: je 0x100f8b6d
        __asm _emit 0x74
        __asm _emit 0x3d
        mov bl, byte ptr [ecx]
        and bl, 0fh
        cmp bl, 6
        ; Exact mapped bytes 75 2F: jne 0x100f8b69
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ebx, dword ptr [esp + 30h]
        mov cl, byte ptr [ecx + 98h]
        add eax, ebx
        xor ebx, ebx
        and ecx, 0fh
        ; Exact mapped bytes 66 8B 1C 30: mov bx, word ptr [eax + esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x30
        mov eax, ebx
        xor eax, 0aah
        sub eax, ecx
        test eax, eax
        ; Exact mapped bytes 7E 0D: jle 0x100f8b69
        __asm _emit 0x7e
        __asm _emit 0x0d
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 1E: mov cx, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x1e
        imul ecx, eax
        add dword ptr [esp + 14h], ecx
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x100f8b9c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, 101ac334h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x100f8b9c
        __asm _emit 0x74
        __asm _emit 0x1d
        push edx
        ; Exact mapped bytes EB 13: jmp 0x100f8b95
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100f8b9c
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ac330h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f8b9c
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test dword ptr [esp + 20h], 80000000h
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x100f8c4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 3e0h]
        mov eax, dword ptr [edi + edx*4 + 98h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100f8bcf
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ac32ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f8bcf
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 3e0h]
        mov ecx, dword ptr [esp + 2ch]
        inc eax
        mov dword ptr [edi + 3e0h], eax
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d0ch]
        lea edx, [eax + ecx]
        mov ecx, dword ptr [edx + esi]
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x100f8c1f
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esp + 30h]
        xor ebx, ebx
        add edx, eax
        ; Exact mapped bytes 66 8B 1C 32: mov bx, word ptr [edx + esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x32
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        xor ebx, 0aah
        imul ebx, edx
        mov ecx, dword ptr [esp + 28h]
        add ecx, ebx
        mov ebx, dword ptr [esp + 10h]
        mov dword ptr [esp + 28h], ecx
        mov ecx, dword ptr [eax + ebx*8 + 0a50h]
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x100f8c4d
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [esp + 38h]
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 30 4E 09 00 00: mov dx, word ptr [eax + esi + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 1E: mov ax, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1e
        xor edx, 0aah
        imul edx, eax
        add dword ptr [esp + 14h], edx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 9B 0D 00 00: call 0x100f99f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [edi + 8]
        lea edx, [ecx + eax + 44h]
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 54 61 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [edi + 8]
        lea edx, [ecx + eax + 44h]
        mov ecx, dword ptr [esi + 98h]
        push edx
        ; Exact mapped bytes E8 39 61 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [edi + 8]
        lea edx, [ecx + eax + 44h]
        mov ecx, dword ptr [esi + 118h]
        push edx
        ; Exact mapped bytes E8 1E 61 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [edi + 8]
        lea edx, [ecx + eax + 44h]
        mov ecx, dword ptr [esi + 198h]
        push edx
        ; Exact mapped bytes E8 03 61 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        cmp ebx, eax
        ; Exact mapped bytes 7C 0D: jl 0x100f8cd2
        __asm _emit 0x7c
        __asm _emit 0x0d
        add eax, 8
        cmp ebx, eax
        ; Exact mapped bytes 7D 06: jge 0x100f8cd2
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [esi]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 20h]
        add ebp, 0bh
        shl eax, 1
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 24h]
        shl ecx, 1
        shl edx, 1
        inc eax
        inc ebx
        add esi, 4
        ; Exact mapped bytes 66 3D 20 00: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 82 95 FD FF FF: jb 0x100f8aa3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 118h]
        push -1
        ; Exact mapped bytes E8 35 BA 00 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        mov ecx, dword ptr [edi + 2bch]
        imul dword ptr [esp + 14h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 64h], edx
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d0ch]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [edi + 2c0h]
        ; Exact mapped bytes 66 8B 91 06 01 00 00: mov dx, word ptr [ecx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 64h], edx
        mov eax, 66666667h
        imul dword ptr [esp + 28h]
        mov eax, dword ptr [edi + 2c4h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [eax + 64h], edx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d0ch]
        xor ecx, ecx
        xor ebx, ebx
        mov eax, dword ptr [edx + 0b4ch]
        mov edx, dword ptr [edi + 2c8h]
        ; Exact mapped bytes 66 8B 88 08 01 00 00: mov cx, word ptr [eax + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 27 7D F6 FF: call 0x10060ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1F: jne 0x100f8dcd
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [edi + 2cch]
        mov dword ptr [eax + 50h], 1
        mov edi, dword ptr [edi + 2cch]
        or byte ptr [edi + 24h], 2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ret
        mov ecx, dword ptr [edi + 2cch]
        mov dword ptr [ecx + 50h], ebx
        mov edi, dword ptr [edi + 2cch]
        ; Exact mapped bytes 66 81 67 24 FD FF: and word ptr [edi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ret
    }
}
