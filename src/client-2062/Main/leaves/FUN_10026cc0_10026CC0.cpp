// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10026CC0 .. +0xC12 bytes.
extern "C" __declspec(naked) void FUN_10026cc0_10026CC0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 41ch]
        xor eax, 0fffffaafh
        shr eax, 4
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 3E 8A 0D 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        xor ebp, ebp
        mov ebx, 0fffeh
        mov edi, 4
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes A1 6C 59 1C 10: mov eax, dword ptr [0x101c596c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 5D 09 00 00: je 0x10027662
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, ecx
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x10026ddd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f0h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f4h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 11: jle 0x10026d67
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x10026d67
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 80h
        ; Exact mapped bytes EB 02: jmp 0x10026d69
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10026d9e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 B2 83 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        lea ecx, [esi + 424h]
        mov edx, 3
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, edi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10026dcd
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x10026ea4
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a8h
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x10026eef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f0h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f4h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10026e33
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x10026e33
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x10026e35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10026e6a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 E6 82 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        lea ecx, [esi + 424h]
        mov edx, 3
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, edi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10026e99
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, dword ptr [esi + 408h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 410h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 400h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 414h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 418h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 A9 07 00 00: jmp 0x10027698
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a4h
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x10027019
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f0h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f4h]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes A1 20 58 1C 10: mov eax, dword ptr [0x101c5820]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 0A: jle 0x10026f35
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 75 02: jne 0x10026f37
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10026f6c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3e0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 E4 81 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes A1 20 58 1C 10: mov eax, dword ptr [0x101c5820]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10026fa3
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x10026fa3
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x10026fa5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10026fda
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 76 81 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        lea ecx, [esi + 424h]
        mov edx, 3
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, edi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10027009
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x1002713e
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a6h
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x10027166
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f0h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f4h]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes A1 24 58 1C 10: mov eax, dword ptr [0x101c5824]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 0A: jle 0x1002705f
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 75 02: jne 0x10027061
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10027096
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3e0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 BA 80 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes A1 24 58 1C 10: mov eax, dword ptr [0x101c5824]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100270cd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100270cd
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x100270cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10027104
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 4C 80 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        lea ecx, [esi + 424h]
        mov edx, 3
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 41ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, edi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F5: jne 0x10027133
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, dword ptr [esi + 408h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 400h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 32 05 00 00: jmp 0x10027698
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D D6 01 00 00: jge 0x10027368
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 25ah
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100271b8
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100271b8
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100271b8
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100271ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e8h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100271ef
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 2a5h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x10027240
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10027240
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x10027240
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10027242
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10027277
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 2f0h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100272c8
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100272c8
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100272c8
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100272ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100272ff
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 33bh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x10027350
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10027350
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x10027350
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10027352
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f4h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x10027555
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x1002752d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, -19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x1002738c
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x1002738c
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x1002738c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1002738e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e8h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100273c3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 19h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x10027412
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10027412
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x10027412
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10027414
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ech]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10027449
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 4bh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x10027498
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10027498
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x10027498
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1002749a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100274cf
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        add eax, 7dh
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x1002751e
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp eax, ebp
        ; Exact mapped bytes 7C 0F: jl 0x1002751e
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x1002751e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10027520
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f4h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10027555
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181750h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x100275a3
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x100275a3
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x100275a3
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100275a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100275da
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181750h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10027629
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x10027629
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x10027629
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1002762b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 60: je 0x10027698
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 36: jmp 0x10027698
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [esi + 3dch]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + 3e0h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + 3e8h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f0h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 3f4h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        ; Exact mapped bytes 74 1F: je 0x100276bf
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 3e4h]
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [esi + 3e4h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 3f8h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 19: jmp 0x100276d8
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [esi + 3e4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3f8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0ach]
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, dword ptr [esi + 434h]
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        push edx
        push eax
        ; Exact mapped bytes E8 54 2C 00 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 4E 7A: mov cx, word ptr [esi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7a
        ; Exact mapped bytes 66 8B 56 58: mov dx, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x58
        lea edi, [esi + 424h]
        xor ecx, 0aah
        xor edx, 0aah
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 2D 2C 00 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 4E 5A: mov cx, word ptr [esi + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5a
        ; Exact mapped bytes 66 8B 56 58: mov dx, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x58
        xor eax, eax
        xor ecx, 0aah
        ; Exact mapped bytes 66 8B 46 7A: mov ax, word ptr [esi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7a
        xor edx, 0aah
        xor eax, 0aah
        add ecx, edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 428h]
        ; Exact mapped bytes E8 FB 2B 00 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 46 7A: mov ax, word ptr [esi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7a
        ; Exact mapped bytes 66 8B 4E 5C: mov cx, word ptr [esi + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5c
        xor eax, 0aah
        xor edx, edx
        ; Exact mapped bytes 66 8B 56 5A: mov dx, word ptr [esi + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x5a
        push eax
        xor eax, eax
        xor ecx, 0aah
        ; Exact mapped bytes 66 8B 46 58: mov ax, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        xor edx, 0aah
        add ecx, edx
        xor eax, 0aah
        add ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 42ch]
        ; Exact mapped bytes E8 BC 2B 00 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 438h]
        lea ecx, [esi + 0fch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 0C: je 0x100277b3
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100277b3
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0a4h]
        and ecx, 0fffffffeh
        cmp ecx, 0a0h
        ; Exact mapped bytes 73 11: jae 0x100277d5
        __asm _emit 0x73
        __asm _emit 0x11
        mov eax, dword ptr [esi + 408h]
        mov edx, 0fh
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 2C: jmp 0x10027801
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [esi + 434h]
        mov ecx, edi
        mov edx, 3
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100277e6
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 41ch]
        mov edx, 0fh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x100278aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 60h], 0fh
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x100278aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 26h
        ; Exact mapped bytes 7E 30: jle 0x10027864
        __asm _emit 0x7e
        __asm _emit 0x30
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 26: je 0x10027864
        __asm _emit 0x74
        __asm _emit 0x26
        add eax, 980h
        ; Exact mapped bytes EB 21: jmp 0x10027866
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 11: jle 0x10027864
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x10027864
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10027866
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 40ch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002789b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov esi, dword ptr [esi + 40ch]
        pop edi
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        ret
        mov eax, dword ptr [esi + 0a4h]
        test al, 1
        ; Exact mapped bytes 75 91: jne 0x10027845
        __asm _emit 0x75
        __asm _emit 0x91
        and al, 0feh
        cmp eax, 2
        ; Exact mapped bytes 75 06: jne 0x100278c1
        __asm _emit 0x75
        __asm _emit 0x06
        test byte ptr [esi + 60h], 0fh
        ; Exact mapped bytes 74 84: je 0x10027845
        __asm _emit 0x74
        __asm _emit 0x84
        mov esi, dword ptr [esi + 40ch]
        pop edi
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
