// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007DE60 .. +0x32D bytes.
extern "C" __declspec(naked) void FUN_1007de60_1007DE60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 13 03 00 00: je 0x1007e183
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x1007de96
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 02 00 00: je 0x1007e17a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x1007de7e
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [edi + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 91 02 00 00: ja 0x1007e135
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x1007e073
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x1007dfb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 BA 02 00 00: jne 0x1007e17a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov edi, dword ptr [ecx + 88h]
        test edi, edi
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x1007df9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 2D D4 92 1C 10: mov ebp, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 4]
        lea ebx, [eax + 8]
        cmp edx, ebx
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x1007df9b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 190h
        cmp edx, eax
        ; Exact mapped bytes 0F 8D A6 00 00 00: jge 0x1007df9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [ebp + 8]
        lea ebx, [edx + 1ch]
        cmp eax, ebx
        ; Exact mapped bytes 0F 8E 95 00 00 00: jle 0x1007df9b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edx + 96h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x1007df9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edx
        sub eax, 1ch
        cdq
        idiv dword ptr [ecx + 5ch]
        mov ebp, eax
        ; Exact mapped bytes E8 1C 5F 08 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        sub edi, ebp
        cmp eax, edi
        ; Exact mapped bytes 7D 71: jge 0x1007df9b
        __asm _emit 0x7d
        __asm _emit 0x71
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 8]
        mov ebx, 1
        mov eax, dword ptr [edx + 5ch]
        imul eax, ebp
        lea eax, [eax + ecx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 05: jne 0x1007df4f
        __asm _emit 0x75
        __asm _emit 0x05
        test byte ptr [ecx + 24h], bl
        ; Exact mapped bytes 75 43: jne 0x1007df92
        __asm _emit 0x75
        __asm _emit 0x43
        push eax
        ; Exact mapped bytes E8 6B 0E 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 1D: jle 0x1007df8a
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x1007df8a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [eax + 8]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi + 9ch]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 0dh]
        cmp eax, 1bh
        ; Exact mapped bytes 0F 87 BB 01 00 00: ja 0x1007e17a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1007e1a4h]
        ; Exact mapped bytes FF 24 8D 90 E1 07 10: jmp dword ptr [ecx*4 + 0x1007e190]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x10
        add esi, 74h
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 53 65 08 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x1007dfd6
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 74h
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B5 65 08 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x1007dff4
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 7E 5E 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 3C: je 0x1007e053
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 7ch]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007e029
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x1007e02c
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007e03e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x1007e041
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 8B 96 A8 00 00 00: mov dx, word ptr [esi + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi + 30h]
        push eax
        push edx
        ; Exact mapped bytes E8 6D D3 FF FF: call 0x1007b3c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ebx, 1
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x1007e17a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 24h
        ; Exact mapped bytes 7E 12: jle 0x1007e0a7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1007e0a7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x1007e0a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push edx
        ; Exact mapped bytes E8 BB 65 08 00: call 0x10104680
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 C3 5D 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 28: je 0x1007e0fa
        __asm _emit 0x74
        __asm _emit 0x28
        lea edi, [esi + 78h]
        mov ebp, 5
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 AE 5D 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 66 66 08 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 EA: jne 0x1007e0da
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 8ch]
        or byte ptr [eax + 24h], 2
        mov ecx, dword ptr [esi + 74h]
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 8B 5D 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x00
        imul eax, edi
        mov ecx, dword ptr [esi + 8]
        lea eax, [eax + ecx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 A5 0C 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ecx, esi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 C4 FC FF FF: call 0x1007ddf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 75 3E: jne 0x1007e17a
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [edi + 8]
        shr edx, 10h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 1E: jle 0x1007e165
        __asm _emit 0x7e
        __asm _emit 0x1e
        add esi, 74h
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 DA 63 08 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x1007e14f
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 74h
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 3C 64 08 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x1007e16d
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
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
