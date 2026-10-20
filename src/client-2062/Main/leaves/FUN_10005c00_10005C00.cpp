// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005C00 .. +0xB71 bytes.
extern "C" __declspec(naked) void FUN_10005c00_10005C00() {
    __asm {
        push -1
        push 1016ceedh
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
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 34h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 34h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 48h]
        mov edi, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 44h]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push edx
        push eax
        push ebp
        push edi
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 14 8A 04 00: call 0x1004e660
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [edi + edi*2]
        mov dword ptr [esi], 10175254h
        xor ebx, ebx
        push 58h
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 28h], ebx
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        lea eax, [ebp + ebp*2]
        shl edx, 2
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 4a4h], edx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        mov dword ptr [esi + 4a8h], eax
        mov ecx, dword ptr [esi + 4a4h]
        mov dword ptr [esi + 49ch], ecx
        mov edx, dword ptr [esi + 4a8h]
        mov dword ptr [esi + 4a0h], edx
        mov dword ptr [esi + 84h], 1
        mov dword ptr [esi + 88h], 5
        mov dword ptr [esi + 44ch], ebx
        mov dword ptr [esi + 450h], ebx
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esi + 458h], ebx
        mov dword ptr [esi + 464h], ebx
        mov dword ptr [esi + 46ch], ebx
        mov dword ptr [esi + 470h], ebx
        mov dword ptr [esi + 474h], ebx
        mov dword ptr [esi + 480h], ebx
        mov dword ptr [esi + 484h], ebx
        mov dword ptr [esi + 490h], edi
        mov dword ptr [esi + 494h], ebp
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 330h], 55730h
        ; Exact mapped bytes E8 97 6A 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 4ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes 74 20: je 0x10005d3b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 8C 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10005d3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 34h]
        push edi
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4e8h], edi
        ; Exact mapped bytes E8 4F 92 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4e8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 06 27: mov word ptr [edi + 0x26], 0x2706
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x27
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10005d6a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 36 92 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10005d77
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 89 91 0F 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 22 6A 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 2
        ; Exact mapped bytes 74 20: je 0x10005db0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0E 8C 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10005db2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4e4h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e8h]
        push 0fffffeffh
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 8E 93 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4e8h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 BB 69 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes 74 20: je 0x10005e17
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A7 8B 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10005e19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4ech], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4ech]
        push 101h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4ech]
        ; Exact mapped bytes E8 1B 93 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x93
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ech]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 48 69 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 4ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 4
        ; Exact mapped bytes 74 79: je 0x10005ee3
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2b6h
        ; Exact mapped bytes 7E 16: jle 0x10005e91
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x10005e91
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 0ad8h]
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes EB 04: jmp 0x10005e95
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 34h], ebx
        mov edx, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 09 8B 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10005ee5
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
        ; Exact mapped bytes EB 02: jmp 0x10005ee5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 4f8h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4f8h]
        push 101h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 5B 92 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f8h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 88 68 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 5
        ; Exact mapped bytes 74 22: je 0x10005f4c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 74 8A 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10005f4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 102h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4f0h], ecx
        ; Exact mapped bytes E8 FE 91 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f0h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 4f0h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 1F 68 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 6
        ; Exact mapped bytes 74 76: je 0x10006009
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x10005fb3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10005fb3
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 300h]
        ; Exact mapped bytes EB 02: jmp 0x10005fb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E5 89 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x10006005
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1000600b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 102h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4f4h], ecx
        ; Exact mapped bytes E8 41 91 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f4h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 4f4h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 5F 67 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 7
        mov edi, 26h
        ; Exact mapped bytes 74 3A: je 0x10006090
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10006076
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10006076
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 980h
        ; Exact mapped bytes EB 02: jmp 0x10006078
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        add edx, 0ah
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        push 1
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 92 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10006092
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 4fch], eax
        ; Exact mapped bytes E8 B8 90 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 EE 66 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 8
        ; Exact mapped bytes 74 3D: je 0x100060ff
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100060e2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100060e2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 980h
        ; Exact mapped bytes EB 02: jmp 0x100060e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 9
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 2eh
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 91 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10006101
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 500h], eax
        ; Exact mapped bytes E8 8B 66 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 9
        ; Exact mapped bytes 74 3D: je 0x10006162
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x10006145
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10006145
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 980h
        ; Exact mapped bytes EB 02: jmp 0x10006147
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 9
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 55h
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 30 91 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10006164
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 504h], eax
        mov eax, dword ptr [esi + 500h]
        mov ecx, 0fffeh
        push 101h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 504h]
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 500h]
        ; Exact mapped bytes E8 C9 8F 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 504h]
        push 101h
        ; Exact mapped bytes E8 B9 8F 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 40h
        xor eax, eax
        lea edi, [esi + 348h]
        push 20h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 218h], ebx
        mov dword ptr [esi + 21ch], ebx
        mov dword ptr [esi + 4c0h], ebx
        mov dword ptr [esi + 4bch], ebx
        mov dword ptr [esi + 4ach], 1
        mov dword ptr [esi + 45ch], ebx
        mov dword ptr [esi + 9ch], ebx
        mov dword ptr [esi + 0a0h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0a8h], ebx
        ; Exact mapped bytes E8 A3 65 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x65
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0ah
        ; Exact mapped bytes 74 30: je 0x1000623d
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D E0 57 1C 10: mov ecx, dword ptr [0x101c57e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], ebx
        ; Exact mapped bytes 7E 16: jle 0x10006231
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10006231
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D1 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x1000623f
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C5 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000623f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 510h], eax
        ; Exact mapped bytes E8 50 65 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0bh
        ; Exact mapped bytes 74 32: je 0x10006292
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0fh
        ; Exact mapped bytes 7E 17: jle 0x10006286
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x10006286
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 3ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7C 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10006294
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 70 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10006294
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 514h], eax
        ; Exact mapped bytes E8 FB 64 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0ch
        ; Exact mapped bytes 74 32: je 0x100062e7
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 12h
        ; Exact mapped bytes 7E 17: jle 0x100062db
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x100062db
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 48h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 27 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100062e9
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1B 26 04 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100062e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 518h], eax
        ; Exact mapped bytes 66 89 9E 1C 05 00 00: mov word ptr [esi + 0x51c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F 64 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 0dh
        ; Exact mapped bytes 74 77: je 0x1000638a
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4bh
        ; Exact mapped bytes 7E 12: jle 0x10006333
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10006333
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 12ch]
        ; Exact mapped bytes EB 02: jmp 0x10006335
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ebx
        add eax, -1dh
        push ebx
        add ecx, -16h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5F 86 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000638c
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
        ; Exact mapped bytes EB 02: jmp 0x1000638c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 74h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 520h], edi
        ; Exact mapped bytes E8 03 64 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0eh
        ; Exact mapped bytes 74 47: je 0x100063f4
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A8 57 1C 10: mov ecx, dword ptr [0x101c57a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 49h
        ; Exact mapped bytes 7E 12: jle 0x100063ce
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100063ce
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 124h]
        ; Exact mapped bytes EB 02: jmp 0x100063d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        push 40h
        add edx, 5
        push edx
        mov edx, dword ptr [esp + 40h]
        add edx, 1bh
        push edx
        push ecx
        push esi
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 6E 3B 02 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100063f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 524h], eax
        ; Exact mapped bytes E8 99 63 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0fh
        ; Exact mapped bytes 74 47: je 0x1000645e
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A8 57 1C 10: mov ecx, dword ptr [0x101c57a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 4ah
        ; Exact mapped bytes 7E 12: jle 0x10006438
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10006438
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 128h]
        ; Exact mapped bytes EB 02: jmp 0x1000643a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        push 40h
        add edx, 5
        push edx
        mov edx, dword ptr [esp + 40h]
        add edx, 1bh
        push edx
        push ecx
        push esi
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 04 3B 02 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10006460
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 520h]
        push 101h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 528h], eax
        ; Exact mapped bytes E8 E6 8C 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov edi, 0ah
        xor ecx, ecx
        mov dword ptr [esi + 328h], ebx
        mov dword ptr [esi + 4b4h], ebx
        mov dword ptr [esi + 220h], 10h
        mov dword ptr [esi + 448h], 1
        mov dword ptr [esi + 4d4h], ebx
        mov dword ptr [esi + 4d8h], ebx
        mov dword ptr [esi + 4c4h], edi
        mov dword ptr [esi + 74h], eax
        mov cl, byte ptr [eax + 330h]
        mov dword ptr [esi + 80h], ecx
        mov dword ptr [esi + 32ch], edi
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 4e0h], ebx
        mov dword ptr [esi + 8ch], 64h
        mov dword ptr [esi + 90h], 0c8h
        mov dword ptr [esi + 52ch], ebx
        mov dword ptr [esi + 530h], ebx
        mov dword ptr [esi + 534h], ebx
        mov dword ptr [esi + 538h], ebx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 21710h], ebx
        ; Exact mapped bytes 0F 8E 3E 02 00 00: jle 0x10006754
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ecx + 21a4ch]
        mov dword ptr [esp + 18h], eax
        add ebp, 68h
        mov dword ptr [esp + 14h], esi
        mov edi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, edi
        mov eax, edi
        sar edx, 3
        cmp edx, 1
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 83 0B 01 00 00: jae 0x1000664c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x10006552
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, ecx
        sar eax, 3
        cmp eax, 1
        ; Exact mapped bytes 77 05: ja 0x10006557
        __asm _emit 0x77
        __asm _emit 0x05
        mov eax, 1
        cmp ecx, ebx
        ; Exact mapped bytes 75 04: jne 0x1000655f
        __asm _emit 0x75
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 05: jmp 0x10006564
        __asm _emit 0xeb
        __asm _emit 0x05
        sub edi, ecx
        sar edi, 3
        add eax, edi
        cmp eax, ebx
        mov dword ptr [esp + 4ch], eax
        ; Exact mapped bytes 7D 02: jge 0x10006570
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 3
        push eax
        ; Exact mapped bytes E8 27 62 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x62
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 4]
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 40h], eax
        mov eax, dword ptr [esp + 3ch]
        add esp, 4
        cmp edi, eax
        ; Exact mapped bytes 74 24: je 0x100065b3
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 3ch]
        push edi
        push ecx
        ; Exact mapped bytes E8 16 5E 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 40h]
        add edi, 8
        add esp, 8
        add edx, 8
        cmp edi, eax
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes 75 DC: jne 0x1000658f
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edi, dword ptr [esp + 3ch]
        lea edx, [esp + 14h]
        push edx
        push edi
        ; Exact mapped bytes E8 EE 5D 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edi + 8]
        mov edi, dword ptr [esp + 40h]
        add esp, 8
        cmp edi, eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 74 28: je 0x100065ff
        __asm _emit 0x74
        __asm _emit 0x28
        mov dword ptr [esp + 38h], ecx
        mov eax, dword ptr [esp + 38h]
        push edi
        push eax
        ; Exact mapped bytes E8 CA 5D 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 44h]
        add edi, 8
        add esp, 8
        add ecx, 8
        cmp edi, eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 75 DC: jne 0x100065db
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp + 4]
        push eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 78 61 16 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x61
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 50h]
        add esp, 4
        lea eax, [edx + ecx*8]
        mov ecx, dword ptr [ebp + 4]
        cmp ecx, ebx
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x10006635
        __asm _emit 0x75
        __asm _emit 0x11
        xor eax, eax
        mov dword ptr [ebp + 4], edx
        lea ecx, [edx + eax*8 + 8]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x10006754
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp + 4], edx
        sub eax, ecx
        sar eax, 3
        lea ecx, [edx + eax*8 + 8]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x10006754
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, edi
        sub edx, eax
        sar edx, 3
        cmp edx, 1
        ; Exact mapped bytes 73 7D: jae 0x100066d5
        __asm _emit 0x73
        __asm _emit 0x7d
        cmp eax, edi
        ; Exact mapped bytes 74 19: je 0x10006675
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [eax + 8]
        push eax
        push ecx
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes E8 46 5D 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        add esp, 8
        cmp eax, edi
        ; Exact mapped bytes 75 E7: jne 0x1000665c
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [esp + 38h]
        mov edi, ecx
        mov eax, 1
        sub edi, edx
        sar edi, 3
        sub eax, edi
        mov edi, ecx
        ; Exact mapped bytes 74 24: je 0x100066b2
        __asm _emit 0x74
        __asm _emit 0x24
        mov dword ptr [esp + 3ch], eax
        lea eax, [esp + 14h]
        push eax
        push edi
        ; Exact mapped bytes E8 13 5D 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        add esp, 8
        add edi, 8
        dec eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 E4: jne 0x10006692
        __asm _emit 0x75
        __asm _emit 0xe4
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [ebp + 8]
        mov eax, edx
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x10006750
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax + 4], edx
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 EC: jne 0x100066bf
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes EB 7B: jmp 0x10006750
        __asm _emit 0xeb
        __asm _emit 0x7b
        lea eax, [edi - 8]
        mov dword ptr [esp + 3ch], edi
        cmp eax, edi
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 74 2C: je 0x10006710
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 3ch]
        push eax
        push ecx
        ; Exact mapped bytes E8 BD 5C 00 00: call 0x1000c3b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        add esp, 8
        add eax, 8
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 34h]
        add eax, 8
        cmp eax, edi
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 D4: jne 0x100066e4
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [esp + 38h]
        lea eax, [ecx - 8]
        cmp edx, eax
        ; Exact mapped bytes 74 15: je 0x10006733
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [eax - 8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edx
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        ; Exact mapped bytes 75 EB: jne 0x1000671e
        __asm _emit 0x75
        __asm _emit 0xeb
        lea ecx, [edx + 8]
        mov eax, edx
        cmp edx, ecx
        ; Exact mapped bytes 74 14: je 0x10006750
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax + 4], edx
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 EC: jne 0x1000673c
        __asm _emit 0x75
        __asm _emit 0xec
        add dword ptr [ebp + 8], 8
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 53ch], ebx
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
        add esp, 18h
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
