// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D4E60 .. +0x562 bytes.
extern "C" __declspec(naked) void FUN_100d4e60_100D4E60() {
    __asm {
        push -1
        push 10173266h
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B 9B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 198h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10176454h
        ; Exact mapped bytes E8 D1 78 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100d4eee
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac2e4h
        mov ecx, eax
        ; Exact mapped bytes E8 D4 AB 02 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d4ef0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 A2 78 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 6C: je 0x100d4f7c
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 0ah
        ; Exact mapped bytes 7E 0F: jle 0x100d4f2b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100d4f2b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100d4f2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6D 9A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d4f7e
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
        ; Exact mapped bytes EB 02: jmp 0x100d4f7e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 14 78 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6C: je 0x100d500a
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x100d4fb9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100d4fb9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x100d4fbb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DF 99 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d500c
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
        ; Exact mapped bytes EB 02: jmp 0x100d500c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 86 77 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 6C: je 0x100d5098
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x100d5047
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100d5047
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x100d5049
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 51 99 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d509a
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
        ; Exact mapped bytes EB 02: jmp 0x100d509a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 F8 76 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 6D: je 0x100d5127
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100d50d3
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100d50d3
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x100d50d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C5 98 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d5129
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
        ; Exact mapped bytes EB 02: jmp 0x100d5129
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0fch
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 60 76 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 40: je 0x100d5190
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d5171
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d5171
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d5173
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 6fh
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1eh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 A1 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d5192
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 FD 75 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 40: je 0x100d51f3
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d51d4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d51d4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d51d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 6fh
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 3bh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9F A0 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d51f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 78h], eax
        mov eax, dword ptr [esp + 30h]
        lea ecx, [esi + 80h]
        mov byte ptr [esp + 1ch], bl
        lea ebp, [esi + 0dch]
        lea edi, [eax + 1fh]
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 3ch], 6
        push 0fch
        ; Exact mapped bytes E8 7B 75 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 39: je 0x100d526e
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d5256
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d5256
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x100d5258
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        add ecx, 1eh
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 24 A0 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d5270
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 30h]
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edx - 4], eax
        ; Exact mapped bytes E8 1B 75 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 39: je 0x100d52ce
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d52b6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d52b6
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d52b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push edi
        add edx, 3bh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C4 9F 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d52d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 30h]
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E8 BC 74 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 39: je 0x100d532d
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2dh
        ; Exact mapped bytes 7E 12: jle 0x100d5315
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d5315
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x100d5317
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push edi
        add edx, 1eh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 9F 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d532f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 30h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [ebp], ebx
        mov dword ptr [ebp + 18h], ebx
        add ebp, 4
        add edx, 8
        add edi, 0ch
        dec eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esp + 30h], edx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 85 BF FE FF FF: jne 0x100d521b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 28h]
        and eax, 0e5f0h
        push ecx
        or ah, 5
        mov ecx, esi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d8h], ebx
        ; Exact mapped bytes 66 C7 86 D4 00 00 00 01 00: mov word ptr [esi + 0xd4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 10ch], ebx
        mov dword ptr [esi + 110h], ebx
        mov dword ptr [esi + 114h], ebx
        ; Exact mapped bytes E8 E5 06 00 00: call 0x100d5a90
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
