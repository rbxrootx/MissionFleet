// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003F000 .. +0x6F6 bytes.
extern "C" __declspec(naked) void FUN_1003f000_1003F000() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 8]
        push ebx
        push ebp
        xor ebx, ebx
        xor ebp, ebp
        push esi
        cmp edx, 6
        push edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 84 88 05 00 00: je 0x1003f5a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 7
        ; Exact mapped bytes 0F 84 7F 05 00 00: je 0x1003f5a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 0F 84 80 03 00 00: je 0x1003f3ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 0F 84 77 03 00 00: je 0x1003f3ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 14h
        ; Exact mapped bytes 0F 85 96 01 00 00: jne 0x1003f1d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 8ch]
        cmp edx, 40000000h
        ; Exact mapped bytes 75 54: jne 0x1003f0a0
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [eax + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 7E 31: jle 0x1003f08f
        __asm _emit 0x7e
        __asm _emit 0x31
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f07a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [edi]
        cmp edx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f07a
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 108h], ebx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [edx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C D6: jl 0x1003f065
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        mov dword ptr [ecx + 8ch], ebx
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, ebx
        ; Exact mapped bytes 0F 85 43 06 00 00: jne 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 91 90 00 00 00: mov dx, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, dl
        and al, 30h
        cmp al, 30h
        ; Exact mapped bytes 75 53: jne 0x1003f10a
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E 1D 06 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f0ea
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f0ea
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 108h], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C D6: jl 0x1003f0d5
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 5E: je 0x1003f16d
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E C5 05 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        mov cl, byte ptr [edx + esi + 1f8h]
        test cl, cl
        ; Exact mapped bytes 75 15: jne 0x1003f14d
        __asm _emit 0x75
        __asm _emit 0x15
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f14d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f14d
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 108h], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C CB: jl 0x1003f12d
        __asm _emit 0x7c
        __asm _emit 0xcb
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 20h
        ; Exact mapped bytes 0F 84 75 05 00 00: je 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E 5E 05 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        mov cl, byte ptr [edx + esi + 1f8h]
        test cl, cl
        ; Exact mapped bytes 74 15: je 0x1003f1b4
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f1b4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f1b4
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 108h], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C CB: jl 0x1003f194
        __asm _emit 0x7c
        __asm _emit 0xcb
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 15h
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x1003f309
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 91 90 00 00 00: mov dx, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, dl
        and al, 30h
        cmp al, 30h
        ; Exact mapped bytes 75 53: jne 0x1003f23f
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E E8 04 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f21f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f21f
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 10ch], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C D6: jl 0x1003f20a
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 5E: je 0x1003f2a2
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E 90 04 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        mov cl, byte ptr [edx + esi + 1f8h]
        test cl, cl
        ; Exact mapped bytes 75 15: jne 0x1003f282
        __asm _emit 0x75
        __asm _emit 0x15
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f282
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f282
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 10ch], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C CB: jl 0x1003f262
        __asm _emit 0x7c
        __asm _emit 0xcb
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 20h
        ; Exact mapped bytes 0F 84 40 04 00 00: je 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 0F 8E 29 04 00 00: jle 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        lea edi, [ecx + 8]
        mov cl, byte ptr [edx + esi + 1f8h]
        test cl, cl
        ; Exact mapped bytes 74 15: je 0x1003f2e9
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [edx + esi + 1d8h], al
        ; Exact mapped bytes 75 0C: jne 0x1003f2e9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003f2e9
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 10ch], ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov edx, dword ptr [ecx + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C CB: jl 0x1003f2c9
        __asm _emit 0x7c
        __asm _emit 0xcb
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 0ah
        ; Exact mapped bytes 74 09: je 0x1003f317
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edx, 0bh
        ; Exact mapped bytes 0F 85 D4 03 00 00: jne 0x1003f6eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ah
        mov edi, 1
        ; Exact mapped bytes 75 02: jne 0x1003f323
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x1003f32b
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 0bh
        ; Exact mapped bytes 75 03: jne 0x1003f32b
        __asm _emit 0x75
        __asm _emit 0x03
        or edi, 0ffffffffh
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, dword ptr [edx + 4]
        cmp dword ptr [edx + 1008h], ebx
        ; Exact mapped bytes 7E 52: jle 0x1003f390
        __asm _emit 0x7e
        __asm _emit 0x52
        lea ebp, [ecx + 8]
        mov cl, byte ptr [esp + 1ch]
        mov ebx, 40000000h
        cmp byte ptr [edx + esi + 1d8h], cl
        ; Exact mapped bytes 75 29: jne 0x1003f37c
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x1003f37c
        __asm _emit 0x74
        __asm _emit 0x22
        cmp byte ptr [edx + esi + 1f8h], 0
        ; Exact mapped bytes 74 0C: je 0x1003f370
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, edi
        neg edx
        mov dword ptr [eax + 124h], edx
        ; Exact mapped bytes EB 06: jmp 0x1003f376
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [eax + 124h], edi
        mov dword ptr [eax + 108h], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add ebp, 4
        mov edx, dword ptr [eax + 4]
        cmp esi, dword ptr [edx + 1008h]
        ; Exact mapped bytes 7C BA: jl 0x1003f34a
        __asm _emit 0x7c
        __asm _emit 0xba
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov dl, byte ptr [ecx + 92h]
        or dl, 1
        ; Exact mapped bytes 66 0F B6 EA: movzx bp, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xea
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        or ebp, 0ffffffffh
        cmp edx, 4
        ; Exact mapped bytes 75 07: jne 0x1003f3bb
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, 1
        ; Exact mapped bytes EB 08: jmp 0x1003f3c3
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 5
        ; Exact mapped bytes 75 03: jne 0x1003f3c3
        __asm _emit 0x75
        __asm _emit 0x03
        or ebp, 0ffffffffh
        ; Exact mapped bytes 66 8B 81 90 00 00 00: mov ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, al
        and dl, 30h
        cmp dl, 30h
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x1003f466
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 0F 8E 9C 01 00 00: jle 0x1003f58a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esp + 1ch]
        mov esi, 9cch
        mov ebx, 40000000h
        mov edx, dword ptr [esi + eax + 328h]
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x1003f436
        __asm _emit 0x74
        __asm _emit 0x2f
        mov dl, byte ptr [edx]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 24: jne 0x1003f436
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + edi + 1d8h], cl
        ; Exact mapped bytes 75 1B: jne 0x1003f436
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx + esi - 9c4h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1003f436
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebp
        mov dword ptr [eax + 10ch], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc edi
        add esi, 4
        mov eax, dword ptr [eax + 4]
        cmp edi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C B2: jl 0x1003f3fc
        __asm _emit 0x7c
        __asm _emit 0xb2
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov cl, byte ptr [ecx + 92h]
        or cl, 2
        ; Exact mapped bytes 66 0F B6 E9: movzx bp, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test al, 10h
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x1003f509
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 0F 8E 05 01 00 00: jle 0x1003f58a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esp + 1ch]
        mov edi, 9cch
        mov ebx, 40000000h
        mov edx, dword ptr [edi + eax + 328h]
        test edx, edx
        ; Exact mapped bytes 74 3A: je 0x1003f4d8
        __asm _emit 0x74
        __asm _emit 0x3a
        mov dl, byte ptr [edx]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 2F: jne 0x1003f4d8
        __asm _emit 0x75
        __asm _emit 0x2f
        mov dl, byte ptr [eax + esi + 1f8h]
        test dl, dl
        ; Exact mapped bytes 75 24: jne 0x1003f4d8
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [eax + esi + 1d8h], cl
        ; Exact mapped bytes 75 1B: jne 0x1003f4d8
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + eax - 9c4h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1003f4d8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebp
        mov dword ptr [eax + 10ch], ebx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov eax, dword ptr [edx + 4]
        cmp esi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C A6: jl 0x1003f493
        __asm _emit 0x7c
        __asm _emit 0xa6
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov cl, byte ptr [ecx + 92h]
        or cl, 2
        ; Exact mapped bytes 66 0F B6 E9: movzx bp, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test al, 20h
        ; Exact mapped bytes 74 7D: je 0x1003f58a
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 7E 6B: jle 0x1003f58a
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov cl, byte ptr [esp + 1ch]
        mov edi, 9cch
        mov ebx, 40000000h
        mov edx, dword ptr [edi + eax + 328h]
        test edx, edx
        ; Exact mapped bytes 74 3A: je 0x1003f572
        __asm _emit 0x74
        __asm _emit 0x3a
        mov dl, byte ptr [edx]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 2F: jne 0x1003f572
        __asm _emit 0x75
        __asm _emit 0x2f
        mov dl, byte ptr [eax + esi + 1f8h]
        test dl, dl
        ; Exact mapped bytes 74 24: je 0x1003f572
        __asm _emit 0x74
        __asm _emit 0x24
        cmp byte ptr [eax + esi + 1d8h], cl
        ; Exact mapped bytes 75 1B: jne 0x1003f572
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + edx - 9c4h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1003f572
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebp
        mov dword ptr [eax + 10ch], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov eax, dword ptr [eax + 4]
        cmp esi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C A7: jl 0x1003f52d
        __asm _emit 0x7c
        __asm _emit 0xa7
        mov ecx, dword ptr [esp + 10h]
        mov cl, byte ptr [ecx + 92h]
        pop edi
        or cl, 2
        pop esi
        ; Exact mapped bytes 66 0F B6 E9: movzx bp, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 6
        mov ebp, 1
        ; Exact mapped bytes 75 02: jne 0x1003f5ae
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x1003f5b6
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 7
        ; Exact mapped bytes 75 03: jne 0x1003f5b6
        __asm _emit 0x75
        __asm _emit 0x03
        or ebp, 0ffffffffh
        ; Exact mapped bytes 66 8B 81 90 00 00 00: mov ax, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 30 00: cmp ax, 0x30
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 75 57: jne 0x1003f61a
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 0F 8E 04 01 00 00: jle 0x1003f6de
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ecx + 8]
        mov cl, byte ptr [esp + 1ch]
        mov ebx, 40000000h
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 74 15: je 0x1003f601
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [eax + esi + 1d8h], cl
        ; Exact mapped bytes 75 0C: jne 0x1003f601
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [edx + 124h], ebp
        mov dword ptr [edx + 108h], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        add edi, 4
        mov eax, dword ptr [eax + 4]
        cmp esi, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C D1: jl 0x1003f5e6
        __asm _emit 0x7c
        __asm _emit 0xd1
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x1003f6da
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 10 00: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 75 5D: jne 0x1003f67d
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 0F 8E A8 00 00 00: jle 0x1003f6de
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ecx + 8]
        mov cl, byte ptr [esp + 1ch]
        mov ebx, 40000000h
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x1003f667
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [eax + edx + 1d8h], cl
        ; Exact mapped bytes 75 16: jne 0x1003f667
        __asm _emit 0x75
        __asm _emit 0x16
        cmp byte ptr [eax + edx + 1f8h], 0
        ; Exact mapped bytes 75 0C: jne 0x1003f667
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 124h], ebp
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc edx
        add edi, 4
        mov eax, dword ptr [eax + 4]
        cmp edx, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C C7: jl 0x1003f642
        __asm _emit 0x7c
        __asm _emit 0xc7
        ; Exact mapped bytes EB 5D: jmp 0x1003f6da
        __asm _emit 0xeb
        __asm _emit 0x5d
        ; Exact mapped bytes 66 3D 20 00: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 75 5B: jne 0x1003f6de
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 1008h], ebx
        ; Exact mapped bytes 7E 49: jle 0x1003f6de
        __asm _emit 0x7e
        __asm _emit 0x49
        lea edi, [ecx + 8]
        mov cl, byte ptr [esp + 1ch]
        mov ebx, 40000000h
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x1003f6c6
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [eax + edx + 1d8h], cl
        ; Exact mapped bytes 75 16: jne 0x1003f6c6
        __asm _emit 0x75
        __asm _emit 0x16
        cmp byte ptr [eax + edx + 1f8h], 1
        ; Exact mapped bytes 75 0C: jne 0x1003f6c6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 124h], ebp
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc edx
        add edi, 4
        mov eax, dword ptr [eax + 4]
        cmp edx, dword ptr [eax + 1008h]
        ; Exact mapped bytes 7C C7: jl 0x1003f6a1
        __asm _emit 0x7c
        __asm _emit 0xc7
        mov ecx, dword ptr [esp + 10h]
        mov cl, byte ptr [ecx + 92h]
        or cl, 1
        ; Exact mapped bytes 66 0F B6 E9: movzx bp, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xe9
        pop edi
        ; Exact mapped bytes 66 8B C5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc5
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
