// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4090 .. +0x4E9 bytes.
extern "C" __declspec(naked) void FUN_100e4090_100E4090() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov eax, dword ptr [ebx + 42ch]
        push edi
        lea edi, [ebx + 0a0h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebx + 0b0h]
        mov edx, ecx
        xor edx, eax
        xor edx, 0fffffaafh
        test edx, 0ff0h
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x100e4268
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0fffffaafh
        mov esi, ecx
        mov edx, eax
        and esi, 0ff0h
        and edx, 0ff0h
        cmp esi, edx
        ; Exact mapped bytes 0F 86 17 01 00 00: jbe 0x100e41fc
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 478h]
        mov edx, 1
        mov dword ptr [ebx + 98h], edx
        mov dword ptr [ebx + 94h], edx
        mov edx, dword ptr [ebx + 474h]
        xor esi, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        sub esi, edx
        mov edx, dword ptr [ebx + 0f8h]
        shr eax, 4
        and eax, 0ffh
        add esi, edx
        shr ecx, 4
        inc eax
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 73 13: jae 0x100e4141
        __asm _emit 0x73
        __asm _emit 0x13
        lea edx, [eax*4 + 101ace9ch]
        sub ecx, eax
        mov eax, dword ptr [edx]
        add edx, 4
        add esi, eax
        dec ecx
        ; Exact mapped bytes 75 F6: jne 0x100e4137
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        cmp dword ptr [eax + 164h], 6eh
        ; Exact mapped bytes 7E 12: jle 0x100e4163
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100e4163
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1b8h]
        ; Exact mapped bytes EB 02: jmp 0x100e4165
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 50h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e4197
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6fh
        ; Exact mapped bytes 7E 12: jle 0x100e41b7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100e41b7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1bch]
        ; Exact mapped bytes EB 02: jmp 0x100e41b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 54h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x100e425e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [ebx + 0fch]
        push eax
        push edi
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x100e42a9
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0f8h]
        or edx, 0ffffffffh
        mov dword ptr [ebx + 98h], edx
        mov dword ptr [ebx + 94h], edx
        mov edx, dword ptr [ebx + 474h]
        xor edx, 0aaaaaaaah
        sub esi, edx
        mov edx, dword ptr [ebx + 0fch]
        shr eax, 4
        and eax, 0ffh
        sub esi, edx
        shr ecx, 4
        dec eax
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 76 13: jbe 0x100e4250
        __asm _emit 0x76
        __asm _emit 0x13
        lea edx, [eax*4 + 101ace9ch]
        sub eax, ecx
        mov ecx, dword ptr [edx]
        sub edx, 4
        sub esi, ecx
        dec eax
        ; Exact mapped bytes 75 F6: jne 0x100e4246
        __asm _emit 0x75
        __asm _emit 0xf6
        mov eax, dword ptr [ebx + 50h]
        xor edi, edi
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [ebx + 54h]
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [ebx + 0fch]
        push eax
        push edi
        ; Exact mapped bytes EB 41: jmp 0x100e42a9
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebx + 50h]
        mov ecx, dword ptr [ebx + 474h]
        mov esi, dword ptr [ebx + 0f8h]
        xor edi, edi
        mov dword ptr [ebx + 98h], edi
        mov dword ptr [ebx + 94h], edi
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [ebx + 54h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [ebx + 474h]
        mov edx, dword ptr [ebx + 0fch]
        sub esi, ecx
        xor eax, 0aaaaaaaah
        push edx
        push eax
        mov ecx, dword ptr [ebx + 84h]
        ; Exact mapped bytes E8 9C 60 F4 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0b0h]
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        mov ecx, dword ptr [ebx + 58h]
        ; Exact mapped bytes E8 54 B4 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0b0h]
        and eax, 0fh
        lea edx, [eax + eax*4]
        lea ecx, [eax + edx*8]
        mov edx, dword ptr [ebx + 0f4h]
        shr edx, 1
        lea eax, [eax + ecx*2]
        add eax, edx
        lea ecx, [eax + eax*4]
        lea eax, [eax + ecx*2]
        lea edx, [eax + eax*4]
        mov eax, dword ptr [edx*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x100e43c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 12dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100e4327
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x100e4327
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100e4327
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e4329
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 60h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e435b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [ebx + 0b0h]
        and eax, 0fh
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*8]
        mov ecx, dword ptr [ebx + 0f4h]
        shr ecx, 1
        lea eax, [eax + edx*2]
        add eax, ecx
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 0c6h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100e43af
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x100e43af
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100e43af
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e43b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 64h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x100e44a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x100e447e
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 0e1h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100e43ea
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x100e43ea
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100e43ea
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e43ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 60h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e441e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [ebx + 0b0h]
        and eax, 0fh
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*8]
        mov ecx, dword ptr [ebx + 0f4h]
        shr ecx, 1
        lea eax, [eax + edx*2]
        add eax, ecx
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 0afh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100e4472
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, edi
        ; Exact mapped bytes 7C 0F: jl 0x100e4472
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100e4472
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100e4474
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 64h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e44a6
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [ebx + 68h]
        lea ecx, [ebx + 14ch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x100e44c2
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100e44c2
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
        mov ecx, dword ptr [ebx + 0fch]
        mov edx, dword ptr [ebx + 0f8h]
        push ecx
        mov ecx, dword ptr [ebx + 88h]
        push edx
        ; Exact mapped bytes E8 75 5E F4 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp esi, edi
        ; Exact mapped bytes 7C 3E: jl 0x100e451d
        __asm _emit 0x7c
        __asm _emit 0x3e
        mov ecx, dword ptr [ebx + 78h]
        push esi
        ; Exact mapped bytes E8 38 B2 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 1A: jle 0x100e4510
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 10: je 0x100e4510
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 78h]
        add eax, 8c0h
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes EB 42: jmp 0x100e4552
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebx + 78h]
        xor eax, eax
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes EB 35: jmp 0x100e4552
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebx + 78h]
        neg esi
        push esi
        ; Exact mapped bytes E8 F8 B1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 25h
        ; Exact mapped bytes 7E 11: jle 0x100e4547
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100e4547
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 940h
        ; Exact mapped bytes EB 02: jmp 0x100e4549
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ebx + 78h]
        mov dword ptr [edx + 0f8h], eax
        mov eax, dword ptr [ebx + 0f8h]
        mov ecx, dword ptr [ebx + 7ch]
        push eax
        ; Exact mapped bytes E8 BF B1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push ecx
        mov ecx, dword ptr [ebx + 80h]
        ; Exact mapped bytes E8 AD B1 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb1
        __asm _emit 0x01
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
