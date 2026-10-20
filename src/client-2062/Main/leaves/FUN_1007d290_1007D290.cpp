// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007D290 .. +0x731 bytes.
extern "C" __declspec(naked) void FUN_1007d290_1007D290() {
    __asm {
        push -1
        push 1016fc77h
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
        ; Exact mapped bytes 0F BF 44 24 24: movsx eax, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        push edi
        xor edi, edi
        push 40h
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push eax
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 DF 16 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        mov edx, dword ptr [esp + 24h]
        push 54h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 10175d48h
        mov dword ptr [esi + 60h], edx
        ; Exact mapped bytes E8 A3 F4 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7A: je 0x1007d389
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esp + 24h]
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 13: jle 0x1007d32f
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1007d32f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes EB 08: jmp 0x1007d337
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        mov ecx, dword ptr [esp + 34h]
        add ecx, -9
        push ecx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 63 16 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1007d38b
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
        ; Exact mapped bytes EB 02: jmp 0x1007d38b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 06 F4 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 2
        cmp edi, ecx
        ; Exact mapped bytes 74 77: je 0x1007d425
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esp + 24h]
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x1007d3d1
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x1007d3d1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 04: jmp 0x1007d3d5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 30h], ecx
        mov eax, dword ptr [esp + 34h]
        add eax, -0ah
        push eax
        push ecx
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C7 15 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1007d423
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ecx, edi
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 29 1D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 62 F3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7A: je 0x1007d4ca
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esp + 24h]
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 13: jle 0x1007d470
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1007d470
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1007d478
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        mov edx, dword ptr [esp + 34h]
        mov ecx, edi
        add edx, -7
        push edx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes E8 22 15 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1007d4cc
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
        ; Exact mapped bytes EB 02: jmp 0x1007d4cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 C5 F2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 4
        cmp edi, ecx
        ; Exact mapped bytes 74 74: je 0x1007d563
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esp + 24h]
        cmp dword ptr [eax + 164h], 7
        ; Exact mapped bytes 7E 13: jle 0x1007d50f
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 09: je 0x1007d50f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 04: jmp 0x1007d513
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 30h], ecx
        mov eax, dword ptr [esp + 34h]
        add eax, -8
        push eax
        push ecx
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 14 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1007d561
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ecx, edi
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes E8 EB 1B 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 21 F2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 30: je 0x1007d5bf
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        lea ecx, [ebx + 96h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 190h]
        lea ecx, [ebx + 1eh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 0ch]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C3 65 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d5c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edi, [esi + 74h]
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 CB F1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 33: je 0x1007d618
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea edx, [ebx + 96h]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 146h]
        lea edx, [ebx + 1eh]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 0aeh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A 65 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d61a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 74 F1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 33: je 0x1007d66f
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea ecx, [ebx + 96h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 121h]
        lea ecx, [ebx + 1eh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 0e1h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 13 65 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d671
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 1D F1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 33: je 0x1007d6c6
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea edx, [ebx + 96h]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 0afh]
        lea edx, [ebx + 1eh]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 8fh]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC 64 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d6c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 C3 F0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 33: je 0x1007d720
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea ecx, [ebx + 96h]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 15eh]
        lea ecx, [ebx + 1eh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 116h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 62 64 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d722
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 69 F0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 33: je 0x1007d77a
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea edx, [ebx + 96h]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 190h]
        lea edx, [ebx + 1eh]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 15dh
        push edx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 08 64 08 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007d77c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esp + 30h], 6
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 5ch]
        lea edx, [ecx + ecx*4]
        mov ecx, dword ptr [eax + 18h]
        add edx, ecx
        mov dword ptr [eax + 20h], edx
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes 66 8B 44 24 34: mov ax, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007d7c0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 E0 17 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007d7cd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 33 17 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 30h]
        dec eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 75 AC: jne 0x1007d78f
        __asm _emit 0x75
        __asm _emit 0xac
        push 0a0h
        ; Exact mapped bytes E8 B3 EF 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 51: je 0x1007d84e
        __asm _emit 0x74
        __asm _emit 0x51
        mov ebp, dword ptr [esp + 24h]
        cmp dword ptr [ebp + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x1007d81c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007d81c
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x1007d81e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push ecx
        lea ecx, [ebx + 9eh]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 122h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 74 9A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1007d854
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 24h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 37 EF 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 4D: je 0x1007d8c6
        __asm _emit 0x74
        __asm _emit 0x4d
        cmp dword ptr [ebp + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x1007d894
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007d894
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x1007d896
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push edx
        lea edx, [ebx + 9eh]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 154h
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
        ; Exact mapped bytes E8 FC 99 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007d8c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 7D 18 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 6D 18 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A6 EE 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 74: je 0x1007d980
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp + 164h], 22h
        ; Exact mapped bytes 7E 12: jle 0x1007d927
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1007d927
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x1007d929
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 2ch]
        dec eax
        add ebx, 38h
        push eax
        push 0
        push 0
        add ecx, 5
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 69 10 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007d982
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
        ; Exact mapped bytes EB 02: jmp 0x1007d982
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], edi
        ; Exact mapped bytes E8 C7 17 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, esi
        and ecx, 0e5f0h
        pop edi
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
