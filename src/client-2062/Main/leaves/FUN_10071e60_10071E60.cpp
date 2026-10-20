// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10071E60 .. +0x79A bytes.
extern "C" __declspec(naked) void FUN_10071e60_10071E60() {
    __asm {
        push -1
        push 1016f749h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B CB 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov edi, 100h
        xor ebx, ebx
        mov dword ptr [esi], 10175c6ch
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], ebx
        push 0d400h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi + 1f4h], 10175cd0h
        mov dword ptr [esi + 20ch], ebx
        mov dword ptr [esi + 1f8h], edi
        mov dword ptr [esi + 1fch], ebx
        ; Exact mapped bytes E8 B4 A8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esi + 208h], eax
        mov dword ptr [esi + 200h], ebx
        mov dword ptr [esi + 204h], ebx
        mov dword ptr [esi + 1fch], ebx
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        push 20h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi], 10175cb4h
        lea ecx, [eax + 7d0h]
        add eax, 5dch
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes E8 6D A8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        push 20h
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 60 A8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 108h], eax
        xor edi, edi
        ; Exact mapped bytes EB 02: jmp 0x10071f4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 50h
        ; Exact mapped bytes E8 4A A8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 10: je 0x10071f76
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 3C CA 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10071f78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 108h]
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [edi + edx], eax
        mov eax, dword ptr [esi + 108h]
        mov eax, dword ptr [edi + eax]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 108h]
        mov eax, dword ptr [edi + ecx]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edx, dword ptr [esi + 108h]
        mov ebp, dword ptr [edi + edx]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 90 01: mov word ptr [ebp + 0x26], 0x190
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0x90
        __asm _emit 0x01
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10071fc0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 E0 CF 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10071fcd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 33 CF 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        push 1000h
        ; Exact mapped bytes E8 C9 A7 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        add esp, 4
        mov dword ptr [ecx + edi], eax
        push 58h
        ; Exact mapped bytes E8 B6 A7 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebp
        test ebp, ebp
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x1007208d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0d5h
        ; Exact mapped bytes 7E 15: jle 0x10072026
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10072026
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 3540h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes EB 08: jmp 0x1007202e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0
        mov edx, dword ptr [esi + 108h]
        push 40h
        push 0
        push 0
        mov eax, dword ptr [edi + edx]
        push 0
        push 0
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 67 C9 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], 101751f8h
        test eax, eax
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x1007208f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1007208f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esi + 10ch]
        push 64h
        mov byte ptr [esp + 20h], 1
        mov edx, dword ptr [ecx + edi]
        mov dword ptr [edx + ebx], ebp
        mov eax, dword ptr [esi + 10ch]
        mov ecx, dword ptr [eax + edi]
        mov ecx, dword ptr [ecx + ebx]
        ; Exact mapped bytes E8 6D D0 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10ch]
        push 101h
        mov eax, dword ptr [edx + edi]
        mov ecx, dword ptr [eax + ebx]
        ; Exact mapped bytes E8 97 D0 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        add ebx, 4
        cmp ebx, 1000h
        ; Exact mapped bytes 0F 8C 0B FF FF FF: jl 0x10071fe3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10ch]
        add edi, 4
        mov edx, dword ptr [ecx + edi - 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp edi, 20h
        ; Exact mapped bytes 0F 8C 57 FE FF FF: jl 0x10071f4d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1d4h
        ; Exact mapped bytes E8 A0 A6 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa6
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        xor ebx, ebx
        mov byte ptr [esp + 1ch], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 13: je 0x10072125
        __asm _emit 0x74
        __asm _emit 0x13
        push 40h
        push ebx
        push ebx
        push -64h
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 1D 05 00: call 0x100c3eb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10072127
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 174h], edi
        ; Exact mapped bytes 66 03 44 24 2C: add ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007214c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 CE 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10072159
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A7 CD 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        mov ebp, 8fh
        lea edx, [esi + 150h]
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [esp + 34h], 23c0h
        and ecx, 0e5ffh
        mov dword ptr [esp + 38h], edx
        or ch, 5
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 174h]
        or byte ptr [eax + 24h], 1
        mov dword ptr [esi + 0e4h], ebx
        mov dword ptr [esi + 0e8h], ebx
        push 58h
        ; Exact mapped bytes E8 F8 A5 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x10072242
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 9fh
        ; Exact mapped bytes 7E 12: jle 0x100721e1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100721e1
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 27c0h]
        ; Exact mapped bytes EB 02: jmp 0x100721e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, dword ptr [esi + 0e4h]
        push 190h
        push ebx
        push ebx
        push eax
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 B0 C7 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x1007223a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10072244
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 1
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E8 07 CF 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 40 A5 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100722fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 16: jle 0x10072299
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp ebp, ebx
        ; Exact mapped bytes 7C 12: jl 0x10072299
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 74 08: je 0x10072299
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esp + 34h]
        add ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x1007229b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, dword ptr [esi + 0e4h]
        push 190h
        mov edx, dword ptr [edx]
        push ebx
        push ebx
        push eax
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 F2 C6 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100722f8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x10072300
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 1
        mov dword ptr [eax - 20h], edi
        mov edi, dword ptr [esp + 34h]
        add edi, 40h
        add eax, 4
        inc ebp
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 30h], ebp
        lea edx, [ebp - 8fh]
        cmp edx, 8
        ; Exact mapped bytes 0F 8C 6F FE FF FF: jl 0x100721a1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 40h
        mov dword ptr [esi + 0e0h], ebx
        ; Exact mapped bytes E8 61 A4 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 10h
        xor eax, eax
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 184h
        ; Exact mapped bytes E8 46 A4 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 2A: je 0x10072394
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D A8 56 1C 10: mov ecx, dword ptr [0x101c56a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 505050h
        push ebx
        push 0dcdcdch
        push 78h
        push 320h
        push 50h
        push 14h
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 70 62 FA FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10072396
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 54 24 28: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        mov dword ptr [esi + 170h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], 1
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100723b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E9 CB 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100723c4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3C CB 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D5 A3 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 7D: je 0x1007245a
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0cah
        ; Exact mapped bytes 7E 12: jle 0x10072400
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10072400
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 3280h]
        ; Exact mapped bytes EB 02: jmp 0x10072402
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, edi
        add eax, -0ah
        push eax
        push ebx
        push ebx
        push 3e8h
        push 3e8h
        push esi
        ; Exact mapped bytes E8 92 C5 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007245c
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1007245c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, 0fff0h
        mov dword ptr [esi + 128h], edi
        ; Exact mapped bytes 66 21 6F 24: and word ptr [edi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6f
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 128h]
        push 101h
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 E0 CC 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 19 A3 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 27: je 0x100724c0
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esp + 2ch]
        mov ecx, edi
        add eax, -0ah
        push eax
        push ebx
        push ebx
        push 3e8h
        push 3e8h
        push esi
        ; Exact mapped bytes E8 FB C4 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100724c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes 66 21 6F 24: and word ptr [edi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6f
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 124h]
        push 101h
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 7F CC 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B8 A2 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 7F: je 0x10072579
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x1007251a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1007251a
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 6c0h]
        ; Exact mapped bytes EB 02: jmp 0x1007251c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        add ecx, 64h
        push ecx
        push ebx
        push ebx
        push 12ch
        push 190h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 78 C4 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x10072572
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, 0fff0h
        ; Exact mapped bytes EB 02: jmp 0x1007257b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 120h], edi
        ; Exact mapped bytes 66 21 6F 24: and word ptr [edi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6f
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 120h]
        lea edi, [esi + 220h]
        mov dword ptr [ecx + 50h], ebx
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 0e5ffh
        mov ecx, 6
        or dh, 5
        xor eax, eax
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 110h], 0ffffffffh
        mov dword ptr [esi + 21ch], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0bch], ebx
        mov dword ptr [esi + 11ch], ebx
        ; Exact mapped bytes 66 89 9E 14 01 00 00: mov word ptr [esi + 0x114], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 118h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
