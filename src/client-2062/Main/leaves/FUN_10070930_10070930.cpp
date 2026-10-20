// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10070930 .. +0x6CD bytes.
extern "C" __declspec(naked) void FUN_10070930_10070930() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 6a4h
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea ecx, [esp + 34h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 0
        push 101a7c9ch
        ; Exact mapped bytes FF 15 FC 50 17 10: call dword ptr [0x101750fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 34h]
        push edx
        push 101a7c9ch
        lea eax, [esp + 23ch]
        push 101ab844h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        lea ecx, [esp + 234h]
        push 0
        push 80h
        push 1
        push 0
        push 0
        push 40000000h
        push ecx
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        mov dword ptr [ebp + 21a3ch], eax
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x10070a8f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D A8 50 17 10: mov ebx, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 34h]
        push edx
        xor esi, esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp eax, 5
        ; Exact mapped bytes 0F 8E 84 00 00 00: jle 0x10070a46
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 34h]
        mov dword ptr [esp + 14h], esi
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dl, byte ptr [esp + eax + 2fh]
        lea ecx, [esp + eax + 2fh]
        cmp dl, 5fh
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 75 68: jne 0x10070a46
        __asm _emit 0x75
        __asm _emit 0x68
        lea ecx, [eax - 4]
        cmp ecx, eax
        ; Exact mapped bytes 7D 38: jge 0x10070a1d
        __asm _emit 0x7d
        __asm _emit 0x38
        lea ebx, [esp + 134h]
        sub ebx, ecx
        mov dl, byte ptr [esp + ecx + 34h]
        cmp dl, 30h
        ; Exact mapped bytes 7C 18: jl 0x10070a0f
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dl, 39h
        ; Exact mapped bytes 7F 13: jg 0x10070a0f
        __asm _emit 0x7f
        __asm _emit 0x13
        mov byte ptr [ebx + ecx], dl
        mov edx, dword ptr [esp + 14h]
        inc edx
        inc ecx
        cmp ecx, eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 7C E1: jl 0x100709ee
        __asm _emit 0x7c
        __asm _emit 0xe1
        ; Exact mapped bytes EB 0C: jmp 0x10070a1b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 14h]
        mov byte ptr [esp + edx + 134h], 0
        cmp ecx, eax
        ; Exact mapped bytes 75 27: jne 0x10070a46
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 14h]
        lea edx, [esp + 134h]
        push edx
        mov byte ptr [eax], 0
        mov byte ptr [esp + ecx + 138h], 0
        ; Exact mapped bytes FF 15 48 51 17 10: call dword ptr [0x10175148]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, eax
        add esp, 4
        inc esi
        lea eax, [esp + 34h]
        push esi
        push eax
        push 101a7c9ch
        lea ecx, [esp + 240h]
        push 101ab834h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 14h
        lea edx, [esp + 234h]
        push 0
        push 80h
        push 1
        push 0
        push 0
        push 40000000h
        push edx
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc esi
        cmp eax, -1
        mov dword ptr [ebp + 21a3ch], eax
        ; Exact mapped bytes 74 B7: je 0x10070a46
        __asm _emit 0x74
        __asm _emit 0xb7
        cmp dword ptr [ebp + 21a3ch], -1
        ; Exact mapped bytes 0F 84 54 05 00 00: je 0x10070ff0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [ebp + 2176ch]
        push 101ab818h
        push ebx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dl, byte ptr [ebp + 1055ah]
        ; Exact mapped bytes 66 C7 85 9C 17 02 00 01 00: mov word ptr [ebp + 0x2179c], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 9E 17 02 00 00 00: mov word ptr [ebp + 0x2179e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 8C 7C 1A 10: mov ax, word ptr [0x101a7c8c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 85 A0 17 02 00: mov word ptr [ebp + 0x217a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0D 90 7C 1A 10: mov cx, word ptr [0x101a7c90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        and edx, 0fh
        ; Exact mapped bytes 66 89 8D A2 17 02 00: mov word ptr [ebp + 0x217a2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp + 217b0h], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CB B6 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp + 217b4h], eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF 15 F8 50 17 10: call dword ptr [0x101750f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov al, byte ptr [esp + 2eh]
        mov esi, dword ptr [esp + 24h]
        mov cl, byte ptr [esp + 26h]
        mov dl, byte ptr [esp + 2ah]
        mov byte ptr [ebp + 217a9h], al
        mov al, byte ptr [esp + 30h]
        mov byte ptr [ebp + 217aah], al
        mov al, byte ptr [esp + 2ch]
        add al, 9
        ; Exact mapped bytes 66 89 B5 A4 17 02 00: mov word ptr [ebp + 0x217a4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        cmp al, 18h
        mov byte ptr [ebp + 217a6h], cl
        mov byte ptr [ebp + 217a7h], dl
        ; Exact mapped bytes 66 C7 85 AC 17 02 00 00 00: mov word ptr [ebp + 0x217ac], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 217a8h], al
        ; Exact mapped bytes 76 10: jbe 0x10070b62
        __asm _emit 0x76
        __asm _emit 0x10
        inc dl
        sub al, 18h
        mov byte ptr [ebp + 217a7h], dl
        mov byte ptr [ebp + 217a8h], al
        mov al, byte ptr [ebp + 217a7h]
        cmp al, 1ch
        ; Exact mapped bytes 76 27: jbe 0x10070b93
        __asm _emit 0x76
        __asm _emit 0x27
        cmp cl, 2
        ; Exact mapped bytes 75 22: jne 0x10070b93
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, esi
        and edx, 0ffffh
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10070b86
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        ; Exact mapped bytes 74 0B: je 0x10070b93
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [ebp + 217a6h], 3
        sub al, 1ch
        ; Exact mapped bytes EB 5D: jmp 0x10070bf0
        __asm _emit 0xeb
        __asm _emit 0x5d
        cmp al, 1dh
        ; Exact mapped bytes 76 27: jbe 0x10070bbe
        __asm _emit 0x76
        __asm _emit 0x27
        cmp cl, 2
        ; Exact mapped bytes 75 22: jne 0x10070bbe
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, esi
        and edx, 0ffffh
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10070bb1
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        ; Exact mapped bytes 75 0B: jne 0x10070bbe
        __asm _emit 0x75
        __asm _emit 0x0b
        mov byte ptr [ebp + 217a6h], 3
        sub al, 1dh
        ; Exact mapped bytes EB 32: jmp 0x10070bf0
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp al, 1eh
        ; Exact mapped bytes 76 20: jbe 0x10070be2
        __asm _emit 0x76
        __asm _emit 0x20
        cmp cl, 4
        ; Exact mapped bytes 74 0F: je 0x10070bd6
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp cl, 6
        ; Exact mapped bytes 74 0A: je 0x10070bd6
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 9
        ; Exact mapped bytes 74 05: je 0x10070bd6
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 0bh
        ; Exact mapped bytes 75 0C: jne 0x10070be2
        __asm _emit 0x75
        __asm _emit 0x0c
        inc cl
        sub al, 1eh
        mov byte ptr [ebp + 217a6h], cl
        ; Exact mapped bytes EB 0E: jmp 0x10070bf0
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp al, 1fh
        ; Exact mapped bytes 76 10: jbe 0x10070bf6
        __asm _emit 0x76
        __asm _emit 0x10
        inc cl
        sub al, 1fh
        mov byte ptr [ebp + 217a6h], cl
        mov byte ptr [ebp + 217a7h], al
        mov al, byte ptr [ebp + 217a6h]
        cmp al, 0ch
        ; Exact mapped bytes 76 10: jbe 0x10070c10
        __asm _emit 0x76
        __asm _emit 0x10
        inc esi
        sub al, 0ch
        ; Exact mapped bytes 66 89 B5 A4 17 02 00: mov word ptr [ebp + 0x217a4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp + 217a6h], al
        lea edi, [ebp + 217b8h]
        mov ecx, 77h
        mov esi, 101c5428h
        lea eax, [esp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea esi, [ebp + 10528h]
        lea edi, [ebp + 21994h]
        mov ecx, 1ch
        push 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 21a3ch]
        ; Exact mapped bytes 8B 3D A4 50 17 10: mov edi, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 2c8h
        push ebx
        push ecx
        mov dword ptr [ebp + 21a30h], 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [edx + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 84 03 00 00: je 0x10070ff0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 21a3ch]
        lea eax, [esp + 10h]
        push 0
        push eax
        lea ecx, [ebx + 32ch]
        push 0ach
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebx + 370h]
        test al, 3eh
        ; Exact mapped bytes 74 22: je 0x10070cb4
        __asm _emit 0x74
        __asm _emit 0x22
        shr eax, 1
        and eax, 1fh
        lea ecx, [esp + 10h]
        push 0
        push ecx
        mov ecx, dword ptr [ebp + 21a3ch]
        lea edx, [eax + eax*4]
        mov eax, dword ptr [ebx + 3d8h]
        shl edx, 1
        push edx
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov cl, byte ptr [ebx + 3d0h]
        test cl, cl
        mov byte ptr [esp + 20h], cl
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x10070d69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 334h]
        xor edx, edx
        mov dword ptr [esp + 14h], eax
        lea eax, [ebx + 3dch]
        mov dword ptr [esp + 18h], 20h
        mov esi, dword ptr [eax]
        and esi, 0fe0h
        cmp esi, 540h
        ; Exact mapped bytes 74 23: je 0x10070d14
        __asm _emit 0x74
        __asm _emit 0x23
        mov edi, dword ptr [esp + 14h]
        mov ecx, 7
        mov esi, eax
        inc edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 3D A4 50 17 10: mov edi, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        add ecx, 1ch
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 18h]
        add eax, 1ch
        dec esi
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 75 BF: jne 0x10070ce1
        __asm _emit 0x75
        __asm _emit 0xbf
        and ecx, 0ffh
        push 0
        cmp ecx, edx
        ; Exact mapped bytes 75 25: jne 0x10070d53
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [edx*8]
        lea ecx, [esp + 14h]
        sub eax, edx
        mov edx, dword ptr [ebp + 21a3ch]
        push ecx
        lea ecx, [esp + 33ch]
        shl eax, 2
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 16: jmp 0x10070d69
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1017f3bch
        push 101ab810h
        push eax
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [ebx + 0e74h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 368h
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx + 0e78h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 0ceh
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx + 0e7ch]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 0ach
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [ebx + 0e80h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 0a4h
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 BB A2 03 00 00 00: cmp word ptr [ebx + 0x3a2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x10070dff
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebx + 0e84h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 9ch
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 BB A4 03 00 00 00: cmp word ptr [ebx + 0x3a4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x10070e25
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebx + 0e88h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 9ch
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 BB A6 03 00 00 00: cmp word ptr [ebx + 0x3a6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x10070e4b
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebx + 0e8ch]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 9ch
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 BB A8 03 00 00 00: cmp word ptr [ebx + 0x3a8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x10070e71
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebx + 0e90h]
        mov eax, dword ptr [ebp + 21a3ch]
        lea ecx, [esp + 10h]
        push 0
        push ecx
        push 9ch
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebx + 370h]
        mov dword ptr [esp + 18h], 0
        and ecx, 3eh
        test cl, cl
        ; Exact mapped bytes 0F 86 5B 01 00 00: jbe 0x10070fe5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [esp + 1ch], esi
        add esi, dword ptr [ebx + 3d8h]
        mov al, byte ptr [esi]
        and eax, 0fh
        sub eax, 5
        ; Exact mapped bytes 74 48: je 0x10070ee8
        __asm _emit 0x74
        __asm _emit 0x48
        dec eax
        ; Exact mapped bytes 74 27: je 0x10070eca
        __asm _emit 0x74
        __asm _emit 0x27
        sub eax, 7
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x10070fbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        lea ecx, [esp + 10h]
        mov dl, byte ptr [esi + 8]
        push 0
        push ecx
        push 0d4h
        mov eax, dword ptr [ebx + edx*4 + 0cf4h]
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes EB 3A: jmp 0x10070f04
        __asm _emit 0xeb
        __asm _emit 0x3a
        xor eax, eax
        lea ecx, [esp + 10h]
        mov al, byte ptr [esi + 8]
        push 0
        push ecx
        push 0a8h
        mov eax, dword ptr [ebx + eax*4 + 0cf4h]
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes EB 1C: jmp 0x10070f04
        __asm _emit 0xeb
        __asm _emit 0x1c
        xor eax, eax
        lea ecx, [esp + 10h]
        mov al, byte ptr [esi + 8]
        push 0
        push ecx
        push 0b4h
        mov eax, dword ptr [ebx + eax*4 + 0cf4h]
        mov dword ptr [esp + 20h], eax
        mov edx, dword ptr [ebp + 21a3ch]
        push eax
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x10070fbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 2]
        and eax, 0fh
        sub eax, 0bh
        ; Exact mapped bytes 74 25: je 0x10070f4a
        __asm _emit 0x74
        __asm _emit 0x25
        dec eax
        ; Exact mapped bytes 75 44: jne 0x10070f6c
        __asm _emit 0x75
        __asm _emit 0x44
        xor ecx, ecx
        lea eax, [esp + 10h]
        mov cl, byte ptr [esi + 8]
        push 0
        push eax
        mov eax, dword ptr [ebp + 21a3ch]
        mov edx, dword ptr [ebx + ecx*8 + 0d74h]
        push 0b4h
        push edx
        push eax
        ; Exact mapped bytes EB 20: jmp 0x10070f6a
        __asm _emit 0xeb
        __asm _emit 0x20
        xor edx, edx
        lea ecx, [esp + 10h]
        mov dl, byte ptr [esi + 8]
        push 0
        push ecx
        mov ecx, dword ptr [ebp + 21a3ch]
        mov eax, dword ptr [ebx + edx*8 + 0d74h]
        push 0ach
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov al, byte ptr [esi + 4]
        and eax, 0fh
        sub eax, 0bh
        ; Exact mapped bytes 74 25: je 0x10070f9c
        __asm _emit 0x74
        __asm _emit 0x25
        dec eax
        ; Exact mapped bytes 75 44: jne 0x10070fbe
        __asm _emit 0x75
        __asm _emit 0x44
        xor eax, eax
        lea edx, [esp + 10h]
        mov al, byte ptr [esi + 8]
        push 0
        push edx
        mov edx, dword ptr [ebp + 21a3ch]
        mov ecx, dword ptr [ebx + eax*8 + 0d78h]
        push 0b4h
        push ecx
        push edx
        ; Exact mapped bytes EB 20: jmp 0x10070fbc
        __asm _emit 0xeb
        __asm _emit 0x20
        xor ecx, ecx
        lea eax, [esp + 10h]
        mov cl, byte ptr [esi + 8]
        push 0
        push eax
        mov eax, dword ptr [ebp + 21a3ch]
        mov edx, dword ptr [ebx + ecx*8 + 0d78h]
        push 0ach
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebx + 370h]
        mov eax, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 1ch]
        inc eax
        shr ecx, 1
        and ecx, 1fh
        add esi, 0ah
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 0F 82 AB FE FF FF: jb 0x10070e90
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 78h]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 7C FC FF FF: jne 0x10070c6c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 6a4h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
