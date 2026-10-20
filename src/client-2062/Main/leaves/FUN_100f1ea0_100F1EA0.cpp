// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1EA0 .. +0x5CC bytes.
extern "C" __declspec(naked) void FUN_100f1ea0_100F1EA0() {
    __asm {
        sub esp, 8
        xor eax, eax
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        lea edi, [esi + 7bch]
        mov ecx, 20h
        mov dword ptr [esi + 904h], ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, esi
        ; Exact mapped bytes E8 39 0B 00 00: call 0x100f2a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 0c8h]
        mov edi, 20h
        mov ecx, dword ptr [edx]
        add edx, 1ch
        mov eax, ecx
        mov ebx, ecx
        xor eax, 2a800h
        xor ebx, 0aa00000h
        shr eax, 0ah
        shr ebx, 14h
        and eax, 3ffh
        and ebx, 3ffh
        xor ecx, 0aah
        add eax, ebx
        and ecx, 3ffh
        mov ebx, dword ptr [esi + 904h]
        add eax, ecx
        xor ecx, ecx
        mov cl, byte ptr [edx - 18h]
        xor ecx, 0aah
        imul eax, ecx
        lea eax, [eax + eax*4]
        add ebx, eax
        dec edi
        mov dword ptr [esi + 904h], ebx
        ; Exact mapped bytes 75 A9: jne 0x100f1ed2
        __asm _emit 0x75
        __asm _emit 0xa9
        mov ebx, dword ptr [esi + 0b4ch]
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 9E 04 00 00: je 0x100f23d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4B 0A: mov cx, word ptr [ebx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x0a
        mov edx, dword ptr [esi + 48h]
        shr ecx, 0ah
        shr edx, 6
        and ecx, 1fh
        and edx, 0fh
        add ecx, edx
        mov dword ptr [esi + 8bch], ecx
        mov eax, dword ptr [ebx + 5ch]
        mov ecx, dword ptr [esi + 904h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        add ecx, eax
        mov dword ptr [esi + 904h], ecx
        mov ecx, dword ptr [esi + 50h]
        mov edi, dword ptr [ebx + 54h]
        xor ecx, 0aaaaaaaah
        add ecx, edi
        mov edi, dword ptr [esi + 0b5ch]
        xor ecx, 0aaaaaaaah
        cmp edi, ebp
        mov dword ptr [esi + 8e0h], ecx
        ; Exact mapped bytes 74 6A: je 0x100f1ffd
        __asm _emit 0x74
        __asm _emit 0x6a
        xor edx, edx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 93 0C 01 00 00: mov dx, word ptr [ebx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 7A: mov cx, word ptr [esi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7a
        imul edx, dword ptr [edi + 24h]
        imul edx, ecx
        mov eax, dword ptr [esi + 904h]
        add eax, edx
        xor edx, edx
        mov dword ptr [esi + 904h], eax
        mov dl, byte ptr [edi + 98h]
        imul edx, ecx
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esi + 8e4h], edx
        xor edx, edx
        mov dl, byte ptr [edi + 99h]
        imul edx, ecx
        imul edx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 8ech], edx
        ; Exact mapped bytes EB 0C: jmp 0x100f2009
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 8e4h], ebp
        mov dword ptr [esi + 8ech], ebp
        mov edi, dword ptr [esi + 0b60h]
        cmp edi, ebp
        ; Exact mapped bytes 74 6A: je 0x100f207d
        __asm _emit 0x74
        __asm _emit 0x6a
        xor edx, edx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 93 0A 01 00 00: mov dx, word ptr [ebx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 7C: mov cx, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        imul edx, dword ptr [edi + 24h]
        imul edx, ecx
        mov eax, dword ptr [esi + 904h]
        add eax, edx
        xor edx, edx
        mov dword ptr [esi + 904h], eax
        mov dl, byte ptr [edi + 98h]
        imul edx, ecx
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esi + 8e8h], edx
        xor edx, edx
        mov dl, byte ptr [edi + 99h]
        imul edx, ecx
        imul edx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 8f0h], edx
        ; Exact mapped bytes EB 0C: jmp 0x100f2089
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 8e8h], ebp
        mov dword ptr [esi + 8f0h], ebp
        mov edi, dword ptr [esi + 0b68h]
        cmp edi, ebp
        ; Exact mapped bytes 74 4E: je 0x100f20e1
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [edi + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 10 01 00 00: mov dx, word ptr [ebx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        imul ecx, edx
        ; Exact mapped bytes 66 8B 86 80 00 00 00: mov ax, word ptr [esi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 904h]
        imul ecx, eax
        add edx, ecx
        xor ecx, ecx
        mov dword ptr [esi + 904h], edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 10 01 00 00: mov dx, word ptr [ebx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, eax
        mov dword ptr [esi + 8f4h], edx
        mov cl, byte ptr [edi + 9bh]
        imul ecx, eax
        mov dword ptr [esi + 8f8h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x100f20ed
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 8f4h], ebp
        mov dword ptr [esi + 8f8h], ebp
        mov edi, dword ptr [esi + 0b64h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 53 6C: mov dx, word ptr [ebx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x6c
        cmp edi, ebp
        mov dword ptr [esi + 900h], edx
        ; Exact mapped bytes 74 4E: je 0x100f2151
        __asm _emit 0x74
        __asm _emit 0x4e
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 8B 0E 01 00 00: mov cx, word ptr [ebx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 7E: mov ax, word ptr [esi + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7e
        imul ecx, dword ptr [edi + 24h]
        imul ecx, eax
        mov edx, dword ptr [esi + 904h]
        add edx, ecx
        xor ecx, ecx
        mov dword ptr [esi + 904h], edx
        mov cl, byte ptr [edi + 9ah]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 900h]
        add eax, edx
        mov dword ptr [esi + 900h], eax
        lea edx, [esi + 0a50h]
        lea eax, [esi + 9cch]
        mov edi, 1ch
        mov ecx, dword ptr [eax]
        cmp ecx, ebp
        ; Exact mapped bytes 74 74: je 0x100f21dc
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ecx + 24h]
        mov ebp, dword ptr [esi + 904h]
        add ebp, ecx
        mov dword ptr [esi + 904h], ebp
        mov ecx, dword ptr [eax]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 69 1C: mov bp, word ptr [ecx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 900h]
        add ecx, ebp
        xor ebp, ebp
        mov dword ptr [esi + 900h], ecx
        mov ecx, dword ptr [edx - 4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 1E: je 0x100f21b6
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 8B 68 80: mov bp, word ptr [eax - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x80
        xor ebp, 0aah
        imul ebp, dword ptr [ecx + 24h]
        mov ecx, dword ptr [esi + 904h]
        add ecx, ebp
        xor ebp, ebp
        mov dword ptr [esi + 904h], ecx
        mov ecx, dword ptr [edx]
        cmp ecx, ebp
        ; Exact mapped bytes 74 20: je 0x100f21dc
        __asm _emit 0x74
        __asm _emit 0x20
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 68 82: mov bp, word ptr [eax - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x82
        xor ebp, 0aah
        imul ebp, dword ptr [ecx + 24h]
        mov ecx, dword ptr [esi + 904h]
        add ecx, ebp
        xor ebp, ebp
        mov dword ptr [esi + 904h], ecx
        add edx, 8
        add eax, 4
        dec edi
        ; Exact mapped bytes 0F 85 79 FF FF FF: jne 0x100f2162
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esi + 0b30h]
        lea eax, [esi + 0a3ch]
        mov edi, 4
        mov ecx, dword ptr [eax]
        cmp ecx, ebp
        ; Exact mapped bytes 74 20: je 0x100f2220
        __asm _emit 0x74
        __asm _emit 0x20
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 68 80: mov bp, word ptr [eax - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x80
        xor ebp, 0aah
        imul ebp, dword ptr [ecx + 24h]
        mov ecx, dword ptr [esi + 904h]
        add ecx, ebp
        xor ebp, ebp
        mov dword ptr [esi + 904h], ecx
        mov ecx, dword ptr [edx]
        cmp ecx, ebp
        ; Exact mapped bytes 74 20: je 0x100f2246
        __asm _emit 0x74
        __asm _emit 0x20
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 68 82: mov bp, word ptr [eax - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x82
        xor ebp, 0aah
        imul ebp, dword ptr [ecx + 24h]
        mov ecx, dword ptr [esi + 904h]
        add ecx, ebp
        xor ebp, ebp
        mov dword ptr [esi + 904h], ecx
        add edx, 8
        add eax, 4
        dec edi
        ; Exact mapped bytes 75 AB: jne 0x100f21fa
        __asm _emit 0x75
        __asm _emit 0xab
        mov eax, dword ptr [esi + 0b58h]
        cmp eax, ebp
        ; Exact mapped bytes 74 25: je 0x100f227e
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [eax + 24h]
        mov ecx, dword ptr [esi + 904h]
        add ecx, edx
        mov dword ptr [esi + 904h], ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1C: mov cx, word ptr [eax + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 900h]
        add eax, ecx
        mov dword ptr [esi + 900h], eax
        mov ecx, dword ptr [esi + 0b54h]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x100f2350
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 24h]
        mov edi, dword ptr [esi + 904h]
        add edi, edx
        mov edx, dword ptr [esi + 900h]
        xor eax, eax
        mov dword ptr [esi + 904h], edi
        ; Exact mapped bytes 66 8B 41 1C: mov ax, word ptr [ecx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1c
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esi + 900h], edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 53 6A: mov dx, word ptr [ebx + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x6a
        mov edi, edx
        mov edx, dword ptr [esi + 904h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        imul edi, edx
        mov eax, edi
        xor edx, edx
        div dword ptr [ebx + 60h]
        mov edx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov edi, edx
        ; Exact mapped bytes 75 05: jne 0x100f22ef
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 1
        mov eax, dword ptr [ecx + 98h]
        xor edx, edx
        div edi
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
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
        ; Exact mapped bytes E8 94 A4 07 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 86 A4 07 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esi + 930h]
        mov dword ptr [esi + 924h], eax
        add edx, 64h
        imul edx, eax
        mov eax, 51eb851fh
        mul edx
        mov eax, dword ptr [esi + 934h]
        shr edx, 5
        mov dword ptr [esi + 928h], edx
        mov dword ptr [esi + 92ch], eax
        ; Exact mapped bytes EB 12: jmp 0x100f2362
        __asm _emit 0xeb
        __asm _emit 0x12
        mov dword ptr [esi + 924h], ebp
        mov dword ptr [esi + 928h], ebp
        mov dword ptr [esi + 92ch], ebp
        mov eax, dword ptr [esi + 0b54h]
        cmp eax, ebp
        ; Exact mapped bytes 74 3F: je 0x100f23ab
        __asm _emit 0x74
        __asm _emit 0x3f
        xor ecx, ecx
        mov edx, 64h
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov eax, 10624dd3h
        sub edx, ecx
        imul edx, dword ptr [esi + 900h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [edx + ecx]
        cmp eax, 64h
        mov dword ptr [esi + 938h], eax
        ; Exact mapped bytes 7E 12: jle 0x100f23b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov dword ptr [esi + 938h], 64h
        ; Exact mapped bytes EB 06: jmp 0x100f23b1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 938h], ebp
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 B6 07 00 00: mov ax, word ptr [esi + 0x7b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 1
        cmp eax, 384h
        mov dword ptr [esi + 8fch], eax
        ; Exact mapped bytes 7E 18: jle 0x100f23e1
        __asm _emit 0x7e
        __asm _emit 0x18
        mov dword ptr [esi + 8fch], 384h
        ; Exact mapped bytes EB 0C: jmp 0x100f23e1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 8bch], ebp
        mov dword ptr [esi + 904h], ebp
        mov ebx, dword ptr [esi + 924h]
        mov edi, dword ptr [esi + 928h]
        mov edx, dword ptr [esi + 8e4h]
        mov ecx, dword ptr [esi + 8ech]
        mov ebp, dword ptr [esi + 8e8h]
        mov eax, 0aaaaaaaah
        xor ebx, eax
        xor edi, eax
        xor edx, eax
        xor ecx, eax
        mov dword ptr [esi + 924h], ebx
        mov ebx, dword ptr [esi + 8f0h]
        mov dword ptr [esi + 928h], edi
        mov edi, dword ptr [esi + 900h]
        mov dword ptr [esi + 8e4h], edx
        mov edx, dword ptr [esi + 8fch]
        mov dword ptr [esi + 8ech], ecx
        mov ecx, dword ptr [esi + 904h]
        xor ebp, eax
        xor ebx, eax
        xor edi, eax
        xor edx, eax
        xor ecx, eax
        mov dword ptr [esi + 900h], edi
        mov dword ptr [esi + 8e8h], ebp
        mov dword ptr [esi + 8f0h], ebx
        mov dword ptr [esi + 8fch], edx
        mov dword ptr [esi + 904h], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
