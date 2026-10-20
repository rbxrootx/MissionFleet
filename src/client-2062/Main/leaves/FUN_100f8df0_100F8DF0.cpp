// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F8DF0 .. +0x3F8 bytes.
extern "C" __declspec(naked) void FUN_100f8df0_100F8DF0() {
    __asm {
        sub esp, 130h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 13ch]
        mov ebx, ecx
        push esi
        push ebp
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 42 B9 00 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 144h]
        test esi, esi
        ; Exact mapped bytes 0F 84 D4 02 00 00: je 0x100f90f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov ecx, dword ptr [ebx + 118h]
        and eax, 0fh
        push ebp
        push eax
        ; Exact mapped bytes E8 B1 AF 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 98h]
        and ecx, 7
        lea eax, [ecx - 1]
        cmp eax, 3
        ; Exact mapped bytes 77 23: ja 0x100f8e63
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes FF 24 85 E8 91 0F 10: jmp dword ptr [eax*4 + 0x100f91e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x10
        mov byte ptr [esp + 0fh], 53h
        ; Exact mapped bytes EB 1A: jmp 0x100f8e68
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov byte ptr [esp + 0fh], 44h
        ; Exact mapped bytes EB 13: jmp 0x100f8e68
        __asm _emit 0xeb
        __asm _emit 0x13
        mov byte ptr [esp + 0fh], 54h
        ; Exact mapped bytes EB 0C: jmp 0x100f8e68
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov byte ptr [esp + 0fh], 51h
        ; Exact mapped bytes EB 05: jmp 0x100f8e68
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [esp + 0fh], 20h
        xor edx, edx
        lea eax, [esi + 78h]
        ; Exact mapped bytes 66 8B 96 A2 00 00 00: mov dx, word ptr [esi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea ecx, [esp + 20h]
        push eax
        push ecx
        mov dword ptr [ebx + ebp*4 + 350h], edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 14h
        ; Exact mapped bytes 7E 3A: jle 0x100f8ed5
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov edi, 1017f3c8h
        or ecx, 0ffffffffh
        xor eax, eax
        lea edx, [esp + 20h]
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov byte ptr [esp + 34h], 0
        mov esi, edi
        mov edi, edx
        mov edx, ecx
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov ecx, edx
        dec edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov esi, dword ptr [esp + 148h]
        ; Exact mapped bytes 0F BE 4C 24 13: movsx ecx, byte ptr [esp + 0x13]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x13
        mov edx, dword ptr [esi + 28h]
        lea eax, [esp + 20h]
        push eax
        push ecx
        push edx
        lea eax, [esp + 4ch]
        push 101ac99ch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        lea ecx, [esp + 40h]
        push 0ff000000h
        push ebp
        push ecx
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 23 B1 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10624dd3h
        xor edi, edi
        mul dword ptr [esi + 24h]
        mov ecx, edx
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ecx, 6
        mov esi, dword ptr [edx + 0d0ch]
        xor edx, edx
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [esi + 0b4ch]
        ; Exact mapped bytes 66 8B BC 68 C6 00 00 00: mov di, word ptr [eax + ebp*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 148h]
        ; Exact mapped bytes 66 8B 50 1E: mov dx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1e
        sub edi, edx
        mov edx, dword ptr [esi + ebp*8 + 0a4ch]
        test edx, edx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 74 60: je 0x100f8fbc
        __asm _emit 0x74
        __asm _emit 0x60
        xor eax, eax
        xor edi, edi
        ; Exact mapped bytes 66 8B 84 AE 4C 09 00 00: mov ax, word ptr [esi + ebp*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B BA 9E 00 00 00: mov di, word ptr [edx + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        mov dword ptr [esp + 14h], eax
        mov al, byte ptr [edx + 98h]
        and eax, 0ffh
        imul eax, edi
        mov edi, dword ptr [esp + 14h]
        imul eax, edi
        mov edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + ebp*8 + 0a4ch]
        add ecx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 1E: mov dx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1e
        mov eax, edx
        imul eax, edi
        mov edi, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + ebp*8 + 0a50h]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 74 59: je 0x100f9024
        __asm _emit 0x74
        __asm _emit 0x59
        mov dl, byte ptr [eax + 98h]
        xor edi, edi
        ; Exact mapped bytes 66 8B BC AE 4E 09 00 00: mov di, word ptr [esi + ebp*4 + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0xae
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        ; Exact mapped bytes 66 8B B0 9E 00 00 00: mov si, word ptr [eax + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffh
        imul edx, esi
        xor edi, 0aah
        mov eax, 10624dd3h
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 1ch]
        add ecx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 1E: mov dx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1e
        mov eax, dword ptr [esp + 14h]
        imul edx, edi
        mov edi, dword ptr [esp + 18h]
        add eax, edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 8B 35 88 51 17 10: mov esi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push ecx
        lea ecx, [esp + 44h]
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 11ch]
        add esp, 0ch
        lea edx, [esp + 40h]
        push 0ff000000h
        push ebp
        push edx
        ; Exact mapped bytes E8 E0 AF 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        lea ecx, [esp + 40h]
        imul dword ptr [esp + 14h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub edi, edx
        push edi
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 120h]
        add esp, 0ch
        lea edx, [esp + 40h]
        push 0ffffffh
        push ebp
        push edx
        ; Exact mapped bytes E8 A5 AF 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 0D 0B 00 00: call 0x100f9ba0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 A2 AD 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, eax
        pop edi
        ; Exact mapped bytes 0F 8C 35 01 00 00: jl 0x100f91dc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 8E AD 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp ebp, eax
        ; Exact mapped bytes 0F 8D 1F 01 00 00: jge 0x100f91dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + ebp*4 + 130h]
        mov ecx, 0fh
        pop esi
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + ebp*4 + 1b0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebx, dword ptr [ebx + ebp*4 + 230h]
        pop ebp
        ; Exact mapped bytes 66 81 63 24 F0 FF: and word ptr [ebx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop ebx
        add esp, 130h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 29 AF 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        push ebp
        push 0
        ; Exact mapped bytes E8 CB AC 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 11ch]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 05 AF 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d0ch]
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 84 6A C6 00 00 00: mov ax, word ptr [edx + ebp*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x100f9164
        __asm _emit 0x74
        __asm _emit 0x1b
        and eax, 0ffffh
        push eax
        lea eax, [esp + 40h]
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x100f9169
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [esp + 3ch], 0
        push 808080h
        lea ecx, [esp + 40h]
        push ebp
        push ecx
        mov ecx, dword ptr [ebx + 120h]
        ; Exact mapped bytes E8 B1 AE 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 124h]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 9B AE 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 128h]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 85 AE 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + ebp*4 + 350h], 0
        mov eax, dword ptr [ebx + ebp*4 + 130h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + ebp*4 + 1b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebx, dword ptr [ebx + ebp*4 + 230h]
        ; Exact mapped bytes 66 21 4B 24: and word ptr [ebx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4b
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        add esp, 130h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
