// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100833D0 .. +0x81C bytes.
extern "C" __declspec(naked) void FUN_100833d0_100833D0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, 2
        push edi
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 FE 07 00 00: je 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x10083411
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10083408
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x10083411
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x100833f2
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 05 06 00 00: je 0x10083a24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 B8 07 00 00: jne 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 14h]
        mov edi, dword ptr [eax + 4]
        add ebp, edx
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x100834cc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ecx + 1ch]
        add ebp, edx
        cmp edi, ebp
        ; Exact mapped bytes 7D 7E: jge 0x100834cc
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov edx, dword ptr [ecx + 8]
        mov ebp, dword ptr [ecx + 18h]
        mov edi, dword ptr [eax + 8]
        add ebp, edx
        cmp edi, ebp
        ; Exact mapped bytes 7C 6F: jl 0x100834cc
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov ebp, dword ptr [ecx + 20h]
        add ebp, edx
        cmp edi, ebp
        ; Exact mapped bytes 7D 66: jge 0x100834cc
        __asm _emit 0x7d
        __asm _emit 0x66
        cmp byte ptr [esi + 60h], 1
        ; Exact mapped bytes 75 60: jne 0x100834cc
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 9ch]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 91 00 00 00: jl 0x10083576
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x10083576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 75: jl 0x10083576
        __asm _emit 0x7c
        __asm _emit 0x75
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 6C: jge 0x10083576
        __asm _emit 0x7d
        __asm _emit 0x6c
        mov dl, byte ptr [esi + 60h]
        cmp dl, 3
        ; Exact mapped bytes 74 04: je 0x10083516
        __asm _emit 0x74
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 75 60: jne 0x10083576
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x10083613
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 7E: jge 0x10083613
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 6F: jl 0x10083613
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 66: jge 0x10083613
        __asm _emit 0x7d
        __asm _emit 0x66
        cmp byte ptr [esi + 60h], 1
        ; Exact mapped bytes 75 60: jne 0x10083613
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x100836c2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x100836c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 7A: jl 0x100836c2
        __asm _emit 0x7c
        __asm _emit 0x7a
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 71: jge 0x100836c2
        __asm _emit 0x7d
        __asm _emit 0x71
        mov dl, byte ptr [esi + 60h]
        cmp dl, 2
        ; Exact mapped bytes 74 09: je 0x10083662
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 1
        ; Exact mapped bytes 74 04: je 0x10083662
        __asm _emit 0x74
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 75 60: jne 0x100836c2
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a0h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x10083771
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x10083771
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 7A: jl 0x10083771
        __asm _emit 0x7c
        __asm _emit 0x7a
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 71: jge 0x10083771
        __asm _emit 0x7d
        __asm _emit 0x71
        mov dl, byte ptr [esi + 60h]
        cmp dl, 4
        ; Exact mapped bytes 74 09: je 0x10083711
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 3
        ; Exact mapped bytes 74 04: je 0x10083711
        __asm _emit 0x74
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 75 60: jne 0x10083771
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x10083820
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x10083820
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 7A: jl 0x10083820
        __asm _emit 0x7c
        __asm _emit 0x7a
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 71: jge 0x10083820
        __asm _emit 0x7d
        __asm _emit 0x71
        mov dl, byte ptr [esi + 60h]
        cmp dl, 2
        ; Exact mapped bytes 74 09: je 0x100837c0
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 1
        ; Exact mapped bytes 74 04: je 0x100837c0
        __asm _emit 0x74
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 75 60: jne 0x10083820
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a4h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x100838cf
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x100838cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 7A: jl 0x100838cf
        __asm _emit 0x7c
        __asm _emit 0x7a
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 71: jge 0x100838cf
        __asm _emit 0x7d
        __asm _emit 0x71
        mov dl, byte ptr [esi + 60h]
        cmp dl, 4
        ; Exact mapped bytes 74 09: je 0x1008386f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 3
        ; Exact mapped bytes 74 04: je 0x1008386f
        __asm _emit 0x74
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 75 60: jne 0x100838cf
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x1008396f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 7E: jge 0x1008396f
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov edi, dword ptr [edx + 8]
        mov ebp, dword ptr [edx + 18h]
        mov ebx, dword ptr [eax + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 6F: jl 0x1008396f
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp ebx, edx
        ; Exact mapped bytes 7D 66: jge 0x1008396f
        __asm _emit 0x7d
        __asm _emit 0x66
        cmp byte ptr [esi + 60h], 1
        ; Exact mapped bytes 75 60: jne 0x1008396f
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        or byte ptr [ecx + 24h], 2
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a8h]
        mov ebx, dword ptr [eax + 4]
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 5A 02 00 00: jl 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edx + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 4D 02 00 00: jge 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 8]
        mov ebx, dword ptr [edx + 18h]
        mov eax, dword ptr [eax + 8]
        add ebx, edi
        cmp eax, ebx
        ; Exact mapped bytes 0F 8C 3A 02 00 00: jl 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 20h]
        add edx, edi
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 2D 02 00 00: jge 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 60h]
        cmp al, 3
        ; Exact mapped bytes 74 08: je 0x100839c4
        __asm _emit 0x74
        __asm _emit 0x08
        test al, al
        ; Exact mapped bytes 0F 85 1E 02 00 00: jne 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fffdh
        pop edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 9
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x10083be2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 78h]
        mov al, byte ptr [edx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 17: je 0x10083a51
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 81 62 24 FD FF: and word ptr [edx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x10083a78
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 80h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 80h]
        mov al, byte ptr [ebp + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x10083aa1
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 65 24 FD FF: and word ptr [ebp + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 84h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x10083acb
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 88h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 17: je 0x10083af2
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9ch]
        mov al, byte ptr [edi + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x10083b1b
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 67 24 FD FF: and word ptr [edi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a0h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        mov al, byte ptr [ecx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x10083b44
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a4h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        mov bl, byte ptr [eax + 24h]
        shr bl, 1
        test bl, 1
        ; Exact mapped bytes 74 1A: je 0x10083b6e
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a8h]
        pop edi
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        mov bl, byte ptr [eax + 24h]
        shr bl, 1
        test bl, 1
        ; Exact mapped bytes 74 1A: je 0x10083b98
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ch]
        pop edi
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esi + 60h]
        cmp al, 1
        ; Exact mapped bytes 75 0E: jne 0x10083bad
        __asm _emit 0x75
        __asm _emit 0x0e
        or byte ptr [edx + 24h], 2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 75 0E: jne 0x10083bbf
        __asm _emit 0x75
        __asm _emit 0x0e
        or byte ptr [edi + 24h], 2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 2
        cmp al, dl
        ; Exact mapped bytes 74 16: je 0x10083bde
        __asm _emit 0x74
        __asm _emit 0x16
        cmp al, 4
        ; Exact mapped bytes 75 0E: jne 0x10083bda
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 04: jne 0x10083be2
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 55 24: or word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x55
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
