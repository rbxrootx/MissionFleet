// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E4B00 .. +0x393 bytes.
extern "C" __declspec(naked) void FUN_586e4b00_586E4B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 6C 03 00 00: je 0x586e4e90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 35: jne 0x586e4b70
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes E9 96 02 00 00: jmp 0x586e4e06
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x586e4c32
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 588h]
        ; Exact mapped bytes E8 97 0B DB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 4A: jne 0x586e4be8
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 0D DB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 35: jne 0x586e4c2d
        __asm _emit 0x75
        __asm _emit 0x35
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e4c0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 7D 1D: jge 0x586e4c2d
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5a0h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B6 12 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e4c01
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 D4 01 00 00: jmp 0x586e4e06
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 B9 01 00 00: jne 0x586e4e06
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 1D DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x586e4e06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 1D DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E FD D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 1D DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 1D DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 1D DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 0A DB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 1D DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 73 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 20h], esi
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        cdq
        idiv dword ptr [ecx + 578h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        cdq
        idiv dword ptr [ecx + 57ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 74h]
        imul edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 78h]
        imul eax, dword ptr [ecx + 78h]
        add edx, eax
        mov ecx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 7E 0C: jle 0x586e4d0f
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        ; Exact mapped bytes EB 0A: jmp 0x586e4d19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 580h]
        mov ecx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 4d8h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 584h]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4dch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e4d76
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 45: jge 0x586e4dc1
        __asm _emit 0x7d
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 0ach]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 7ch]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 84h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 0b0h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 80h]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*8 + 88h], ecx
        ; Exact mapped bytes EB AC: jmp 0x586e4d6d
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 0B DB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 35: jne 0x586e4e06
        __asm _emit 0x75
        __asm _emit 0x35
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e4de3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 1D: jge 0x586e4e06
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5a0h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DD 10 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e4dda
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586e4e27
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586e4e27
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x586e4e90
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586e4e4a
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x586e4e30
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE 07 DB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586e4e6e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x586e4e90
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x586e4e8e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9A 07 DB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A0: jmp 0x586e4e30
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop esi
        mov esp, ebp
    }
}
