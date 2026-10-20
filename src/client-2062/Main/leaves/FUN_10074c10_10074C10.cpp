// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074C10 .. +0xC70 bytes.
extern "C" __declspec(naked) void FUN_10074c10_10074C10() {
    __asm {
        push -1
        push 1016f864h
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
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 3ch]
        mov edi, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 59 9D 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebx, ebx
        push 84h
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esi], 10175cd4h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes E8 1F 7B 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes 74 11: je 0x10074ca2
        __asm _emit 0x74
        __asm _emit 0x11
        push 40h
        push ebx
        push ebx
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 F0 E5 FA FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10074ca4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3ech], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ech]
        push 54h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        ; Exact mapped bytes E8 D8 7A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        mov eax, 2
        cmp edi, ebx
        mov byte ptr [esp + 24h], al
        ; Exact mapped bytes 74 71: je 0x10074d4f
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 0F: jle 0x10074cfb
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10074cfb
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x10074cfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push 3e8h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9A 9C 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10074d51
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
        ; Exact mapped bytes EB 02: jmp 0x10074d51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 3f0h], edi
        ; Exact mapped bytes E8 3D 7A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes 74 71: je 0x10074de6
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x10074d92
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10074d92
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x10074d94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 3f2h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 03 9C 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10074de8
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
        ; Exact mapped bytes EB 02: jmp 0x10074de8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 3f4h], edi
        ; Exact mapped bytes E8 A6 79 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 4
        ; Exact mapped bytes 74 24: je 0x10074e30
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push 3fch
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8B 9B 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10074e32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 3f4h]
        push 0fffffeffh
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 3f8h], edi
        ; Exact mapped bytes E8 13 A3 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3f4h]
        mov ebp, 7fffh
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3f4h]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 31 79 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 5
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x10074f09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10074ea5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 74 08: je 0x10074ea5
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 100h
        ; Exact mapped bytes EB 02: jmp 0x10074ea7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 44ch
        push ebx
        add edx, 3ch
        push ebx
        add eax, 3ah
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EA 9A 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x10074f00
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
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x10074f0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 388h], ecx
        ; Exact mapped bytes E8 40 A2 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 388h]
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 388h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 388h]
        mov dword ptr [eax + 50h], ebx
        ; Exact mapped bytes E8 5A 78 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x78
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        cmp edi, ebx
        mov byte ptr [esp + 24h], 6
        ; Exact mapped bytes 74 1E: je 0x10074f76
        __asm _emit 0x74
        __asm _emit 0x1e
        push 802h
        push ebx
        push ebx
        push 44h
        push 74h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 45 9A 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10074f78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 6ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 394h], edi
        ; Exact mapped bytes E8 16 78 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x78
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 7
        ; Exact mapped bytes 74 35: je 0x10074fcf
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x10074fbb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10074fbb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x10074fbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 D3 FB FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10074fd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 38ch], eax
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 24h], 0
        cmp dword ptr [ecx + 170h], 0fh
        ; Exact mapped bytes 7E 0F: jle 0x10074ffa
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10074ffa
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x10074ffc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 4C D6 FB FF: call 0x10032650
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x10075021
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10075021
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x10075023
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 38ch]
        push eax
        ; Exact mapped bytes E8 C1 D5 FB FF: call 0x100325f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 6A 77 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 8
        ; Exact mapped bytes 74 35: je 0x1007507b
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x10075067
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10075067
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x10075069
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7cfh
        push ebx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 D2 FB FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007507d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 390h], eax
        ; Exact mapped bytes E8 CC A0 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 390h]
        mov ecx, 0dfffh
        push 15ch
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 394h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 38ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 390h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 D5 76 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 9
        ; Exact mapped bytes 74 24: je 0x100750ff
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        add ecx, 64h
        push 0bb8h
        add edx, 0a0h
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C5 8F 03 00: call 0x100ae0c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10075101
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 3a4h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 C7 47 26 F8 2A: mov word ptr [edi + 0x26], 0x2af8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 74 06: je 0x1007511f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 81 9E 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1007512c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D4 9D 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9d
        __asm _emit 0x08
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 6A 76 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0ah
        ; Exact mapped bytes 74 57: je 0x1007519d
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x10075167
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10075167
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 440h]
        ; Exact mapped bytes EB 02: jmp 0x10075169
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 34h]
        push 44ch
        lea ecx, [edi + 1a7h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 1fbh
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 25 21 FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x21
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100751a3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 3fch], eax
        ; Exact mapped bytes E8 E8 75 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0bh
        ; Exact mapped bytes 74 53: je 0x1007521b
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x100751e9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100751e9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 480h
        ; Exact mapped bytes EB 02: jmp 0x100751eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0eah]
        push 44ch
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 256h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 A7 20 FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007521d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 400h], eax
        ; Exact mapped bytes E8 6E 75 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0ch
        ; Exact mapped bytes 74 53: je 0x10075295
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x10075263
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10075263
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x10075265
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edi, 192h
        push 44ch
        add edx, 256h
        push edi
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2D 20 FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10075297
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3fch]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 404h], eax
        ; Exact mapped bytes E8 AE 9E 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3fch]
        push 101h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 400h]
        ; Exact mapped bytes E8 94 9E 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 400h]
        push 101h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 404h]
        ; Exact mapped bytes E8 7A 9E 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 404h]
        push 0a0h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 A6 74 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0dh
        ; Exact mapped bytes 74 48: je 0x10075352
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x1007532b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1007532b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x1007532d
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
        push 803h
        push 44h
        push 119h
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 70 1F FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10075354
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 39ch], eax
        ; Exact mapped bytes E8 37 74 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0eh
        ; Exact mapped bytes 74 48: je 0x100753c1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x1007539a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1007539a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x1007539c
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
        push 803h
        push 44h
        push 119h
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 01 1F FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100753c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 398h], eax
        ; Exact mapped bytes E8 C8 73 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x73
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 24h], 0fh
        ; Exact mapped bytes 74 48: je 0x10075430
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x10075409
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10075409
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x1007540b
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
        push 803h
        push 44h
        push 119h
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 92 1E FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10075432
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a0h], eax
        mov eax, dword ptr [esi + 39ch]
        mov ecx, 0dfffh
        push 101h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 39ch]
        ; Exact mapped bytes E8 F0 9C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 398h]
        push 101h
        ; Exact mapped bytes E8 E0 9C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3a0h]
        push 101h
        ; Exact mapped bytes E8 D0 9C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        lea edi, [esi + 2c8h]
        mov ebx, 8
        lea ebp, [eax + 1a2h]
        push 0a0h
        ; Exact mapped bytes E8 F1 72 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 10h
        ; Exact mapped bytes 74 28: je 0x100754e7
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, 3eh
        push 7d0h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DB 1D FA FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100754e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 0a0h], eax
        mov dword ptr [edi], 0
        add edi, 4
        add ebp, 19h
        dec ebx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 75 A2: jne 0x100754a5
        __asm _emit 0x75
        __asm _emit 0xa2
        lea edi, [esi + 0c8h]
        mov ecx, 80h
        xor eax, eax
        lea ebp, [esi + 2e8h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esp + 40h], 20h
        mov ebx, 7d0h
        push 798h
        ; Exact mapped bytes E8 71 72 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 11h
        ; Exact mapped bytes 74 19: je 0x10075558
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add edx, 70h
        push ebx
        add ecx, 3ch
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A E0 06 00: call 0x100e35c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007555a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [ebp]
        mov byte ptr [esp + 24h], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007557c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 24 9A 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10075589
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 77 99 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        add ebp, 4
        dec eax
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 75 8E: jne 0x10075525
        __asm _emit 0x75
        __asm _emit 0x8e
        mov dword ptr [esp + 40h], 0
        mov ebp, dword ptr [esp + 40h]
        mov eax, ebp
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        and ebp, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100755bd
        __asm _emit 0x79
        __asm _emit 0x05
        dec ebp
        or ebp, 0fffffffch
        inc ebp
        lea eax, [edi*8]
        lea ecx, [ebp*8]
        sub eax, edi
        sub ecx, ebp
        push 0fch
        lea edx, [eax + eax*2]
        mov eax, dword ptr [esp + 34h]
        shl edx, 4
        lea ebx, [edx + eax + 94h]
        mov edx, dword ptr [esp + 38h]
        lea eax, [edx + ecx*2 + 97h]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 A7 71 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 12h
        ; Exact mapped bytes 74 38: je 0x10075641
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x1007562a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007562a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x1007562c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 18h]
        push edx
        push ebx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 9C 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x10075643
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        lea eax, [ebp + edi*4]
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + eax*4 + 3a8h], ebx
        mov ecx, dword ptr [ebx + 40h]
        test ecx, ecx
        ; Exact mapped bytes 66 C7 43 26 B8 0B: mov word ptr [ebx + 0x26], 0xbb8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x43
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 06: je 0x10075666
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 3A 99 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10075673
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 8D 98 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        inc eax
        cmp eax, 8
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 8C 1A FF FF FF: jl 0x1007559f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        mov dword ptr [esp + 40h], ebp
        ; Exact mapped bytes EB 04: jmp 0x10075691
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 40h]
        mov eax, ebp
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        and ebp, 80000003h
        ; Exact mapped bytes 79 05: jns 0x100756ab
        __asm _emit 0x79
        __asm _emit 0x05
        dec ebp
        or ebp, 0fffffffch
        inc ebp
        mov ecx, dword ptr [esp + 30h]
        lea eax, [edi + edi*2]
        shl eax, 3
        sub eax, edi
        push 74h
        lea edx, [ecx + eax*8]
        mov ecx, dword ptr [esp + 38h]
        lea ebx, [eax + edx + 0edh]
        lea eax, [ebp*8]
        sub eax, ebp
        lea edx, [ecx + eax*2 + 9bh]
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes E8 C0 70 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 13h
        ; Exact mapped bytes 74 42: je 0x10075732
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 36h
        ; Exact mapped bytes 7E 12: jle 0x10075711
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10075711
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes EB 02: jmp 0x10075713
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 18h]
        push 0bb8h
        push edx
        push ebx
        push ecx
        push esi
        push 0
        push 80h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 30 48 FB FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10075734
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [ebp + edi*4]
        push 101h
        mov byte ptr [esp + 28h], 0
        lea ebp, [esi + ecx*4 + 3c8h]
        mov ecx, eax
        mov dword ptr [ebp], eax
        ; Exact mapped bytes E8 0D 9A 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ebx, dword ptr [ebp]
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 C7 43 26 B8 0B: mov word ptr [ebx + 0x26], 0xbb8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x43
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x0b
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10075772
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 2E 98 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007577f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 81 97 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x1007578b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 25 4C FB FF: call 0x1002a3b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esp + 40h]
        inc eax
        cmp eax, 8
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 8C F0 FE FF FF: jl 0x1007568d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 FC 6F 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        xor ebp, ebp
        mov byte ptr [esp + 24h], 14h
        cmp edi, ebp
        ; Exact mapped bytes 74 7D: je 0x10075835
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 37h
        ; Exact mapped bytes 7E 12: jle 0x100757d8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100757d8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0dch]
        ; Exact mapped bytes EB 02: jmp 0x100757da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 0bb8h
        push ebp
        add edx, 78h
        push ebp
        add eax, 0eeh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B5 91 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x10075831
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10075837
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 3e8h], ecx
        ; Exact mapped bytes E8 14 99 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 70h], ebp
        ; Exact mapped bytes E8 4A 15 00 00: call 0x10076da0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        and eax, 0e5f0h
        mov dword ptr [esi + 60h], ebp
        or ah, 5
        pop edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
