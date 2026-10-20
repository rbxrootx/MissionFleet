// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E9D70 .. +0x5F7 bytes.
extern "C" __declspec(naked) void FUN_100e9d70_100E9D70() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 8]
        push ebx
        push ebp
        xor eax, eax
        push esi
        cmp edx, 6
        push edi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 99 04 00 00: je 0x100ea221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 7
        ; Exact mapped bytes 0F 84 90 04 00 00: je 0x100ea221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 0F 84 3B 03 00 00: je 0x100ea0d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 0F 84 32 03 00 00: je 0x100ea0d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 14h
        ; Exact mapped bytes 0F 85 7C 01 00 00: jne 0x100e9f28
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 5c88h]
        cmp edx, 40000000h
        ; Exact mapped bytes 75 50: jne 0x100e9e0a
        __asm _emit 0x75
        __asm _emit 0x50
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 7E 31: jle 0x100e9df7
        __asm _emit 0x7e
        __asm _emit 0x31
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        xor ebx, ebx
        mov bl, byte ptr [ecx + edx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9de9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9de9
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 108h], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C D9: jl 0x100e9dd0
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        mov dword ptr [ecx + 5c88h], eax
        ; Exact mapped bytes 66 8B 44 24 08: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 0F 85 48 05 00 00: jne 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 91 9A 5C 00 00: mov dx, word ptr [ecx + 0x5c9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, dl
        and bl, 30h
        cmp bl, 30h
        ; Exact mapped bytes 75 4E: jne 0x100e9e71
        __asm _emit 0x75
        __asm _emit 0x4e
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 27 05 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        xor ebx, ebx
        mov bl, byte ptr [ecx + edx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9e56
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9e56
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 108h], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C D9: jl 0x100e9e3d
        __asm _emit 0x7c
        __asm _emit 0xd9
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 59: je 0x100e9ecf
        __asm _emit 0x74
        __asm _emit 0x59
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E D4 04 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        mov bl, byte ptr [ecx + edx + 1f8h]
        test bl, bl
        ; Exact mapped bytes 75 19: jne 0x100e9eb4
        __asm _emit 0x75
        __asm _emit 0x19
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9eb4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9eb4
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 108h], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C CE: jl 0x100e9e90
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 7B 04 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        mov bl, byte ptr [ecx + edx + 1f8h]
        test bl, bl
        ; Exact mapped bytes 74 19: je 0x100e9f0d
        __asm _emit 0x74
        __asm _emit 0x19
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9f0d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9f0d
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 108h], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C CE: jl 0x100e9ee9
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 15h
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x100ea047
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 91 9A 5C 00 00: mov dx, word ptr [ecx + 0x5c9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, dl
        and bl, 30h
        cmp bl, 30h
        ; Exact mapped bytes 75 4E: jne 0x100e9f90
        __asm _emit 0x75
        __asm _emit 0x4e
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 08 04 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        xor ebx, ebx
        mov bl, byte ptr [ecx + edx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9f75
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9f75
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C D9: jl 0x100e9f5c
        __asm _emit 0x7c
        __asm _emit 0xd9
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 74 59: je 0x100e9fee
        __asm _emit 0x74
        __asm _emit 0x59
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E B5 03 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        mov bl, byte ptr [ecx + edx + 1f8h]
        test bl, bl
        ; Exact mapped bytes 75 19: jne 0x100e9fd3
        __asm _emit 0x75
        __asm _emit 0x19
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100e9fd3
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100e9fd3
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C CE: jl 0x100e9faf
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 5C 03 00 00: jle 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea edi, [ecx + 158h]
        mov bl, byte ptr [ecx + edx + 1f8h]
        test bl, bl
        ; Exact mapped bytes 74 19: je 0x100ea02c
        __asm _emit 0x74
        __asm _emit 0x19
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 1d8h]
        cmp ebx, ebp
        ; Exact mapped bytes 75 0C: jne 0x100ea02c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [edi]
        cmp esi, eax
        ; Exact mapped bytes 74 06: je 0x100ea02c
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        mov esi, dword ptr [ecx + 1008h]
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C CE: jl 0x100ea008
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 0ah
        ; Exact mapped bytes 74 09: je 0x100ea055
        __asm _emit 0x74
        __asm _emit 0x09
        cmp edx, 0bh
        ; Exact mapped bytes 0F 85 05 03 00 00: jne 0x100ea35a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ah
        mov edi, 1
        ; Exact mapped bytes 75 02: jne 0x100ea061
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x100ea069
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 0bh
        ; Exact mapped bytes 75 03: jne 0x100ea069
        __asm _emit 0x75
        __asm _emit 0x03
        or edi, 0ffffffffh
        mov esi, dword ptr [ecx + 1008h]
        xor edx, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8E CE 02 00 00: jle 0x100ea347
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebx, 40000000h
        xor eax, eax
        mov al, byte ptr [ecx + edx + 1d8h]
        cmp eax, ebp
        ; Exact mapped bytes 75 2D: jne 0x100ea0c2
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x100ea0c2
        __asm _emit 0x74
        __asm _emit 0x27
        cmp byte ptr [edx + ecx + 1f8h], 0
        ; Exact mapped bytes 74 11: je 0x100ea0b6
        __asm _emit 0x74
        __asm _emit 0x11
        mov ebx, edi
        neg ebx
        mov dword ptr [eax + 124h], ebx
        mov ebx, 40000000h
        ; Exact mapped bytes EB 06: jmp 0x100ea0bc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [eax + 124h], edi
        mov dword ptr [eax + 108h], ebx
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C B8: jl 0x100ea088
        __asm _emit 0x7c
        __asm _emit 0xb8
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x100ea347
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or ebx, 0ffffffffh
        cmp edx, 4
        ; Exact mapped bytes 75 07: jne 0x100ea0e4
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebx, 1
        ; Exact mapped bytes EB 08: jmp 0x100ea0ec
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 5
        ; Exact mapped bytes 75 03: jne 0x100ea0ec
        __asm _emit 0x75
        __asm _emit 0x03
        or ebx, 0ffffffffh
        ; Exact mapped bytes 66 8B 81 9A 5C 00 00: mov ax, word ptr [ecx + 0x5c9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, al
        and dl, 30h
        cmp dl, 30h
        ; Exact mapped bytes 75 5A: jne 0x100ea157
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E 06 01 00 00: jle 0x100ea213
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        xor eax, eax
        mov al, byte ptr [ecx + edx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea13b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea13b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebx
        mov dword ptr [eax + 10ch], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C D3: jl 0x100ea11c
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov cl, byte ptr [ecx + 5c8ch]
        or cl, 2
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x100ea350
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 10h
        ; Exact mapped bytes 74 65: je 0x100ea1c0
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E A8 00 00 00: jle 0x100ea213
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        mov al, byte ptr [ecx + edx + 1f8h]
        test al, al
        ; Exact mapped bytes 75 1F: jne 0x100ea1a4
        __asm _emit 0x75
        __asm _emit 0x1f
        xor eax, eax
        mov al, byte ptr [edx + ecx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea1a4
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea1a4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebx
        mov dword ptr [eax + 10ch], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C C8: jl 0x100ea17a
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov cl, byte ptr [ecx + 5c8ch]
        or cl, 2
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x100ea350
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x100ea213
        __asm _emit 0x7e
        __asm _emit 0x47
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        mov al, byte ptr [ecx + edx + 1f8h]
        test al, al
        ; Exact mapped bytes 74 1F: je 0x100ea205
        __asm _emit 0x74
        __asm _emit 0x1f
        xor eax, eax
        mov al, byte ptr [edx + ecx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea205
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea205
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 128h], ebx
        mov dword ptr [eax + 10ch], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C C8: jl 0x100ea1db
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov cl, byte ptr [ecx + 5c8ch]
        or cl, 2
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x100ea350
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 6
        mov ebx, 1
        ; Exact mapped bytes 75 02: jne 0x100ea22d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x100ea235
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 7
        ; Exact mapped bytes 75 03: jne 0x100ea235
        __asm _emit 0x75
        __asm _emit 0x03
        or ebx, 0ffffffffh
        ; Exact mapped bytes 66 8B 81 9A 5C 00 00: mov ax, word ptr [ecx + 0x5c9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, al
        and dl, 30h
        cmp dl, 30h
        ; Exact mapped bytes 75 51: jne 0x100ea297
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x100ea347
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        xor eax, eax
        mov al, byte ptr [ecx + edx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea284
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea284
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 124h], ebx
        mov dword ptr [eax + 108h], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C D3: jl 0x100ea265
        __asm _emit 0x7c
        __asm _emit 0xd3
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x100ea347
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 10h
        ; Exact mapped bytes 74 59: je 0x100ea2f4
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x100ea347
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        mov al, byte ptr [ecx + edx + 1f8h]
        test al, al
        ; Exact mapped bytes 75 1F: jne 0x100ea2e4
        __asm _emit 0x75
        __asm _emit 0x1f
        xor eax, eax
        mov al, byte ptr [edx + ecx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea2e4
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea2e4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 124h], ebx
        mov dword ptr [eax + 108h], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C C8: jl 0x100ea2ba
        __asm _emit 0x7c
        __asm _emit 0xc8
        ; Exact mapped bytes EB 53: jmp 0x100ea347
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ecx + 1008h]
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x100ea347
        __asm _emit 0x7e
        __asm _emit 0x47
        mov edi, dword ptr [esp + 1ch]
        lea esi, [ecx + 158h]
        mov ebp, 40000000h
        mov al, byte ptr [ecx + edx + 1f8h]
        test al, al
        ; Exact mapped bytes 74 1F: je 0x100ea339
        __asm _emit 0x74
        __asm _emit 0x1f
        xor eax, eax
        mov al, byte ptr [edx + ecx + 1d8h]
        cmp eax, edi
        ; Exact mapped bytes 75 12: jne 0x100ea339
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100ea339
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax + 124h], ebx
        mov dword ptr [eax + 108h], ebp
        mov eax, dword ptr [ecx + 1008h]
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C C8: jl 0x100ea30f
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov cl, byte ptr [ecx + 5c8ch]
        or cl, 1
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, cl
        ; Exact mapped bytes 66 89 54 24 10: mov word ptr [esp + 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        pop edi
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
