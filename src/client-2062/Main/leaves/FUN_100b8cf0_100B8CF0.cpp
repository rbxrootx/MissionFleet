// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B8CF0 .. +0x55D bytes.
extern "C" __declspec(naked) void FUN_100b8cf0_100B8CF0() {
    __asm {
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 18h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [eax + 30h]
        mov ebp, ecx
        test edi, edi
        ; Exact mapped bytes 0F 84 9D 04 00 00: je 0x100b91a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0b4ch]
        mov cl, byte ptr [eax + 2]
        and cl, 1fh
        cmp cl, 8
        ; Exact mapped bytes 75 0C: jne 0x100b8d26
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp + 228h], 4
        ; Exact mapped bytes EB 22: jmp 0x100b8d48
        __asm _emit 0xeb
        __asm _emit 0x22
        test dword ptr [eax + 25ch], 10000000h
        ; Exact mapped bytes 74 0C: je 0x100b8d3e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp + 228h], 1
        ; Exact mapped bytes EB 0A: jmp 0x100b8d48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp + 228h], 0
        mov eax, dword ptr [edi + 0b4ch]
        lea edx, [edi + 54h]
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push edx
        mov cl, byte ptr [eax + 2]
        mov edx, dword ptr [ebp + 94h]
        and ecx, 1fh
        mov eax, dword ptr [edx + 6ch]
        shl ecx, 4
        add ecx, 10199570h
        push ecx
        push 101abe14h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [edi + 4ch]
        mov esi, dword ptr [edi + 8e0h]
        xor ecx, 0aaaaaaaah
        xor esi, 0aaaaaaaah
        mov eax, ecx
        add esp, 10h
        shl eax, 8
        sub eax, ecx
        push ecx
        cdq
        idiv esi
        push 1017f3cch
        mov byte ptr [esp + 20h], al
        mov eax, dword ptr [esp + 20h]
        and eax, 0ffh
        mov edx, eax
        shl edx, 8
        or edx, eax
        mov eax, dword ptr [ebp + 11ch]
        shl edx, 8
        or dl, 0ffh
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp + 11ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 120h]
        add esp, 0ch
        mov ecx, dword ptr [eax + 6ch]
        push esi
        push 101abe0ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea eax, [ebp + 124h]
        mov edx, 20h
        mov ecx, dword ptr [eax - 88h]
        mov esi, 0fffeh
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 DD: jne 0x100b8df3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [edi + 0b4ch]
        mov ebx, 10h
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        shr eax, 0ah
        and eax, 1fh
        sub ebx, eax
        mov eax, dword ptr [ebp + 228h]
        sub ebx, eax
        ; Exact mapped bytes 79 02: jns 0x100b8e39
        __asm _emit 0x79
        __asm _emit 0x02
        xor ebx, ebx
        test ebx, ebx
        ; Exact mapped bytes 7E 5B: jle 0x100b8e98
        __asm _emit 0x7e
        __asm _emit 0x5b
        lea esi, [ebp + 9ch]
        mov dword ptr [esp + 14h], ebx
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100b8e61
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101abe00h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b8e61
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
        mov edx, dword ptr [esi]
        mov ecx, 0fffeh
        add esi, 4
        mov dword ptr [edx + 60h], 646464h
        mov eax, dword ptr [esi - 4]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 14h]
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 AF: jne 0x100b8e47
        __asm _emit 0x75
        __asm _emit 0xaf
        cmp ebx, 10h
        ; Exact mapped bytes 0F 8D 31 02 00 00: jge 0x100b90d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx*8]
        lea eax, [ebx*4]
        lea esi, [ebp + ebx*4 + 9ch]
        mov ebx, 0ffffff64h
        sub ebx, ebp
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes EB 04: jmp 0x100b8ed3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi]
        add ebx, esi
        mov dword ptr [edx + 60h], 0fafafah
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 30h]
        mov eax, ebx
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 10h]
        sub eax, edx
        mov edx, dword ptr [esp + 20h]
        cmp dword ptr [eax + edx + 9cch], 0
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x100b9008
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + edx + 9cch]
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x100b9008
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov eax, ecx
        sub eax, edx
        mov eax, dword ptr [eax + edi + 0a4ch]
        mov dword ptr [esp + 20h], eax
        mov eax, ecx
        sub eax, edx
        mov ecx, dword ptr [eax + edi + 0a50h]
        mov eax, ebx
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esp + 10h]
        sub eax, ecx
        mov edx, dword ptr [eax + edi + 9cch]
        mov eax, dword ptr [esi]
        add edx, 78h
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push 1017f54ch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov ecx, 1
        add esp, 0ch
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 20h]
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x100b8fb4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [esp + 10h]
        mov cl, byte ptr [ecx + 98h]
        mov eax, ebx
        and ecx, 0ffh
        sub eax, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 38 4C 09 00 00: mov dx, word ptr [eax + edi + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        xor eax, 0aah
        imul eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100b8fb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        push eax
        ; Exact mapped bytes E8 5E 67 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x100b8ffa
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esp + 10h]
        mov dl, byte ptr [ecx + 98h]
        sub ebx, eax
        xor eax, eax
        and edx, 0ffh
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 8B 84 3B 4E 09 00 00: mov ax, word ptr [ebx + edi + 0x94e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        imul eax, edx
        push eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x100b90b3
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        xor eax, eax
        push eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x100b90b3
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, ebx
        sub eax, edx
        cmp dword ptr [eax + edi + 9cch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x100b90bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + edi + 9cch]
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x100b90bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov ecx, dword ptr [esp + 18h]
        sub eax, ecx
        mov ecx, dword ptr [eax + edi + 0a4ch]
        mov eax, ebx
        sub eax, edx
        mov dword ptr [esp + 24h], ecx
        mov edx, dword ptr [eax + edi + 9cch]
        mov eax, dword ptr [esi]
        add edx, 78h
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push 1017f54ch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov ecx, 1
        add esp, 0ch
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100b90aa
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esp + 10h]
        xor eax, eax
        sub ebx, edx
        ; Exact mapped bytes 66 8B 84 3B 4C 09 00 00: mov ax, word ptr [ebx + edi + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        ; Exact mapped bytes EB 02: jmp 0x100b90ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        push eax
        ; Exact mapped bytes E8 68 66 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        add ecx, 8
        add esi, 4
        cmp ecx, 80h
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8C FD FD FF FF: jl 0x100b8ecf
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 228h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x100b9245
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 0ch
        lea edx, [ecx + 0ch]
        cmp edx, ebx
        ; Exact mapped bytes 0F 8E 55 01 00 00: jle 0x100b9245
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 9fch
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100b9189
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 0D: cmp dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0d
        ; Exact mapped bytes 75 7E: jne 0x100b9189
        __asm _emit 0x75
        __asm _emit 0x7e
        test eax, eax
        ; Exact mapped bytes 74 7A: je 0x100b9189
        __asm _emit 0x74
        __asm _emit 0x7a
        cmp ecx, 4
        mov esi, 1fh
        ; Exact mapped bytes 75 02: jne 0x100b911b
        __asm _emit 0x75
        __asm _emit 0x02
        mov esi, ebx
        add eax, 78h
        push eax
        mov eax, dword ptr [ebp + esi*4 + 9ch]
        push 1017f54ch
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + esi*4 + 9ch]
        ; Exact mapped bytes 66 8B 47 80: mov ax, word ptr [edi - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x80
        mov edx, 1
        and eax, 0ffffh
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + esi*4 + 124h]
        add esp, 0ch
        xor eax, 0aah
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + esi*4 + 124h]
        push eax
        ; Exact mapped bytes E8 B2 65 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 1a4h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + esi*4 + 9ch]
        mov dword ptr [edx + 60h], 0fafafah
        mov ecx, dword ptr [ebp + 228h]
        inc ebx
        add edi, 4
        lea eax, [ecx + 0ch]
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 58 FF FF FF: jl 0x100b90f6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret
        mov eax, dword ptr [ebp + 94h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b91c6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100b91c6
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 120h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b91e0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100b91e0
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 11ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b91fa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100b91fa
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add ebp, 9ch
        mov esi, 20h
        mov eax, dword ptr [ebp]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b921c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100b921c
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp]
        mov ecx, 0fffeh
        add ebp, 4
        mov dword ptr [eax + 60h], 646464h
        mov eax, dword ptr [ebp + 84h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 104h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 C0: jne 0x100b9205
        __asm _emit 0x75
        __asm _emit 0xc0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret
    }
}
