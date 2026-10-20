// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CFB20 .. +0x3F3 bytes.
extern "C" __declspec(naked) void FUN_100cfb20_100CFB20() {
    __asm {
        push -1
        push 10172f0ah
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
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B EE 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        lea eax, [esi + 50h]
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esi], 101763cch
        mov ebx, 4
        mov dword ptr [esp + 38h], 10h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 0E CC 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7B: je 0x100cfc1f
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 BC 57 1C 10: mov eax, dword ptr [0x101c57bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100cfbc8
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100cfbc8
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100cfbc8
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100cfbca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE ED 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100cfc19
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100cfc21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        lea ecx, [ebx - 4]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 40 FF FF FF: jl 0x100cfb8b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 58h]
        mov ebx, 6
        mov dword ptr [esp + 38h], 18h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 3A CB 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 7B: je 0x100cfcf3
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 BC 57 1C 10: mov eax, dword ptr [0x101c57bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100cfc9c
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100cfc9c
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100cfc9c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100cfc9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FA EC 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100cfced
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100cfcf5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        lea ecx, [ebx - 6]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 40 FF FF FF: jl 0x100cfc5f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 81 66 24 FF BF: and word ptr [esi + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        push 0fffffeffh
        ; Exact mapped bytes E8 2E F4 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 0b4h
        ; Exact mapped bytes E8 E1 F3 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 0fffffeffh
        ; Exact mapped bytes E8 14 F4 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push 101h
        ; Exact mapped bytes E8 07 F4 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 3D CA 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 36: je 0x100cfda9
        __asm _emit 0x74
        __asm _emit 0x36
        mov edi, dword ptr [esp + 28h]
        push 646464h
        push 0
        lea edx, [ebp + 32h]
        push 0ffffffh
        push edx
        lea ecx, [edi + 9ch]
        lea edx, [ebp + 25h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edi + 20h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A9 8B F4 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100cfdaf
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 DF C9 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 38: je 0x100cfe09
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100cfdf2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cfdf2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100cfdf4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 3eh]
        push edx
        lea edx, [edi + 49h]
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 89 F4 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100cfe0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        mov eax, dword ptr [esi + 60h]
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [eax + 90h], 10h
        ; Exact mapped bytes E8 76 C9 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 46: je 0x100cfe80
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D BC 57 1C 10: mov ecx, dword ptr [0x101c57bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100cfe5b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cfe5b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100cfe5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 4eh]
        push 40h
        push edx
        lea edx, [edi + 4fh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 42 74 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x74
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cfe82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 0C C9 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 43: je 0x100cfee7
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D BC 57 1C 10: mov ecx, dword ptr [0x101c57bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100cfec2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100cfec2
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100cfec4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 4eh
        push 40h
        add edi, 7bh
        push ebp
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DB 73 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cfee9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        or ah, 5
        pop edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
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
