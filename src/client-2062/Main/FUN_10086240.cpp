// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10086240 .. +0x225B bytes.
extern "C" __declspec(naked) void FUN_10086240() {
    __asm {
        push -1
        push 101703c2h
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
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 28h]
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 34h], esi
        ; Exact mapped bytes E8 FC 1C FC FF: call 0x10047f90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov cl, byte ptr [esp + 28h]
        xor ebp, ebp
        mov dword ptr [esp + 1ch], ebp
        mov byte ptr [esi + 190h], cl
        mov dword ptr [esi + 194h], ebp
        mov dword ptr [esi + 198h], ebp
        mov dword ptr [esi + 19ch], ebp
        mov dl, byte ptr [esp + 28h]
        mov dword ptr [esi + 228h], ebp
        mov byte ptr [esi + 224h], dl
        mov dword ptr [esi + 22ch], ebp
        mov dword ptr [esi + 230h], ebp
        mov dword ptr [esi], 10175e44h
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 52h]
        mov byte ptr [esp + 1ch], 2
        mov eax, dword ptr [eax + 50h]
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], ecx
        mov eax, dword ptr [esi + 90h]
        mov ecx, 77h
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 12: jle 0x10086319
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x10086319
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1dch]
        ; Exact mapped bytes EB 02: jmp 0x1008631b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 4]
        lea edx, [ebx + 172h]
        add eax, edi
        mov dword ptr [esi + 6ch], eax
        mov dword ptr [esi + 70h], edx
        mov dword ptr [esi + 78h], 140h
        mov dword ptr [esi + 7ch], ebx
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 12: jle 0x10086356
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x10086356
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1dch]
        ; Exact mapped bytes EB 02: jmp 0x10086358
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 40h], 6eh
        mov dword ptr [esi + 74h], eax
        lea eax, [esi + 94h]
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 44h], 1b8h
        ; Exact mapped bytes EB 02: jmp 0x1008637c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        ; Exact mapped bytes E8 1D 64 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 78: je 0x1008640d
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esp + 40h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100863be
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebp
        ; Exact mapped bytes 7C 13: jl 0x100863be
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 09: je 0x100863be
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100863c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DC 85 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008640f
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1008640f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 40h]
        add edx, 9
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 44h]
        add eax, 24h
        mov dword ptr [esp + 40h], edx
        cmp eax, 200h
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 8C 38 FF FF FF: jl 0x1008637a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        ; Exact mapped bytes E8 0E 8D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 FE 8C 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, 7eh
        lea eax, [esi + 9ch]
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 44h], 1f8h
        ; Exact mapped bytes EB 04: jmp 0x10086483
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        push 54h
        ; Exact mapped bytes E8 16 63 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x63
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 7D: je 0x10086519
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x100864c1
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x100864c1
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100864c1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 44h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100864c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea eax, [ebx + 4fh]
        push 0
        add ecx, 1bfh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D0 84 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008651b
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1008651b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 40h]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 44h]
        sub eax, 4
        dec edx
        cmp eax, 1f0h
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes 0F 8F 33 FF FF FF: jg 0x1008647f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 9ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 04 8C 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 F4 8B 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        lea eax, [esi + 0a4h]
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], 2
        lea eax, [ebp + 1dfh]
        mov edi, eax
        push 0fch
        ; Exact mapped bytes E8 0C 62 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 38: je 0x100865dc
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100865c8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100865c8
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100865ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 50h]
        push ecx
        push edi
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B6 8C 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100865de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 44h]
        add edi, 11h
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 40h]
        add ecx, 4
        dec eax
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 75 8C: jne 0x1008658a
        __asm _emit 0x75
        __asm _emit 0x8c
        mov ecx, dword ptr [esi + 0a4h]
        push 1
        ; Exact mapped bytes E8 15 91 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 2
        ; Exact mapped bytes E8 08 91 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 81 61 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100866ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0a6h
        ; Exact mapped bytes 7E 16: jle 0x1008665d
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008665d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 298h]
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes EB 08: jmp 0x10086665
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea eax, [ebx + 4fh]
        push 0
        lea ecx, [ebp + 1f8h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 83 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x100866bc
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100866bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes E8 D2 60 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x10086769
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0abh
        ; Exact mapped bytes 7E 16: jle 0x1008670c
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008670c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 2ach]
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10086714
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea edx, [ebx + 4fh]
        push 0
        lea eax, [ebp + 211h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 82 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1008676b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1008676b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 20 60 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 49: je 0x100867d9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x100867b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100867b1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x100867b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4fh]
        push 40h
        push edx
        lea edx, [ebp + 1f8h]
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
        ; Exact mapped bytes E8 E9 0A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100867db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 B0 5F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 49: je 0x10086849
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x10086821
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10086821
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x10086823
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 4fh]
        push 40h
        push edx
        lea edx, [ebp + 211h]
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
        ; Exact mapped bytes E8 79 0A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008684b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b8h], eax
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 FA 88 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 EA 88 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        ; Exact mapped bytes E8 DA 88 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 CA 88 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        push 54h
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 F6 5E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 28: je 0x100868e4
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea eax, [ebx + 7ah]
        push 0
        lea ecx, [ebp + 92h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DB 80 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100868e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes E8 A8 5E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 28: je 0x10086932
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea edx, [ebx + 7ah]
        push 0
        lea eax, [ebp + 92h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8D 80 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10086934
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c0h], edi
        ; Exact mapped bytes E8 5A 5E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 51: je 0x100869a9
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        lea ecx, [ebx + 89h]
        push 0ffffffh
        lea edx, [ebp + 121h]
        push ecx
        lea eax, [ebx + 7ch]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 0aah]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F7 F1 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 02 5E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100869ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c4h], edi
        ; Exact mapped bytes E8 E3 5D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 54: je 0x10086a23
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea eax, [ebx + 9bh]
        push 0ffffffh
        lea ecx, [ebp + 109h]
        push eax
        lea edx, [ebx + 8eh]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 92h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D F1 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 88 5D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10086a25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 69 5D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 53: je 0x10086a9c
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        lea edx, [ebx + 0adh]
        push 0ffffffh
        lea eax, [ebp + 109h]
        push edx
        lea ecx, [ebx + 0a0h]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 92h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 04 F1 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 11h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 0F 5D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10086a9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes E8 F0 5C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 54: je 0x10086b16
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea ecx, [ebx + 0bfh]
        push 0ffffffh
        lea edx, [ebp + 109h]
        push ecx
        lea eax, [ebx + 0b2h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 92h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8A F0 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 13h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 95 5C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10086b18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes E8 73 5C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 3B: je 0x10086b78
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x10086b5e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10086b5e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x10086b60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 60h]
        push edx
        lea edx, [ebp + 18ch]
        push edx
        push 0bh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1A 87 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10086b7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [eax + 54h], 7fffffffh
        ; Exact mapped bytes E8 0D 5C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x10086c2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0b0h
        ; Exact mapped bytes 7E 16: jle 0x10086bd1
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10086bd1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 2c0h]
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes EB 08: jmp 0x10086bd9
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea ecx, [ebx + 7ah]
        push 0
        lea edx, [ebp + 18eh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BE 7D 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10086c30
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10086c30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes E8 5E 5B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x10086cdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0b5h
        ; Exact mapped bytes 7E 16: jle 0x10086c80
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10086c80
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 2d4h]
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10086c88
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 44h], 0
        push 40h
        push 0
        lea edx, [ebx + 7ah]
        push 0
        lea eax, [ebp + 1e8h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0F 7D 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10086cdf
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10086cdf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0dch], edi
        ; Exact mapped bytes E8 AC 5A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 49: je 0x10086d4d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x10086d25
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10086d25
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 6c0h
        ; Exact mapped bytes EB 02: jmp 0x10086d27
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 7ah]
        push 40h
        push edx
        lea edx, [ebp + 18eh]
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
        ; Exact mapped bytes E8 75 05 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10086d4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 3C 5A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 49: je 0x10086dbd
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x10086d95
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10086d95
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x10086d97
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
        add ebx, 7ah
        push 40h
        add ebp, 1e8h
        push ebx
        push ebp
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
        ; Exact mapped bytes E8 05 05 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10086dbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e4h], eax
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 86 83 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 0fffffeffh
        ; Exact mapped bytes E8 76 83 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push 101h
        ; Exact mapped bytes E8 66 83 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 101h
        ; Exact mapped bytes E8 56 83 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        lea ebp, [esi + 0e8h]
        mov dword ptr [esp + 44h], 0ah
        push 58h
        ; Exact mapped bytes E8 81 59 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x59
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 7A: je 0x10086eab
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], 1dh
        ; Exact mapped bytes 7E 12: jle 0x10086e52
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10086e52
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 740h]
        ; Exact mapped bytes EB 02: jmp 0x10086e54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 44 7B 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x10086ead
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x10086ead
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 E4 58 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x58
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 7A: je 0x10086f48
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x10086eef
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10086eef
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 780h]
        ; Exact mapped bytes EB 02: jmp 0x10086ef1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A7 7A 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x10086f4a
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
        ; Exact mapped bytes EB 02: jmp 0x10086f4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 28h], edi
        mov ecx, dword ptr [ebp]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 01 82 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 0fffbh
        add ebp, 4
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 44h]
        dec eax
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 85 94 FE FF FF: jne 0x10086e18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 15 58 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 7F: je 0x1008701c
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0ddh
        ; Exact mapped bytes 7E 12: jle 0x10086fc1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10086fc1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 374h]
        ; Exact mapped bytes EB 02: jmp 0x10086fc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        lea edx, [ebx + 7ah]
        push 0
        add eax, 1b9h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CD 79 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 32: je 0x10087022
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        ; Exact mapped bytes EB 06: jmp 0x10087022
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 138h], edi
        ; Exact mapped bytes E8 69 57 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x57
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 4D: je 0x10087094
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x10087068
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10087068
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 900h
        ; Exact mapped bytes EB 02: jmp 0x1008706a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 7ah]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1b9h
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
        ; Exact mapped bytes E8 2E 02 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10087096
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 13ch], eax
        mov ecx, dword ptr [esi + 138h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 AF 80 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        push 101h
        ; Exact mapped bytes E8 9F 80 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D8 56 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 7F: je 0x10087159
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0c4h
        ; Exact mapped bytes 7E 12: jle 0x100870fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100870fe
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 310h]
        ; Exact mapped bytes EB 02: jmp 0x10087100
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea eax, [ebx + 0dbh]
        push 0
        add ecx, 1afh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 90 78 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008715b
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1008715b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 140h], edi
        ; Exact mapped bytes E8 30 56 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 50: je 0x100871d0
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x100871a1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100871a1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x100871a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        add ebx, 0dbh
        push 40h
        add edx, 1afh
        push ebx
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
        ; Exact mapped bytes E8 F2 00 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100871d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 144h], eax
        mov ecx, dword ptr [esi + 140h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 73 7F 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 144h]
        push 101h
        ; Exact mapped bytes E8 63 7F 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebx, 12ch
        mov dword ptr [esp + 44h], 4b0h
        push 54h
        ; Exact mapped bytes E8 8F 55 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1fh
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100872a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x1008724c
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x1008724c
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1008724c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1008724e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        add edx, 0fbh
        push 0
        add eax, 56h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 41 77 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100872aa
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100872aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [esi + eax - 368h], edi
        add eax, 4
        inc ebx
        mov dword ptr [esp + 44h], eax
        lea eax, [ebx - 12ch]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 39 FF FF FF: jl 0x1008720a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 148h]
        push 0fffffeffh
        ; Exact mapped bytes E8 7F 7E 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        lea ecx, [esi + 150h]
        mov dword ptr [esp + 40h], 134h
        mov dword ptr [esp + 38h], ecx
        lea eax, [edx + 101h]
        mov dword ptr [esp + 3ch], eax
        xor ebx, ebx
        mov dword ptr [esp + 44h], ecx
        push 54h
        ; Exact mapped bytes E8 92 54 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100873a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [esp + 40h]
        add eax, ebx
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x1008734b
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1008734b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1008734b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1008734d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 3ch]
        push 40h
        push 0
        push 0
        add edx, 118h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 45 76 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100873a6
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100873a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        inc ebx
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebx, 2
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 8C 45 FF FF FF: jl 0x10087307
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 38h]
        push 0fffffeffh
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 8E 7D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 44h]
        add eax, 4
        add edi, 12h
        cmp eax, 148h
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 3ch], edi
        ; Exact mapped bytes 0F 8C 06 FF FF FF: jl 0x10087301
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 9E 53 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 74: je 0x10087488
        __asm _emit 0x74
        __asm _emit 0x74
        mov ebx, dword ptr [esp + 2ch]
        push 40h
        ; Exact mapped bytes 8B 2D 9C 56 1C 10: mov ebp, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebx + 10ah]
        lea edx, [ebx + 0fbh]
        push eax
        mov eax, dword ptr [esp + 30h]
        lea ecx, [eax + 0ech]
        add eax, 73h
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6B 75 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 22h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 23 53 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x1008748e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        lea eax, [esi + 17ch]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [esi + 178h], edi
        mov dword ptr [esp + 44h], eax
        lea ebp, [ebx + 101h]
        mov dword ptr [esp + 40h], 5
        push 70h
        ; Exact mapped bytes E8 E8 52 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 69: je 0x10087533
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 1D 9C 56 1C 10: mov ebx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 0fh]
        push 40h
        lea edx, [eax + 1dbh]
        push ecx
        push edx
        add eax, 134h
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C0 74 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 24h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 78 52 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10087535
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        add ebp, 12h
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 44h], eax
        mov eax, dword ptr [esp + 40h]
        dec eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 58 FF FF FF: jne 0x100874b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        lea ebx, [esi + 1b4h]
        add eax, 101h
        mov dword ptr [esp + 40h], 5
        mov dword ptr [esp + 44h], eax
        mov ebp, 0fffeh
        push 54h
        ; Exact mapped bytes E8 20 52 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x10087618
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0d8h
        ; Exact mapped bytes 7E 12: jle 0x100875ba
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100875ba
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 360h]
        ; Exact mapped bytes EB 02: jmp 0x100875bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 44h]
        push 40h
        push 0
        push 0
        add edx, 1e8h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 73 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10087611
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
        mov ebp, 0fffeh
        ; Exact mapped bytes EB 02: jmp 0x1008761a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [ebx - 14h], edi
        ; Exact mapped bytes E8 74 51 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 4E: je 0x1008768a
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x1008765d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008765d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x1008765f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 44h]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1e8h
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
        ; Exact mapped bytes E8 38 FC F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008768c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        mov ecx, dword ptr [ebx - 14h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes E8 C0 7A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 101h
        ; Exact mapped bytes E8 B4 7A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D 44 D1 1A 10 03: cmp word ptr [0x101ad144], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x03
        ; Exact mapped bytes 75 0D: jne 0x100876c3
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebx - 14h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 40h]
        add ebx, 4
        add ecx, 12h
        dec eax
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 99 FE FF FF: jne 0x10087579
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 194h]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x10087708
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 19ch]
        sub ecx, eax
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 73 7C: jae 0x10087784
        __asm _emit 0x73
        __asm _emit 0x7c
        push 0a80h
        ; Exact mapped bytes E8 8E 50 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 194h]
        mov ebp, eax
        mov eax, dword ptr [esi + 198h]
        add esp, 4
        cmp edi, eax
        mov ebx, ebp
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 74 18: je 0x10087745
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        push ebx
        ; Exact mapped bytes E8 CC 35 00 00: call 0x1008ad00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4ch]
        add edi, 54h
        add esp, 8
        add ebx, 54h
        cmp edi, eax
        ; Exact mapped bytes 75 E8: jne 0x1008772d
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 194h]
        lea edi, [esi + 190h]
        push eax
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes E8 29 50 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp + 0a80h]
        add esp, 4
        mov dword ptr [edi + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes E8 F2 34 00 00: call 0x1008ac60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*8]
        mov dword ptr [edi + 4], ebp
        sub ecx, eax
        lea edx, [ecx + ecx*2]
        lea eax, [ebp + edx*4]
        mov dword ptr [edi + 8], eax
        push 7ch
        ; Exact mapped bytes E8 15 50 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 27h
        ; Exact mapped bytes 74 17: je 0x100877b2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 30h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F0 74 FF FF: call 0x1007eca0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100877b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1c8h], eax
        mov ebp, 7eh
        lea eax, [esi + 1cch]
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [esp + 44h], ebp
        mov dword ptr [esp + 40h], eax
        mov ebx, 1f8h
        ; Exact mapped bytes EB 04: jmp 0x100877dd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 44h]
        push 54h
        ; Exact mapped bytes E8 BC 4F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 28h
        ; Exact mapped bytes 74 7F: je 0x10087875
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x10087817
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10087817
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10087817
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x10087819
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        add edx, 18fh
        push 0
        add eax, 1bfh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 74 71 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10087877
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x10087877
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 44h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebx, 1f0h
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes 0F 8F 38 FF FF FF: jg 0x100877d9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1cch]
        push 0fffffeffh
        ; Exact mapped bytes E8 AF 78 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1d0h]
        push 101h
        ; Exact mapped bytes E8 9F 78 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        lea ebx, [esi + 1d4h]
        mov ebp, 2
        lea edi, [eax + 1dfh]
        push 0fch
        ; Exact mapped bytes E8 C0 4E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4e
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 29h
        ; Exact mapped bytes 74 3F: je 0x1008792f
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x10087914
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10087914
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x10087916
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 190h
        push ecx
        push edi
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 79 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10087931
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        add ebx, 4
        add edi, 11h
        dec ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 75 95: jne 0x100878d6
        __asm _emit 0x75
        __asm _emit 0x95
        mov ecx, dword ptr [esi + 1d4h]
        push 2
        ; Exact mapped bytes E8 D2 7D 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1d8h]
        push 2
        ; Exact mapped bytes E8 C5 7D 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3E 4E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2ah
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x100879fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0a6h
        ; Exact mapped bytes 7E 12: jle 0x1008799c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008799c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 298h]
        ; Exact mapped bytes EB 02: jmp 0x1008799e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        push 40h
        push 0
        add edx, 18fh
        push 0
        lea eax, [ebp + 1f8h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE 6F 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 31: je 0x10087a00
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
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
        ; Exact mapped bytes EB 06: jmp 0x10087a00
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 28h]
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 1dch], edi
        ; Exact mapped bytes E8 8E 4D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2bh
        ; Exact mapped bytes 74 7D: je 0x10087aa1
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0abh
        ; Exact mapped bytes 7E 12: jle 0x10087a48
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10087a48
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 2ach]
        ; Exact mapped bytes EB 02: jmp 0x10087a4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        add eax, 18fh
        push 0
        lea ecx, [ebp + 211h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 47 6F 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10087aa3
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
        ; Exact mapped bytes EB 02: jmp 0x10087aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 1e0h], edi
        ; Exact mapped bytes E8 E8 4C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2ch
        ; Exact mapped bytes 74 50: je 0x10087b18
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x10087ae9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10087ae9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x10087aeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 18fh
        push edx
        lea edx, [ebp + 1f8h]
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
        ; Exact mapped bytes E8 AA F7 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10087b1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 1e4h], eax
        ; Exact mapped bytes E8 71 4C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2dh
        ; Exact mapped bytes 74 50: je 0x10087b8f
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x10087b60
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10087b60
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x10087b62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 18fh
        push edx
        lea edx, [ebp + 211h]
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
        ; Exact mapped bytes E8 33 F7 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10087b91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1dch]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 1e8h], eax
        ; Exact mapped bytes E8 B4 75 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1e0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 A4 75 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1e4h]
        push 101h
        ; Exact mapped bytes E8 94 75 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1e8h]
        push 101h
        ; Exact mapped bytes E8 84 75 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1e8h]
        push 54h
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes E8 B0 4B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2eh
        ; Exact mapped bytes 74 77: je 0x10087c79
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 75h
        ; Exact mapped bytes 7E 12: jle 0x10087c23
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10087c23
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 1d4h]
        ; Exact mapped bytes EB 02: jmp 0x10087c25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        add eax, 1abh
        push 0
        lea ecx, [ebp + 40h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F 6D 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x10087c7b
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
        ; Exact mapped bytes EB 02: jmp 0x10087c7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1ech], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edi, [ebp + 156h]
        mov byte ptr [esp + 1ch], 2
        lea ebx, [esi + 1f0h]
        mov ebp, 2
        push 0fch
        ; Exact mapped bytes E8 F9 4A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2fh
        ; Exact mapped bytes 74 3F: je 0x10087cf6
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x10087cdb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10087cdb
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x10087cdd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 1a1h
        push ecx
        push edi
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9C 75 07 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10087cf8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        add ebx, 4
        add edi, 20h
        dec ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 75 95: jne 0x10087c9d
        __asm _emit 0x75
        __asm _emit 0x95
        mov eax, dword ptr [esp + 2ch]
        lea edx, [esi + 1f8h]
        add eax, 1c3h
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], 4
        mov ebx, edx
        mov ebp, 2eh
        mov dword ptr [esp + 44h], 0b80h
        mov dword ptr [esp + 40h], ebp
        ; Exact mapped bytes EB 04: jmp 0x10087d40
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        push 58h
        ; Exact mapped bytes E8 59 4A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 30h
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x10087ddf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x10087d82
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x10087d82
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10087d82
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 44h]
        lea ebp, [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x10087d84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 38h]
        push 40h
        push 0
        push 0
        add eax, 4eh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 11 6C 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x10087de1
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
        ; Exact mapped bytes EB 02: jmp 0x10087de1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 44h]
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
        mov eax, dword ptr [esp + 40h]
        inc eax
        mov byte ptr [esp + 1ch], 2
        mov dword ptr [esp + 40h], eax
        add eax, -2eh
        cmp eax, 2
        mov dword ptr [esp + 44h], ebp
        ; Exact mapped bytes 0F 8C 22 FF FF FF: jl 0x10087d3c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 3ch]
        push 0fffffeffh
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 36 73 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add ecx, 10h
        dec eax
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 E1 FE FF FF: jne 0x10087d29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 4E 49 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x49
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 31h
        ; Exact mapped bytes 74 3B: je 0x10087e9d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ebx, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 28h]
        push 0
        push 0
        lea ecx, [ebx + 20ch]
        push 0ffffffh
        push ecx
        lea edx, [edi + 0cah]
        lea ecx, [ebx + 1c4h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [edi + 70h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 55 44 FA FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x10087ea7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 218h], eax
        ; Exact mapped bytes E8 E4 48 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 32h
        ; Exact mapped bytes 74 36: je 0x10087f02
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea edx, [ebx + 20ch]
        push 0ffffffh
        push edx
        lea ecx, [edi + 0feh]
        lea edx, [ebx + 1c4h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edi + 0d8h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 43 FA FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10087f04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 21ch], eax
        ; Exact mapped bytes E8 87 48 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 33h
        ; Exact mapped bytes 74 36: je 0x10087f5f
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        lea ecx, [ebx + 20ch]
        push 0ffffffh
        push ecx
        lea edx, [edi + 17ch]
        lea ecx, [ebx + 1c4h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 10dh
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 43 FA FF: call 0x1002c2f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10087f61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 220h], eax
        mov eax, dword ptr [esi + 228h]
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 10: je 0x10087f86
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 230h]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 20h
        ; Exact mapped bytes 73 7A: jae 0x10088000
        __asm _emit 0x73
        __asm _emit 0x7a
        push 80h
        ; Exact mapped bytes E8 10 48 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 22ch]
        mov edi, eax
        mov eax, dword ptr [esi + 228h]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        ; Exact mapped bytes 74 12: je 0x10087fb9
        __asm _emit 0x74
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10087faf
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        mov dword ptr [ecx], ebp
        add eax, 4
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 EE: jne 0x10087fa7
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esi + 228h]
        push eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes E8 BB 47 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 228h]
        add esp, 4
        lea edx, [edi + 80h]
        test ecx, ecx
        mov dword ptr [esi + 230h], edx
        ; Exact mapped bytes 75 04: jne 0x10087fe6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x10087ff1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 22ch]
        sub eax, ecx
        sar eax, 2
        lea eax, [edi + eax*4]
        mov dword ptr [esi + 228h], edi
        mov dword ptr [esi + 22ch], eax
        push 70h
        ; Exact mapped bytes E8 99 47 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 34h
        ; Exact mapped bytes 74 72: je 0x1008808b
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 2D 9C 56 1C 10: mov ebp, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 1f8h]
        push 40h
        push ecx
        lea edx, [eax + 213h]
        lea ecx, [ebx + 1eah]
        push edx
        add eax, 19dh
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 68 69 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 35h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 20 47 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1008808d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 240h], edi
        ; Exact mapped bytes E8 01 47 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 36h
        ; Exact mapped bytes 74 7E: je 0x1008812f
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0ech
        ; Exact mapped bytes 7E 12: jle 0x100880d5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100880d5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 3b0h]
        ; Exact mapped bytes EB 02: jmp 0x100880d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        lea edx, [ebx + 1feh]
        push 0
        add eax, 1c2h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA 68 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10088131
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x10088131
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 244h], edi
        ; Exact mapped bytes E8 5D 46 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 37h
        ; Exact mapped bytes 74 7F: je 0x100881d4
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 10fh
        ; Exact mapped bytes 7E 12: jle 0x10088179
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10088179
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 43ch]
        ; Exact mapped bytes EB 02: jmp 0x1008817b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea eax, [ebx + 1feh]
        push 0
        add ecx, 1a4h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 15 68 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100881d6
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100881d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 248h], edi
        ; Exact mapped bytes E8 B8 45 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 38h
        ; Exact mapped bytes 74 7F: je 0x10088279
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 0d3h
        ; Exact mapped bytes 7E 12: jle 0x1008821e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008821e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 34ch]
        ; Exact mapped bytes EB 02: jmp 0x10088220
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea ecx, [ebx + 1feh]
        push 0
        add edx, 1f4h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 70 67 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008827b
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1008827b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        xor ebp, ebp
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 24ch], edi
        ; Exact mapped bytes E8 0E 45 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 39h
        ; Exact mapped bytes 74 50: je 0x100882f2
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 27h
        ; Exact mapped bytes 7E 12: jle 0x100882c3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100882c3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x100882c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 28h]
        lea edx, [ebx + 1feh]
        push 40h
        push edx
        lea edx, [edi + 1c2h]
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
        ; Exact mapped bytes E8 D0 EF F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100882f8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 258h], eax
        ; Exact mapped bytes E8 93 44 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 3ah
        ; Exact mapped bytes 74 4C: je 0x10088369
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 35h
        ; Exact mapped bytes 7E 12: jle 0x1008833e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008833e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x10088340
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 1feh]
        push 40h
        push edx
        lea edx, [edi + 1a4h]
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
        ; Exact mapped bytes E8 59 EF F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008836b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 25ch], eax
        ; Exact mapped bytes E8 20 44 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 3bh
        ; Exact mapped bytes 74 4C: je 0x100883dc
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 90h]
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 12: jle 0x100883b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100883b1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 880h
        ; Exact mapped bytes EB 02: jmp 0x100883b3
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
        add ebx, 1feh
        push 40h
        add edi, 1f4h
        push ebx
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
        ; Exact mapped bytes E8 E6 EE F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100883de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 244h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi + 260h], eax
        ; Exact mapped bytes E8 67 6D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 248h]
        push 0fffffeffh
        ; Exact mapped bytes E8 57 6D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 47 6D 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        mov dword ptr [esi + 26ch], ebp
        or ah, 5
        mov dword ptr [esi + 270h], ebp
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 274h], ebp
        mov dword ptr [esi + 278h], ebp
        mov dword ptr [esi + 27ch], ebp
        mov dword ptr [esi + 280h], ebp
        mov dword ptr [esi + 284h], ebp
        mov dword ptr [esi + 288h], ebp
        mov dword ptr [esi + 28ch], ebp
        mov dword ptr [esi + 290h], ebp
        mov byte ptr [esi + 2e4h], 0
        mov dword ptr [esi + 2e8h], 0ffffffffh
        mov byte ptr [esi + 304h], 0
        mov byte ptr [esi + 2e5h], 0
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
        ret 24h
    }
}
