// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A8770 .. +0x7EE bytes.
extern "C" __declspec(naked) void FUN_100a8770_100A8770() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D DF 01 00 00: jge 0x100a8988
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 2a5h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a87cf
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a87cf
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a87cf
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a87d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 448h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a8806
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 25ah
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a885a
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a885a
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a885a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a885c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 444h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a8891
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 33bh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a88e5
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a88e5
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a88e5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a88e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 450h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a891c
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 2f0h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a8970
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a8970
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a8970
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a8972
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 44ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x100a8b7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x100a8b56
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a89ac
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a89ac
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a89ac
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a89ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 448h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a89e3
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        sub eax, 19h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a8a35
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a8a35
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a8a35
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a8a37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 444h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a8a6c
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 7dh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a8abe
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a8abe
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a8abe
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a8ac0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 450h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a8af5
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 4bh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a8b47
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a8b47
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a8b47
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a8b49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 44ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a8b7e
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
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esi + 108h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + eax*4]
        mov edi, dword ptr [ecx + 160h]
        lea edx, [eax*4 + 10181688h]
        mov eax, dword ptr [eax*4 + 10181750h]
        inc eax
        cmp edi, eax
        ; Exact mapped bytes 7E 15: jle 0x100a8bd7
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100a8bd7
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100a8bd7
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100a8bd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 440h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100a8c0e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0c8h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100a8c37
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100a8c37
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100a8c37
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100a8c39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 43ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100a8c6e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        mov ecx, dword ptr [esi + 0c4h]
        mov edi, 1
        and ecx, 0fh
        ; Exact mapped bytes 74 45: je 0x100a8cc3
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [esi + 108h]
        lea edx, [ecx + ecx*4]
        shr eax, 1
        lea edx, [ecx + edx*8]
        lea ecx, [ecx + edx*2]
        add eax, ecx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [esi + 458h]
        lea eax, [eax + eax*4]
        mov cl, byte ptr [eax*4 + 101816c8h]
        and ecx, 3fh
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [esi + 458h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 454h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 19: jmp 0x100a8cdc
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [esi + 458h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 454h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 BC 00 00 00: mov ax, word ptr [esi + 0xbc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 2A 6A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 04 01 00 00: mov cx, word ptr [esi + 0x104]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 BC 00 00 00: mov dx, word ptr [esi + 0xbc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aah
        xor edx, 0aah
        imul ecx, edx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, dword ptr [esi + 94h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 EC 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 DF 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E BE 00 00 00: mov cx, word ptr [esi + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 C4 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 04 01 00 00: mov cx, word ptr [esi + 0x104]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 BE 00 00 00: mov dx, word ptr [esi + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aah
        xor edx, 0aah
        imul ecx, edx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, dword ptr [esi + 98h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 86 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 BE 00 00 00: mov ax, word ptr [esi + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        lea ecx, [eax + eax*4]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes E8 67 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 96 C0 00 00 00: mov dx, word ptr [esi + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 4C 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 8E 04 01 00 00: mov cx, word ptr [esi + 0x104]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 C0 00 00 00: mov ax, word ptr [esi + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aah
        xor eax, 0aah
        imul ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 9ch]
        push edx
        ; Exact mapped bytes E8 0F 69 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 C0 00 00 00: mov ax, word ptr [esi + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        lea eax, [eax + eax*4]
        mov ecx, dword ptr [esi + 0a8h]
        lea edx, [eax + eax*4]
        push edx
        ; Exact mapped bytes E8 EF 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 86 BC 00 00 00: mov ax, word ptr [esi + 0xbc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E C0 00 00 00: mov cx, word ptr [esi + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor eax, 0aah
        ; Exact mapped bytes 66 8B 96 BE 00 00 00: mov dx, word ptr [esi + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aah
        add eax, ecx
        mov ecx, dword ptr [esi + 80h]
        xor edx, 0aah
        add eax, edx
        push eax
        ; Exact mapped bytes E8 B3 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 DE 00 00 00: mov ax, word ptr [esi + 0xde]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 99 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, ecx
        and eax, 0fh
        cmp eax, 2
        ; Exact mapped bytes 75 2B: jne 0x100a8ec2
        __asm _emit 0x75
        __asm _emit 0x2b
        xor ecx, 0fffffaafh
        mov eax, 0cccccccdh
        shr ecx, 4
        and ecx, 0ffh
        mul ecx
        mov ecx, dword ptr [esi + 0b0h]
        shr edx, 2
        add edx, 5
        push edx
        ; Exact mapped bytes E8 61 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        ret
        cmp eax, edi
        ; Exact mapped bytes 75 2B: jne 0x100a8ef1
        __asm _emit 0x75
        __asm _emit 0x2b
        xor ecx, 0fffffaafh
        mov eax, 0aaaaaaabh
        shr ecx, 4
        and ecx, 0ffh
        mul ecx
        mov ecx, dword ptr [esi + 0b0h]
        shr edx, 2
        add edx, 0ch
        push edx
        ; Exact mapped bytes E8 32 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        ret
        cmp eax, 3
        ; Exact mapped bytes 75 1B: jne 0x100a8f11
        __asm _emit 0x75
        __asm _emit 0x1b
        xor ecx, 0fffffabfh
        shr ecx, 5
        and ecx, 7fh
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 12 68 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        ret
        cmp eax, 4
        ; Exact mapped bytes 75 1E: jne 0x100a8f34
        __asm _emit 0x75
        __asm _emit 0x1e
        xor ecx, 0fffffabfh
        shr ecx, 5
        and ecx, 7fh
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 EF 67 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        ret
        xor ecx, 0fffffaafh
        mov eax, 0aaaaaaabh
        shr ecx, 4
        and ecx, 0ffh
        mul ecx
        mov ecx, dword ptr [esi + 0b0h]
        shr edx, 1
        add edx, 2
        push edx
        ; Exact mapped bytes E8 C5 67 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
