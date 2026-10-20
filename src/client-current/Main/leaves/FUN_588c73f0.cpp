// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C73F0 .. +0x4FC bytes.
extern "C" __declspec(naked) void FUN_588c73f0() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov ebx, ecx
        movzx eax, word ptr [ebx + 22eh]
        push edi
        lea edi, [ebx + 0a0h]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        movzx ecx, word ptr [ebx + 0aeh]
        mov edx, eax
        shr edx, 4
        mov esi, ecx
        xor edx, 0ffaah
        shr esi, 4
        and edx, 0ffh
        and esi, 0ffh
        ; Exact mapped bytes 66 3B F2: cmp si, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x588c75e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 32 01 00 00: jbe 0x588c7571
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 27ch]
        mov edx, dword ptr [ebx + 278h]
        shr eax, 4
        xor eax, 0ffffffaah
        xor esi, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        and eax, 0ffh
        shr ecx, 4
        sub esi, edx
        add esi, dword ptr [ebx + 0f8h]
        inc eax
        and ecx, 0ffh
        cmp eax, ecx
        mov dword ptr [ebx + 98h], 1
        mov dword ptr [ebx + 94h], 1
        ; Exact mapped bytes 7D 20: jge 0x588c74ac
        __asm _emit 0x7d
        __asm _emit 0x20
        movzx ecx, word ptr [ebx + 0aeh]
        shr ecx, 4
        and ecx, 0ffh
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        add esi, dword ptr [eax*4 + 58a0b200h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C F4: jl 0x588c74a0
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        cmp dword ptr [eax + 164h], 6eh
        ; Exact mapped bytes 7E 16: jle 0x588c74d2
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x588c74d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 1b8h]
        ; Exact mapped bytes EB 02: jmp 0x588c74d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 50h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x588c7506
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 6fh
        ; Exact mapped bytes 7E 16: jle 0x588c752a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x588c752a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1bch]
        ; Exact mapped bytes EB 02: jmp 0x588c752c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 54h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x588c75dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        mov dword ptr [ecx + 14h], edx
        mov edx, dword ptr [eax + 4]
        add ecx, 14h
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebx + 0fch]
        push edx
        push edi
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x588c7628
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0f8h]
        or edx, 0ffffffffh
        shr eax, 4
        mov dword ptr [ebx + 98h], edx
        mov dword ptr [ebx + 94h], edx
        mov edx, dword ptr [ebx + 278h]
        xor eax, 0ffffffaah
        xor edx, 0aaaaaaaah
        and eax, 0ffh
        shr ecx, 4
        sub esi, edx
        sub esi, dword ptr [ebx + 0fch]
        dec eax
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 7E 1C: jle 0x588c75cf
        __asm _emit 0x7e
        __asm _emit 0x1c
        movzx ecx, word ptr [ebx + 0aeh]
        shr ecx, 4
        and ecx, 0ffh
        sub esi, dword ptr [eax*4 + 58a0b200h]
        dec eax
        cmp eax, ecx
        ; Exact mapped bytes 7F F4: jg 0x588c75c3
        __asm _emit 0x7f
        __asm _emit 0xf4
        mov eax, dword ptr [ebx + 50h]
        xor edi, edi
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [ebx + 54h]
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [ebx + 0fch]
        push edx
        push edi
        ; Exact mapped bytes EB 41: jmp 0x588c7628
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebx + 50h]
        mov eax, dword ptr [ebx + 278h]
        mov esi, dword ptr [ebx + 0f8h]
        xor edi, edi
        mov dword ptr [ebx + 98h], edi
        mov dword ptr [ebx + 94h], edi
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [ebx + 54h]
        xor eax, 0aaaaaaaah
        sub esi, eax
        mov dword ptr [edx + 50h], edi
        mov eax, dword ptr [ebx + 0fch]
        mov ecx, dword ptr [ebx + 278h]
        push eax
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [ebx + 84h]
        ; Exact mapped bytes E8 6D 71 EB FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x71
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx edx, word ptr [ebx + 0aeh]
        mov ecx, dword ptr [ebx + 58h]
        shr edx, 4
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 14 FD 03 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 0aeh]
        mov edx, dword ptr [ebx + 0f4h]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D BF 00 00 00: jge 0x588c773c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 12dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x588c76a7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x588c76a7
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x588c76a7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588c76a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 60h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x588c76db
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebx + 0aeh]
        mov edx, dword ptr [ebx + 0f4h]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 0c6h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E D2 00 00 00: jle 0x588c77ec
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 8C CA 00 00 00: jl 0x588c77ec
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x588c77ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x588c77ee
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 0e1h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x588c7766
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x588c7766
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x588c7766
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588c7768
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 60h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x588c779a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebx + 0aeh]
        mov edx, dword ptr [ebx + 0f4h]
        and eax, 0fh
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 0afh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x588c77ec
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x588c77ec
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x588c77ec
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588c77ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 64h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 29: je 0x588c7821
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        lea ecx, [ebx + 12ch]
        push ecx
        mov ecx, dword ptr [ebx + 68h]
        ; Exact mapped bytes E8 B0 A4 E6 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa4
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 0fch]
        mov eax, dword ptr [ebx + 0f8h]
        mov ecx, dword ptr [ebx + 88h]
        push edx
        push eax
        ; Exact mapped bytes E8 57 6F EB FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, edi
        mov ecx, dword ptr [ebx + 78h]
        ; Exact mapped bytes 7C 3F: jl 0x588c788f
        __asm _emit 0x7c
        __asm _emit 0x3f
        push esi
        ; Exact mapped bytes E8 0A FB 03 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 1E: jle 0x588c7882
        __asm _emit 0x7e
        __asm _emit 0x1e
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 16: je 0x588c7882
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 190h]
        mov ecx, dword ptr [ebx + 78h]
        add eax, 8c0h
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes EB 43: jmp 0x588c78c5
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebx + 78h]
        xor eax, eax
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes EB 36: jmp 0x588c78c5
        __asm _emit 0xeb
        __asm _emit 0x36
        neg esi
        push esi
        ; Exact mapped bytes E8 C9 FA 03 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 25h
        ; Exact mapped bytes 7E 15: jle 0x588c78ba
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 0D: je 0x588c78ba
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 940h
        ; Exact mapped bytes EB 02: jmp 0x588c78bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ebx + 78h]
        mov dword ptr [edx + 0f8h], eax
        mov eax, dword ptr [ebx + 0f8h]
        mov ecx, dword ptr [ebx + 7ch]
        push eax
        ; Exact mapped bytes E8 8C FA 03 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push ecx
        mov ecx, dword ptr [ebx + 80h]
        ; Exact mapped bytes E8 7A FA 03 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
