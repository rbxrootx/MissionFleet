// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100974B0 .. +0xAAC bytes.
extern "C" __declspec(naked) void FUN_100974b0_100974B0() {
    __asm {
        push -1
        push 10170cf9h
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
        sub esp, 10h
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 38h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 BA 74 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebp, ebp
        push 198h
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esi], 10175f40h
        ; Exact mapped bytes E8 90 52 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebp
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes 74 0F: je 0x1009752f
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101abc08h
        mov ecx, eax
        ; Exact mapped bytes E8 93 85 06 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10097531
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 60 52 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebp
        mov byte ptr [esp + 24h], 2
        ; Exact mapped bytes 74 10: je 0x10097560
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 12 D8 F7 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097562
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        push esi
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes E8 FD D8 F7 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        lea eax, [esi + 58h]
        mov dword ptr [esp + 44h], eax
        push 54h
        ; Exact mapped bytes E8 1F 52 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 3
        ; Exact mapped bytes 74 73: je 0x10097606
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x100975b1
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100975b1
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100975b1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x100975b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 54h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E2 73 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10097608
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
        ; Exact mapped bytes EB 02: jmp 0x10097608
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        inc ebp
        mov byte ptr [esp + 28h], 0
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebp, 2
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 8C 56 FF FF FF: jl 0x1009757a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 72 51 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 4
        ; Exact mapped bytes 74 45: je 0x10097683
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x10097659
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10097659
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x1009765b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 54h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3F FC F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097685
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 58h]
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 C6 7A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 101h
        ; Exact mapped bytes E8 B9 7A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 F2 50 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 5
        ; Exact mapped bytes 74 1A: je 0x100976d8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9A D6 F7 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100976da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 86 D7 F7 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        lea eax, [esi + 68h]
        mov ebp, 2
        mov dword ptr [esp + 44h], 8
        mov dword ptr [esp + 40h], eax
        push 54h
        ; Exact mapped bytes E8 9B 50 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 28h], 6
        ; Exact mapped bytes 74 77: je 0x1009778e
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x10097739
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x10097739
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10097739
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        mov ebx, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1009773b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 64h]
        push 40h
        push 0
        push 0
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 5A 72 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10097790
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes EB 02: jmp 0x10097790
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 44h]
        add edi, 4
        add eax, 4
        inc ebp
        mov dword ptr [esp + 44h], edi
        mov dword ptr [esp + 40h], eax
        lea ecx, [ebp - 2]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 44 FF FF FF: jl 0x100976fe
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 38h]
        mov ebx, 4
        lea eax, [esi + 70h]
        mov dword ptr [esp + 40h], ebx
        mov dword ptr [esp + 44h], 10h
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes EB 04: jmp 0x100977dc
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 40h]
        push 54h
        ; Exact mapped bytes E8 BD 4F 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 7
        ; Exact mapped bytes 74 73: je 0x10097868
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x10097817
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x10097817
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10097817
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 44h]
        mov ebx, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x10097819
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 64h]
        push 40h
        push 0
        push 0
        push ebp
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 80 71 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x1009786a
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes EB 02: jmp 0x1009786a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 44h]
        add ebx, 4
        mov byte ptr [esp + 28h], 0
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 40h]
        inc eax
        mov dword ptr [esp + 44h], ebx
        mov dword ptr [esp + 40h], eax
        add eax, -4
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3C FF FF FF: jl 0x100977d8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B7 78 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        ; Exact mapped bytes E8 AA 78 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 9D 78 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 D3 4E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 8
        ; Exact mapped bytes 74 37: je 0x10097914
        __asm _emit 0x74
        __asm _emit 0x37
        mov edi, dword ptr [esp + 34h]
        push 0
        push 0
        lea ecx, [ebp + 0cah]
        push 0ffffffh
        lea edx, [edi + 8eh]
        push ecx
        push edx
        lea ecx, [ebp + 47h]
        lea edx, [edi + 2ch]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 64h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6E C2 06 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x1009791a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        push 90h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 74 4E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 9
        ; Exact mapped bytes 74 33: je 0x1009796f
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea ecx, [ebp + 0d8h]
        push 0ffffffh
        lea edx, [edi + 8eh]
        push ecx
        push edx
        lea ecx, [ebp + 55h]
        lea edx, [edi + 2ch]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 64h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 13 C2 06 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10097971
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 1D 4E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 0ah
        ; Exact mapped bytes 74 36: je 0x100979c9
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [ebp + 0d8h]
        push 0ffffffh
        lea edx, [edi + 0b9h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 55h
        push edx
        mov edx, dword ptr [esi + 64h]
        add edi, 96h
        push ebp
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B9 C1 06 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100979cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 80h], eax
        mov eax, dword ptr [esi + 78h]
        mov ecx, 1eh
        lea ebp, [esi + 84h]
        mov dword ptr [eax + 5ch], ecx
        mov eax, dword ptr [esi + 7ch]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [eax + 5ch], ecx
        mov eax, dword ptr [esi + 80h]
        mov dword ptr [esp + 14h], 5
        mov dword ptr [eax + 5ch], ecx
        mov ecx, dword ptr [esp + 38h]
        lea eax, [esi + 98h]
        add ecx, 4ch
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 44h], ecx
        push 54h
        ; Exact mapped bytes E8 82 4D 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x4d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 0bh
        ; Exact mapped bytes 74 76: je 0x10097aa6
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 164h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x10097a4b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10097a4b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 64h]
        ; Exact mapped bytes EB 02: jmp 0x10097a4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 64h]
        push 40h
        push 0
        add edx, -7
        push 0
        add ecx, 29h
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 42 6F 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10097aa8
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes EB 02: jmp 0x10097aa8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebx, dword ptr [esp + 30h]
        mov dword ptr [ebp], edi
        mov ebp, 5
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 40h], 140h
        ; Exact mapped bytes EB 04: jmp 0x10097acb
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 3ch]
        push 58h
        ; Exact mapped bytes E8 CE 4C 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        test edi, edi
        mov byte ptr [esp + 28h], 0ch
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x10097b6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x10097b0a
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x10097b0a
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10097b0a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        lea ebp, [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x10097b0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esi + 64h]
        push 40h
        push 0
        push 0
        add ecx, 18h
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 86 6E 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x10097b6c
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x10097b6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 40h]
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        add ebp, 40h
        add ebx, 4
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esp + 3ch]
        inc eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 3ch], eax
        add eax, -5
        cmp eax, 2
        mov dword ptr [esp + 40h], ebp
        ; Exact mapped bytes 0F 8C 22 FF FF FF: jl 0x10097ac7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 AA 75 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        push 0fffffeffh
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 9A 75 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [esp + 44h]
        add ebp, 4
        add ecx, 1eh
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        dec eax
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 23 FE FF FF: jne 0x10097a17
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 A2 4B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        xor ebp, ebp
        mov byte ptr [esp + 28h], 0dh
        cmp eax, ebp
        ; Exact mapped bytes 74 4E: je 0x10097c5e
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [esi + 50h]
        cmp dword ptr [edx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10097c2b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebp
        ; Exact mapped bytes 74 05: je 0x10097c2b
        __asm _emit 0x74
        __asm _emit 0x05
        add edx, 40h
        ; Exact mapped bytes EB 02: jmp 0x10097c2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push 40h
        lea ecx, [edi + 0e6h]
        push ecx
        lea ecx, [ebx + 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esi + 64h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 64 F6 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf6
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x10097c68
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 23 4B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 0eh
        ; Exact mapped bytes 74 49: je 0x10097cd6
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x10097cab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097cab
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x10097cad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0e6h]
        push 40h
        push edx
        lea edx, [ebx + 43h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EC F5 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097cd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 B3 4A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 0fh
        ; Exact mapped bytes 74 49: je 0x10097d46
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x10097d1b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097d1b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10097d1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0e6h]
        push 40h
        push edx
        lea edx, [ebx + 6eh]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7C F5 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097d48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 43 4A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 10h
        ; Exact mapped bytes 74 4C: je 0x10097db9
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10097d8b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097d8b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x10097d8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0e6h]
        push 40h
        push edx
        lea edx, [ebx + 99h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 09 F5 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097dbb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 D0 49 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 11h
        ; Exact mapped bytes 74 49: je 0x10097e29
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x10097dfe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097dfe
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x10097e00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 100h]
        push 40h
        push edx
        lea edx, [ebx + 70h]
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 99 F4 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097e2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 60 49 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 12h
        ; Exact mapped bytes 74 4C: je 0x10097e9c
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 50h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x10097e6e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097e6e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x10097e70
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 64h]
        add edi, 100h
        push 40h
        add ebx, 9bh
        push edi
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 26 F4 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097e9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        mov eax, dword ptr [esi + 0d0h]
        push 6ch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0d4h]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes E8 DE 48 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 28h], 13h
        pop ebx
        ; Exact mapped bytes 74 15: je 0x10097ee8
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebp
        push ebp
        push 62h
        push 107h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BA 94 01 00: call 0x100b13a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10097eea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [esp + 24h], 0
        push ecx
        mov ecx, eax
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 40 9D 01 00: call 0x100b1c40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        or edi, 0ffffffffh
        push 32ah
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes E8 3A 6E 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [esi + 0d0h]
        mov byte ptr [esi + 0d8h], 3
        mov dword ptr [esi + 0e0h], edi
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 0d4h]
        mov dword ptr [ecx + 50h], ebp
        mov ecx, esi
        ; Exact mapped bytes E8 CA 08 00 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
