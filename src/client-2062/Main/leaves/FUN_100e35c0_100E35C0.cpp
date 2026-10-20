// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E35C0 .. +0x8F5 bytes.
extern "C" __declspec(naked) void FUN_100e35c0_100E35C0() {
    __asm {
        push -1
        push 10173c55h
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
        sub esp, 8
        ; Exact mapped bytes 0F BF 44 24 24: movsx eax, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        mov edx, dword ptr [esp + 18h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push eax
        push ebp
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 AD B3 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 1017656ch
        ; Exact mapped bytes E8 8C 91 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 7E: je 0x100e36a4
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6eh
        ; Exact mapped bytes 7E 12: jle 0x100e3646
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e3646
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1b8h]
        ; Exact mapped bytes EB 02: jmp 0x100e3648
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 30h]
        add eax, 64h
        push eax
        push ebx
        push ebx
        add edx, -0ah
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 49 B3 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e369e
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100e36a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes E8 EC 90 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100e374a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6fh
        ; Exact mapped bytes 7E 12: jle 0x100e36ea
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e36ea
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1bch]
        ; Exact mapped bytes EB 02: jmp 0x100e36ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 30h]
        add edx, 63h
        push edx
        push ebx
        push ebx
        add ecx, -0ah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A5 B2 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e3742
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
        mov ebp, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e374c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes E8 03 BA 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 39 90 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 3C: je 0x100e37b3
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100e3798
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3798
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x100e379a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 14h
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DF BA 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100e37b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes E8 98 B9 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 58h]
        mov eax, dword ptr [esp + 34h]
        add eax, 64h
        mov ecx, dword ptr [edi + 40h]
        mov dword ptr [esp + 28h], eax
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e37e7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B9 B7 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e37f4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0C B7 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A5 8F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 23: je 0x100e3830
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 2ch]
        push ecx
        push ebx
        push ebx
        add edx, 3dh
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8B B1 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100e3832
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 5A 8F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 5
        ; Exact mapped bytes 74 25: je 0x100e387d
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push ebx
        push ebx
        add ecx, 0ah
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 40 B1 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e387f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 D0 B8 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 09 8F 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 6
        ; Exact mapped bytes 74 4D: je 0x100e38f6
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebx
        lea edx, [ebp + 1ch]
        push 0ffffffh
        push edx
        lea ecx, [eax + 182h]
        lea edx, [ebp + 4]
        push ecx
        add eax, 0bah
        push edx
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 A9 22 F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 7
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 B4 8E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100e38f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 9A 8E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 78: je 0x100e3990
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6bh
        ; Exact mapped bytes 7E 12: jle 0x100e3938
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e3938
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1ach]
        ; Exact mapped bytes EB 02: jmp 0x100e393a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5D B0 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e398a
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100e3992
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 00 8E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 7D: je 0x100e3a2f
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6ch
        ; Exact mapped bytes 7E 12: jle 0x100e39d2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e39d2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1b0h]
        ; Exact mapped bytes EB 02: jmp 0x100e39d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add eax, 63h
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C0 AF 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e3a27
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
        mov ebp, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100e3a31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes E8 1E B7 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 57 8D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100e3ae0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x100e3a7f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e3a7f
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 6c0h]
        ; Exact mapped bytes EB 02: jmp 0x100e3a81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        add edx, 96h
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 10 AF 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e3ada
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100e3ae2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 64 B6 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9D 8C 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 7C: je 0x100e3b91
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6dh
        ; Exact mapped bytes 7E 12: jle 0x100e3b35
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e3b35
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1b4h]
        ; Exact mapped bytes EB 02: jmp 0x100e3b37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 05 63 00: add ax, 0x63
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x63
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5C AE 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e3b8b
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100e3b93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 F9 8B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 44: je 0x100e3bfb
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ceh
        ; Exact mapped bytes 7E 12: jle 0x100e3bdb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3bdb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3380h
        ; Exact mapped bytes EB 02: jmp 0x100e3bdd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 6]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 14fh
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 99 B6 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100e3bfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 28: mov ax, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov dword ptr [esi + 78h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e3c1a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 86 B3 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3c27
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 B2 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 101h
        ; Exact mapped bytes E8 2C B5 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 62 8B 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0dh
        ; Exact mapped bytes 74 44: je 0x100e3c92
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ceh
        ; Exact mapped bytes 7E 12: jle 0x100e3c72
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3c72
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3380h
        ; Exact mapped bytes EB 02: jmp 0x100e3c74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1c2h
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 B6 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100e3c94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 28: mov ax, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov dword ptr [esi + 7ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e3cb1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF B2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3cbe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 42 B2 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        ; Exact mapped bytes E8 95 B4 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 CB 8A 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 44: je 0x100e3d29
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ceh
        ; Exact mapped bytes 7E 12: jle 0x100e3d09
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3d09
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3380h
        ; Exact mapped bytes EB 02: jmp 0x100e3d0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1f9h
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6B B5 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100e3d2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 28: mov ax, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov dword ptr [esi + 80h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e3d4b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 55 B2 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3d58
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A8 B1 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 F8 B3 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 31 8A 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0fh
        ; Exact mapped bytes 74 4D: je 0x100e3dcc
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 6ah
        ; Exact mapped bytes 7E 12: jle 0x100e3da0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3da0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 1a8h]
        ; Exact mapped bytes EB 02: jmp 0x100e3da2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        push edx
        lea edx, [ebp + 0eh]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1c3h
        push edx
        push ecx
        push esi
        push ebx
        push 5f5e0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 96 61 F4 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e3dce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 C1 89 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 10h
        ; Exact mapped bytes 74 50: je 0x100e3e3f
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 0c5h
        ; Exact mapped bytes 7E 12: jle 0x100e3e13
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e3e13
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 314h]
        ; Exact mapped bytes EB 02: jmp 0x100e3e15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        add ebp, 0eh
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1c3h
        push ebp
        push edx
        push ecx
        push esi
        push ebx
        push 5f5e0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 23 61 F4 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e3e41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 84h]
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esi + 88h], eax
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3e66
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3A B1 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3e73
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8D B0 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 88h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3e8a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 16 B1 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e3e97
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 69 B0 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E2 06 00 00: call 0x100e4580
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
