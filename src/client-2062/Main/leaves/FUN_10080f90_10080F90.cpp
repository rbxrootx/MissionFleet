// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080F90 .. +0x567 bytes.
extern "C" __declspec(naked) void FUN_10080f90_10080F90() {
    __asm {
        push -1
        push 1016fea5h
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
        ; Exact mapped bytes E8 5B 71 FB FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xff
        xor edx, edx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edx
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esi], 10175dd4h
        lea eax, [esi + 64h]
        mov ecx, 80h
        mov byte ptr [eax], 0
        add eax, 18h
        dec ecx
        ; Exact mapped bytes 75 F7: jne 0x10080ff9
        __asm _emit 0x75
        __asm _emit 0xf7
        mov ebp, 4
        lea eax, [esi + 0c64h]
        ; Exact mapped bytes 66 89 96 8C 0C 00 00: mov word ptr [esi + 0xc8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 8E 0C 00 00: mov word ptr [esi + 0xc8e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 60h], edx
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 38h], eax
        mov ebx, 10h
        push 54h
        ; Exact mapped bytes E8 6E B7 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 77: je 0x100810bb
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x10081064
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10081064
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10081064
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ebx + eax]
        ; Exact mapped bytes EB 02: jmp 0x10081066
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 D9 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100810b5
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
        mov ebp, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 02: jmp 0x100810bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        sub ebx, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        dec ebp
        cmp ebx, 8
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes 0F 8F 4B FF FF FF: jg 0x1008102b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0c6ch]
        mov ebx, 5
        mov dword ptr [esp + 38h], 14h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 A2 B6 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 77: je 0x10081187
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x10081134
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x10081134
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10081134
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x10081136
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
        ; Exact mapped bytes E8 62 D8 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10081189
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
        ; Exact mapped bytes EB 02: jmp 0x10081189
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
        lea ecx, [ebx - 5]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 44 FF FF FF: jl 0x100810f7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 9D DF 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 8D DF 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 C3 B5 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 40: je 0x1008122d
        __asm _emit 0x74
        __asm _emit 0x40
        mov ebx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        push 646464h
        push 0
        lea edx, [ebx + 0cah]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 187h]
        lea edx, [ebx + 0b9h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 1fh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 25 77 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x10081237
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        mov dword ptr [esi + 0c74h], eax
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], 0
        cmp dword ptr [eax + 170h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x1008125f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008125f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x10081261
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov dword ptr [esi + 0c78h], eax
        ; Exact mapped bytes E8 2F B5 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 30: je 0x100812b1
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        lea ecx, [ebx + 0b4h]
        push 0ffd997h
        push ecx
        lea edx, [ebp + 8eh]
        lea ecx, [ebx + 2dh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 1ch]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 28 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100812b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c7ch], eax
        ; Exact mapped bytes E8 D8 B4 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 30: je 0x10081308
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        lea edx, [ebx + 0b4h]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 1dah]
        lea edx, [ebx + 2dh]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 78h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7A 28 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008130a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c80h], eax
        mov eax, dword ptr [esi + 0c7ch]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 0c7ch]
        mov ecx, dword ptr [eax + 18h]
        add ecx, 87h
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10081353
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4D DC 07 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10081360
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 DB 07 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c80h]
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 0c80h]
        mov edx, dword ptr [eax + 18h]
        add edx, 87h
        mov dword ptr [eax + 20h], edx
        mov edi, dword ptr [esi + 0c80h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100813aa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F6 DB 07 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100813b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 DB 07 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c80h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 D3 B3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 45: je 0x10081422
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100813f7
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100813f9
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0c6h]
        push 40h
        push edx
        lea edx, [ebp + 19dh]
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
        ; Exact mapped bytes E8 A0 5E F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10081424
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c84h], eax
        ; Exact mapped bytes E8 67 B3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x10081492
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x1008146a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008146a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x1008146c
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
        add ebx, 0fh
        push 40h
        add ebp, 19dh
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
        ; Exact mapped bytes E8 30 5E F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10081494
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c88h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0c90h], 0
        and eax, 0e5f0h
        ; Exact mapped bytes 66 C7 86 94 0C 00 00 01 00: mov word ptr [esi + 0xc94], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        or ah, 5
        mov edx, 0bfffh
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3ch]
        mov ecx, eax
        cmp eax, dword ptr [esi + 0c68h]
        ; Exact mapped bytes 74 04: je 0x100814d9
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 ED: jne 0x100814cd
        __asm _emit 0x75
        __asm _emit 0xed
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
