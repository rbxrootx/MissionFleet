// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C2950 .. +0x760 bytes.
extern "C" __declspec(naked) void FUN_100c2950_100C2950() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov al, byte ptr [ebp + 0b75h]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 44 07 00 00: ja 0x100c30ab
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B0 30 0C 10: jmp dword ptr [eax*4 + 0x100c30b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x10
        mov ebx, 0fffff69dh
        lea esi, [ebp + 974h]
        mov edi, 440h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c29a0
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c29a0
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c29a0
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c29a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c29d3
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
        mov ecx, dword ptr [esi]
        push 25h
        push 8dh
        ; Exact mapped bytes E8 EF C2 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 640h
        ; Exact mapped bytes 7C 88: jl 0x100c2980
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69dh
        lea esi, [ebp + 974h]
        mov edi, 440h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2a2f
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2a2f
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2a2f
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2a31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2a62
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
        mov ecx, dword ptr [esi]
        push 47h
        push 8
        ; Exact mapped bytes E8 63 C2 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 640h
        ; Exact mapped bytes 7C 8B: jl 0x100c2a0f
        __asm _emit 0x7c
        __asm _emit 0x8b
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69dh
        lea esi, [ebp + 974h]
        mov edi, 440h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2abb
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2abb
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2abb
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2abd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2aee
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
        mov ecx, dword ptr [esi]
        push 47h
        push 19bh
        ; Exact mapped bytes E8 D4 C1 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 640h
        ; Exact mapped bytes 7C 88: jl 0x100c2a9b
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69dh
        lea esi, [ebp + 974h]
        mov edi, 440h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2b4a
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2b4a
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2b4a
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2b4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2b7d
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
        mov ecx, dword ptr [esi]
        push 47h
        push 258h
        ; Exact mapped bytes E8 45 C1 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 640h
        ; Exact mapped bytes 7C 88: jl 0x100c2b2a
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2bd9
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2bd9
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2bd9
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2bdb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2c0c
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
        mov ecx, dword ptr [esi]
        push 22h
        push 2ddh
        ; Exact mapped bytes E8 B6 C0 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c2bb9
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2c68
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2c68
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2c68
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2c6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2c9b
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
        mov ecx, dword ptr [esi]
        push 33h
        push 2ddh
        ; Exact mapped bytes E8 27 C0 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c2c48
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2cf7
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2cf7
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2cf7
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2cf9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2d2a
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
        mov ecx, dword ptr [esi]
        push 2ach
        push 127h
        ; Exact mapped bytes E8 95 BF 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 85: jl 0x100c2cd7
        __asm _emit 0x7c
        __asm _emit 0x85
        mov ebx, 0fffff693h
        lea esi, [ebp + 97ch]
        mov edi, 3c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2d84
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2d84
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2d84
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2d86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2db7
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
        mov ecx, dword ptr [esi]
        push 2ach
        push 22h
        ; Exact mapped bytes E8 0B BF 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 5c0h
        ; Exact mapped bytes 7C 88: jl 0x100c2d64
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69eh
        lea esi, [ebp + 974h]
        mov edi, 480h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2e13
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2e13
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2e13
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2e15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2e46
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
        mov ecx, dword ptr [esi]
        push 262h
        push 60h
        ; Exact mapped bytes E8 7C BE 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 680h
        ; Exact mapped bytes 7C 88: jl 0x100c2df3
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2ea2
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2ea2
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2ea2
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2ea4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2ed5
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
        mov ecx, dword ptr [esi]
        push 2cfh
        push 10h
        ; Exact mapped bytes E8 ED BD 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c2e82
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebx, 0fffff693h
        lea esi, [ebp + 97ch]
        mov edi, 3c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2f2c
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2f2c
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2f2c
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2f2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2f5f
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
        mov ecx, dword ptr [esi]
        push 2c5h
        push 0ceh
        ; Exact mapped bytes E8 60 BD 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 5c0h
        ; Exact mapped bytes 7C 85: jl 0x100c2f0c
        __asm _emit 0x7c
        __asm _emit 0x85
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69eh
        lea esi, [ebp + 974h]
        mov edi, 480h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2fbe
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2fbe
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2fbe
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2fc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2ff1
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
        mov ecx, dword ptr [esi]
        push 230h
        push 320h
        ; Exact mapped bytes E8 CE BC 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 680h
        ; Exact mapped bytes 7C 85: jl 0x100c2f9e
        __asm _emit 0x7c
        __asm _emit 0x85
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69eh
        lea esi, [ebp + 974h]
        mov edi, 480h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c3050
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c3050
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c3050
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c3052
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c3083
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
        mov ecx, dword ptr [esi]
        push 226h
        push 389h
        ; Exact mapped bytes E8 3C BC 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 680h
        ; Exact mapped bytes 7C 85: jl 0x100c3030
        __asm _emit 0x7c
        __asm _emit 0x85
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
