// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADE40 .. +0x1861 bytes.
extern "C" __declspec(naked) void FUN_587ade40_587ADE40() {
    __asm {
        sub esp, 40h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 50h]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 41 18 00 00: je 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 0F 84 37 18 00 00: je 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 0F 84 2D 18 00 00: je 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 22 18 00 00: je 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 0F 85 1A 18 00 00: jne 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        sub eax, 3f34h
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 09 18 00 00: ja 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        lea eax, [esi + 0ch]
        ; Exact mapped bytes 0F 84 FC 17 00 00: je 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 0F: jne 0x587adeac
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 0F 85 ED 17 00 00: jne 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x587adeae
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov edi, dword ptr [esi + 1ch]
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 40h], eax
        mov ecx, dword ptr [edi + 4]
        cmp ecx, 3f3fh
        ; Exact mapped bytes 75 10: jne 0x587aded4
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [edi + 4], 3f40h
        mov ecx, 3f40h
        mov dword ptr [esp + 40h], edx
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [esi]
        mov ebp, dword ptr [esi + 4]
        mov edx, dword ptr [edi + 3ch]
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esi + 10h]
        mov esi, dword ptr [edi + 40h]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 2ch], eax
        xor eax, eax
        mov dword ptr [esp + 30h], eax
        lea eax, [ecx - 3f34h]
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [esp + 44h], ebp
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 7F 17 00 00: ja 0x587af694
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 58h]
        ; Exact mapped bytes FF 24 85 A4 F6 7A 58: jmp dword ptr [eax*4 + 0x587af6a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xf6
        __asm _emit 0x7a
        __asm _emit 0x58
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x587adf37
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [edi + 4], 3f40h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes EB D5: jmp 0x587adf0c
        __asm _emit 0xeb
        __asm _emit 0xd5
        cmp esi, 10h
        ; Exact mapped bytes 73 2B: jae 0x587adf67
        __asm _emit 0x73
        __asm _emit 0x2b
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 14 16 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 10h
        ; Exact mapped bytes 72 D9: jb 0x587adf40
        __asm _emit 0x72
        __asm _emit 0xd9
        test byte ptr [edi + 0ch], 2
        ; Exact mapped bytes 74 5F: je 0x587adfcc
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp edx, 8b1fh
        ; Exact mapped bytes 75 57: jne 0x587adfcc
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [edi + 28h], 0
        ; Exact mapped bytes 75 07: jne 0x587adf82
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [edi + 28h], 0fh
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 E3 1B 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 1ch], eax
        lea eax, [esp + 2ch]
        push 2
        push eax
        ; Exact mapped bytes 66 C7 44 24 34 1F 8B: mov word ptr [esp + 0x34], 0x8b1f
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1f
        __asm _emit 0x8b
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 CA 1B 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 1ch], eax
        xor edx, edx
        xor esi, esi
        mov dword ptr [edi + 4], 3f35h
        mov eax, dword ptr [edi + 4]
        add esp, 18h
        mov dword ptr [esp + 14h], edx
        sub eax, 3f34h
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587adfda
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 30h], 0ffffffffh
        test byte ptr [edi + 0ch], 1
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587ae0ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        movzx eax, dl
        shr ecx, 8
        xor edx, edx
        shl eax, 8
        add eax, ecx
        mov ecx, 1fh
        div ecx
        test edx, edx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x587ae0ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        and al, 0fh
        cmp al, 8
        ; Exact mapped bytes 74 1F: je 0x587ae02d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9a90h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 28h]
        sub esi, 4
        shr edx, 4
        mov ecx, edx
        mov dword ptr [esp + 14h], edx
        and ecx, 0fh
        mov dword ptr [esp + 1ch], esi
        add ecx, 8
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x587ae04f
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edi + 28h], ecx
        mov eax, ecx
        cmp ecx, 0fh
        ; Exact mapped bytes 77 5B: ja 0x587ae0af
        __asm _emit 0x77
        __asm _emit 0x5b
        cmp ecx, eax
        ; Exact mapped bytes 77 57: ja 0x587ae0af
        __asm _emit 0x77
        __asm _emit 0x57
        push 0
        mov eax, 1
        mov dword ptr [edi + 14h], 0
        shl eax, cl
        push 0
        push 0
        mov dword ptr [edi + 18h], eax
        ; Exact mapped bytes E8 2C 1F 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        xor esi, esi
        mov ecx, dword ptr [esp + 60h]
        add esp, 0ch
        shr edx, 8
        not edx
        mov dword ptr [edi + 1ch], eax
        and edx, 2
        mov dword ptr [esp + 1ch], esi
        or edx, 3f3dh
        mov dword ptr [ecx + 30h], eax
        mov dword ptr [edi + 4], edx
        xor edx, edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [esp + 14h], edx
        sub eax, 3f34h
        ; Exact mapped bytes E9 5D FE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9aach
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 3E FE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9a78h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 1F FE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, 10h
        ; Exact mapped bytes 73 27: jae 0x587ae119
        __asm _emit 0x73
        __asm _emit 0x27
        test ebp, ebp
        ; Exact mapped bytes 0F 84 62 14 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 10h
        ; Exact mapped bytes 72 D9: jb 0x587ae0f2
        __asm _emit 0x72
        __asm _emit 0xd9
        mov dword ptr [edi + 14h], edx
        cmp dl, 8
        ; Exact mapped bytes 74 1F: je 0x587ae140
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9a90h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 CC FD FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, 0e000h
        ; Exact mapped bytes 74 1F: je 0x587ae167
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9ac0h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 A5 FD FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x587ae178
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, edx
        shr eax, 8
        and eax, 1
        mov dword ptr [ecx], eax
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 26: je 0x587ae1a7
        __asm _emit 0x74
        __asm _emit 0x26
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 20: je 0x587ae1a7
        __asm _emit 0x74
        __asm _emit 0x20
        mov byte ptr [esp + 20h], dl
        lea eax, [esp + 20h]
        push 2
        shr edx, 8
        push eax
        mov byte ptr [esp + 29h], dl
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 CF 19 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        xor edx, edx
        mov dword ptr [edi + 4], 3f36h
        mov dword ptr [esp + 14h], edx
        xor esi, esi
        ; Exact mapped bytes EB 08: jmp 0x587ae1c0
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp esi, 20h
        ; Exact mapped bytes 73 26: jae 0x587ae1e3
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 94 13 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 20h
        ; Exact mapped bytes 72 DD: jb 0x587ae1c0
        __asm _emit 0x72
        __asm _emit 0xdd
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x587ae1ed
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 4], edx
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 38: je 0x587ae22e
        __asm _emit 0x74
        __asm _emit 0x38
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 32: je 0x587ae22e
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, edx
        mov byte ptr [esp + 20h], dl
        shr eax, 8
        mov byte ptr [esp + 21h], al
        mov eax, edx
        shr eax, 10h
        mov byte ptr [esp + 22h], al
        lea eax, [esp + 20h]
        push 4
        shr edx, 18h
        push eax
        mov byte ptr [esp + 2bh], dl
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 48 19 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        xor edx, edx
        mov dword ptr [edi + 4], 3f37h
        mov dword ptr [esp + 14h], edx
        xor esi, esi
        ; Exact mapped bytes EB 05: jmp 0x587ae244
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp esi, 10h
        ; Exact mapped bytes 73 23: jae 0x587ae267
        __asm _emit 0x73
        __asm _emit 0x23
        test ebp, ebp
        ; Exact mapped bytes 0F 84 10 13 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 10h
        ; Exact mapped bytes 72 DD: jb 0x587ae244
        __asm _emit 0x72
        __asm _emit 0xdd
        mov esi, dword ptr [edi + 24h]
        mov ecx, edx
        shr ecx, 8
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x587ae27f
        __asm _emit 0x74
        __asm _emit 0x0c
        movzx eax, dl
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [edi + 24h]
        mov dword ptr [eax + 0ch], ecx
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 23: je 0x587ae2ab
        __asm _emit 0x74
        __asm _emit 0x23
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 1D: je 0x587ae2ab
        __asm _emit 0x74
        __asm _emit 0x1d
        push 2
        lea eax, [esp + 24h]
        mov byte ptr [esp + 24h], dl
        push eax
        mov byte ptr [esp + 29h], cl
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 CB 18 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        xor edx, edx
        mov dword ptr [edi + 4], 3f38h
        xor esi, esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        test dword ptr [edi + 14h], 400h
        ; Exact mapped bytes 74 78: je 0x587ae33f
        __asm _emit 0x74
        __asm _emit 0x78
        cmp esi, 10h
        ; Exact mapped bytes 73 27: jae 0x587ae2f3
        __asm _emit 0x73
        __asm _emit 0x27
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 84 12 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 10h
        ; Exact mapped bytes 72 DD: jb 0x587ae2d0
        __asm _emit 0x72
        __asm _emit 0xdd
        mov eax, dword ptr [edi + 24h]
        mov dword ptr [edi + 44h], edx
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x587ae300
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 14h], edx
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 26: je 0x587ae32f
        __asm _emit 0x74
        __asm _emit 0x26
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 20: je 0x587ae32f
        __asm _emit 0x74
        __asm _emit 0x20
        mov byte ptr [esp + 20h], dl
        lea eax, [esp + 20h]
        push 2
        shr edx, 8
        push eax
        mov byte ptr [esp + 29h], dl
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 47 18 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        xor esi, esi
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 0E: jmp 0x587ae34d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587ae34d
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 10h], 0
        mov dword ptr [edi + 4], 3f39h
        test dword ptr [edi + 14h], 400h
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x587ae409
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 44h]
        mov ecx, ebp
        cmp eax, ebp
        cmovbe ecx, eax
        mov dword ptr [esp + 34h], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x587ae401
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 24h]
        test edx, edx
        ; Exact mapped bytes 74 50: je 0x587ae3ce
        __asm _emit 0x74
        __asm _emit 0x50
        mov ebx, dword ptr [edx + 10h]
        test ebx, ebx
        mov dword ptr [esp + 4ch], ebx
        mov ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 74 41: je 0x587ae3ce
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [edx + 14h]
        sub edx, eax
        mov eax, dword ptr [edi + 24h]
        mov dword ptr [esp + 3ch], edx
        mov eax, dword ptr [eax + 18h]
        mov dword ptr [esp + 48h], eax
        cmp edx, eax
        ; Exact mapped bytes 73 2A: jae 0x587ae3ce
        __asm _emit 0x73
        __asm _emit 0x2a
        add ecx, edx
        mov edx, eax
        sub edx, dword ptr [esp + 3ch]
        cmp ecx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 34h]
        cmova eax, edx
        push eax
        mov eax, dword ptr [esp + 40h]
        add eax, dword ptr [esp + 50h]
        push ebx
        push eax
        ; Exact mapped bytes E8 C9 E4 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 40h]
        add esp, 0ch
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 16: je 0x587ae3ed
        __asm _emit 0x74
        __asm _emit 0x16
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 10: je 0x587ae3ed
        __asm _emit 0x74
        __asm _emit 0x10
        push ecx
        push ebx
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 89 17 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [esp + 34h]
        sub ebp, ecx
        mov eax, dword ptr [edi + 44h]
        add ebx, ecx
        sub eax, ecx
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [edi + 44h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 53 11 00 00: jne 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 44h], 0
        mov dword ptr [edi + 4], 3f3ah
        test dword ptr [edi + 14h], 800h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x587ae4ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 30 11 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov al, byte ptr [ebx + ecx]
        inc ecx
        mov byte ptr [esp + 13h], al
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587ae45e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [eax + 1ch]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x587ae45e
        __asm _emit 0x74
        __asm _emit 0x18
        mov esi, dword ptr [edi + 44h]
        cmp esi, dword ptr [eax + 20h]
        ; Exact mapped bytes 73 10: jae 0x587ae45e
        __asm _emit 0x73
        __asm _emit 0x10
        mov bl, byte ptr [esp + 13h]
        mov eax, esi
        mov byte ptr [edx + eax], bl
        inc dword ptr [edi + 44h]
        mov ebx, dword ptr [esp + 18h]
        mov al, byte ptr [esp + 13h]
        test al, al
        ; Exact mapped bytes 74 04: je 0x587ae46a
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, ebp
        ; Exact mapped bytes 72 C6: jb 0x587ae430
        __asm _emit 0x72
        __asm _emit 0xc6
        test dword ptr [edi + 14h], 200h
        mov esi, dword ptr [esp + 1ch]
        mov dword ptr [esp + 4ch], ecx
        ; Exact mapped bytes 74 1E: je 0x587ae499
        __asm _emit 0x74
        __asm _emit 0x1e
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 18: je 0x587ae499
        __asm _emit 0x74
        __asm _emit 0x18
        push ecx
        push ebx
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 E5 16 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 58h]
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        mov al, byte ptr [esp + 13h]
        add ebx, ecx
        sub ebp, ecx
        mov dword ptr [esp + 18h], ebx
        test al, al
        ; Exact mapped bytes 0F 85 B3 10 00 00: jne 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x587ae4b9
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587ae4b9
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 1ch], 0
        mov dword ptr [edi + 44h], 0
        mov dword ptr [edi + 4], 3f3bh
        test dword ptr [edi + 14h], 1000h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x587ae55b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 80 10 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov al, byte ptr [ebx + ecx]
        inc ecx
        mov byte ptr [esp + 13h], al
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587ae50e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [eax + 24h]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x587ae50e
        __asm _emit 0x74
        __asm _emit 0x18
        mov esi, dword ptr [edi + 44h]
        cmp esi, dword ptr [eax + 28h]
        ; Exact mapped bytes 73 10: jae 0x587ae50e
        __asm _emit 0x73
        __asm _emit 0x10
        mov bl, byte ptr [esp + 13h]
        mov eax, esi
        mov byte ptr [edx + eax], bl
        inc dword ptr [edi + 44h]
        mov ebx, dword ptr [esp + 18h]
        mov al, byte ptr [esp + 13h]
        test al, al
        ; Exact mapped bytes 74 04: je 0x587ae51a
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, ebp
        ; Exact mapped bytes 72 C6: jb 0x587ae4e0
        __asm _emit 0x72
        __asm _emit 0xc6
        test dword ptr [edi + 14h], 200h
        mov esi, dword ptr [esp + 1ch]
        mov dword ptr [esp + 4ch], ecx
        ; Exact mapped bytes 74 1E: je 0x587ae549
        __asm _emit 0x74
        __asm _emit 0x1e
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 18: je 0x587ae549
        __asm _emit 0x74
        __asm _emit 0x18
        push ecx
        push ebx
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes E8 35 16 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 58h]
        add esp, 0ch
        mov dword ptr [edi + 1ch], eax
        mov al, byte ptr [esp + 13h]
        add ebx, ecx
        sub ebp, ecx
        mov dword ptr [esp + 18h], ebx
        test al, al
        ; Exact mapped bytes 0F 85 03 10 00 00: jne 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x587ae569
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587ae569
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 24h], 0
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edi + 4], 3f3ch
        test dword ptr [edi + 14h], 200h
        ; Exact mapped bytes 74 67: je 0x587ae5e4
        __asm _emit 0x74
        __asm _emit 0x67
        cmp esi, 10h
        ; Exact mapped bytes 73 27: jae 0x587ae5a9
        __asm _emit 0x73
        __asm _emit 0x27
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D2 0F 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 10h
        ; Exact mapped bytes 72 D9: jb 0x587ae582
        __asm _emit 0x72
        __asm _emit 0xd9
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 27: je 0x587ae5d6
        __asm _emit 0x74
        __asm _emit 0x27
        movzx eax, word ptr [edi + 1ch]
        cmp edx, eax
        ; Exact mapped bytes 74 1F: je 0x587ae5d6
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9adch
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 36 F9 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 1ch], esi
        mov ecx, dword ptr [edi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x587ae601
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [edi + 14h]
        sar eax, 9
        and eax, 1
        mov dword ptr [ecx + 2ch], eax
        mov eax, dword ptr [edi + 24h]
        mov dword ptr [eax + 30h], 1
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 64 15 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 60h]
        add esp, 0ch
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edi + 1ch], eax
        mov dword ptr [ecx + 30h], eax
        mov dword ptr [edi + 4], 3f3fh
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 DB F8 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, 20h
        ; Exact mapped bytes 73 23: jae 0x587ae659
        __asm _emit 0x73
        __asm _emit 0x23
        test ebp, ebp
        ; Exact mapped bytes 0F 84 1E 0F 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 20h
        ; Exact mapped bytes 72 DD: jb 0x587ae636
        __asm _emit 0x72
        __asm _emit 0xdd
        mov eax, dword ptr [esp + 54h]
        bswap edx
        mov dword ptr [edi + 1ch], edx
        mov dword ptr [eax + 30h], edx
        xor edx, edx
        mov dword ptr [esp + 14h], edx
        xor esi, esi
        mov dword ptr [edi + 4], 3f3eh
        ; Exact mapped bytes EB 04: jmp 0x587ae67a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 54h]
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 0F 84 7F 0E 00 00: je 0x587af503
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 11 19 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 60h]
        add esp, 0ch
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edi + 1ch], eax
        mov dword ptr [ecx + 30h], eax
        mov ecx, dword ptr [esp + 58h]
        mov dword ptr [edi + 4], 3f3fh
        cmp ecx, 5
        ; Exact mapped bytes 0F 84 A8 0E 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 9F 0E 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 0
        ; Exact mapped bytes 74 25: je 0x587ae6e8
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, esi
        mov dword ptr [edi + 4], 3f4eh
        mov eax, dword ptr [edi + 4]
        and ecx, 7
        shr edx, cl
        sub esi, ecx
        mov dword ptr [esp + 14h], edx
        sub eax, 3f34h
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 24 F8 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, 3
        ; Exact mapped bytes 73 26: jae 0x587ae713
        __asm _emit 0x73
        __asm _emit 0x26
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 64 0E 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 3
        ; Exact mapped bytes 72 DD: jb 0x587ae6f0
        __asm _emit 0x72
        __asm _emit 0xdd
        mov eax, edx
        shr edx, 1
        and eax, 1
        mov dword ptr [esp + 14h], edx
        mov dword ptr [edi + 8], eax
        mov eax, edx
        and eax, 3
        sub eax, 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x587ae7c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 54: je 0x587ae788
        __asm _emit 0x74
        __asm _emit 0x54
        sub eax, 1
        ; Exact mapped bytes 74 2D: je 0x587ae766
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 54h]
        sub esi, 3
        shr edx, 2
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [eax + 18h], 588b9af0h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 A6 F7 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 4], 3f44h
        sub esi, 3
        mov eax, dword ptr [edi + 4]
        shr edx, 2
        sub eax, 3f34h
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 84 F7 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes E8 42 35 00 00: call 0x587b1cd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 5ch]
        add esp, 4
        mov dword ptr [edi + 4], 3f47h
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 84 0D 00 00: je 0x587af529
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        sub esi, 3
        mov eax, dword ptr [edi + 4]
        shr edx, 2
        sub eax, 3f34h
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 48 F7 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 4], 3f41h
        sub esi, 3
        mov eax, dword ptr [edi + 4]
        shr edx, 2
        sub eax, 3f34h
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 26 F7 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        and ecx, 7
        sub esi, ecx
        shr edx, cl
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        cmp esi, 20h
        ; Exact mapped bytes 73 2B: jae 0x587ae827
        __asm _emit 0x73
        __asm _emit 0x2b
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 54 0D 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 20h
        ; Exact mapped bytes 72 D9: jb 0x587ae800
        __asm _emit 0x72
        __asm _emit 0xd9
        mov eax, edx
        movzx ecx, dx
        not eax
        shr eax, 10h
        cmp ecx, eax
        ; Exact mapped bytes 74 1F: je 0x587ae854
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9b04h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 B8 F6 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 44h], ecx
        xor edx, edx
        mov ecx, dword ptr [esp + 58h]
        xor esi, esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [edi + 4], 3f42h
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 E9 0C 00 00: je 0x587af560
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 4], 3f43h
        mov ecx, dword ptr [edi + 44h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B2 07 00 00: je 0x587af03b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebp
        mov eax, ebp
        cmovbe eax, ecx
        cmp eax, dword ptr [esp + 24h]
        cmova eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 4ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 0C 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        push eax
        push ebx
        push ecx
        ; Exact mapped bytes E8 DF DF 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esp + 58h]
        add esp, 0ch
        sub dword ptr [esp + 24h], eax
        add ebx, eax
        add dword ptr [esp + 28h], eax
        sub ebp, eax
        sub dword ptr [edi + 44h], eax
        mov eax, dword ptr [edi + 4]
        mov edx, dword ptr [esp + 14h]
        sub eax, 3f34h
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes E9 30 F6 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, 0eh
        ; Exact mapped bytes 73 23: jae 0x587ae904
        __asm _emit 0x73
        __asm _emit 0x23
        test ebp, ebp
        ; Exact mapped bytes 0F 84 73 0C 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 0eh
        ; Exact mapped bytes 72 DD: jb 0x587ae8e1
        __asm _emit 0x72
        __asm _emit 0xdd
        mov ecx, edx
        sub esi, 0eh
        shr edx, 5
        and ecx, 1fh
        mov eax, edx
        mov dword ptr [esp + 1ch], esi
        and eax, 1fh
        shr edx, 5
        inc eax
        add ecx, 101h
        mov dword ptr [esp + 4ch], eax
        mov dword ptr [edi + 68h], eax
        mov eax, edx
        and eax, 0fh
        shr edx, 4
        add eax, 4
        mov dword ptr [edi + 64h], ecx
        mov dword ptr [edi + 60h], eax
        mov dword ptr [esp + 14h], edx
        cmp ecx, 11eh
        ; Exact mapped bytes 0F 87 02 01 00 00: ja 0x587aea4c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 4ch], 1eh
        ; Exact mapped bytes 0F 87 F7 00 00 00: ja 0x587aea4c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], 0
        mov dword ptr [edi + 4], 3f45h
        mov eax, dword ptr [edi + 6ch]
        cmp eax, dword ptr [edi + 60h]
        ; Exact mapped bytes 73 5B: jae 0x587ae9c6
        __asm _emit 0x73
        __asm _emit 0x5b
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 3
        ; Exact mapped bytes 73 23: jae 0x587ae998
        __asm _emit 0x73
        __asm _emit 0x23
        test ebp, ebp
        ; Exact mapped bytes 0F 84 DF 0B 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, 3
        ; Exact mapped bytes 72 DD: jb 0x587ae975
        __asm _emit 0x72
        __asm _emit 0xdd
        mov eax, dword ptr [edi + 6ch]
        mov ecx, edx
        and ecx, 7
        shr edx, 3
        sub esi, 3
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        movzx eax, word ptr [eax*2 + 588b9a50h]
        ; Exact mapped bytes 66 89 4C 47 74: mov word ptr [edi + eax*2 + 0x74], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0x74
        inc dword ptr [edi + 6ch]
        mov eax, dword ptr [edi + 6ch]
        cmp eax, dword ptr [edi + 60h]
        ; Exact mapped bytes 72 AA: jb 0x587ae970
        __asm _emit 0x72
        __asm _emit 0xaa
        cmp eax, 13h
        ; Exact mapped bytes 73 20: jae 0x587ae9eb
        __asm _emit 0x73
        __asm _emit 0x20
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [eax*2 + 588b9a50h]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 47 74: mov word ptr [edi + eax*2 + 0x74], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0x74
        mov eax, dword ptr [edi + 6ch]
        inc eax
        mov dword ptr [edi + 6ch], eax
        cmp eax, 13h
        ; Exact mapped bytes 72 E5: jb 0x587ae9d0
        __asm _emit 0x72
        __asm _emit 0xe5
        lea eax, [edi + 534h]
        mov dword ptr [edi + 58h], 7
        lea edx, [edi + 70h]
        mov dword ptr [edi + 54h], eax
        mov dword ptr [edx], eax
        lea ecx, [edi + 58h]
        mov dword ptr [edi + 50h], eax
        lea eax, [edi + 2f4h]
        push eax
        push ecx
        push edx
        push 13h
        lea eax, [edi + 74h]
        push eax
        push 0
        ; Exact mapped bytes E8 E4 32 00 00: call 0x587b1d00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        mov ecx, eax
        add esp, 18h
        mov dword ptr [esp + 30h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x587aea6b
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9b48h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 C0 F4 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9b24h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 A1 F4 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 6ch], 0
        mov dword ptr [edi + 4], 3f46h
        mov eax, dword ptr [edi + 68h]
        add eax, dword ptr [edi + 64h]
        cmp dword ptr [edi + 6ch], eax
        ; Exact mapped bytes 0F 83 71 02 00 00: jae 0x587aecf9
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 58h]
        mov eax, 1
        mov ebx, dword ptr [edi + 50h]
        shl eax, cl
        dec eax
        and eax, edx
        mov eax, dword ptr [ebx + eax*4]
        mov ecx, eax
        shr ecx, 8
        mov ebx, eax
        shr ebx, 10h
        mov dword ptr [esp + 4ch], ecx
        movzx ecx, cl
        mov dword ptr [esp + 3ch], ebx
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [esp + 34h], eax
        cmp ecx, esi
        ; Exact mapped bytes 76 5F: jbe 0x587aeb23
        __asm _emit 0x76
        __asm _emit 0x5f
        test ebp, ebp
        ; Exact mapped bytes 0F 84 90 0A 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        mov ecx, dword ptr [edi + 58h]
        add edx, eax
        mov eax, 1
        mov dword ptr [esp + 14h], edx
        shl eax, cl
        add esi, 8
        mov ecx, dword ptr [edi + 50h]
        dec eax
        and eax, edx
        mov dword ptr [esp + 18h], ebx
        dec ebp
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, eax
        shr ecx, 8
        mov dword ptr [esp + 4ch], ecx
        mov dword ptr [esp + 1ch], eax
        shr dword ptr [esp + 1ch], 10h
        movzx ecx, cl
        mov dword ptr [esp + 34h], eax
        cmp ecx, esi
        ; Exact mapped bytes 77 B2: ja 0x587aeac4
        __asm _emit 0x77
        __asm _emit 0xb2
        mov ecx, dword ptr [esp + 1ch]
        movzx ecx, cx
        mov dword ptr [esp + 3ch], ecx
        mov cl, byte ptr [esp + 4ch]
        ; Exact mapped bytes EB 04: jmp 0x587aeb27
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 4ch]
        mov edi, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 83 FF 10: cmp di, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x10
        movzx ebx, di
        mov dword ptr [esp + 48h], ebx
        movzx ebx, di
        mov edi, dword ptr [esp + 38h]
        mov dword ptr [esp + 4ch], ebx
        mov ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 73 2A: jae 0x587aeb71
        __asm _emit 0x73
        __asm _emit 0x2a
        shr edx, cl
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        sub esi, ecx
        shr eax, 10h
        mov ecx, dword ptr [edi + 6ch]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 66 89 44 4F 74: mov word ptr [edi + ecx*2 + 0x74], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4f
        __asm _emit 0x74
        inc dword ptr [edi + 6ch]
        mov ecx, dword ptr [edi + 6ch]
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x587aeceb
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 4C 10: cmp word ptr [esp + 0x4c], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x10
        movzx eax, cl
        ; Exact mapped bytes 75 6B: jne 0x587aebe7
        __asm _emit 0x75
        __asm _emit 0x6b
        add eax, 2
        mov dword ptr [esp + 4ch], eax
        cmp esi, eax
        ; Exact mapped bytes 73 24: jae 0x587aebab
        __asm _emit 0x73
        __asm _emit 0x24
        test ebp, ebp
        ; Exact mapped bytes 0F 84 CD 09 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, dword ptr [esp + 4ch]
        ; Exact mapped bytes 72 DC: jb 0x587aeb87
        __asm _emit 0x72
        __asm _emit 0xdc
        movzx ecx, byte ptr [esp + 35h]
        mov eax, dword ptr [edi + 6ch]
        sub esi, ecx
        shr edx, cl
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        test eax, eax
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x587aed2f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + eax*2 + 72h]
        mov ecx, edx
        and ecx, 3
        shr edx, 2
        add ecx, 3
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 34h], ecx
        sub esi, 2
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x587aec9b
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 48 11: cmp word ptr [esp + 0x48], 0x11
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x11
        ; Exact mapped bytes 75 52: jne 0x587aec41
        __asm _emit 0x75
        __asm _emit 0x52
        add eax, 3
        mov dword ptr [esp + 4ch], eax
        cmp esi, eax
        ; Exact mapped bytes 73 2A: jae 0x587aec24
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 54 09 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, dword ptr [esp + 4ch]
        ; Exact mapped bytes 72 DC: jb 0x587aec00
        __asm _emit 0x72
        __asm _emit 0xdc
        movzx ecx, byte ptr [esp + 35h]
        shr edx, cl
        mov eax, edx
        and eax, 7
        add eax, 3
        shr edx, 3
        mov dword ptr [esp + 34h], eax
        mov eax, 0fffffffdh
        ; Exact mapped bytes EB 4E: jmp 0x587aec8f
        __asm _emit 0xeb
        __asm _emit 0x4e
        add eax, 7
        mov dword ptr [esp + 4ch], eax
        cmp esi, eax
        ; Exact mapped bytes 73 28: jae 0x587aec74
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 04 09 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        add edx, eax
        mov dword ptr [esp + 18h], ebx
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        cmp esi, dword ptr [esp + 4ch]
        ; Exact mapped bytes 72 DC: jb 0x587aec50
        __asm _emit 0x72
        __asm _emit 0xdc
        movzx ecx, byte ptr [esp + 35h]
        shr edx, cl
        mov eax, edx
        and eax, 7fh
        add eax, 0bh
        shr edx, 7
        mov dword ptr [esp + 34h], eax
        mov eax, 0fffffff9h
        sub eax, ecx
        mov dword ptr [esp + 3ch], 0
        add esi, eax
        mov eax, dword ptr [edi + 6ch]
        mov ecx, dword ptr [edi + 68h]
        add ecx, dword ptr [edi + 64h]
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [esp + 48h], eax
        mov eax, dword ptr [esp + 34h]
        add eax, dword ptr [esp + 48h]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        cmp eax, ecx
        ; Exact mapped bytes 77 6F: ja 0x587aed2f
        __asm _emit 0x77
        __asm _emit 0x6f
        mov ebx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 54 4F 74: mov word ptr [edi + ecx*2 + 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x4f
        __asm _emit 0x74
        mov ecx, dword ptr [edi + 6ch]
        lea ecx, [ecx + 1]
        mov dword ptr [edi + 6ch], ecx
        sub ebx, 1
        ; Exact mapped bytes 75 ED: jne 0x587aecd0
        __asm _emit 0x75
        __asm _emit 0xed
        mov ebx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [edi + 68h]
        add eax, dword ptr [edi + 64h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 82 97 FD FF FF: jb 0x587aea90
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 54h]
        cmp dword ptr [edi + 4], 3f51h
        ; Exact mapped bytes 0F 84 EC 07 00 00: je 0x587af4f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF 74 02 00 00 00: cmp word ptr [edi + 0x274], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2F: jne 0x587aed43
        __asm _emit 0x75
        __asm _emit 0x2f
        mov dword ptr [ecx + 18h], 588b9b80h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 DD F1 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 54h]
        mov dword ptr [ecx + 18h], 588b9b64h
        mov dword ptr [edi + 4], 3f51h
        ; Exact mapped bytes EB BA: jmp 0x587aecfd
        __asm _emit 0xeb
        __asm _emit 0xba
        lea eax, [edi + 534h]
        mov dword ptr [edi + 58h], 9
        lea ecx, [edi + 70h]
        mov dword ptr [edi + 50h], eax
        mov dword ptr [ecx], eax
        lea edx, [edi + 2f4h]
        push edx
        lea eax, [edi + 58h]
        push eax
        push ecx
        push dword ptr [edi + 64h]
        lea eax, [edi + 74h]
        push eax
        push 1
        ; Exact mapped bytes E8 8E 2F 00 00: call 0x587b1d00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add esp, 18h
        mov dword ptr [esp + 30h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x587aeda2
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esp + 54h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax + 18h], 588b9ba8h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 6A F1 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 70h]
        lea ecx, [edi + 70h]
        mov dword ptr [edi + 54h], eax
        lea edx, [edi + 2f4h]
        push edx
        lea eax, [edi + 5ch]
        mov dword ptr [eax], 6
        push eax
        mov eax, dword ptr [edi + 64h]
        push ecx
        push dword ptr [edi + 68h]
        add eax, 3ah
        lea eax, [edi + eax*2]
        push eax
        push 2
        ; Exact mapped bytes E8 2F 2F 00 00: call 0x587b1d00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 30h], eax
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x587aedff
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esp + 54h]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax + 18h], 588b9bc4h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 0D F1 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 58h]
        mov dword ptr [edi + 4], 3f47h
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 4D 07 00 00: je 0x587af560
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edi + 4], 3f48h
        cmp ebp, 6
        ; Exact mapped bytes 0F 82 8B 00 00 00: jb 0x587aeeb2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], 102h
        ; Exact mapped bytes 0F 82 7D 00 00 00: jb 0x587aeeb2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 28h]
        push dword ptr [esp + 2ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esp + 58h]
        mov ecx, dword ptr [esp + 28h]
        push eax
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 4], ebp
        mov dword ptr [edi + 3ch], edx
        mov dword ptr [edi + 40h], esi
        ; Exact mapped bytes E8 51 34 00 00: call 0x587b22b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 48h]
        add esp, 8
        cmp dword ptr [edi + 4], 3f3fh
        mov ecx, dword ptr [esp + 54h]
        mov edx, dword ptr [edi + 3ch]
        mov eax, dword ptr [eax]
        mov esi, dword ptr [edi + 40h]
        mov ebx, dword ptr [ecx]
        mov ebp, dword ptr [ecx + 4]
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ecx + 10h]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 0F 85 5B 06 00 00: jne 0x587af4f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 1bc8h], 0ffffffffh
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 5A F0 FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 50h]
        mov ecx, dword ptr [edi + 58h]
        mov dword ptr [esp + 34h], eax
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [edi + 50h]
        dec eax
        and eax, edx
        mov dword ptr [edi + 1bc8h], 0
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        cmp ecx, esi
        ; Exact mapped bytes 76 4C: jbe 0x587aef2e
        __asm _emit 0x76
        __asm _emit 0x4c
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 64 06 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        mov ecx, dword ptr [edi + 58h]
        add edx, eax
        mov eax, 1
        mov dword ptr [esp + 14h], edx
        shl eax, cl
        add esi, 8
        mov ecx, dword ptr [esp + 34h]
        dec eax
        and eax, edx
        mov dword ptr [esp + 18h], ebx
        dec ebp
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        cmp ecx, esi
        ; Exact mapped bytes 77 C2: ja 0x587aeef0
        __asm _emit 0x77
        __asm _emit 0xc2
        test al, al
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x587aefef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 0f0h
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x587aefef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov edi, 1
        shr ecx, 8
        mov edx, eax
        movzx ebx, cl
        movzx ecx, al
        add ecx, ebx
        shr eax, 10h
        shl edi, cl
        mov ecx, ebx
        dec edi
        mov dword ptr [esp + 1ch], edx
        and edi, dword ptr [esp + 14h]
        shr edi, cl
        mov ecx, dword ptr [esp + 34h]
        add edi, eax
        mov eax, dword ptr [ecx + edi*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        add ecx, ebx
        cmp ecx, esi
        ; Exact mapped bytes 76 5B: jbe 0x587aefd6
        __asm _emit 0x76
        __asm _emit 0x5b
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D0 05 00 00: je 0x587af558
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 18h]
        mov ecx, esi
        mov edi, 1
        add esi, 8
        dec ebp
        movzx eax, byte ptr [ebx]
        inc ebx
        shl eax, cl
        add dword ptr [esp + 14h], eax
        movzx eax, word ptr [esp + 1eh]
        mov dword ptr [esp + 18h], ebx
        movzx ebx, byte ptr [esp + 1dh]
        movzx ecx, dl
        add ecx, ebx
        shl edi, cl
        mov ecx, ebx
        dec edi
        and edi, dword ptr [esp + 14h]
        shr edi, cl
        add edi, eax
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + edi*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        add ecx, ebx
        cmp ecx, esi
        ; Exact mapped bytes 77 AA: ja 0x587aef80
        __asm _emit 0x77
        __asm _emit 0xaa
        movzx ecx, byte ptr [esp + 1dh]
        mov edi, dword ptr [esp + 38h]
        shr dword ptr [esp + 14h], cl
        sub esi, ecx
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [edi + 1bc8h], ecx
        mov ecx, eax
        shr ecx, 8
        movzx edx, cl
        add dword ptr [edi + 1bc8h], edx
        mov ecx, edx
        shr dword ptr [esp + 14h], cl
        sub esi, edx
        mov edx, dword ptr [esp + 14h]
        mov ecx, eax
        shr ecx, 10h
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [edi + 44h], ecx
        test al, al
        ; Exact mapped bytes 75 14: jne 0x587af02d
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [edi + 4], 3f4dh
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 DF EE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 20h
        ; Exact mapped bytes 74 1E: je 0x587af04f
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [edi + 1bc8h], 0ffffffffh
        mov dword ptr [edi + 4], 3f3fh
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 BD EE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 40h
        ; Exact mapped bytes 74 1F: je 0x587af072
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9bdch
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 9A EE FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        and eax, 0fh
        mov dword ptr [edi + 4], 3f49h
        mov dword ptr [edi + 4ch], eax
        mov ecx, dword ptr [edi + 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 49: je 0x587af0d2
        __asm _emit 0x74
        __asm _emit 0x49
        cmp esi, ecx
        ; Exact mapped bytes 73 2A: jae 0x587af0b7
        __asm _emit 0x73
        __asm _emit 0x2a
        mov dword ptr [esp + 4ch], ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 C3 04 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        mov ecx, dword ptr [esp + 4ch]
        add edx, eax
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, ecx
        ; Exact mapped bytes 72 DA: jb 0x587af091
        __asm _emit 0x72
        __asm _emit 0xda
        mov eax, 1
        sub esi, ecx
        shl eax, cl
        dec eax
        and eax, edx
        shr edx, cl
        add dword ptr [edi + 44h], eax
        add dword ptr [edi + 1bc8h], ecx
        mov dword ptr [esp + 14h], edx
        mov eax, dword ptr [edi + 44h]
        mov dword ptr [edi + 1bcch], eax
        mov dword ptr [edi + 4], 3f4ah
        mov eax, dword ptr [edi + 54h]
        mov ecx, dword ptr [edi + 5ch]
        mov dword ptr [esp + 34h], eax
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [edi + 54h]
        dec eax
        and eax, edx
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        cmp ecx, esi
        ; Exact mapped bytes 76 46: jbe 0x587af14e
        __asm _emit 0x76
        __asm _emit 0x46
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esp + 34h], eax
        test ebp, ebp
        ; Exact mapped bytes 0F 84 44 04 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        mov ecx, dword ptr [edi + 5ch]
        add edx, eax
        mov eax, 1
        mov dword ptr [esp + 14h], edx
        shl eax, cl
        add esi, 8
        mov ecx, dword ptr [esp + 34h]
        dec eax
        and eax, edx
        mov dword ptr [esp + 18h], ebx
        dec ebp
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        cmp ecx, esi
        ; Exact mapped bytes 77 C2: ja 0x587af110
        __asm _emit 0x77
        __asm _emit 0xc2
        test al, 0f0h
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x587af200
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov edi, 1
        shr ecx, 8
        mov edx, eax
        movzx ebx, cl
        movzx ecx, al
        add ecx, ebx
        shr eax, 10h
        shl edi, cl
        mov ecx, ebx
        dec edi
        mov dword ptr [esp + 1ch], edx
        and edi, dword ptr [esp + 14h]
        shr edi, cl
        mov ecx, dword ptr [esp + 34h]
        add edi, eax
        mov eax, dword ptr [ecx + edi*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        add ecx, ebx
        cmp ecx, esi
        ; Exact mapped bytes 76 56: jbe 0x587af1e9
        __asm _emit 0x76
        __asm _emit 0x56
        test ebp, ebp
        ; Exact mapped bytes 0F 84 BD 03 00 00: je 0x587af558
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 18h]
        mov ecx, esi
        mov edi, 1
        add esi, 8
        dec ebp
        movzx eax, byte ptr [ebx]
        inc ebx
        shl eax, cl
        add dword ptr [esp + 14h], eax
        movzx eax, word ptr [esp + 1eh]
        mov dword ptr [esp + 18h], ebx
        movzx ebx, byte ptr [esp + 1dh]
        movzx ecx, dl
        add ecx, ebx
        shl edi, cl
        mov ecx, ebx
        dec edi
        and edi, dword ptr [esp + 14h]
        shr edi, cl
        add edi, eax
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + edi*4]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        add ecx, ebx
        cmp ecx, esi
        ; Exact mapped bytes 77 AA: ja 0x587af193
        __asm _emit 0x77
        __asm _emit 0xaa
        movzx ecx, byte ptr [esp + 1dh]
        mov edi, dword ptr [esp + 38h]
        sub esi, ecx
        mov edx, dword ptr [esp + 14h]
        shr edx, cl
        add dword ptr [edi + 1bc8h], ecx
        mov ebx, dword ptr [esp + 18h]
        mov ecx, eax
        shr ecx, 8
        movzx ecx, cl
        add dword ptr [edi + 1bc8h], ecx
        sub esi, ecx
        shr edx, cl
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        test al, 40h
        ; Exact mapped bytes 74 1F: je 0x587af241
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9bf8h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 CB EC FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov dword ptr [edi + 4], 3f4bh
        shr ecx, 10h
        movzx eax, al
        and eax, 0fh
        mov dword ptr [edi + 48h], ecx
        mov dword ptr [edi + 4ch], eax
        mov ecx, dword ptr [edi + 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x587af2ad
        __asm _emit 0x74
        __asm _emit 0x4d
        cmp esi, ecx
        ; Exact mapped bytes 73 2A: jae 0x587af28e
        __asm _emit 0x73
        __asm _emit 0x2a
        mov dword ptr [esp + 4ch], ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 EC 02 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        inc ebx
        mov ecx, dword ptr [esp + 4ch]
        add edx, eax
        add esi, 8
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, ecx
        ; Exact mapped bytes 72 DA: jb 0x587af268
        __asm _emit 0x72
        __asm _emit 0xda
        mov eax, 1
        sub esi, ecx
        shl eax, cl
        dec eax
        mov dword ptr [esp + 1ch], esi
        and eax, edx
        shr edx, cl
        add dword ptr [edi + 48h], eax
        add dword ptr [edi + 1bc8h], ecx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [edi + 4], 3f4ch
        mov ecx, dword ptr [esp + 24h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9C 02 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        sub eax, ecx
        mov ecx, dword ptr [edi + 48h]
        cmp ecx, eax
        ; Exact mapped bytes 76 64: jbe 0x587af331
        __asm _emit 0x76
        __asm _emit 0x64
        sub ecx, eax
        mov dword ptr [esp + 48h], ecx
        cmp ecx, dword ptr [edi + 30h]
        ; Exact mapped bytes 76 28: jbe 0x587af300
        __asm _emit 0x76
        __asm _emit 0x28
        cmp dword ptr [edi + 1bc4h], 0
        ; Exact mapped bytes 74 1F: je 0x587af300
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9c10h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 0C EC FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        cmp ecx, eax
        ; Exact mapped bytes 76 09: jbe 0x587af310
        __asm _emit 0x76
        __asm _emit 0x09
        sub ecx, eax
        mov eax, dword ptr [edi + 2ch]
        mov dword ptr [esp + 48h], ecx
        sub eax, ecx
        add eax, dword ptr [edi + 38h]
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [edi + 44h]
        mov ecx, eax
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 48h]
        cmp eax, ecx
        cmovbe ecx, eax
        mov eax, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 0F: jmp 0x587af340
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 28h]
        sub eax, ecx
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [edi + 44h]
        mov ecx, eax
        mov edx, dword ptr [esp + 24h]
        cmp ecx, edx
        mov ebx, dword ptr [esp + 3ch]
        cmova ecx, edx
        sub edx, ecx
        sub eax, ecx
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esp + 28h]
        sub ebx, edx
        mov dword ptr [edi + 44h], eax
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov al, byte ptr [ebx + edx]
        mov byte ptr [edx], al
        inc edx
        sub ecx, 1
        ; Exact mapped bytes 75 F5: jne 0x587af360
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [esp + 14h]
        cmp dword ptr [edi + 44h], ecx
        ; Exact mapped bytes 0F 85 76 01 00 00: jne 0x587af4f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 4], 3f48h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 78 EB FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 24h], 0
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        mov al, byte ptr [edi + 44h]
        dec dword ptr [esp + 24h]
        mov byte ptr [ecx], al
        inc ecx
        mov dword ptr [edi + 4], 3f48h
        mov eax, dword ptr [edi + 4]
        mov dword ptr [esp + 28h], ecx
        sub eax, 3f34h
        ; Exact mapped bytes E9 47 EB FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x587af492
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 20h
        ; Exact mapped bytes 73 27: jae 0x587af3fb
        __asm _emit 0x73
        __asm _emit 0x27
        test ebp, ebp
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 20h
        ; Exact mapped bytes 72 D9: jb 0x587af3d4
        __asm _emit 0x72
        __asm _emit 0xd9
        mov eax, dword ptr [esp + 2ch]
        sub eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 54h]
        mov dword ptr [esp + 2ch], eax
        add dword ptr [ecx + 14h], eax
        add dword ptr [edi + 20h], eax
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 37: je 0x587af44e
        __asm _emit 0x74
        __asm _emit 0x37
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x587af44e
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 2ch]
        sub eax, edx
        cmp dword ptr [edi + 14h], 0
        mov ecx, dword ptr [edi + 1ch]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 74 07: je 0x587af438
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 3A 07 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587af43d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 63 0B 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 60h]
        add esp, 0ch
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edi + 1ch], eax
        mov dword ptr [ecx + 30h], eax
        test byte ptr [edi + 0ch], 4
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 74 2A: je 0x587af486
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [edi + 14h], 0
        mov eax, edx
        ; Exact mapped bytes 75 02: jne 0x587af466
        __asm _emit 0x75
        __asm _emit 0x02
        bswap eax
        cmp eax, dword ptr [edi + 1ch]
        ; Exact mapped bytes 74 1B: je 0x587af486
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ecx + 18h], 588b9c30h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 86 EA FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        xor esi, esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [edi + 4], 3f4fh
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587af53d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 14h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x587af53d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 20h
        ; Exact mapped bytes 73 27: jae 0x587af4d9
        __asm _emit 0x73
        __asm _emit 0x27
        test ebp, ebp
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x587af55c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx]
        mov ecx, esi
        shl eax, cl
        add esi, 8
        add edx, eax
        mov dword ptr [esp + 1ch], esi
        inc ebx
        mov dword ptr [esp + 14h], edx
        dec ebp
        mov dword ptr [esp + 18h], ebx
        cmp esi, 20h
        ; Exact mapped bytes 72 D9: jb 0x587af4b2
        __asm _emit 0x72
        __asm _emit 0xd9
        test byte ptr [edi + 0ch], 4
        ; Exact mapped bytes 74 54: je 0x587af533
        __asm _emit 0x74
        __asm _emit 0x54
        cmp edx, dword ptr [edi + 20h]
        ; Exact mapped bytes 74 4F: je 0x587af533
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax + 18h], 588b9c48h
        mov dword ptr [edi + 4], 3f51h
        mov eax, dword ptr [edi + 4]
        sub eax, 3f34h
        ; Exact mapped bytes E9 09 EA FF FF: jmp 0x587adf0c
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [eax + 0ch], ecx
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 4], ebp
        mov dword ptr [eax + 10h], ecx
        mov eax, 2
        mov dword ptr [edi + 40h], esi
        mov dword ptr [edi + 3ch], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ret
        shr dword ptr [esp + 14h], 2
        sub esi, 3
        ; Exact mapped bytes EB 2D: jmp 0x587af560
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov dword ptr [esp + 14h], 0
        xor esi, esi
        mov dword ptr [edi + 4], 3f50h
        mov dword ptr [esp + 30h], 1
        ; Exact mapped bytes EB 0E: jmp 0x587af55c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [esp + 30h], 0fffffffdh
        ; Exact mapped bytes EB 04: jmp 0x587af55c
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 58h]
        mov ebx, dword ptr [esp + 54h]
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [ebx + 0ch], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ebx], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [ebx + 4], ebp
        cmp dword ptr [edi + 2ch], 0
        mov ebp, dword ptr [esp + 2ch]
        mov dword ptr [edi + 3ch], eax
        mov dword ptr [edi + 40h], esi
        ; Exact mapped bytes 75 1B: jne 0x587af5aa
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp ebp, dword ptr [ebx + 10h]
        ; Exact mapped bytes 74 40: je 0x587af5d4
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [edi + 4]
        cmp eax, 3f51h
        ; Exact mapped bytes 7D 36: jge 0x587af5d4
        __asm _emit 0x7d
        __asm _emit 0x36
        cmp eax, 3f4eh
        ; Exact mapped bytes 7C 05: jl 0x587af5aa
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp ecx, 4
        ; Exact mapped bytes 74 2A: je 0x587af5d4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, ebp
        sub eax, dword ptr [ebx + 10h]
        push eax
        push dword ptr [ebx + 0ch]
        push ebx
        ; Exact mapped bytes E8 C7 04 00 00: call 0x587afa80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x587af5d4
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [edi + 4], 3f52h
        pop edi
        pop esi
        pop ebp
        mov eax, 0fffffffch
        pop ebx
        add esp, 40h
        ret
        mov eax, dword ptr [esp + 44h]
        sub eax, dword ptr [ebx + 4]
        sub ebp, dword ptr [ebx + 10h]
        add dword ptr [ebx + 8], eax
        add dword ptr [ebx + 14h], ebp
        add dword ptr [edi + 20h], ebp
        test byte ptr [edi + 0ch], 4
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 74 2A: je 0x587af61b
        __asm _emit 0x74
        __asm _emit 0x2a
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x587af61b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 0ch]
        mov ecx, dword ptr [edi + 1ch]
        sub eax, ebp
        cmp dword ptr [edi + 14h], 0
        push ebp
        push eax
        push ecx
        ; Exact mapped bytes 74 07: je 0x587af60d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 65 05 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587af612
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 8E 09 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 1ch], eax
        add esp, 0ch
        mov dword ptr [ebx + 30h], eax
        mov edx, dword ptr [edi + 4]
        cmp edx, 3f47h
        ; Exact mapped bytes 74 0C: je 0x587af632
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp edx, 3f42h
        ; Exact mapped bytes 74 04: je 0x587af632
        __asm _emit 0x74
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 05: jmp 0x587af637
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 100h
        mov ecx, dword ptr [edi + 8]
        neg ecx
        mov dword ptr [esp + 54h], 80h
        sbb ecx, ecx
        xor eax, eax
        and ecx, 40h
        cmp edx, 3f3fh
        cmove eax, dword ptr [esp + 54h]
        add ecx, eax
        add ecx, dword ptr [edi + 40h]
        add ecx, esi
        cmp dword ptr [esp + 44h], 0
        mov dword ptr [ebx + 2ch], ecx
        ; Exact mapped bytes 75 04: jne 0x587af66b
        __asm _emit 0x75
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 74 07: je 0x587af672
        __asm _emit 0x74
        __asm _emit 0x07
        cmp dword ptr [esp + 58h], 4
        ; Exact mapped bytes 75 16: jne 0x587af688
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esp + 30h]
        mov ecx, 0fffffffbh
        pop edi
        pop esi
        test eax, eax
        pop ebp
        cmove eax, ecx
        pop ebx
        add esp, 40h
        ret
        mov eax, dword ptr [esp + 30h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ret
        pop edi
        pop esi
        pop ebp
        mov eax, 0fffffffeh
        pop ebx
        add esp, 40h
        ret
    }
}
