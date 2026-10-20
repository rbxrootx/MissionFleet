// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004CC0 .. +0x43A bytes.
extern "C" __declspec(naked) void FUN_10004cc0_10004CC0() {
    __asm {
        sub esp, 60h
        ; Exact mapped bytes 66 83 79 28 06: cmp word ptr [ecx + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x06
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 75 0F: jne 0x10004ce1
        __asm _emit 0x75
        __asm _emit 0x0f
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 1ch], 0
        pop ebx
        add esp, 60h
        ret
        mov ecx, dword ptr [ecx + 1ch]
        xor ebp, ebp
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x10004cf7
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes E8 E1 98 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 60h
        ret
        mov esi, dword ptr [esp + 10h]
        xor ebx, ebx
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 3ch], ebp
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [esi + 1ch], ebp
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 44h], ebx
        mov dword ptr [esp + 48h], ebp
        mov ecx, dword ptr [eax + 21a4ch]
        mov eax, dword ptr [edx + 0f34h]
        push eax
        mov dword ptr [esp + 50h], ebp
        mov dword ptr [esp + 54h], ebp
        mov dword ptr [esp + 58h], ebp
        mov dword ptr [esp + 5ch], ebp
        mov dword ptr [esp + 60h], ebp
        mov dword ptr [esp + 64h], ebp
        mov dword ptr [esp + 68h], ebp
        mov dword ptr [esp + 6ch], ebp
        mov dword ptr [esp + 70h], ebp
        ; Exact mapped bytes E8 CE F5 01 00: call 0x10024320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [ecx + 0f38h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 5D C8 FF FF: call 0x100015c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov esi, dword ptr [edi + 0ch]
        mov eax, dword ptr [edi + 10h]
        cmp esi, eax
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x10004e30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 53 98 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x10004e1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 10h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x10004e1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 80 E4 00 00 00: mov ax, word ptr [eax + 0xe4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 0e74h]
        mov cl, byte ptr [ecx + 2]
        and ecx, 1fh
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x10004e48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x10004dc8
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [esp + 40h], ebp
        ; Exact mapped bytes 75 5C: jne 0x10004e1e
        __asm _emit 0x75
        __asm _emit 0x5c
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes EB 56: jmp 0x10004e1e
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 66 83 F9 07: cmp cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 74 4A: je 0x10004e18
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 44: je 0x10004e18
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 32: je 0x10004e0c
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 2C: je 0x10004e0c
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x10004e00
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 B8 E4 00 00 00 04: cmp word ptr [eax + 0xe4], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 0C: je 0x10004e00
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [esp + 4ch], ebp
        ; Exact mapped bytes 75 24: jne 0x10004e1e
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [esp + 4ch], edx
        ; Exact mapped bytes EB 1E: jmp 0x10004e1e
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [esp + 50h], ebp
        ; Exact mapped bytes 75 18: jne 0x10004e1e
        __asm _emit 0x75
        __asm _emit 0x18
        mov dword ptr [esp + 50h], edx
        ; Exact mapped bytes EB 12: jmp 0x10004e1e
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [esp + 48h], ebp
        ; Exact mapped bytes 75 0C: jne 0x10004e1e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esp + 48h], edx
        ; Exact mapped bytes EB 06: jmp 0x10004e1e
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp ebx, ebp
        ; Exact mapped bytes 75 02: jne 0x10004e1e
        __asm _emit 0x75
        __asm _emit 0x02
        mov ebx, edx
        mov eax, dword ptr [edi + 10h]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x10004d73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 44h], ebx
        mov eax, 2
        lea ecx, [esp + 40h]
        cmp dword ptr [ecx], ebp
        ; Exact mapped bytes 75 23: jne 0x10004e60
        __asm _emit 0x75
        __asm _emit 0x23
        inc eax
        add ecx, 4
        cmp eax, 7
        ; Exact mapped bytes 7C F3: jl 0x10004e39
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes EB 2B: jmp 0x10004e73
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [esp + 3ch], ebx
        pop ebp
        mov dword ptr [eax + 1ch], edx
        pop ebx
        add esp, 60h
        ret
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + eax*4 + 38h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 1ch], ecx
        pop ebx
        add esp, 60h
        ret
        mov ebx, dword ptr [esp + 10h]
        xor ecx, ecx
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 1ch], ebp
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 28h], ebp
        mov cl, byte ptr [eax + 330h]
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + ecx*4 + 18h], 2
        xor esi, esi
        lea edi, [esp + 18h]
        mov eax, dword ptr [ebx + 0ch]
        xor edx, edx
        mov dl, byte ptr [eax + 330h]
        cmp esi, edx
        ; Exact mapped bytes 74 1A: je 0x10004ed9
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push esi
        mov ecx, dword ptr [ecx + 21a4ch]
        ; Exact mapped bytes E8 9E F0 01 00: call 0x10023f70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x10004ed9
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [edi], eax
        inc esi
        add edi, 4
        cmp esi, 8
        ; Exact mapped bytes 7C CE: jl 0x10004eb0
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [edx + 0ch]
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x10004fe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D6 96 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x96
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x10004fdd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [ebx + 0ch]
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x10004fdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov al, byte ptr [esi + 330h]
        mov ecx, dword ptr [esp + eax*4 + 18h]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 8E BB 00 00 00: jle 0x10004fdd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0e74h]
        or edi, 0ffffffffh
        mov eax, 7
        mov dl, byte ptr [edx + 2]
        and edx, 1fh
        cmp ecx, 2
        ; Exact mapped bytes 75 02: jne 0x10004f3d
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        cmp dword ptr [esi + 5c54h], ebp
        ; Exact mapped bytes 74 22: je 0x10004f67
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 0F BF B9 E4 00 00 00: movsx edi, word ptr [ecx + 0xe4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, -1
        ; Exact mapped bytes 74 13: je 0x10004f67
        __asm _emit 0x74
        __asm _emit 0x13
        cmp edi, 3
        ; Exact mapped bytes 75 0E: jne 0x10004f67
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + eax*4 + 38h]
        lea eax, [esp + eax*4 + 38h]
        cmp ecx, ebp
        ; Exact mapped bytes 75 78: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes EB 74: jmp 0x10004fdb
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp dword ptr [esi + 5c9ch], ebp
        ; Exact mapped bytes 74 0E: je 0x10004f7d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + eax*4 + 3ch]
        lea eax, [esp + eax*4 + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 62: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes EB 5E: jmp 0x10004fdb
        __asm _emit 0xeb
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 FA 08: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 75 0E: jne 0x10004f91
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + eax*4 + 40h]
        lea eax, [esp + eax*4 + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 75 4E: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes EB 4A: jmp 0x10004fdb
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 83 FA 07: cmp dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x07
        ; Exact mapped bytes 74 38: je 0x10004fcf
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 FA 06: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 74 32: je 0x10004fcf
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 FA 04: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 74 1E: je 0x10004fc1
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 74 18: je 0x10004fc1
        __asm _emit 0x74
        __asm _emit 0x18
        cmp edi, -1
        ; Exact mapped bytes 74 2F: je 0x10004fdd
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp edi, 4
        ; Exact mapped bytes 75 2A: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + eax*4 + 4ch]
        lea eax, [esp + eax*4 + 4ch]
        cmp ecx, ebp
        ; Exact mapped bytes 75 1E: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes EB 1A: jmp 0x10004fdb
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + eax*4 + 48h]
        lea eax, [esp + eax*4 + 48h]
        cmp ecx, ebp
        ; Exact mapped bytes 75 10: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes EB 0C: jmp 0x10004fdb
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + eax*4 + 44h]
        lea eax, [esp + eax*4 + 44h]
        cmp ecx, ebp
        ; Exact mapped bytes 75 02: jne 0x10004fdd
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [eax], esi
        mov esi, dword ptr [esi + 78h]
        cmp esi, ebp
        ; Exact mapped bytes 0F 85 0B FF FF FF: jne 0x10004ef3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 38h]
        cmp dword ptr [ecx], ebp
        ; Exact mapped bytes 75 3C: jne 0x1000502e
        __asm _emit 0x75
        __asm _emit 0x3c
        inc eax
        add ecx, 4
        cmp eax, 0eh
        ; Exact mapped bytes 7C F3: jl 0x10004fee
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes 66 83 BB E4 00 00 00 04: cmp word ptr [ebx + 0xe4], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x100050e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 C7 40 28 06 00: mov word ptr [eax + 0x28], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 3200h
        mov dword ptr [esp + 14h], esi
        mov ebx, dword ptr [esi + 4]
        sub eax, ebx
        cmp ebx, eax
        ; Exact mapped bytes 7D 15: jge 0x1000503d
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, ebx
        xor edx, edx
        ; Exact mapped bytes EB 16: jmp 0x10005044
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [esp + eax*4 + 38h]
        pop edi
        pop esi
        mov dword ptr [ebx + 1ch], edx
        pop ebp
        pop ebx
        add esp, 60h
        ret
        mov ecx, eax
        mov edx, 1
        mov edi, dword ptr [esi + 8]
        mov eax, 1900h
        sub eax, edi
        cmp edi, eax
        ; Exact mapped bytes 7D 06: jge 0x10005058
        __asm _emit 0x7d
        __asm _emit 0x06
        mov esi, edi
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x10005064
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 3200h
        mov eax, 1
        sub esi, edi
        cmp ecx, esi
        ; Exact mapped bytes 7E 12: jle 0x1000507a
        __asm _emit 0x7e
        __asm _emit 0x12
        neg eax
        sbb eax, eax
        mov edx, ebx
        and eax, 1a90h
        add eax, 0ffffff38h
        ; Exact mapped bytes EB 12: jmp 0x1000508c
        __asm _emit 0xeb
        __asm _emit 0x12
        neg edx
        sbb edx, edx
        mov eax, edi
        and edx, 3390h
        add edx, 0ffffff38h
        cmp edx, 64h
        ; Exact mapped bytes 7D 07: jge 0x10005098
        __asm _emit 0x7d
        __asm _emit 0x07
        mov edx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x100050a5
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x100050a5
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x100050b1
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x100050bd
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x100050bd
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and edx, 7fffh
        lea ecx, [esp + 10h]
        or eax, edx
        push ecx
        mov ecx, dword ptr [esp + 18h]
        shl eax, 2
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 E3 60 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 60h
        ret
        mov edx, dword ptr [ebx + 10h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 0b4h], 2
        pop ebx
        add esp, 60h
        ret
    }
}
