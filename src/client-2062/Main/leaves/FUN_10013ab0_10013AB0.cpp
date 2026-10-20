// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013AB0 .. +0x76F bytes.
extern "C" __declspec(naked) void FUN_10013ab0_10013AB0() {
    __asm {
        sub esp, 1ch
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 174h
        ; Exact mapped bytes E8 DD 8C 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        mov ebp, eax
        mov eax, dword ptr [esi + 20h]
        xor ebx, ebx
        mov esi, dword ptr [eax + ecx*4]
        mov dword ptr [esp + 20h], esi
        mov eax, dword ptr [esi + 0ah]
        mov edx, dword ptr [esi + 2]
        ; Exact mapped bytes 66 8B 5E 1C: mov bx, word ptr [esi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x1c
        sub edx, eax
        push edx
        lea edi, [eax + esi]
        shr ebx, 3
        ; Exact mapped bytes E8 B3 8C 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ah]
        mov ecx, dword ptr [esi + 16h]
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esi + 2]
        sub eax, edx
        xor edx, edx
        div ecx
        lea edx, [ecx - 1]
        add esp, 8
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esp + 20h], eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 1C: mov ax, word ptr [esi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x1c
        mov esi, dword ptr [esi + 12h]
        imul edx, esi
        shr eax, 3
        imul edx, eax
        add edx, dword ptr [esp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 7E 48: jle 0x10013b74
        __asm _emit 0x7e
        __asm _emit 0x48
        mov ecx, esi
        mov esi, edi
        imul ecx, eax
        mov dword ptr [esp + 24h], esi
        mov eax, ecx
        mov edi, edx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        mov eax, dword ptr [esp + 1ch]
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        xor ecx, ecx
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 48 1C: mov cx, word ptr [eax + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1c
        mov esi, dword ptr [esp + 24h]
        shr ecx, 3
        imul ecx, dword ptr [eax + 12h]
        add esi, dword ptr [esp + 20h]
        sub edx, ecx
        inc edi
        cmp edi, dword ptr [eax + 16h]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes 7C C3: jl 0x10013b37
        __asm _emit 0x7c
        __asm _emit 0xc3
        mov esi, dword ptr [esp + 30h]
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        push 1017f418h
        push ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea edx, [ebp + 104h]
        mov dword ptr [ebp + 100h], 0
        push esi
        push 1017f418h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 28h]
        xor eax, eax
        mov byte ptr [ebp + 12ch], 0
        mov byte ptr [ebp + 12dh], 3
        mov dword ptr [ebp + 130h], eax
        mov edx, dword ptr [ecx + 12h]
        mov dword ptr [ebp + 134h], edx
        mov edx, dword ptr [ecx + 16h]
        mov dword ptr [ebp + 138h], edx
        mov dword ptr [ebp + 13ch], eax
        mov edx, dword ptr [ecx + 12h]
        mov dword ptr [ebp + 140h], eax
        mov dword ptr [ebp + 144h], edx
        mov ecx, dword ptr [ecx + 16h]
        mov dword ptr [ebp + 148h], ecx
        mov ecx, dword ptr [ebp + 138h]
        add esp, 0ch
        cmp ecx, eax
        mov dword ptr [ebp + 14ch], 100h
        mov dword ptr [ebp + 150h], eax
        mov dword ptr [ebp + 154h], eax
        mov dword ptr [ebp + 158h], eax
        mov dword ptr [ebp + 15ch], eax
        mov dword ptr [ebp + 160h], eax
        mov dword ptr [ebp + 164h], eax
        mov dword ptr [ebp + 168h], eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes 0F 8E AE 00 00 00: jle 0x10013ce8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        mov dword ptr [esp + 18h], 0
        imul eax, dword ptr [ebp + 134h]
        mov dword ptr [esp + 30h], eax
        xor edx, edx
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 7E 69: jle 0x10013cc0
        __asm _emit 0x7e
        __asm _emit 0x69
        xor cl, cl
        test ebx, ebx
        ; Exact mapped bytes 7E 18: jle 0x10013c75
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        add eax, esi
        add eax, edi
        mov edi, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edi
        ; Exact mapped bytes 75 FA: jne 0x10013c6b
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x10013c8a
        __asm _emit 0x75
        __asm _emit 0x11
        test cl, cl
        ; Exact mapped bytes 75 16: jne 0x10013c93
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, 1
        mov byte ptr [ebp + 12ch], dl
        ; Exact mapped bytes EB 30: jmp 0x10013cba
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp edx, 1
        ; Exact mapped bytes 75 0B: jne 0x10013c9a
        __asm _emit 0x75
        __asm _emit 0x0b
        test cl, cl
        ; Exact mapped bytes 74 27: je 0x10013cba
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, 2
        ; Exact mapped bytes EB 20: jmp 0x10013cba
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp edx, 2
        ; Exact mapped bytes 75 12: jne 0x10013cb1
        __asm _emit 0x75
        __asm _emit 0x12
        test cl, cl
        ; Exact mapped bytes 75 17: jne 0x10013cba
        __asm _emit 0x75
        __asm _emit 0x17
        mov byte ptr [ebp + 12ch], 1
        mov edx, 3
        ; Exact mapped bytes EB 09: jmp 0x10013cba
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp edx, 3
        ; Exact mapped bytes 75 04: jne 0x10013cba
        __asm _emit 0x75
        __asm _emit 0x04
        test cl, cl
        ; Exact mapped bytes 75 27: jne 0x10013ce1
        __asm _emit 0x75
        __asm _emit 0x27
        add esi, ebx
        cmp esi, eax
        ; Exact mapped bytes 7C 97: jl 0x10013c57
        __asm _emit 0x7c
        __asm _emit 0x97
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 24h]
        inc ecx
        add esi, eax
        cmp ecx, edx
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 0F 8C 70 FF FF FF: jl 0x10013c4f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x10013ce8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp + 12ch], 2
        mov al, byte ptr [ebp + 12ch]
        cmp al, 2
        ; Exact mapped bytes 0F 85 7F 02 00 00: jne 0x10013f75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ecx + 12h]
        imul eax, dword ptr [ecx + 16h]
        lea ecx, [eax + eax*2]
        shl ecx, 1
        push ecx
        ; Exact mapped bytes E8 94 8A 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ebp + 138h]
        add esp, 4
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E EE 01 00 00: jle 0x10013f17
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 134h]
        xor edi, edi
        mov eax, esi
        mov dword ptr [esp + 18h], edi
        imul eax, ebx
        test eax, eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 8E 9B 01 00 00: jle 0x10013ee1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor cl, cl
        cmp ebx, edx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 7E 1E: jle 0x10013d74
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, esi
        mov edx, dword ptr [esp + 14h]
        imul eax, dword ptr [esp + 10h]
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10013d6a
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 7D 39: jge 0x10013db1
        __asm _emit 0x7d
        __asm _emit 0x39
        test cl, cl
        ; Exact mapped bytes 75 31: jne 0x10013dad
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [esp + 20h]
        add edi, ebx
        inc edx
        test ebx, ebx
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes 7E 1E: jle 0x10013da9
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, esi
        mov edx, dword ptr [esp + 14h]
        imul eax, dword ptr [esp + 10h]
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10013d9f
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 7C CB: jl 0x10013d78
        __asm _emit 0x7c
        __asm _emit 0xcb
        mov dword ptr [esp + 18h], edi
        xor cl, cl
        test ebx, ebx
        ; Exact mapped bytes 7E 1E: jle 0x10013dd5
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, esi
        mov edx, dword ptr [esp + 14h]
        imul eax, dword ptr [esp + 10h]
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10013dcb
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 0F 8D 04 01 00 00: jge 0x10013ee1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, edi
        test cl, cl
        ; Exact mapped bytes 74 41: je 0x10013e24
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esp + 1ch]
        add edx, ebx
        inc ecx
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 1ch], ecx
        xor cl, cl
        test ebx, ebx
        ; Exact mapped bytes 7E 28: jle 0x10013e20
        __asm _emit 0x7e
        __asm _emit 0x28
        mov eax, esi
        mov edx, dword ptr [esp + 1ch]
        imul eax, dword ptr [esp + 10h]
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10013e12
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 28h]
        cmp edx, eax
        ; Exact mapped bytes 7C BB: jl 0x10013ddf
        __asm _emit 0x7c
        __asm _emit 0xbb
        mov eax, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x10013ee1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 130h]
        mov edx, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 8B 4C 24 20: mov cx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        mov esi, 2
        ; Exact mapped bytes 66 89 0C 10: mov word ptr [eax + edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 130h]
        add ecx, esi
        mov eax, ecx
        mov dword ptr [ebp + 130h], ecx
        mov byte ptr [eax + edx], 0
        mov eax, dword ptr [ebp + 130h]
        inc eax
        mov dword ptr [ebp + 130h], eax
        mov ecx, eax
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 130h]
        add ecx, esi
        mov esi, dword ptr [esp + 10h]
        imul esi, ebx
        imul eax, ebx
        imul esi, dword ptr [ebp + 134h]
        add esi, edi
        mov edi, dword ptr [esp + 14h]
        mov dword ptr [ebp + 130h], ecx
        add esi, edi
        mov edi, dword ptr [ebp + 130h]
        mov ecx, eax
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov edi, dword ptr [esp + 18h]
        mov edx, dword ptr [ebp + 130h]
        mov esi, dword ptr [ebp + 134h]
        add edi, eax
        add edx, eax
        mov eax, esi
        imul eax, ebx
        cmp edi, eax
        mov dword ptr [esp + 18h], edi
        mov dword ptr [ebp + 130h], edx
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 8C 65 FE FF FF: jl 0x10013d46
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 130h]
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 C7 04 08 FF FF: mov word ptr [eax + ecx], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 130h]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 138h]
        add esi, 2
        inc eax
        cmp eax, ecx
        mov dword ptr [ebp + 130h], esi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 12 FE FF FF: jl 0x10013d29
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 130h]
        mov ebx, dword ptr [esp + 24h]
        add edi, -2
        mov dword ptr [ebp + 130h], edi
        mov eax, edi
        ; Exact mapped bytes 66 C7 04 18 FE FF: mov word ptr [eax + ebx], 0xfffe
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 130h]
        add esi, 2
        mov eax, esi
        mov dword ptr [ebp + 130h], esi
        push eax
        ; Exact mapped bytes E8 57 88 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 130h]
        mov esi, ebx
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        mov dword ptr [ebp + 170h], eax
        push ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes E8 17 88 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x100141cf
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 F8 01 00 00: jne 0x10014175
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ecx + 12h]
        imul eax, dword ptr [ecx + 16h]
        lea eax, [eax + eax*2]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 0D 88 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [ebp + 138h]
        add esp, 4
        xor esi, esi
        test eax, eax
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 8E B8 01 00 00: jle 0x10014166
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        xor cl, cl
        cmp ebx, edi
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 7E 1A: jle 0x10013fdc
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, esi
        mov edx, dword ptr [esp + 14h]
        imul eax, ebx
        imul eax, dword ptr [ebp + 134h]
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10013fd6
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [ebp + 134h]
        imul eax, ebx
        test eax, eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 7E 3B: jle 0x10014028
        __asm _emit 0x7e
        __asm _emit 0x3b
        test cl, cl
        ; Exact mapped bytes 75 33: jne 0x10014024
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [esp + 24h]
        add edi, ebx
        inc edx
        test ebx, ebx
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 7E 20: jle 0x10014020
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 134h]
        mov edx, dword ptr [esp + 14h]
        imul eax, esi
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10014016
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 7C C9: jl 0x10013fed
        __asm _emit 0x7c
        __asm _emit 0xc9
        mov dword ptr [esp + 18h], edi
        xor cl, cl
        test ebx, ebx
        ; Exact mapped bytes 7E 20: jle 0x1001404e
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 134h]
        mov edx, dword ptr [esp + 14h]
        imul eax, esi
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10014044
        __asm _emit 0x75
        __asm _emit 0xfa
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 7D 51: jge 0x100140a3
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, edi
        test cl, cl
        ; Exact mapped bytes 74 43: je 0x1001409b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esp + 1ch]
        add edx, ebx
        inc ecx
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 1ch], ecx
        xor cl, cl
        test ebx, ebx
        ; Exact mapped bytes 7E 2A: jle 0x10014097
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 134h]
        mov edx, dword ptr [esp + 1ch]
        imul eax, esi
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        imul eax, ebx
        add eax, edi
        add eax, edx
        mov edx, ebx
        or cl, byte ptr [eax]
        inc eax
        dec edx
        ; Exact mapped bytes 75 FA: jne 0x10014089
        __asm _emit 0x75
        __asm _emit 0xfa
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 30h]
        cmp edx, eax
        ; Exact mapped bytes 7C B9: jl 0x10014054
        __asm _emit 0x7c
        __asm _emit 0xb9
        mov eax, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x100140c7
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 130h]
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 C7 04 11 FF FF: mov word ptr [ecx + edx], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 130h]
        add eax, 2
        mov dword ptr [ebp + 130h], eax
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x10014153
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 130h]
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 8B 4C 24 24: mov cx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        mov edi, 2
        ; Exact mapped bytes 66 89 0C 10: mov word ptr [eax + edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 130h]
        add eax, edi
        imul esi, ebx
        mov dword ptr [ebp + 130h], eax
        mov byte ptr [eax + edx], 0
        mov ecx, dword ptr [ebp + 130h]
        inc ecx
        mov dword ptr [ebp + 130h], ecx
        mov eax, ecx
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 0C 10: mov word ptr [eax + edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 130h]
        imul esi, dword ptr [ebp + 134h]
        add eax, edi
        add esi, dword ptr [esp + 18h]
        mov dword ptr [ebp + 130h], eax
        mov edi, eax
        mov eax, ecx
        add esi, dword ptr [esp + 14h]
        imul eax, ebx
        mov ecx, eax
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 130h]
        mov esi, dword ptr [esp + 10h]
        add ecx, eax
        mov dword ptr [ebp + 130h], ecx
        mov eax, dword ptr [ebp + 138h]
        inc esi
        cmp esi, eax
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 8C 48 FE FF FF: jl 0x10013fae
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 130h]
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes E9 B7 FD FF FF: jmp 0x10013f2c
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 56: jne 0x100141cf
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [esp + 24h]
        imul eax, ebx
        imul eax, dword ptr [ebp + 134h]
        add eax, 2
        push eax
        mov dword ptr [ebp + 130h], eax
        ; Exact mapped bytes E8 0A 86 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 130h]
        mov esi, dword ptr [esp + 18h]
        sub ecx, 2
        mov dword ptr [ebp + 170h], eax
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        add esp, 4
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 170h]
        mov edx, dword ptr [ebp + 130h]
        ; Exact mapped bytes 66 C7 44 11 FE FE FF: mov word ptr [ecx + edx - 2], 0xfffe
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100141e0
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 A7 85 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 130h]
        xor eax, eax
        test ecx, ecx
        mov dword ptr [ebp + 16ch], 0
        ; Exact mapped bytes 7E 1D: jle 0x10014213
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 170h]
        ; Exact mapped bytes 0F BE 34 02: movsx esi, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x02
        mov ebx, dword ptr [ebp + 16ch]
        add ebx, esi
        inc eax
        cmp eax, ecx
        mov dword ptr [ebp + 16ch], ebx
        ; Exact mapped bytes 7C E9: jl 0x100141fc
        __asm _emit 0x7c
        __asm _emit 0xe9
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
