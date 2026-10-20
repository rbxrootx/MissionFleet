// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BE060 .. +0x683 bytes.
extern "C" __declspec(naked) void FUN_100be060_100BE060() {
    __asm {
        push -1
        push 10172346h
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
        ; Exact mapped bytes E8 8B A0 F7 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [esi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10176244h
        ; Exact mapped bytes E8 D8 E6 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 77: je 0x100be151
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21ah
        ; Exact mapped bytes 7E 12: jle 0x100be0fd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100be0fd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 868h]
        ; Exact mapped bytes EB 02: jmp 0x100be0ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 2710h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 98 08 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100be153
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
        ; Exact mapped bytes EB 02: jmp 0x100be153
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 3F E6 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 79: je 0x100be1ec
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21bh
        ; Exact mapped bytes 7E 12: jle 0x100be196
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100be196
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 86ch]
        ; Exact mapped bytes EB 02: jmp 0x100be198
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 2328h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FF 07 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100be1e8
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
        ; Exact mapped bytes EB 02: jmp 0x100be1ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 61 0F 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 91 E5 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7D: je 0x100be29e
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21eh
        ; Exact mapped bytes 7E 12: jle 0x100be244
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100be244
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 878h]
        ; Exact mapped bytes EB 02: jmp 0x100be246
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 2711h
        push ebx
        add eax, 10h
        push ebx
        add ecx, 7eh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4B 07 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100be2a0
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
        ; Exact mapped bytes EB 02: jmp 0x100be2a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 F2 E4 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 7D: je 0x100be33d
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21fh
        ; Exact mapped bytes 7E 12: jle 0x100be2e3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100be2e3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 87ch]
        ; Exact mapped bytes EB 02: jmp 0x100be2e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 2711h
        push ebx
        add ecx, 21h
        push ebx
        add edx, 7eh
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AC 06 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100be33f
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
        ; Exact mapped bytes EB 02: jmp 0x100be33f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 53 E4 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 7D: je 0x100be3dc
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21dh
        ; Exact mapped bytes 7E 12: jle 0x100be382
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100be382
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 874h]
        ; Exact mapped bytes EB 02: jmp 0x100be384
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 271ah
        push ebx
        inc edx
        push ebx
        add eax, 65h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0F 06 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100be3d8
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
        ; Exact mapped bytes EB 02: jmp 0x100be3de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 7ch], ecx
        ; Exact mapped bytes E8 75 0D 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 A2 E3 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        mov edi, 0afh
        ; Exact mapped bytes 74 3F: je 0x100be452
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100be433
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100be433
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2bc0h
        ; Exact mapped bytes EB 02: jmp 0x100be435
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, 0bh
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 7ah
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 40 0E 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100be454
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 38 E3 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 42: je 0x100be4ba
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100be498
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100be498
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2bc0h
        ; Exact mapped bytes EB 02: jmp 0x100be49a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, 0ah
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 0cbh
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D8 0D 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100be4bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 80h]
        mov dword ptr [esi + 84h], eax
        mov ebp, 271bh
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100be4e2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BE 0A 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100be4ef
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 11 0A 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 61 0C 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edi, dword ptr [esi + 84h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100be522
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7E 0A 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100be52f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D1 09 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 21 0C 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov edi, 7fffh
        push 74h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 4B E2 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 4D: je 0x100be5b2
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 21ch
        ; Exact mapped bytes 7E 12: jle 0x100be589
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100be589
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 870h]
        ; Exact mapped bytes EB 02: jmp 0x100be58b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 3a98h
        add edx, 1ah
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 7eh
        push edx
        push ecx
        push esi
        push ebx
        push 2710h
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 B0 B9 F6 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100be5b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 99 0B 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        push 74h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 CB E1 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4B: je 0x100be630
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 218h
        ; Exact mapped bytes 7E 12: jle 0x100be609
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100be609
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 860h]
        ; Exact mapped bytes EB 02: jmp 0x100be60b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        push 3a98h
        add edx, 29h
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 7eh
        push edx
        push ecx
        push esi
        push ebx
        push 2710h
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 32 B9 F6 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100be632
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 1B 0B 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        push 74h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0b4h], ebx
        ; Exact mapped bytes E8 35 E1 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 4E: je 0x100be6c9
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 219h
        ; Exact mapped bytes 7E 12: jle 0x100be69f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100be69f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 864h]
        ; Exact mapped bytes EB 02: jmp 0x100be6a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        push 3a99h
        add edx, 1fh
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 7eh
        push edx
        push ecx
        push esi
        push ebx
        push 0ffffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 9C B8 F6 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes EB 03: jmp 0x100be6cc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 74h], ebx
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
