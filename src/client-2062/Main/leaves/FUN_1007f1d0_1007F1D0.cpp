// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007F1D0 .. +0x743 bytes.
extern "C" __declspec(naked) void FUN_1007f1d0_1007F1D0() {
    __asm {
        push -1
        push 1016fdf3h
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
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 9B F7 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi], 10175db8h
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        push 58h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 66 D5 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7A: je 0x1007f2c6
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 22h
        ; Exact mapped bytes 7E 12: jle 0x1007f26c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1007f26c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 880h]
        ; Exact mapped bytes EB 02: jmp 0x1007f26e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add ecx, 2ah
        push ebx
        add edx, 1eh
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 26 F7 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007f2c8
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x1007f2c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes E8 CA D4 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 7A: je 0x1007f362
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x1007f308
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1007f308
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x1007f30a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        add edx, 28h
        push ebx
        add eax, 1ch
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8A F6 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf6
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007f364
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
        ; Exact mapped bytes EB 02: jmp 0x1007f364
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 58h], edi
        ; Exact mapped bytes E8 2E D4 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7A: je 0x1007f3fe
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x1007f3a4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1007f3a4
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 200h]
        ; Exact mapped bytes EB 02: jmp 0x1007f3a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add eax, 28h
        push ebx
        add ecx, 1ch
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE F5 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007f400
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
        ; Exact mapped bytes EB 02: jmp 0x1007f400
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 5ch], edi
        mov ecx, dword ptr [esi + 54h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 4C FD 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push 101h
        ; Exact mapped bytes E8 3F FD 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        lea ebp, [esi + 84h]
        mov dword ptr [esp + 38h], 2
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 60h], ebx
        push 54h
        ; Exact mapped bytes E8 5E D3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 25: je 0x1007f479
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        inc ecx
        push ebx
        add edx, -5
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 F5 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1007f47b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add ebp, 4
        dec eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 A5: jne 0x1007f43b
        __asm _emit 0x75
        __asm _emit 0xa5
        mov dword ptr [esp + 34h], 6
        lea edi, [esi + 74h]
        mov dword ptr [esp + 38h], 180h
        push 58h
        ; Exact mapped bytes E8 F0 D2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 24h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x1007f54f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        inc eax
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 1C: jle 0x1007f4f5
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp eax, ebx
        ; Exact mapped bytes 7C 18: jl 0x1007f4f5
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [ecx + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0E: je 0x1007f4f5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 38h]
        lea edx, [eax + ecx + 40h]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 04: jmp 0x1007f4f9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 30h], ebx
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 A1 F4 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [ebp], 101751f8h
        cmp eax, ebx
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x1007f551
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [ebp + 14h]
        mov dword ptr [ebp + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1007f551
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi], ebp
        ; Exact mapped bytes E8 42 D2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 24h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x1007f5fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 1A: jle 0x1007f5a0
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp eax, ebx
        ; Exact mapped bytes 7C 16: jl 0x1007f5a0
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x1007f5a0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 38h]
        add eax, ecx
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes EB 04: jmp 0x1007f5a4
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 30h], ebx
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        dec edx
        push ebx
        add eax, -4
        push edx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 F2 F3 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [ebp], 101751f8h
        cmp eax, ebx
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x1007f600
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1007f600
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [edi - 10h], ebp
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 4D FB 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 80h
        ; Exact mapped bytes E8 01 FB 07 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, 0fffbh
        mov edx, dword ptr [esp + 34h]
        add edi, 4
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 4]
        add edx, 2
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 4]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 14h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 38h]
        add eax, 80h
        cmp eax, 300h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 38 FE FF FF: jl 0x1007f4a9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebp, [esi + 8ch]
        mov dword ptr [esp + 38h], 2
        push 54h
        ; Exact mapped bytes E8 1A D1 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 27: je 0x1007f6bf
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add ecx, 2
        push ebx
        add edx, -6
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FC F2 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1007f6c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add ebp, 4
        dec eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 A3: jne 0x1007f67f
        __asm _emit 0x75
        __asm _emit 0xa3
        push 70h
        ; Exact mapped bytes E8 BD D0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 50: je 0x1007f745
        __asm _emit 0x74
        __asm _emit 0x50
        mov ebp, dword ptr [esp + 2ch]
        push 10101h
        push ebx
        push 0ffffffh
        lea eax, [ebp + 5]
        lea edx, [ebp - 0fh]
        push eax
        mov eax, dword ptr [esp + 38h]
        lea ecx, [eax + 44h]
        add eax, -2
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5A 64 F9 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 9
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 65 D0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 06: jmp 0x1007f74b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        mov dword ptr [esi + 94h], edi
        mov ecx, dword ptr [esi + 84h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 FB F9 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 EB F9 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        push 88h
        ; Exact mapped bytes E8 21 D0 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 16: je 0x1007f7a5
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        push ecx
        push edx
        push 0ah
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1F 21 F9 FF: call 0x100118c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1007f7a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d14h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 D0 07: mov word ptr [edi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x1007f7c4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DC F7 07 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1007f7d1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2F F7 07 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d14h]
        mov dword ptr [eax + 78h], 64h
        mov eax, dword ptr [esi + 0d14h]
        mov dword ptr [eax + 6ch], 82h
        mov dword ptr [eax + 70h], 4bh
        mov ecx, dword ptr [esi + 0d14h]
        mov dword ptr [ecx + 68h], 12ch
        mov edx, dword ptr [esi + 0d14h]
        mov dword ptr [edx + 80h], esi
        mov eax, dword ptr [esi + 0d14h]
        ; Exact mapped bytes 66 C7 40 7C 14 00: mov word ptr [eax + 0x7c], 0x14
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [esi + 0d18h], ebx
        mov dword ptr [esi + 0d8h], ebx
        mov dword ptr [esi + 0dch], ebx
        mov dword ptr [esi + 0e0h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 70h], ebx
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 14h]
        mov edi, dword ptr [eax + 18h]
        sub ecx, edx
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [esi + 14h]
        sub edx, edi
        add eax, ecx
        mov ecx, dword ptr [esi + 18h]
        add ecx, edx
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 20h], ecx
        lea eax, [esi + 0fch]
        mov ecx, 80h
        mov byte ptr [eax], bl
        add eax, 18h
        dec ecx
        ; Exact mapped bytes 75 F8: jne 0x1007f86c
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5ffh
        or dh, 5
        mov dword ptr [esi + 0c4h], eax
        mov byte ptr [esi + 0e4h], bl
        mov byte ptr [esi + 0cfch], bl
        mov byte ptr [esi + 9ch], bl
        ; Exact mapped bytes 66 C7 86 A4 00 00 00 01 00: mov word ptr [esi + 0xa4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 0a0h], 400h
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d1ch], ebx
        mov byte ptr [esi + 0d0h], bl
        mov dword ptr [esi + 0c0h], ebx
        mov dword ptr [esi + 0bch], ebx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0c8h], ebp
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
