// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060F50 .. +0x2022 bytes.
extern "C" __declspec(naked) void FUN_10060f50_10060F50() {
    __asm {
        push -1
        push 1016f4feh
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
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 19 DA 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi], 10175c6ch
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 1800h
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esi + 1048ch], 10175c68h
        mov dword ptr [esi + 104a4h], ebx
        mov dword ptr [esi + 10490h], 200h
        mov dword ptr [esi + 10494h], ebx
        ; Exact mapped bytes E8 B9 B7 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [esi + 104a0h], eax
        mov dword ptr [esi + 10498h], ebx
        mov dword ptr [esi + 1049ch], ebx
        mov dword ptr [esi + 10494h], ebx
        mov dword ptr [esi], 10175c4ch
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        push 10h
        mov byte ptr [esp + 30h], 1
        mov dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes E8 7F B7 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x10061039
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [eax], 10175c48h
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [eax + 0ch], ebx
        ; Exact mapped bytes EB 02: jmp 0x1006103b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20bb8h], eax
        ; Exact mapped bytes E8 50 B7 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 3
        ; Exact mapped bytes 74 3F: je 0x1006109f
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 26h
        ; Exact mapped bytes 7E 12: jle 0x10061081
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061081
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes EB 02: jmp 0x10061083
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5208h
        push 0d0h
        push 12fh
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 F3 21 FC FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100610a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, 101h
        mov ecx, eax
        push edi
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a64h], eax
        ; Exact mapped bytes E8 A7 E0 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a64h]
        mov ebp, 7fffh
        push 84h
        mov dword ptr [eax + 78h], edi
        mov eax, dword ptr [esi + 10a64h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 C5 B6 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 4
        ; Exact mapped bytes 74 3F: je 0x1006112a
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 27h
        ; Exact mapped bytes 7E 12: jle 0x1006110c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006110c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x1006110e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5208h
        push 17bh
        push 16eh
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 68 21 FC FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1006112c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        mov ecx, eax
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a68h], eax
        ; Exact mapped bytes E8 21 E0 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a68h]
        push 74h
        mov dword ptr [eax + 78h], edi
        mov eax, dword ptr [esi + 10a68h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 47 B6 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb6
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 5
        ; Exact mapped bytes 74 4E: je 0x100611b7
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 10a68h]
        ; Exact mapped bytes 8B 15 44 57 1C 10: mov edx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [ecx + 8]
        cmp dword ptr [edx + 164h], 28h
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7E 12: jle 0x10061196
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x10061196
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x10061198
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add edi, 12h
        push 5209h
        add ecx, 2
        push edi
        push ecx
        push edx
        push esi
        push ebx
        push 2eeh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 AB 8D FC FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100611b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a6ch], eax
        ; Exact mapped bytes E8 D5 B5 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 6
        ; Exact mapped bytes 74 75: je 0x10061252
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 68ch
        ; Exact mapped bytes 7E 12: jle 0x10061200
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10061200
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a30h]
        ; Exact mapped bytes EB 02: jmp 0x10061202
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee0h
        push ebx
        push ebx
        push 31h
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9C D7 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1006124b
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
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x10061254
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a30h], edi
        ; Exact mapped bytes E8 F5 DE 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a30h]
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 24 B5 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 7
        ; Exact mapped bytes 74 75: je 0x10061303
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 68dh
        ; Exact mapped bytes 7E 12: jle 0x100612b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100612b1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a34h]
        ; Exact mapped bytes EB 02: jmp 0x100612b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 10a30h]
        push -1
        push ebx
        push ebx
        push 31h
        push ebx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E8 D6 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100612ff
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10061305
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a34h], ecx
        ; Exact mapped bytes E8 46 DE 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a34h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 70 B4 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 8
        ; Exact mapped bytes 74 3F: je 0x1006137f
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x10061361
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061361
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x10061363
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 10a30h]
        push 33h
        push 291h
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 15 DF 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x10061381
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 10a38h], ebp
        mov ecx, dword ptr [ebp + 40h]
        mov edi, 2ee1h
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100613a2
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 FE DB 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100613af
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 51 DB 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E7 B3 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 9
        ; Exact mapped bytes 74 3D: je 0x10061406
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100613ea
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100613ea
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0ac0h]
        ; Exact mapped bytes EB 02: jmp 0x100613ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 10a38h]
        push 33h
        push 291h
        push 8
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8C DE 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10061408
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a4ch], eax
        ; Exact mapped bytes E8 83 B3 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0ah
        ; Exact mapped bytes 74 3F: je 0x1006146c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x1006144e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006144e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x10061450
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 10a30h]
        push 33h
        push 363h
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 28 DE 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x1006146e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 10a3ch], ebp
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1006148a
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 16 DB 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061497
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 69 DA 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 FF B2 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0bh
        ; Exact mapped bytes 74 3D: je 0x100614ee
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100614d2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100614d2
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0ac0h]
        ; Exact mapped bytes EB 02: jmp 0x100614d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 10a3ch]
        push 33h
        push 363h
        push 8
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A4 DD 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100614f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a50h], eax
        ; Exact mapped bytes E8 9B B2 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0ch
        ; Exact mapped bytes 74 3F: je 0x10061554
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x10061536
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061536
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x10061538
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 10a30h]
        push 33h
        push 1e8h
        push 3
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 40 DD 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x10061556
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 10a40h], ebp
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10061572
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 2E DA 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006157f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 81 D9 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 17 B2 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0dh
        ; Exact mapped bytes 74 3D: je 0x100615d6
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100615ba
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100615ba
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0ac0h]
        ; Exact mapped bytes EB 02: jmp 0x100615bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 10a40h]
        push 33h
        push 1e8h
        push 3
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BC DC 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100615d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a54h], eax
        ; Exact mapped bytes E8 B3 B1 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0eh
        ; Exact mapped bytes 74 3F: je 0x1006163c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x1006161e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006161e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x10061620
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 10a30h]
        push 33h
        push 0a0h
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 58 DC 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x1006163e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 10a44h], ebp
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 7D 26: mov word ptr [ebp + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1006165a
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 46 D9 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061667
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 99 D8 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 2F B1 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0fh
        ; Exact mapped bytes 74 3D: je 0x100616be
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100616a2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100616a2
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0ac0h]
        ; Exact mapped bytes EB 02: jmp 0x100616a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 10a44h]
        push 33h
        push 0a0h
        push 8
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D4 DB 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100616c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a58h], eax
        ; Exact mapped bytes E8 CB B0 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 10h
        mov edi, 22h
        ; Exact mapped bytes 74 3E: je 0x10061728
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1006170a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006170a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 880h
        ; Exact mapped bytes EB 02: jmp 0x1006170c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 10a30h]
        push 4ah
        push 3ach
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6C DB 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x1006172a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 10a48h], ebp
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 C7 45 26 E1 2E: mov word ptr [ebp + 0x26], 0x2ee1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe1
        __asm _emit 0x2e
        ; Exact mapped bytes 74 06: je 0x10061748
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 58 D8 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061755
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 AB D7 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 41 B0 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 11h
        ; Exact mapped bytes 74 3C: je 0x100617ab
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1006178f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006178f
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 880h]
        ; Exact mapped bytes EB 02: jmp 0x10061791
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 10a30h]
        push 54h
        push 3ach
        push 8
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E7 DA 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100617ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 28h], 1
        mov dword ptr [esi + 10a5ch], eax
        lea edi, [esi + 10a4ch]
        mov dword ptr [esp + 44h], 4
        mov ecx, dword ptr [edi - 14h]
        push 101h
        ; Exact mapped bytes E8 8D D9 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi - 14h]
        push 0fffffeffh
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 78 D9 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, dword ptr [edi]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 FF FF: mov word ptr [ebp + 0x26], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100617fd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 A3 D7 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006180a
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 F6 D6 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 44h]
        dec eax
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 75 A6: jne 0x100617c6
        __asm _emit 0x75
        __asm _emit 0xa6
        push 0fch
        ; Exact mapped bytes E8 76 AF 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xaf
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 12h
        ; Exact mapped bytes 74 39: je 0x10061873
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x1006185b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006185b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x1006185d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 35h
        push 8ch
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 DA 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10061875
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20c50h], edi
        mov ecx, dword ptr [edi + 40h]
        mov ebp, 2ee1h
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10061896
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0A D7 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100618a3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5D D6 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c50h]
        push 101h
        ; Exact mapped bytes E8 AD D8 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E3 AE 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 13h
        ; Exact mapped bytes 74 39: je 0x10061906
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x100618ee
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100618ee
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x100618f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 34h
        push 291h
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8E D9 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10061908
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20c54h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10061924
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C D6 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061931
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CF D5 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c54h]
        push 101h
        ; Exact mapped bytes E8 1F D8 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 55 AE 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 14h
        ; Exact mapped bytes 74 39: je 0x10061994
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x1006197c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006197c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x1006197e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 46h
        push 398h
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 00 D9 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10061996
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20c4ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100619b2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EE D5 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100619bf
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 41 D5 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c4ch]
        push 101h
        ; Exact mapped bytes E8 91 D7 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C7 AD 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 15h
        ; Exact mapped bytes 74 39: je 0x10061a22
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x10061a0a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061a0a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x10061a0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 35h
        push 1c7h
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 D8 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10061a24
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20c30h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10061a40
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 D5 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061a4d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B3 D4 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 49 AD 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 16h
        ; Exact mapped bytes 74 39: je 0x10061aa0
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x10061a88
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x10061a88
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x10061a8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 35h
        push 1ech
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 D7 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10061aa2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20c34h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10061abe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E2 D4 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10061acb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 35 D4 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi + 20c38h], ebx
        mov dword ptr [esi + 20c3ch], ebx
        mov dword ptr [esi + 20c40h], ebx
        push 54h
        mov dword ptr [esi + 20c44h], ebx
        ; Exact mapped bytes E8 B6 AC 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xac
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 17h
        ; Exact mapped bytes 74 6E: je 0x10061b6a
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 68h
        ; Exact mapped bytes 7E 12: jle 0x10061b1c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10061b1c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a0h]
        ; Exact mapped bytes EB 02: jmp 0x10061b1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee0h
        push ebx
        push ebx
        push 5ah
        push 5
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7F CE 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10061b6c
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
        ; Exact mapped bytes EB 02: jmp 0x10061b6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20c60h], edi
        ; Exact mapped bytes E8 DD D5 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c60h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 0A AC 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xac
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 18h
        ; Exact mapped bytes 74 71: je 0x10061c19
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6ah
        ; Exact mapped bytes 7E 12: jle 0x10061bc8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10061bc8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a8h]
        ; Exact mapped bytes EB 02: jmp 0x10061bca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee0h
        push ebx
        push ebx
        push 8ch
        push 5
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D0 CD 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10061c1b
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
        ; Exact mapped bytes EB 02: jmp 0x10061c1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20c64h], edi
        ; Exact mapped bytes E8 2E D5 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c64h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 5B AB 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 19h
        ; Exact mapped bytes 74 6E: je 0x10061cc5
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 67h
        ; Exact mapped bytes 7E 12: jle 0x10061c77
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10061c77
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 19ch]
        ; Exact mapped bytes EB 02: jmp 0x10061c79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee0h
        push ebx
        push ebx
        push 5ah
        push 5
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 CD 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10061cc7
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
        ; Exact mapped bytes EB 02: jmp 0x10061cc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20c58h], edi
        ; Exact mapped bytes E8 C7 AA 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xaa
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 1ah
        ; Exact mapped bytes 74 71: je 0x10061d5c
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 69h
        ; Exact mapped bytes 7E 12: jle 0x10061d0b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10061d0b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1a4h]
        ; Exact mapped bytes EB 02: jmp 0x10061d0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee0h
        push ebx
        push ebx
        push 8ch
        push 5
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8D CC 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10061d5e
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
        ; Exact mapped bytes EB 02: jmp 0x10061d5e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 80h
        mov ebp, 7fffh
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20c5ch], edi
        ; Exact mapped bytes E8 28 AA 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xaa
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1bh
        ; Exact mapped bytes 74 37: je 0x10061dbf
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x10061da9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061da9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x10061dab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2ee0h
        push 6eh
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 5B FE FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10061dc1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 28h
        push 1
        mov ecx, eax
        mov byte ptr [esp + 30h], 1
        mov dword ptr [esi + 20c70h], eax
        ; Exact mapped bytes E8 B9 5E FE FF: call 0x10047c90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20c70h]
        push 0fffffeffh
        ; Exact mapped bytes E8 79 D3 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c70h]
        push 80h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 A5 A9 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1ch
        ; Exact mapped bytes 74 3A: je 0x10061e45
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x10061e2c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061e2c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x10061e2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2ee0h
        push 0a0h
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0D 5B FE FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10061e47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 28h
        push 1
        mov ecx, eax
        mov byte ptr [esp + 30h], 1
        mov dword ptr [esi + 20c74h], eax
        ; Exact mapped bytes E8 33 5E FE FF: call 0x10047c90
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20c74h]
        push 0fffffeffh
        ; Exact mapped bytes E8 F3 D2 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c74h]
        push 80h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 1F A9 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1dh
        ; Exact mapped bytes 74 37: je 0x10061ec8
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x10061eb2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061eb2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x10061eb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2ee0h
        push 6eh
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 5A FE FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10061eca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 28h
        push 1
        mov ecx, eax
        mov byte ptr [esp + 30h], 1
        mov dword ptr [esi + 20c68h], eax
        ; Exact mapped bytes E8 B0 5D FE FF: call 0x10047c90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20c68h]
        push 101h
        ; Exact mapped bytes E8 70 D2 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c68h]
        push 80h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 9C A8 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1eh
        ; Exact mapped bytes 74 3A: je 0x10061f4e
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x10061f35
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061f35
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x10061f37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 2ee0h
        push 0a0h
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 04 5A FE FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10061f50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 28h
        push 1
        mov ecx, eax
        mov byte ptr [esp + 30h], 1
        mov dword ptr [esi + 20c6ch], eax
        ; Exact mapped bytes E8 2A 5D FE FF: call 0x10047c90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20c6ch]
        push 101h
        ; Exact mapped bytes E8 EA D1 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c6ch]
        push 0a0h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20c70h]
        mov dword ptr [eax + 7ch], ebx
        mov eax, dword ptr [esi + 20c74h]
        mov dword ptr [eax + 7ch], ebx
        mov eax, dword ptr [esi + 20c68h]
        mov dword ptr [eax + 7ch], ebx
        mov eax, dword ptr [esi + 20c6ch]
        mov dword ptr [eax + 7ch], ebx
        ; Exact mapped bytes E8 F2 A7 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1fh
        ; Exact mapped bytes 74 51: je 0x1006200f
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x10061fdf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10061fdf
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x10061fe1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 34h]
        push 2ee0h
        lea edx, [edi + 5ah]
        push edx
        lea edx, [ebp + 64h]
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
        ; Exact mapped bytes E8 B3 52 FB FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x10062019
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 38h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 20c78h], eax
        ; Exact mapped bytes E8 72 A7 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 20h
        ; Exact mapped bytes 74 4C: je 0x1006208a
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x1006205f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1006205f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x10062061
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 8ch]
        push 2ee0h
        push edx
        lea edx, [ebp + 64h]
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
        ; Exact mapped bytes E8 38 52 FB FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1006208c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 20c7ch], eax
        mov ecx, dword ptr [esi + 20c78h]
        push 101h
        mov byte ptr [esp + 2ch], 1
        ; Exact mapped bytes E8 B9 D0 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c7ch]
        push 101h
        ; Exact mapped bytes E8 A9 D0 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c78h]
        mov ecx, 7fffh
        push 80h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20c7ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 C6 A6 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa6
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 21h
        ; Exact mapped bytes 74 11: je 0x100620fb
        __asm _emit 0x74
        __asm _emit 0x11
        push 2ee0h
        push edi
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D7 E1 06 00: call 0x100d02d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100620fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a60h], eax
        ; Exact mapped bytes E8 91 A6 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa6
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 22h
        ; Exact mapped bytes 74 7C: je 0x1006219d
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x1006213e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x1006213e
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 64h]
        ; Exact mapped bytes EB 02: jmp 0x10062140
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push 2710h
        push ebx
        add eax, 64h
        push ebx
        add ecx, 200h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4E C8 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10062199
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1006219f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a28h], ecx
        ; Exact mapped bytes E8 AC CF 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a28h]
        push 50h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 10a28h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 10a2ch], ebx
        ; Exact mapped bytes E8 C7 A5 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 23h
        ; Exact mapped bytes 74 10: je 0x100621f9
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 B9 C7 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100621fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1b4h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 104d0h], eax
        ; Exact mapped bytes E8 90 A5 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 24h
        ; Exact mapped bytes 74 17: je 0x10062237
        __asm _emit 0x74
        __asm _emit 0x17
        push ebx
        push 300h
        push 400h
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 BB C4 FE FF: call 0x1004e6f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10062239
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 104e0h], eax
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 104e0h]
        push 0f4240h
        push 0f4240h
        mov byte ptr [esp + 30h], 1
        ; Exact mapped bytes E8 21 4D 0A 00: call 0x10106f80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104e0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 33 CD 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi + 10504h], ebx
        mov dword ptr [esi + 1050ch], ebx
        mov dword ptr [esi + 10508h], ebx
        mov dword ptr [esi + 10500h], ebx
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x100622a2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100622a2
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100622a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 F2 A4 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 25h
        ; Exact mapped bytes 74 30: je 0x100622ee
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], ebx
        ; Exact mapped bytes 7E 16: jle 0x100622e2
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100622e2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 12 0A 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100622f0
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C4 12 0A 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100622f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 10498h], ebx
        mov dword ptr [esi + 1049ch], ebx
        mov dword ptr [esi + 10494h], ebx
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0a10h
        and edx, 0e5ffh
        mov byte ptr [esp + 28h], 1
        or dh, 5
        sub eax, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 10448h], ebx
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 378h], ebx
        mov dword ptr [esi + 109ech], ebx
        mov dword ptr [esi + 109f0h], 40000000h
        mov byte ptr [esi + 398h], bl
        mov dword ptr [esi + 384h], ebx
        mov dword ptr [esi + 394h], ebx
        mov dword ptr [esp + 34h], 2b8h
        lea edi, [esi + 0d0h]
        mov dword ptr [esp + 44h], eax
        push 58h
        mov dword ptr [edi - 48h], ebx
        ; Exact mapped bytes E8 1C A4 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 26h
        ; Exact mapped bytes 74 22: je 0x100623b8
        __asm _emit 0x74
        __asm _emit 0x22
        push 2ed6h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 09 C6 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100623ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 95 CD 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 C6 A3 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 27h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x10062477
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1D: jle 0x1006241f
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp eax, ebx
        ; Exact mapped bytes 7C 19: jl 0x1006241f
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x1006241f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esp + 44h]
        add eax, ecx
        mov edx, dword ptr [eax + edi]
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes EB 04: jmp 0x10062423
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        mov eax, dword ptr [edi]
        push 2ed6h
        push ebx
        push ebx
        push 0ah
        push -2
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 78 C5 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], 1017523ch
        cmp eax, ebx
        mov dword ptr [ebp + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10062473
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x10062479
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes E8 D5 CC 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 20h]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi - 4]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, 0fffffd48h
        cmp eax, 8
        ; Exact mapped bytes 0F 8C C3 FE FF FF: jl 0x1006237a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov dword ptr [esi + 109f4h], 0ffffff9ch
        push 0a0h
        mov dword ptr [esi + 1045ch], ebx
        mov dword ptr [esi + 10460h], ebx
        mov byte ptr [esi + 10470h], bl
        mov dword ptr [esi + 10488h], ebx
        mov dword ptr [esi + 1047ch], ebx
        mov dword ptr [esi + 10480h], ebx
        mov dword ptr [esi + 1046ch], ebx
        mov dword ptr [esi + 104a8h], ebx
        mov dword ptr [esi + 104b8h], 30h
        mov dword ptr [esi + 104b4h], 0ffffffffh
        mov dword ptr [esi + 104bch], ebx
        mov dword ptr [esi + 10a70h], 6
        mov dword ptr [esi + 10478h], eax
        mov dword ptr [esi + 20a74h], eax
        ; Exact mapped bytes E8 70 A2 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 28h
        ; Exact mapped bytes 74 09: je 0x10062549
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 D9 BC FD FF: call 0x1003e220
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1006254b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 20b00h], eax
        mov ebp, 74h
        lea eax, [esi + 20b8ch]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [esp + 44h], ebp
        mov dword ptr [esp + 38h], 1d0h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes EB 04: jmp 0x10062577
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 44h]
        push 54h
        ; Exact mapped bytes E8 22 A2 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 40h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 29h
        ; Exact mapped bytes 74 71: je 0x10062601
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x100625b4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ebp, ebx
        ; Exact mapped bytes 7C 13: jl 0x100625b4
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100625b4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100625b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 26fh
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E8 C3 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10062603
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
        ; Exact mapped bytes EB 02: jmp 0x10062603
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 34h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [ecx], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 C7 47 26 38 4A: mov word ptr [edi + 0x26], 0x4a38
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0x4a
        ; Exact mapped bytes 74 06: je 0x10062621
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F C9 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006262e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 C8 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 34h]
        mov eax, 4
        add ebp, eax
        add edi, eax
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [esp + 38h], ebp
        inc eax
        mov dword ptr [esp + 34h], edi
        mov dword ptr [esp + 44h], eax
        add eax, -74h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 17 FF FF FF: jl 0x10062573
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 20b8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 F4 CA 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20b8ch]
        push 0e8h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 1E A1 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2ah
        ; Exact mapped bytes 74 30: je 0x100626c2
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push ebx
        push 0ffffffh
        push 28ah
        push 1c0h
        push 27bh
        push 29h
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 62 FB FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100626c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 20b94h], edi
        mov ecx, dword ptr [edi + 40h]
        mov ebp, 4e20h
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100626e5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB C8 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100626f2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0E C8 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20b94h]
        mov edi, 0fffdh
        push 9ch
        mov dword ptr [eax + 90h], 80h
        mov eax, dword ptr [esi + 20b94h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 85 A0 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2bh
        ; Exact mapped bytes 74 28: je 0x10062753
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 0ffffh
        push 2a8h
        push 3e8h
        push 262h
        push 14h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AF 6A 0A 00: call 0x10109200
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062755
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 20b98h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20b98h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [eax + 68h], 10101h
        mov eax, dword ptr [esi + 20b98h]
        mov dword ptr [eax + 98h], 0ah
        mov eax, dword ptr [esi + 20b98h]
        mov dword ptr [eax + 90h], 0bb8h
        mov edi, dword ptr [esi + 20b98h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100627a8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 C7 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100627b5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4B C7 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        push 9ch
        mov dword ptr [esi + 20ba4h], ebx
        ; Exact mapped bytes E8 DB 9F 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2ch
        ; Exact mapped bytes 74 28: je 0x100627fd
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 0ffff00h
        push 12ch
        push 320h
        push 0b4h
        push 6eh
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 05 6A 0A 00: call 0x10109200
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100627ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 20b9ch], eax
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 20b9ch]
        mov ebp, 1388h
        mov byte ptr [esp + 28h], 1
        mov dword ptr [eax + 68h], 10101h
        mov eax, dword ptr [esi + 20b9ch]
        mov dword ptr [eax + 98h], 5
        mov eax, dword ptr [esi + 20b9ch]
        mov dword ptr [eax + 90h], ebp
        mov edi, dword ptr [esi + 20b9ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 4E: mov word ptr [edi + 0x26], 0x4e20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x4e
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062857
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 C7 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062864
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C C6 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        push 9ch
        ; Exact mapped bytes E8 32 9F 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2dh
        ; Exact mapped bytes 74 2B: je 0x100628a9
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 0ffffh
        push 12ch
        push 400h
        push 0b4h
        push 28ah
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 59 69 0A 00: call 0x10109200
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100628ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 20ba0h], eax
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 20ba0h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [eax + 68h], 10101h
        mov eax, dword ptr [esi + 20ba0h]
        mov dword ptr [eax + 98h], 5
        mov eax, dword ptr [esi + 20ba0h]
        mov dword ptr [eax + 90h], ebp
        mov edi, dword ptr [esi + 20ba0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 4E: mov word ptr [edi + 0x26], 0x4e20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x4e
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100628fe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A2 C6 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006290b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F5 C5 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        push 198h
        ; Exact mapped bytes E8 8B 9E 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2eh
        ; Exact mapped bytes 74 0F: je 0x10062934
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aac94h
        mov ecx, eax
        ; Exact mapped bytes E8 8E D1 09 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062936
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 21a50h], eax
        xor ebp, ebp
        lea eax, [esi + 21a54h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes EB 04: jmp 0x10062957
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 42 9E 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2fh
        ; Exact mapped bytes 74 72: je 0x100629e2
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esi + 21a50h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x10062995
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ebp, ebx
        ; Exact mapped bytes 7C 13: jl 0x10062995
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x10062995
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x10062997
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2ee1h
        push ebx
        push ebx
        push -3
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 07 C0 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100629e4
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
        ; Exact mapped bytes EB 02: jmp 0x100629e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [ecx], edi
        ; Exact mapped bytes 66 81 67 24 FF 7F: and word ptr [edi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        inc eax
        add ecx, 4
        cmp eax, 2
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes 0F 8C 45 FF FF FF: jl 0x10062953
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 21a54h]
        push 0fffffeffh
        ; Exact mapped bytes E8 42 C7 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21a58h]
        push 101h
        ; Exact mapped bytes E8 32 C7 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 68 9D 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 30h
        ; Exact mapped bytes 74 37: je 0x10062a7f
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x10062a69
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10062a69
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x10062a6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5ah
        push 389h
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 13 C8 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062a81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 21a5ch], eax
        ; Exact mapped bytes E8 0A 9D 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 31h
        ; Exact mapped bytes 74 37: je 0x10062add
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x10062ac7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10062ac7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x10062ac9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 5ah
        push 3b1h
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B5 C7 09 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062adf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 21a5ch]
        mov dword ptr [esi + 21a60h], eax
        mov ebp, 2ee1h
        mov byte ptr [esp + 28h], 1
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062b06
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A C4 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062b13
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 ED C3 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [esi + 21a60h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062b2a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 76 C4 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062b37
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 C3 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        lea eax, [esp + 14h]
        and edx, 0e5ffh
        push eax
        or dh, 5
        mov dword ptr [esi + 20ba8h], ebx
        mov dword ptr [esi + 10518h], ebx
        mov dword ptr [esi + 37ch], ebx
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esp + 18h], 1
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes FF 15 34 50 17 10: call dword ptr [0x10175034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 20c98h], ebx
        mov dword ptr [esi + 20c9ch], ebx
        mov dword ptr [esi + 20c90h], ebx
        push 0d4h
        mov dword ptr [esi + 20c94h], ebx
        ; Exact mapped bytes E8 03 9C 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 32h
        ; Exact mapped bytes 74 18: je 0x10062bc5
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push ebx
        push ebx
        push 18fh
        push 0d5h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6D F1 04 00: call 0x100b1d30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062bc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esi + 21744h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [esi + 20c98h], eax
        mov dword ptr [esi + 20c9ch], ebx
        xor ebp, ebp
        mov dword ptr [esp + 38h], ecx
        push 118h
        mov byte ptr [esi + ebp + 420h], bl
        ; Exact mapped bytes E8 AB 9B 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 33h
        ; Exact mapped bytes 74 13: je 0x10062c18
        __asm _emit 0x74
        __asm _emit 0x13
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4C 22 07 00: call 0x100d4e60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10062c1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [edx - 20h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 C7 47 26 38 4A: mov word ptr [edi + 0x26], 0x4a38
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0x4a
        ; Exact mapped bytes 74 06: je 0x10062c39
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 67 C3 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062c46
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BA C2 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        push 9ch
        ; Exact mapped bytes E8 50 9B 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 34h
        ; Exact mapped bytes 74 13: je 0x10062c73
        __asm _emit 0x74
        __asm _emit 0x13
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F1 34 07 00: call 0x100d6160
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10062c75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 28h], 1
        mov dword ptr [eax], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 C7 47 26 38 4A: mov word ptr [edi + 0x26], 0x4a38
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0x4a
        ; Exact mapped bytes 74 06: je 0x10062c93
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0D C3 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062ca0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 C2 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        inc ebp
        add ecx, 4
        cmp ebp, 8
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8C 2F FF FF FF: jl 0x10062be4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0c0h
        ; Exact mapped bytes E8 E1 9A 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 35h
        ; Exact mapped bytes 74 14: je 0x10062ce3
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push ebx
        push ebx
        push 364h
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AF 38 06 00: call 0x100c6590
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062ce5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 21a48h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 2ch], 1
        ; Exact mapped bytes E8 A3 9A 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 36h
        ; Exact mapped bytes 74 6E: je 0x10062d7d
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 48 57 1C 10: mov eax, dword ptr [0x101c5748]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2c7h
        ; Exact mapped bytes 7E 12: jle 0x10062d32
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10062d32
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0b1ch]
        ; Exact mapped bytes EB 02: jmp 0x10062d34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6E BC 09 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10062d79
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10062d7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 104fch], ecx
        ; Exact mapped bytes E8 CC C3 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104fch]
        push 30h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov dword ptr [esi + 20bach], ebx
        mov dword ptr [esi + 20bb0h], ebx
        mov dword ptr [esi + 104e4h], 3e8h
        mov dword ptr [esi + 109fch], ebx
        ; Exact mapped bytes E8 DD 99 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x99
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 37h
        ; Exact mapped bytes 74 10: je 0x10062de3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C4 7D 1A 10: mov ecx, dword ptr [0x101a7dc4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9F 1C 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062de5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 30h
        mov byte ptr [esp + 2ch], 1
        mov dword ptr [esi + 10a00h], eax
        ; Exact mapped bytes E8 A9 99 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x99
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 38h
        ; Exact mapped bytes 74 10: je 0x10062e17
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 C8 7D 1A 10: mov edx, dword ptr [0x101a7dc8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 6B 1C 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10062e19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 10a04h], eax
        mov dword ptr [esi + 109f8h], ebx
        mov dword ptr [esi + 10a08h], ebx
        mov dword ptr [esi + 10a0ch], 0bh
        mov edx, 1
        mov dword ptr [esi + 10a10h], 14h
        mov dword ptr [esi + 10a14h], edx
        mov dword ptr [esi + 10a18h], edx
        mov dword ptr [esi + 10a1ch], edx
        mov dword ptr [esi + 20c8ch], ebx
        mov dword ptr [esi + 20c80h], ebx
        mov dword ptr [esi + 20c88h], ebx
        mov dword ptr [esi + 108c8h], ebx
        mov dword ptr [esi + 21704h], ebx
        mov dword ptr [esi + 21708h], ebx
        mov dword ptr [esi + 215fch], ebx
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 2170ch], ebx
        lea edi, [esi + 3a0h]
        mov ecx, 20h
        xor eax, eax
        mov dword ptr [esi + 39ch], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 21714h], ebx
        mov dword ptr [esi + 21718h], ebx
        mov dword ptr [esi + 2171ch], ebx
        mov dword ptr [esi + 21720h], ebx
        mov dword ptr [esi + 21a34h], ebx
        mov dword ptr [esi + 21a3ch], 0ffffffffh
        mov dword ptr [esi + 21a44h], edx
        mov dword ptr [esi + 21764h], ebx
        mov dword ptr [esi + 107d8h], ebx
        mov dword ptr [esi + 21a38h], ebx
        mov byte ptr [esp + 28h], 1
        mov byte ptr [esi + 20ca0h], bl
        lea eax, [esi + 118h]
        mov ecx, 0ah
        mov dword ptr [eax - 4], ebx
        mov dword ptr [eax], ebx
        add eax, 8
        dec ecx
        ; Exact mapped bytes 75 F5: jne 0x10062ef7
        __asm _emit 0x75
        __asm _emit 0xf5
        push 88h
        ; Exact mapped bytes E8 94 98 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 39h
        ; Exact mapped bytes 74 12: je 0x10062f2e
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 56 06 FC FF: call 0x10023580
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10062f30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 21a4ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 66 C7 47 26 08 52: mov word ptr [edi + 0x26], 0x5208
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x52
        ; Exact mapped bytes 74 06: je 0x10062f4e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 C0 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10062f5b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A5 BF 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
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
        add esp, 1ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
