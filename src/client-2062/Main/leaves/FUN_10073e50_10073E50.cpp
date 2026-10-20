// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10073E50 .. +0x372 bytes.
extern "C" __declspec(naked) void FUN_10073e50_10073E50() {
    __asm {
        sub esp, 0e8h
        push ebx
        push ebp
        mov ebp, ecx
        xor ebx, ebx
        cmp dword ptr [ebp + 1fch], ebx
        ; Exact mapped bytes 0F 8E 51 03 00 00: jle 0x100741b9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        mov eax, dword ptr [ebp + 204h]
        mov ecx, dword ptr [ebp + 200h]
        cmp eax, ecx
        ; Exact mapped bytes 74 25: je 0x10073e9f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 1f8h]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x10073e89
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x10073e8c
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov dword ptr [ebp + 204h], ecx
        mov ecx, dword ptr [ebp + 1fch]
        dec ecx
        mov dword ptr [ebp + 1fch], ecx
        lea ecx, [eax + eax*2]
        lea edi, [esp + 24h]
        lea edx, [ecx + ecx*8]
        mov ecx, 35h
        shl edx, 1
        sub edx, eax
        mov eax, dword ptr [ebp + 208h]
        lea esi, [eax + edx*4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 24h]
        cmp eax, 40h
        ; Exact mapped bytes 0F 87 46 01 00 00: ja 0x10074010
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x10073ffa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 B4 02 00 00: ja 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100741dch]
        ; Exact mapped bytes FF 24 8D C4 41 07 10: jmp dword ptr [ecx*4 + 0x100741c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x10
        mov edx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 8B 44 24 2C: mov ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        lea ecx, [esp + 1ch]
        mov dword ptr [esp + 1ch], edx
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes 66 89 44 24 24: mov word ptr [esp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes E8 69 FB FF FF: call 0x10073a70
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 02 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, eax
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 AD 82 FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        push 40000000h
        mov ecx, eax
        ; Exact mapped bytes E8 E1 A1 07 00: call 0x100ee110
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 118h], ebx
        ; Exact mapped bytes 0F 85 53 02 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 3B B0 2C 03 00 00: cmp si, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb0
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 3D 02 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 74h], 40000000h
        ; Exact mapped bytes E9 31 02 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, eax
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 5C 82 FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 94 A1 07 00: call 0x100ee110
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 118h], ebx
        ; Exact mapped bytes 0F 85 06 02 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 3B B2 2C 03 00 00: cmp si, word ptr [edx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb2
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F0 01 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 74h], ebx
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ecx, ebp
        push eax
        ; Exact mapped bytes E8 6E FC FF FF: call 0x10073c20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 118h], ebx
        ; Exact mapped bytes 0F 85 CB 01 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 7ch]
        mov esi, dword ptr [esp + 0f0h]
        or edx, 1
        push 1
        mov dword ptr [ebp + 7ch], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and esi, 0ffffh
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 97 B7 07 00: call 0x100ef780
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 174h]
        push esi
        ; Exact mapped bytes E8 9B 1D 05 00: call 0x100c5d90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 01 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 65 03 00 00: call 0x10074370
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4000008h
        ; Exact mapped bytes 0F 87 56 01 00 00: ja 0x10074171
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x10074161
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x100740cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 400h
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 2C: mov dx, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 89 54 24 14: mov word ptr [esp + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        mov edi, dword ptr [eax + 0ch]
        mov dword ptr [esp + 10h], ecx
        cmp edi, ebx
        mov ebx, dword ptr [esp + 15h]
        ; Exact mapped bytes 74 50: je 0x100740a9
        __asm _emit 0x74
        __asm _emit 0x50
        mov cl, byte ptr [esp + 14h]
        mov al, byte ptr [edi + 330h]
        cmp al, cl
        ; Exact mapped bytes 75 3B: jne 0x100740a2
        __asm _emit 0x75
        __asm _emit 0x3b
        mov esi, ebx
        mov ecx, edi
        and esi, 0ffh
        lea eax, [esi + esi*4]
        lea edx, [eax + eax*4]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 F0 73 07 00: call 0x100eb470
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [edi + 330h]
        mov ecx, dword ptr [eax + 4]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 75 0C: jne 0x100740a2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 174h]
        push esi
        ; Exact mapped bytes E8 5E 1D 05 00: call 0x100c5e00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 B0: jne 0x10074059
        __asm _emit 0x75
        __asm _emit 0xb0
        test byte ptr [ebp + 1b8h], 1
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x1007418e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ebx
        ; Exact mapped bytes E8 79 E5 FC FF: call 0x10042640
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x1007418e
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EE 80 FB FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 54 24 2A: mov dx, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2a
        mov esi, eax
        mov ecx, esi
        ; Exact mapped bytes 66 89 96 2E 03 00 00: mov word ptr [esi + 0x32e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2dh]
        and eax, 0ffh
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 66 73 07 00: call 0x100eb470
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov cl, byte ptr [esi + 330h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 96 2E 03 00 00: mov dx, word ptr [esi + 0x32e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 0ah
        add ecx, edx
        mov edx, dword ptr [eax + ecx*8 + 448h]
        lea eax, [eax + ecx*8 + 448h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 91 AB 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 11ch]
        ; Exact mapped bytes E8 56 B0 08 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        test byte ptr [ebp + 1b8h], 1
        ; Exact mapped bytes 74 3B: je 0x1007418e
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 91 E4 FC FF: call 0x100425f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x1007418e
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 0f4h]
        push ebx
        lea ecx, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes EB 16: jmp 0x10074187
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp eax, 4000009h
        ; Exact mapped bytes 75 16: jne 0x1007418e
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [esp + 0f4h]
        push 1
        lea eax, [esp + 2ch]
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 42 F6 FF FF: call 0x100737d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 0f4h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x100741ab
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 E3 85 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0f4h], ebx
        cmp dword ptr [ebp + 1fch], ebx
        ; Exact mapped bytes 0F 8F B3 FC FF FF: jg 0x10073e6a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0e8h
        ret
    }
}
