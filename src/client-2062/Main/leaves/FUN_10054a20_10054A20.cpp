// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10054A20 .. +0x5C6 bytes.
extern "C" __declspec(naked) void FUN_10054a20_10054A20() {
    __asm {
        push -1
        push 1016edceh
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
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 198h
        ; Exact mapped bytes E8 58 7D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 74 0F: je 0x10054a68
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aab44h
        mov ecx, eax
        ; Exact mapped bytes E8 5A B0 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10054a6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 54h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 340h], eax
        ; Exact mapped bytes E8 22 7D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 20h], 1
        ; Exact mapped bytes 74 69: je 0x10054afc
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [esi + 340h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0C: jle 0x10054aad
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 02: je 0x10054aad
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 EC 9E 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10054afe
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x10054afe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 344h], edi
        ; Exact mapped bytes E8 8E 7C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 2
        ; Exact mapped bytes 74 4B: je 0x10054b70
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0b7h
        ; Exact mapped bytes 7E 12: jle 0x10054b49
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10054b49
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2dc0h
        ; Exact mapped bytes EB 02: jmp 0x10054b4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 7d0h
        push 55h
        push 276h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 52 27 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10054b72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 194h], eax
        ; Exact mapped bytes E8 1D 7C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        test edi, edi
        mov dword ptr [esp + 20h], 3
        ; Exact mapped bytes 74 7D: je 0x10054c15
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1bfh
        ; Exact mapped bytes 7E 12: jle 0x10054bbb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10054bbb
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 6fch]
        ; Exact mapped bytes EB 02: jmp 0x10054bbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 194h]
        push 7cfh
        push 0
        push 0
        push 55h
        push 276h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D5 9D 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x10054c11
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10054c17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esi + 3dch], ecx
        ; Exact mapped bytes E8 35 A5 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        mov ebp, 7fffh
        push 80h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 5C 7B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 4
        ; Exact mapped bytes 74 3D: je 0x10054c94
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bdh
        ; Exact mapped bytes 7E 12: jle 0x10054c7b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10054c7b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2f40h
        ; Exact mapped bytes EB 02: jmp 0x10054c7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        push -47h
        push 137h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BE 2C FF FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10054c96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 3e8h], eax
        ; Exact mapped bytes E8 B0 A4 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 DF 7A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        test edi, edi
        mov dword ptr [esp + 20h], 5
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x10054d5e
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
        cmp dword ptr [eax + 160h], 0c0h
        ; Exact mapped bytes 7E 12: jle 0x10054cfd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10054cfd
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 3000h]
        ; Exact mapped bytes EB 02: jmp 0x10054cff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 3e8h]
        push 7cfh
        push 0
        push 0
        push -47h
        push 137h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 93 9C 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 29: je 0x10054d5a
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10054d60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 3ech], ecx
        ; Exact mapped bytes E8 E8 A3 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ech]
        lea ebx, [esi + 218h]
        mov dword ptr [esp + 10h], 20h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3e8h]
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        push 0a0h
        ; Exact mapped bytes E8 FA 79 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 6
        ; Exact mapped bytes 74 29: je 0x10054de2
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 708h
        push 12ch
        push 320h
        push 0
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E0 24 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10054de4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebp, 0ffffffffh
        push 64h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [ebx - 80h], eax
        ; Exact mapped bytes E8 AB 79 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 7
        ; Exact mapped bytes 74 10: je 0x10054e18
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9C BB FB FF: call 0x100109b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10054e1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 66 C7 47 26 D1 07: mov word ptr [edi + 0x26], 0x7d1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x10054e33
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6D A1 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10054e40
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C0 A0 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add ebx, 4
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 85 4A FF FF FF: jne 0x10054d9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 47 79 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        test edi, edi
        mov dword ptr [esp + 20h], 8
        ; Exact mapped bytes 74 7B: je 0x10054ee9
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 340h]
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10054e8c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10054e8c
        __asm _emit 0x74
        __asm _emit 0x05
        lea ebx, [eax + 40h]
        ; Exact mapped bytes EB 02: jmp 0x10054e8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 05 65 00: add ax, 0x65
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x65
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 4ah
        push 299h
        push esi
        ; Exact mapped bytes E8 06 9B 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9b
        __asm _emit 0x0a
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x10054eeb
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x10054eeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 3e4h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3e4h]
        push 101h
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes E8 51 A2 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edi, [esi + 320h]
        mov ebp, 6
        push 84h
        ; Exact mapped bytes E8 7C 78 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 14h], ebx
        test ebx, ebx
        mov dword ptr [esp + 20h], 9
        ; Exact mapped bytes 74 54: je 0x10054f8d
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10054f4b
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 8B 0D AC 57 1C 10: mov ecx, dword ptr [0x101c57ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 2
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x10054f6f
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x10054f6f
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10054f6f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10054f71
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 76ch
        push 0fffffda8h
        push 320h
        push eax
        push esi
        push 10h
        mov ecx, ebx
        ; Exact mapped bytes E8 05 E3 FC FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10054f8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 BB A1 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi - 4]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov edx, dword ptr [edi - 4]
        mov dword ptr [edx + 78h], 101h
        mov eax, dword ptr [edi - 4]
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        dec ebp
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x10054f1a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ret
    }
}
