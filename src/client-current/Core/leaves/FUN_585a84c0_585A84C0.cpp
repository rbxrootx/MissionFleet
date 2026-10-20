// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A84C0 .. +0x3B8 bytes.
extern "C" __declspec(naked) void FUN_585a84c0_585A84C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 09 C5 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 EC C4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 D3 C4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc4
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 24h], 6
        ; Exact mapped bytes 75 06: jne 0x585a852f
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 28h], 78h
        ; Exact mapped bytes 72 0A: jb 0x585a8539
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 3B 03 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 95 C4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 5
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585a856e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D B5 02 00 00: jge 0x585a882f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 81 75 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x585a85c9
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 75 0E: jne 0x585a85a7
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 06: je 0x585a85a5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 75 02: jne 0x585a85a7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x585a8565
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes E8 44 EC F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 4a1h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AE 07 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 AB 02 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 73h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x585a85e2
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 74 0D: je 0x585a85e9
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7F 07: jg 0x585a85e9
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 78h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 12 75 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6B AD F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xad
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 22: jge 0x585a863e
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes E8 CF EB F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 4a0h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 39 07 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 36 02 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 97 C3 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc3
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 80 5C 03 00 00: movzx ax, byte ptr [eax + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E0: mov word ptr [ebp - 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A6 74 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF AC F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xac
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7E 74 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 AC F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xac
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 54h]
        shr edx, 1
        and edx, 7fffffffh
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 48h], ecx
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 43 99 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x585a87a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2D 74 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AE 9A 1A 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x585a87a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 47h
        ; Exact mapped bytes 75 3C: jne 0x585a873c
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 58h], ecx
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 EA 98 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1F: jne 0x585a873a
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 D0 EA F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 2dh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 3D 06 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x585a87a8
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B6 73 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 37 9A 1A 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 1B: je 0x585a8789
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 6ch], ecx
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 7C 98 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1F: jne 0x585a87a8
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 62 EA F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 0
        push 0
        push 0
        push 2dh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 CF 05 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 74 40: je 0x585a87ee
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 06: je 0x585a87ba
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 34: jne 0x585a87ee
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 74 2E: je 0x585a87ee
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 10h], 12h
        ; Exact mapped bytes 74 28: je 0x585a87ee
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 74 22: je 0x585a87ee
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 1F EA F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        push 0
        push 0
        push 0
        push 4a2h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 89 05 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x585a8874
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7C 36: jl 0x585a882a
        __asm _emit 0x7c
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 07 73 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 AB F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        and ecx, 80203c00h
        ; Exact mapped bytes 74 09: je 0x585a882a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes E9 36 FD FF FF: jmp 0x585a8565
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 75 3A: jne 0x585a886f
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 34: jge 0x585a886f
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes E8 B0 E9 F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 588ab1f0h
        ; Exact mapped bytes E8 A0 97 F7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 80h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 05 05 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a8874
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
