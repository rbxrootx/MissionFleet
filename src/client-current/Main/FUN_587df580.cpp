// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 2815 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587DF580 .. +0x8D8 bytes.
extern "C" __declspec(naked) void FUN_587df580_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0ch
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov esi, ecx
        cmp eax, ebp
        ; Exact mapped bytes 74 0E: je 0x587df5a0
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes E8 D8 9A FF FF: call 0x587d9070
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d78h], eax
        ; Exact mapped bytes EB 06: jmp 0x587df5a6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 0d78h], ebp
        mov ecx, dword ptr [esi + 0d78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 10: je 0x587df5c0
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 BB 8F 10 00: call 0x588e8570
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        ; Exact mapped bytes E8 A0 9C 10 00: call 0x588e9260
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dach]
        ; Exact mapped bytes E8 D5 D8 10 00: call 0x588ecea0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dbch]
        ; Exact mapped bytes E8 1A 37 11 00: call 0x588f2cf0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        mov ecx, dword ptr [esi + 0db4h]
        push eax
        ; Exact mapped bytes E8 18 3D 09 00: call 0x58873300
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dbch]
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
        and dl, 1fh
        cmp dl, 4
        ; Exact mapped bytes 75 2A: jne 0x587df628
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0db4h]
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
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 74 14: je 0x587df628
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esi + 0db4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 73: jne 0x587df69b
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [esi + 0db4h]
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
        and dl, 1fh
        cmp dl, 4
        ; Exact mapped bytes 75 32: jne 0x587df670
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [esi + 0dbch]
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
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 74 1C: je 0x587df670
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [esi + 0dbch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 74 08: je 0x587df670
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0db4h]
        ; Exact mapped bytes EB 31: jmp 0x587df6a1
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 0dbch]
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
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 22: jne 0x587df6a8
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi + 0db4h]
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
        and cl, 1fh
        cmp cl, dl
        ; Exact mapped bytes 75 0D: jne 0x587df6a8
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0dbch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 0A B4 0A 00: call 0x5888aac0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [esi + 0d78h], ebp
        ; Exact mapped bytes 0F 84 0B 09 00 00: je 0x587dffcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebx
        push 1bch
        push 200h
        ; Exact mapped bytes E8 B8 3B 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 1bch
        push 200h
        ; Exact mapped bytes E8 A3 3B 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov edi, 0fh
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 4ch]
        xor eax, 0aaaaaaaah
        mov eax, dword ptr [esi + 478h]
        ; Exact mapped bytes 74 0D: je 0x587df729
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 0fff0h
        xor ebx, ebx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 09: jmp 0x587df732
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ebx, 0ffffff4ch
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 0cc0h]
        movzx eax, word ptr [eax + 1ch]
        push eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes E8 D4 6D FF FF: call 0x587d6520
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 0A: jle 0x587df761
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 75 02: jne 0x587df763
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587df798
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
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
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b4h]
        push ebx
        ; Exact mapped bytes E8 72 35 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc0h]
        movzx edx, word ptr [eax + 1ch]
        push edx
        ; Exact mapped bytes E8 5C 6D FF FF: call 0x587d6520
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x587df7df
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x587df7df
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x587df7e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x587df816
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
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
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b8h]
        push ebx
        ; Exact mapped bytes E8 F4 34 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x34
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc0h]
        movzx edx, word ptr [eax + 1ch]
        push edx
        ; Exact mapped bytes E8 DE 6C FF FF: call 0x587d6520
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 6
        add esp, 4
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7C 6B: jl 0x587df8bd
        __asm _emit 0x7c
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 0d78h]
        mov eax, dword ptr [eax + 0cc0h]
        movzx ecx, word ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 B8 6C FF FF: call 0x587d6520
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x587df884
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x587df884
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 180h
        ; Exact mapped bytes EB 02: jmp 0x587df886
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 42: je 0x587df8d5
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
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
        ; Exact mapped bytes EB 18: jmp 0x587df8d5
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0bch]
        mov dword ptr [ecx + 54h], ebp
        mov eax, dword ptr [esi + 0bch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 3B 34 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x34
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 80h
        ; Exact mapped bytes E8 EB 33 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x33
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        mov eax, dword ptr [eax + 0cc4h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 50 0A: movsx edx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x0a
        add ecx, 1bch
        push ecx
        mov ecx, dword ptr [esi + 584h]
        add edx, 200h
        push edx
        ; Exact mapped bytes E8 6E 39 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 584h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        mov ecx, dword ptr [esi + 340h]
        push edx
        ; Exact mapped bytes E8 52 39 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        mov eax, dword ptr [eax + 0ccch]
        cmp eax, ebp
        ; Exact mapped bytes 74 61: je 0x587df9af
        __asm _emit 0x74
        __asm _emit 0x61
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 5C: je 0x587df9af
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 584h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [ecx + 0ccch]
        movzx eax, word ptr [edx + 4]
        ; Exact mapped bytes 8B 0D 54 46 A2 58: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x587df993
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebp
        ; Exact mapped bytes 7C 13: jl 0x587df993
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x587df993
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587df995
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 340h]
        push eax
        ; Exact mapped bytes E8 7F 4F F5 FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x4f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 340h]
        push ebx
        ; Exact mapped bytes E8 73 33 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x33
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x587df9b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 340h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + 0d78h]
        mov ecx, dword ptr [eax + 0cc8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 7D: je 0x587dfa45
        __asm _emit 0x74
        __asm _emit 0x7d
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 78: je 0x587dfa45
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [eax + 0cc4h]
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 0F BF 40 06: movsx eax, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x06
        add edx, dword ptr [ecx + 8]
        add eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 344h]
        push edx
        push eax
        ; Exact mapped bytes E8 9C 38 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x38
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [ecx + 0cc8h]
        movzx eax, word ptr [edx + 4]
        ; Exact mapped bytes 8B 0D 58 46 A2 58: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 23: jle 0x587dfa35
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp eax, ebp
        ; Exact mapped bytes 7C 1F: jl 0x587dfa35
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 17: je 0x587dfa35
        __asm _emit 0x74
        __asm _emit 0x17
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        mov ecx, dword ptr [esi + 344h]
        push eax
        ; Exact mapped bytes E8 ED 4E F5 FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x587dfa4e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 344h]
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 DD 4E F5 FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x587dfa4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 344h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + 344h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 0cc0h]
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, 7c00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        xor ecx, ecx
        xor eax, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 83 1D 03 00 00: jae 0x587dfda3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 880h
        sub eax, esi
        mov dword ptr [esp + 20h], 0eh
        lea edi, [esi + 2c0h]
        mov dword ptr [esp + 18h], eax
        nop
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc4h]
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F BF 54 03 40: movsx edx, word ptr [ebx + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 04 18: movsx eax, word ptr [eax + ebx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x18
        mov ecx, dword ptr [edi + 244h]
        add edx, 1bch
        push edx
        add eax, 200h
        push eax
        ; Exact mapped bytes E8 BF 37 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc4h]
        ; Exact mapped bytes 0F BF 54 03 40: movsx edx, word ptr [ebx + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 0F BF 04 18: movsx eax, word ptr [eax + ebx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x18
        add edx, dword ptr [ecx + 8]
        add eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [edi]
        push edx
        push eax
        ; Exact mapped bytes E8 95 37 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [edi + 244h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        sub ecx, 3
        push ecx
        mov ecx, dword ptr [edi - 200h]
        push edx
        ; Exact mapped bytes E8 79 37 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        push 0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 9B 82 FF FF: call 0x587d7dc0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d78h]
        mov edx, dword ptr [eax + 0cc0h]
        mov ebp, dword ptr [edx + 26ch]
        mov eax, dword ptr [eax + 0cc4h]
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 8B 84 10 80 00 00 00: mov ax, word ptr [eax + edx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1fh
        sub ecx, ebx
        mov ebx, dword ptr [edi]
        shr ebp, cl
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 03 41 26: add ax, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        and ebp, 1
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587dfb72
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 DE 33 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x33
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587dfb7f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 61 33 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x33
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0d78h]
        lea edx, [ecx + edi]
        mov ecx, dword ptr [eax + edx]
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x587dfb9a
        __asm _emit 0x74
        __asm _emit 0x05
        movzx ecx, byte ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x587dfb9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        movzx ecx, cx
        sub ecx, 5
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x587dfc78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 74 10: je 0x587dfbbd
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [edi - 80h]
        mov dword ptr [edx + 54h], ebx
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 54h], ebx
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x587dfd45
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx]
        movzx eax, word ptr [ecx + 4]
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x587dfbec
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebx
        ; Exact mapped bytes 7C 13: jl 0x587dfbec
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0B: je 0x587dfbec
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587dfbee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi - 80h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587dfc20
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [edx + ecx]
        movzx eax, word ptr [edx + 4]
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x587dfc55
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebx
        ; Exact mapped bytes 7C 13: jl 0x587dfc55
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0B: je 0x587dfc55
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587dfc57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x587dfd45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 10h], edx
        add eax, 20h
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x587dfd2c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx]
        movzx eax, word ptr [ecx + 4]
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [eax + ebp + 3]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x587dfca8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebx
        ; Exact mapped bytes 7C 13: jl 0x587dfca8
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0B: je 0x587dfca8
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587dfcaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi - 80h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587dfcdc
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [edx + ecx]
        movzx eax, word ptr [edx + 4]
        lea ebp, [eax + ebp + 5]
        ; Exact mapped bytes A1 4C 46 A2 58: mov eax, dword ptr [0x58a2464c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 18: jle 0x587dfd12
        __asm _emit 0x7e
        __asm _emit 0x18
        test ebp, ebp
        ; Exact mapped bytes 7C 14: jl 0x587dfd12
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x587dfd12
        __asm _emit 0x74
        __asm _emit 0x0b
        shl ebp, 6
        add ebp, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x587dfd14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 28: je 0x587dfd45
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 10h], eax
        lea eax, [ebp + 20h]
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 244h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 200h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [edi - 80h]
        ; Exact mapped bytes E8 B5 2F 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        mov ecx, dword ptr [edx + 0cc0h]
        movzx edx, word ptr [ecx + 0ch]
        mov eax, dword ptr [esp + 10h]
        add dword ptr [esp + 20h], 2
        shr edx, 0ah
        inc eax
        and edx, 1fh
        add edi, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, edx
        ; Exact mapped bytes 0F 82 06 FD FF FF: jb 0x587dfaa0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        cmp eax, 20h
        ; Exact mapped bytes 73 3F: jae 0x587dfde0
        __asm _emit 0x73
        __asm _emit 0x3f
        mov ecx, eax
        mov edx, 20h
        lea eax, [esi + ecx*4 + 0c0h]
        sub edx, ecx
        mov ecx, dword ptr [eax + 444h]
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 180h]
        mov dword ptr [ecx + 54h], ebp
        mov ecx, dword ptr [eax + 200h]
        add eax, 4
        sub edx, 1
        mov dword ptr [ecx + 54h], ebp
        ; Exact mapped bytes 75 D1: jne 0x587dfdb1
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, esi
        ; Exact mapped bytes E8 C9 9F FF FF: call 0x587d9db0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 22 F2 FF FF: call 0x587df010
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 1B 83 FF FF: call 0x587d8110
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0db8h]
        mov eax, dword ptr [edx + 98h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        pop ebx
        test cl, 1
        ; Exact mapped bytes 75 14: jne 0x587dfe21
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [esi + 0db4h]
        mov eax, dword ptr [edx + 0f4h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        push ebp
        ; Exact mapped bytes EB 17: jmp 0x587dfe38
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0db4h]
        mov eax, dword ptr [eax + 0f4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 E1 79 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e10h]
        cmp eax, ebp
        ; Exact mapped bytes 74 3B: je 0x587dfe84
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [eax + 0ce0h]
        mov cl, byte ptr [esi + 61h]
        cmp eax, ebp
        ; Exact mapped bytes 74 2E: je 0x587dfe84
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes EB 08: jmp 0x587dfe60
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587DFE60 .. +0x227 bytes.
extern "C" __declspec(naked) void FUN_587df580_segment_01() {
    __asm {
        mov edx, dword ptr [eax + 0cc0h]
        cmp byte ptr [edx + 35ch], cl
        ; Exact mapped bytes 75 0C: jne 0x587dfe7a
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [eax + 0ech], ebp
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x587dff32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ce0h]
        cmp eax, ebp
        ; Exact mapped bytes 75 DC: jne 0x587dfe60
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [esi + 5a0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 5b0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5b8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5c0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0e10h]
        push edx
        ; Exact mapped bytes E8 E1 C9 F8 FF: call 0x5876c8b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x587e0070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 59ch]
        push eax
        ; Exact mapped bytes E8 CA C9 F8 FF: call 0x5876c8b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 7F 01 00 00: je 0x587e0070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e10h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x587dff89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ce4h]
        mov cl, byte ptr [esi + 61h]
        xor edi, edi
        cmp eax, ebp
        ; Exact mapped bytes 74 4D: je 0x587dff5b
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edi, edi
        mov edx, dword ptr [eax + 0cc0h]
        cmp byte ptr [edx + 35ch], cl
        ; Exact mapped bytes 75 08: jne 0x587dff26
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [eax + 0ech], ebp
        ; Exact mapped bytes 74 33: je 0x587dff59
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [eax + 0ce4h]
        cmp eax, ebp
        ; Exact mapped bytes 75 E0: jne 0x587dff10
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 29: jmp 0x587dff5b
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 4A FF FF FF: je 0x587dfe84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5a0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x587dfec3
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 4F C9 F8 FF: call 0x5876c8b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x587dff89
        __asm _emit 0x74
        __asm _emit 0x21
        cmp edi, ebp
        ; Exact mapped bytes 74 1D: je 0x587dff89
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 59ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x587e006e
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 59ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 5ach]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5b4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x587e0070
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 478h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 3C 78 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 44 68 FF FF: call 0x587d6830
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5a0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 59ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 5a4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 5b0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5ach]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5b8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5b4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5c0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 5bch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dbch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        ; Exact mapped bytes E8 F9 83 FF FF: call 0x587d8470
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 E2 93 FF FF: call 0x587d9460
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
