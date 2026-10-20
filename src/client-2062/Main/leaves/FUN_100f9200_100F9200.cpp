// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F9200 .. +0x2DB bytes.
extern "C" __declspec(naked) void FUN_100f9200_100F9200() {
    __asm {
        sub esp, 120h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 134h]
        test esi, esi
        mov ebx, ecx
        ; Exact mapped bytes 0F 84 F1 01 00 00: je 0x100f940b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 130h]
        mov ecx, dword ptr [ebx + 118h]
        push edi
        push ebp
        ; Exact mapped bytes E8 22 B5 00 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov ecx, dword ptr [ebx + 118h]
        and eax, 0fh
        push ebp
        push eax
        ; Exact mapped bytes E8 A0 AB 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esi + 78h]
        ; Exact mapped bytes 66 8B 8E A4 00 00 00: mov cx, word ptr [esi + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 10h]
        push edx
        push eax
        mov dword ptr [ebx + ebp*4 + 350h], ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [esp + 18h]
        or ecx, 0ffffffffh
        xor eax, eax
        add esp, 8
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        cmp ecx, 14h
        ; Exact mapped bytes 76 37: jbe 0x100f92ac
        __asm _emit 0x76
        __asm _emit 0x37
        mov edi, 1017f3c8h
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea edx, [esp + 10h]
        mov esi, edi
        mov edi, edx
        mov edx, ecx
        or ecx, 0ffffffffh
        mov byte ptr [esp + 24h], al
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
        mov esi, dword ptr [esp + 138h]
        mov ecx, dword ptr [esi + 28h]
        lea eax, [esp + 10h]
        push eax
        push ecx
        lea edx, [esp + 38h]
        push 101ac9a8h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 118h]
        add esp, 10h
        lea eax, [esp + 30h]
        push 0ff000000h
        push ebp
        push eax
        ; Exact mapped bytes E8 52 AD 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        mov edx, dword ptr [esi + 24h]
        mov ecx, dword ptr [ecx + 0d0ch]
        mov eax, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B BC 68 C6 00 00 00: mov di, word ptr [eax + ebp*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 7E 1E: mov di, word ptr [esi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x1e
        sub eax, edi
        lea esi, [eax + eax*4]
        mov eax, dword ptr [ecx + ebp*8 + 0a4ch]
        shl esi, 1
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x100f932d
        __asm _emit 0x74
        __asm _emit 0x16
        xor edi, edi
        ; Exact mapped bytes 66 8B BC A9 4C 09 00 00: mov di, word ptr [ecx + ebp*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0xa9
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, 0aah
        imul edi, dword ptr [eax + 24h]
        add edx, edi
        mov eax, dword ptr [ecx + ebp*8 + 0a50h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x100f934e
        __asm _emit 0x74
        __asm _emit 0x16
        xor edi, edi
        ; Exact mapped bytes 66 8B BC A9 4E 09 00 00: mov di, word ptr [ecx + ebp*4 + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0xa9
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, 0aah
        imul edi, dword ptr [eax + 24h]
        add edx, edi
        mov eax, 10624dd3h
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        imul edx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 34h]
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebx + 11ch]
        add esp, 0ch
        lea eax, [esp + 30h]
        push 0ff000000h
        push ebp
        push eax
        ; Exact mapped bytes E8 A5 AC 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul esi
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 34h]
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebx + 120h]
        add esp, 0ch
        lea eax, [esp + 30h]
        push 0ffffffh
        push ebp
        push eax
        ; Exact mapped bytes E8 6E AC 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 D6 07 00 00: call 0x100f9ba0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 6B AA 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, eax
        pop edi
        ; Exact mapped bytes 0F 8C F1 00 00 00: jl 0x100f94cf
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 57 AA 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp ebp, eax
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x100f94cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + ebp*4 + 230h]
        pop esi
        pop ebp
        or byte ptr [ebx + 24h], 0fh
        pop ebx
        add esp, 120h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [esp + 130h]
        mov ecx, dword ptr [ebx + 118h]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 08 AC 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        push esi
        push 0
        ; Exact mapped bytes E8 AA A9 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 11ch]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 E4 AB 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 84 70 C6 00 00 00: mov ax, word ptr [eax + esi*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x100f9486
        __asm _emit 0x74
        __asm _emit 0x1b
        and eax, 0ffffh
        lea ecx, [esp + 2ch]
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x100f948b
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [esp + 2ch], 0
        mov ecx, dword ptr [ebx + 120h]
        push 808080h
        lea edx, [esp + 30h]
        push esi
        push edx
        ; Exact mapped bytes E8 8F AB 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 124h]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 79 AB 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + esi*4 + 350h], 0
        mov ebx, dword ptr [ebx + esi*4 + 230h]
        ; Exact mapped bytes 66 81 63 24 F0 FF: and word ptr [ebx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        add esp, 120h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
