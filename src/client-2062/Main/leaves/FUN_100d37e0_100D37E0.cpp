// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D37E0 .. +0x6CA bytes.
extern "C" __declspec(naked) void FUN_100d37e0_100D37E0() {
    __asm {
        push -1
        push 1017312ch
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
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        push edi
        xor edi, edi
        push 40h
        push edi
        push edi
        push ebp
        mov esi, ecx
        push ebx
        push eax
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 96 B1 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        push 54h
        and ecx, 3fdfh
        mov dword ptr [esp + 20h], edi
        or ecx, 20h
        mov dword ptr [esi], 1017641ch
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 54 8F 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 78: je 0x100d38d6
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8dh
        ; Exact mapped bytes 7E 12: jle 0x100d3881
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3881
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 234h]
        ; Exact mapped bytes EB 02: jmp 0x100d3883
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 19 B1 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d38ce
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d38d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes E8 76 B8 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 AF 8E 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 78: je 0x100d397b
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 89h
        ; Exact mapped bytes 7E 12: jle 0x100d3926
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3926
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 224h]
        ; Exact mapped bytes EB 02: jmp 0x100d3928
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 74 B0 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d3973
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d397d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0e6h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 91 B7 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0A 8E 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 78: je 0x100d3a20
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 89h
        ; Exact mapped bytes 7E 12: jle 0x100d39cb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d39cb
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 224h]
        ; Exact mapped bytes EB 02: jmp 0x100d39cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CF AF 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d3a18
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d3a22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0e6h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 EC B6 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 65 8D 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 28: je 0x100d3a75
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea edx, [ebp + 37h]
        push 0
        lea eax, [ebx + 28h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4D AF 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d3a77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0dch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c4h], ecx
        ; Exact mapped bytes E8 94 B6 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0D 8D 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 78: je 0x100d3b1d
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 88h
        ; Exact mapped bytes 7E 12: jle 0x100d3ac8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3ac8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 220h]
        ; Exact mapped bytes EB 02: jmp 0x100d3aca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D2 AE 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d3b15
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d3b1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 2F B6 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 68 8C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 78: je 0x100d3bc2
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8ch
        ; Exact mapped bytes 7E 12: jle 0x100d3b6d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3b6d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 230h]
        ; Exact mapped bytes EB 02: jmp 0x100d3b6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2D AE 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d3bba
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d3bc4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 8A B5 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C0 8B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 3B: je 0x100d3c2b
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 26h
        ; Exact mapped bytes 7E 12: jle 0x100d3c11
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3c11
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 980h
        ; Exact mapped bytes EB 02: jmp 0x100d3c13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0bh]
        push edx
        lea edx, [ebx + 102h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 67 B6 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3c2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 1F B5 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 55 8B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        mov edi, 0cbh
        ; Exact mapped bytes 74 37: je 0x100d3c97
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100d3c80
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3c80
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100d3c82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 26h]
        push edx
        lea edx, [ebx + 3ch]
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FB B5 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3c99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 B3 B4 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E9 8A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 3A: je 0x100d3d01
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100d3ce7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3ce7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100d3ce9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 71h]
        push edx
        lea edx, [ebx + 96h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 91 B5 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3d03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 49 B4 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 7F 8A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 3A: je 0x100d3d6b
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100d3d51
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3d51
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100d3d53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebp, 71h
        lea edx, [ebx + 0e6h]
        push ebp
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 27 B5 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3d6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 DC B3 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ebp, [ebx + 42h]
        lea edi, [esi + 0a4h]
        mov dword ptr [esp + 28h], 8
        mov ebx, 0fff0h
        push 0fch
        ; Exact mapped bytes E8 FC 89 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 3C: je 0x100d3df0
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d3dd5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3dd5
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x100d3dd7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 8eh
        push ecx
        push ebp
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A2 B4 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3df2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi - 20h], eax
        ; Exact mapped bytes E8 5A B3 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi - 20h]
        push 0fch
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 89 89 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 3C: je 0x100d3e63
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d3e48
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d3e48
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d3e4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, 9eh
        push edx
        push ebp
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F B4 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d3e65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 E8 B2 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add edi, 4
        add ebp, 1bh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esp + 28h]
        dec eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 85 07 FF FF FF: jne 0x100d3d9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
