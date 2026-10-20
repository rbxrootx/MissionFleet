// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C08F0 .. +0x788 bytes.
extern "C" __declspec(naked) void FUN_100c08f0_100C08F0() {
    __asm {
        push -1
        push 101724e1h
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
        sub esp, 0ch
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 28h]
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push esi
        mov esi, dword ptr [esp + 2ch]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push esi
        push ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 7A E0 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        or byte ptr [edi + 24h], 20h
        mov dword ptr [edi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [edi + 54h], esi
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 5ch], ebx
        push 198h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [edi], 10176298h
        ; Exact mapped bytes E8 40 BE 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 0F: je 0x100c097f
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac150h
        mov ecx, eax
        ; Exact mapped bytes E8 43 F1 03 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c0981
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 60h], eax
        lea eax, [edi + 64h]
        push ebp
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 3ch], 2
        mov dword ptr [esp + 40h], 8
        mov dword ptr [esp + 38h], eax
        push 54h
        ; Exact mapped bytes E8 F9 BD 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 2
        ; Exact mapped bytes 74 77: je 0x100c0a30
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [edi + 60h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100c09df
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100c09df
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100c09df
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100c09e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 99h
        push 0adh
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B9 DF 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100c0a32
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100c0a32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 40h]
        add ebp, 4
        mov byte ptr [esp + 24h], bl
        mov dword ptr [eax], esi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 3ch]
        inc eax
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 3ch], eax
        add eax, -2
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3D FF FF FF: jl 0x100c09a0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 6ch]
        mov dword ptr [esp + 40h], ebx
        mov dword ptr [esp + 3ch], eax
        push 54h
        ; Exact mapped bytes E8 2B BD 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes 74 73: je 0x100c0afa
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [edi + 60h]
        mov ecx, dword ptr [esp + 40h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x100c0aa9
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp ecx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x100c0aa9
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100c0aa9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x100c0aab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 99h
        push 0adh
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EF DE 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100c0afc
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100c0afc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 40h]
        inc eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ecx], esi
        add ecx, 4
        cmp eax, 2
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 3ch], ecx
        ; Exact mapped bytes 0F 8C 4F FF FF FF: jl 0x100c0a6e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 34 E6 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 70h]
        push 101h
        ; Exact mapped bytes E8 27 E6 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 1A E6 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 68h]
        push 101h
        ; Exact mapped bytes E8 0D E6 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esp + 10h], ebx
        mov eax, dword ptr [esp + 10h]
        cmp eax, 6
        mov ecx, dword ptr [eax*4 + 101a7de8h]
        mov dword ptr [esp + 40h], ecx
        ; Exact mapped bytes 74 12: je 0x100c0b7d
        __asm _emit 0x74
        __asm _emit 0x12
        mov dword ptr [esp + 2ch], 0adh
        mov dword ptr [esp + 30h], 99h
        ; Exact mapped bytes EB 10: jmp 0x100c0b8d
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [esp + 2ch], 11ch
        mov dword ptr [esp + 30h], 0edh
        mov edx, eax
        mov dword ptr [esp + 3ch], ebx
        shl edx, 8
        shl eax, 5
        lea ecx, [edx + edi + 74h]
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], ecx
        mov ebp, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        cmp byte ptr [edx + ebp + 101a7e0ch], bl
        ; Exact mapped bytes 75 10: jne 0x100c0bc6
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 34h]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x100c0d62
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D3 BB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 18h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 4
        ; Exact mapped bytes 74 7B: je 0x100c0c5a
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [edi + 60h]
        mov ecx, dword ptr [esp + 40h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 15: jle 0x100c0c03
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp ecx, ebx
        ; Exact mapped bytes 7C 11: jl 0x100c0c03
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100c0c03
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, ecx
        mov ebp, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100c0c05
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
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 95 DD 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c0c52
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100c0c5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov esi, dword ptr [esp + 34h]
        push 0fffffeffh
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 F0 E4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 40h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc ecx
        mov dword ptr [esp + 40h], ecx
        mov ecx, dword ptr [esp + 38h]
        cmp byte ptr [ecx + ebp + 101a7e0ch], 2
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x100c0d58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 06 BB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 18h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 5
        ; Exact mapped bytes 74 77: je 0x100c0d23
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [edi + 60h]
        mov ecx, dword ptr [esp + 40h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 15: jle 0x100c0cd0
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp ecx, ebx
        ; Exact mapped bytes 7C 11: jl 0x100c0cd0
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100c0cd0
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, ecx
        mov ebp, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100c0cd2
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
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C8 DC 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c0d1f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100c0d25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 3ch]
        add edx, eax
        push 101h
        mov byte ptr [esp + 28h], bl
        lea ebp, [edi + edx*8 + 78h]
        mov dword ptr [ebp], ecx
        ; Exact mapped bytes E8 1C E4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebp, dword ptr [ebp]
        mov eax, dword ptr [esp + 40h]
        ; Exact mapped bytes 66 81 65 24 FE FF: and word ptr [ebp + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes EB 0A: jmp 0x100c0d62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 38h]
        add ecx, ebp
        mov dword ptr [edi + ecx*8 + 78h], ebx
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 34h]
        inc eax
        add edx, 8
        cmp eax, 20h
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8C 26 FE FF FF: jl 0x100c0ba5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        inc eax
        cmp eax, 9
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C C6 FD FF FF: jl 0x100c0b57
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebp, [edi + 0a74h]
        mov dword ptr [esp + 38h], 20h
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 40h], 2
        push 58h
        ; Exact mapped bytes E8 EE B9 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 6
        ; Exact mapped bytes 74 1C: je 0x100c0de0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DE DB 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100c0de2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 58h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [ebp - 100h], esi
        ; Exact mapped bytes E8 AD B9 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        cmp esi, ebx
        mov byte ptr [esp + 24h], 7
        ; Exact mapped bytes 74 1C: je 0x100c0e21
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 9D DB 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100c0e23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp], esi
        mov eax, dword ptr [ebp - 100h]
        mov ecx, 0fffeh
        add ebp, 4
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 40h]
        dec eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 59 FF FF FF: jne 0x100c0dab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 3ch]
        push 0fffffeffh
        mov ecx, dword ptr [esi - 100h]
        ; Exact mapped bytes E8 FA E2 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi - 0fch]
        push 101h
        ; Exact mapped bytes E8 EA E2 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 DE E2 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push 101h
        ; Exact mapped bytes E8 D1 E2 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esp + 3ch], ebp
        dec eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 01 FF FF FF: jne 0x100c0da3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 F4 B8 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 8
        pop ebp
        ; Exact mapped bytes 74 45: je 0x100c0f02
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [edi + 60h]
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 12: jle 0x100c0edb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100c0edb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x100c0edd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 19fh
        push 0c0h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C0 63 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c0f04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0b7ch], eax
        ; Exact mapped bytes E8 88 B8 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 3C: je 0x100c0f64
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [edi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100c0f3d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 02: jne 0x100c0f3f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 19fh
        push 1d2h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5E 63 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c0f66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0b88h], eax
        ; Exact mapped bytes E8 26 B8 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 42: je 0x100c0fcc
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [edi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100c0fa5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100c0fa5
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100c0fa7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 19fh
        push 201h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F6 62 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c0fce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0b80h], eax
        ; Exact mapped bytes E8 BE B7 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 45: je 0x100c1037
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [edi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100c1010
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100c1010
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100c1012
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 19fh
        push 232h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8B 62 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c1039
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 18h]
        and edx, 0e5f0h
        mov dword ptr [edi + 0b84h], eax
        or dh, 5
        mov byte ptr [edi + 0b74h], bl
        mov byte ptr [edi + 0b75h], bl
        mov dword ptr [edi + 0b78h], ebx
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
