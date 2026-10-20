// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100015F0 .. +0x5CD bytes.
extern "C" __declspec(naked) void FUN_100015f0_100015F0() {
    __asm {
        push -1
        push 1016ce2bh
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
        mov eax, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea edi, [eax + 8]
        mov dword ptr [esi], 10175214h
        mov dword ptr [esi + 10h], eax
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [esi + 14h], ecx
        mov ebp, dword ptr [eax + 0b8h]
        mov ecx, esi
        mov dword ptr [esi + 18h], ebx
        ; Exact mapped bytes E8 E7 0B 00 00: call 0x10002220
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5f8ch
        ; Exact mapped bytes E8 5D B1 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 74 17: je 0x10001669
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esi + 18h]
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push edx
        push ebp
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 39 62 0E 00: call 0x100e78a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000166b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov dword ptr [esp + 28h], 0ffffffffh
        ; Exact mapped bytes E8 FE AA 02 00: call 0x1002c180
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov eax, dword ptr [eax + 0e74h]
        mov ecx, dword ptr [eax + 64h]
        mov dl, byte ptr [eax + 2]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr [edi + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        push ebx
        mov ecx, dword ptr [ecx*4 + 101ace60h]
        and dl, 1fh
        push ebx
        push edx
        push eax
        ; Exact mapped bytes E8 31 A6 02 00: call 0x1002bce0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        push esi
        ; Exact mapped bytes E8 68 FB 0E 00: call 0x100f1220
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi + 240h], ebx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 58h], ebx
        ; Exact mapped bytes 66 89 5E 28: mov word ptr [esi + 0x28], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 5E 2A: mov word ptr [esi + 0x2a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x2a
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [esi + 0d8h], ebx
        mov dword ptr [esi + 0dch], ebx
        ; Exact mapped bytes 66 89 9E E0 00 00 00: mov word ptr [esi + 0xe0], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov ebx, 1
        mov byte ptr [esi + 30h], 0
        mov dword ptr [esi + 24h], ebx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 21a4ch]
        mov ecx, dword ptr [eax + 50h]
        cmp dword ptr [ecx + 4], 0f4241h
        ; Exact mapped bytes 75 52: jne 0x10001767
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [esi + 10h]
        cmp dword ptr [edx + 0b4h], 5
        ; Exact mapped bytes 75 46: jne 0x10001767
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov edi, dword ptr [eax + 0ch]
        cmp edi, edx
        ; Exact mapped bytes 74 3A: je 0x10001769
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp edi, dword ptr [esi + 0ch]
        ; Exact mapped bytes 74 1E: je 0x10001758
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [edi + 5c54h], edx
        ; Exact mapped bytes 75 16: jne 0x10001758
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 10h]
        lea edx, [edi + 332h]
        add ecx, 0eh
        push ecx
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10001761
        __asm _emit 0x74
        __asm _emit 0x0b
        xor edx, edx
        mov edi, dword ptr [edi + 78h]
        cmp edi, edx
        ; Exact mapped bytes 75 D6: jne 0x10001735
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 08: jmp 0x10001769
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], ebx
        xor edx, edx
        lea edi, [esi + 38h]
        mov ecx, 8
        xor eax, eax
        ; Exact mapped bytes 66 89 96 E2 00 00 00: mov word ptr [esi + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 E4 00 00 00: mov word ptr [esi + 0xe4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0e8h], edx
        mov dword ptr [esi + 0ech], edx
        mov dword ptr [esi + 0f0h], edx
        mov dword ptr [esi + 34h], edx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], edx
        lea ebp, [esi + 78h]
        lea edx, [ebp - 1ch]
        mov ecx, 0dh
        xor eax, eax
        mov edi, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov edx, dword ptr [esi + 0ch]
        mov ecx, dword ptr [edx + 0e74h]
        lea edi, [edx + 29ch]
        mov ecx, dword ptr [ecx + 254h]
        mov dword ptr [esp + 18h], ecx
        mov ebx, dword ptr [esp + 18h]
        mov ecx, 1fh
        sub ecx, eax
        shr ebx, cl
        mov ecx, dword ptr [esp + 10h]
        and ebx, 1
        cmp ebx, ecx
        ; Exact mapped bytes 75 0C: jne 0x100017f5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ebx, dword ptr [edi - 80h]
        test ebx, ebx
        ; Exact mapped bytes 75 10: jne 0x10001800
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 75 18: jne 0x1000180d
        __asm _emit 0x75
        __asm _emit 0x18
        inc eax
        add edi, 4
        cmp eax, 20h
        ; Exact mapped bytes 7C D3: jl 0x100017d1
        __asm _emit 0x7c
        __asm _emit 0xd3
        ; Exact mapped bytes EB 1E: jmp 0x1000181e
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [edx + eax*4 + 21ch]
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x10001818
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [edx + eax*4 + 29ch]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [eax + 178h], ecx
        mov edx, dword ptr [esp + 2ch]
        test edx, edx
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x1000199b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + 260h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x1000199b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 82 FA 02 00 00: mov ax, word ptr [edx + 0x2fa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0f00h
        cmp eax, 100h
        ; Exact mapped bytes 75 12: jne 0x1000185d
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [esi + 0ech], 1
        ; Exact mapped bytes 66 C7 45 E4 02 00: mov word ptr [ebp - 0x1c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x1000186c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, 1
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 8B 82 16 02 00 00: mov ax, word ptr [edx + 0x216]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 4
        and eax, 7fh
        lea eax, [eax + eax*4]
        shl eax, 1
        mov dword ptr [ebp - 14h], eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 24 02 00 00: mov ax, word ptr [edx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 66 8B 91 A0 00 00 00: mov dx, word ptr [ecx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [ebp], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 9E 00 00 00: mov cx, word ptr [eax + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 4], ecx
        mov eax, dword ptr [ebp]
        imul eax, eax
        cdq
        ; Exact mapped bytes F7 3D F8 55 1C 10: idiv dword ptr [0x101c55f8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, 5
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        xor eax, eax
        mov al, byte ptr [edx + 99h]
        ; Exact mapped bytes 0F BE D0: movsx edx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd0
        mov eax, 64h
        sub eax, edx
        imul ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, 2710h
        shr ecx, 1fh
        add edx, ecx
        sub eax, edx
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp - 14h]
        test eax, eax
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x100019bc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*4]
        lea ebx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 92 AE 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xae
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebx], eax
        mov eax, dword ptr [ebp - 14h]
        add esp, 4
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 20: jle 0x1000193c
        __asm _emit 0x7e
        __asm _emit 0x20
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B2 20 00 00: call 0x100039e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        inc edi
        mov dword ptr [ecx + edi*4 - 4], eax
        mov eax, dword ptr [ebp - 14h]
        cmp edi, eax
        ; Exact mapped bytes 7C E0: jl 0x1000191c
        __asm _emit 0x7c
        __asm _emit 0xe0
        xor ecx, ecx
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, ecx
        ; Exact mapped bytes 7E 1C: jle 0x10001969
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edi, dword ptr [eax]
        mov edx, ebx
        mov edx, dword ptr [edx]
        mov edx, dword ptr [edx + ecx*4]
        cmp edx, edi
        ; Exact mapped bytes 76 07: jbe 0x10001961
        __asm _emit 0x76
        __asm _emit 0x07
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp - 14h]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C E4: jl 0x1000194d
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov edi, dword ptr [ebp - 14h]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 4A: jle 0x100019bc
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [ebx]
        lea edx, [eax + eax*8]
        mov eax, 0cccccccdh
        mul edx
        shr edx, 3
        mov eax, ebx
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 77 0A: ja 0x10001993
        __asm _emit 0x77
        __asm _emit 0x0a
        inc ecx
        add eax, 4
        cmp ecx, edi
        ; Exact mapped bytes 7C F4: jl 0x10001985
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 29: jmp 0x100019bc
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebx + ecx*4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 21: jmp 0x100019bc
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x100019bc
        __asm _emit 0x74
        __asm _emit 0x19
        add eax, 228h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100019bc
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [esi + 0f0h], 1
        ; Exact mapped bytes 66 C7 45 E4 03 00: mov word ptr [ebp - 0x1c], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add ebp, 34h
        inc eax
        cmp eax, 2
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C D6 FD FF FF: jl 0x100017a7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0ch]
        mov ecx, dword ptr [edx + 0e74h]
        mov al, byte ptr [ecx + 2]
        and al, 1fh
        cmp al, 8
        ; Exact mapped bytes 75 0B: jne 0x100019ee
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 86 E4 00 00 00 01 00: mov word ptr [esi + 0xe4], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x10001a51
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 66 8B 8E 90 00 00 00: mov cx, word ptr [esi + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 1E: jne 0x10001a19
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 10h]
        mov eax, dword ptr [eax + 0b4h]
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x10001a0e
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x10001a19
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 86 E4 00 00 00 02 00: mov word ptr [esi + 0xe4], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x10001a51
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 66 8B 46 5C: mov ax, word ptr [esi + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 10: jne 0x10001a32
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 0B: jne 0x10001a32
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 C7 86 E4 00 00 00 03 00: mov word ptr [esi + 0xe4], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x10001a51
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x10001a3d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 14: jne 0x10001a51
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 74 05: je 0x10001a48
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 09: jne 0x10001a51
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 86 E4 00 00 00 04 00: mov word ptr [esi + 0xe4], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [esi + 0f4h], 0
        mov ecx, dword ptr [edx + 0e74h]
        xor ebx, ebx
        xor eax, eax
        mov dl, byte ptr [ecx + 0eh]
        mov dword ptr [esi + 23ch], ebx
        mov byte ptr [esi + 238h], dl
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        lea edi, [esi + 0f8h]
        mov dword ptr [esi + 0cch], eax
        mov ecx, 50h
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 10h]
        cmp dword ptr [ecx + 0c8h], ebx
        ; Exact mapped bytes 0F 86 01 01 00 00: jbe 0x10001ba6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov edx, dword ptr [esi + 18h]
        mov eax, dword ptr [edi + edx]
        and eax, 0f000h
        cmp eax, 0b000h
        ; Exact mapped bytes 0F 82 D6 00 00 00: jb 0x10001b93
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0f000h
        ; Exact mapped bytes 0F 87 CB 00 00 00: ja 0x10001b93
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 0d64h
        mov eax, dword ptr [esi + 0ch]
        mov eax, dword ptr [eax + ebp]
        test eax, eax
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x10001b84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov dl, cl
        ; Exact mapped bytes 66 89 4C 24 2C: mov word ptr [esp + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
        and dl, 0fh
        cmp dl, 0dh
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x10001b84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 BF 36 02 00: call 0x100251c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x10001b84
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 66 8B 80 98 00 00 00: mov ax, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x10001b18
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 6C: jne 0x10001b84
        __asm _emit 0x75
        __asm _emit 0x6c
        mov ecx, dword ptr [esi + 18h]
        and eax, 0ffffh
        mov edx, dword ptr [edi + ecx]
        shr edx, 0ch
        and edx, 0fh
        sub edx, 0ah
        cmp eax, edx
        ; Exact mapped bytes 75 54: jne 0x10001b84
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 8B 4C 28 82: mov cx, word ptr [eax + ebp - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x82
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 76 45: jbe 0x10001b84
        __asm _emit 0x76
        __asm _emit 0x45
        xor eax, eax
        mov al, byte ptr [esi + 0f4h]
        lea edx, [eax + eax*4]
        mov dword ptr [esi + edx*4 + 0f8h], 1
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [edi + eax]
        xor eax, eax
        mov al, byte ptr [esi + 0f4h]
        shr ecx, 0ch
        and cl, 0fh
        lea edx, [eax + eax*4]
        sub cl, 0ah
        mov byte ptr [esi + edx*4 + 0fch], cl
        mov al, byte ptr [esi + 0f4h]
        inc al
        mov byte ptr [esi + 0f4h], al
        add ebp, 4
        cmp ebp, 0d74h
        ; Exact mapped bytes 0F 8C 3A FF FF FF: jl 0x10001acd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 10h]
        inc ebx
        add edi, 1ch
        cmp ebx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 0F 82 01 FF FF FF: jb 0x10001aa7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
