// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055870 .. +0x30F bytes.
extern "C" __declspec(naked) void FUN_10055870_10055870() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 F5 02 00 00: je 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 22: je 0x100558af
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x100558a6
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x100558af
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x10055890
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x10055aa6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x100559a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 A6 02 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16ch]
        cmp eax, 65h
        ; Exact mapped bytes 75 26: jne 0x10055900
        __asm _emit 0x75
        __asm _emit 0x26
        mov dword ptr [esi + 174h], ebx
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3A 7B FF FF: call 0x1004d430
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 66h
        ; Exact mapped bytes 75 10: jne 0x10055915
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 174h], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 6eh
        ; Exact mapped bytes 0F 85 57 02 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 56 1C 10: mov edx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 0a68h], ebx
        ; Exact mapped bytes 0F 84 45 02 00 00: je 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x10055950
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10055950
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x10055952
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 174h], ebx
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 91 AA 09 00 00: mov dx, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 1E 21 06 00: call 0x100b7aa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        push ebx
        push ebx
        ; Exact mapped bytes 66 8B 81 AA 09 00 00: mov ax, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 11 6F FF FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        mov edx, dword ptr [edi + 4]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 0F 8C A3 00 00 00: jl 0x10055a6b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x10055a6b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 0F 8C 83 00 00 00: jl 0x10055a6b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 20h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 7A: jge 0x10055a6b
        __asm _emit 0x7d
        __asm _emit 0x7a
        cmp dword ptr [esi + 16ch], 8
        ; Exact mapped bytes 0F 85 77 01 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 16ch], 6eh
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0beh
        ; Exact mapped bytes 7E 12: jle 0x10055a2c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10055a2c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2f80h
        ; Exact mapped bytes EB 02: jmp 0x10055a2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp ecx, ebx
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 18h]
        add ecx, 20h
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        pop edi
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 16ch], 6eh
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 16ch], 8
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bdh
        ; Exact mapped bytes 7E 98: jle 0x10055a2c
        __asm _emit 0x7e
        __asm _emit 0x98
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 8E: je 0x10055a2c
        __asm _emit 0x74
        __asm _emit 0x8e
        add ecx, 2f40h
        ; Exact mapped bytes EB 88: jmp 0x10055a2e
        __asm _emit 0xeb
        __asm _emit 0x88
        mov edi, dword ptr [edi + 8]
        cmp edi, 1bh
        ; Exact mapped bytes 74 40: je 0x10055aee
        __asm _emit 0x74
        __asm _emit 0x40
        cmp edi, 70h
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 57 1C 10: mov ecx, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 75 0F: jne 0x10055ad7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x10055b75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 64h], ebx
        ; Exact mapped bytes 74 73: je 0x10055b66
        __asm _emit 0x74
        __asm _emit 0x73
        cmp dword ptr [esi + 6ch], 40000000h
        ; Exact mapped bytes 75 79: jne 0x10055b75
        __asm _emit 0x75
        __asm _emit 0x79
        mov dword ptr [esi + 6ch], ebx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 A6 71 06 00: call 0x100bccb0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        xor eax, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7E 1E: jle 0x10055b34
        __asm _emit 0x7e
        __asm _emit 0x1e
        lea ecx, [esi + 198h]
        mov edx, 1
        mov edi, dword ptr [ecx]
        inc eax
        add ecx, 4
        mov dword ptr [edi + 50h], edx
        mov edi, dword ptr [esi + 120h]
        cmp eax, edi
        ; Exact mapped bytes 7C ED: jl 0x10055b21
        __asm _emit 0x7c
        __asm _emit 0xed
        mov edx, dword ptr [esi + 64h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 18 01 00 00: mov cx, word ptr [esi + 0x118]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20000h
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 8E 76 FF FF: call 0x1004d1e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 64h], ebx
        ; Exact mapped bytes 66 89 9E 18 01 00 00: mov word ptr [esi + 0x118], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 EB AB FC FF: call 0x10020760
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
