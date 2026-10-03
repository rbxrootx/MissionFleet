// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3104 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877B1F0 .. +0xC20 bytes.
extern "C" __declspec(naked) void FUN_5877b1f0_segment_00() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        movzx eax, word ptr [esi + 5eh]
        mov ecx, dword ptr [esi + 220h]
        shr eax, 4
        xor eax, 0ffffffaah
        push edi
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 4E C1 18 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc1
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1e0h]
        mov ebp, 1
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        xor edi, edi
        lea ebx, [ebp + 0eh]
        ; Exact mapped bytes 39 3D E0 4A A2 58: cmp dword ptr [0x58a24ae0], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 CB 03 00 00: je 0x5877b5fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        shr ecx, 1
        cmp ecx, 50h
        ; Exact mapped bytes 0F 84 F0 03 00 00: je 0x5877b633
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 5eh]
        and eax, ebx
        mov edx, eax
        shl edx, 4
        sub edx, eax
        lea eax, [ecx + edx*8]
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        cmp eax, 4bh
        ; Exact mapped bytes 0F 8D 4D 01 00 00: jge 0x5877b3b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 25ah
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b292
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b292
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b292
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b294
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1ech]
        push eax
        ; Exact mapped bytes E8 20 64 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        and eax, ebx
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        mov eax, dword ptr [ecx + 589cfd70h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2a5h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b2ee
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b2ee
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b2ee
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b2f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1f0h]
        push eax
        ; Exact mapped bytes E8 C4 63 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        mov edx, dword ptr [esi + 0a4h]
        and eax, ebx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 2f0h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b34a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b34a
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b34a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b34c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1f4h]
        push eax
        ; Exact mapped bytes E8 68 63 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        and eax, ebx
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        mov eax, dword ptr [ecx + 589cfd70h]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 33bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 0F 8E 58 01 00 00: jle 0x5877b4eb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 8C 50 01 00 00: jl 0x5877b4eb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x5877b4eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x5877b4ed
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b3dd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b3dd
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b3dd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b3df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1ech]
        push eax
        ; Exact mapped bytes E8 D5 62 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        and eax, ebx
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        mov eax, dword ptr [ecx + 589cfd70h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 19h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b437
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b437
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b437
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b439
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1f0h]
        push eax
        ; Exact mapped bytes E8 7B 62 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        mov edx, dword ptr [esi + 0a4h]
        and eax, ebx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd70h]
        add eax, 4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b491
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b491
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b491
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b493
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1f4h]
        push eax
        ; Exact mapped bytes E8 21 62 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        and eax, ebx
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [esi + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        mov eax, dword ptr [ecx + 589cfd70h]
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7dh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b4eb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b4eb
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5877b4eb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5877b4ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1f8h]
        push eax
        ; Exact mapped bytes E8 C7 61 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, word ptr [esi + 5eh]
        mov edx, dword ptr [esi + 0a4h]
        and eax, ebx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd74h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b542
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b542
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0B: je 0x5877b542
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5877b544
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1e0h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x5877b579
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
        movzx eax, word ptr [esi + 5eh]
        mov edx, dword ptr [esi + 0a4h]
        and eax, ebx
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        shr edx, 1
        lea eax, [edx + ecx*8]
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0e0h
        mov eax, dword ptr [eax + 589cfd74h]
        add eax, ebp
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877b5c4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x5877b5c4
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0B: je 0x5877b5c4
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5877b5c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1e4h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 60: je 0x5877b633
        __asm _emit 0x74
        __asm _emit 0x60
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
        ; Exact mapped bytes EB 36: jmp 0x5877b633
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 1e0h]
        mov dword ptr [ecx + 54h], edi
        mov edx, dword ptr [esi + 1e4h]
        mov dword ptr [edx + 54h], edi
        mov eax, dword ptr [esi + 1ech]
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 1f0h]
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [esi + 1f4h]
        mov dword ptr [edx + 50h], edi
        mov eax, dword ptr [esi + 1f8h]
        mov dword ptr [eax + 50h], edi
        mov eax, dword ptr [esi + 1c0h]
        cmp eax, ebp
        ; Exact mapped bytes 74 37: je 0x5877b674
        __asm _emit 0x74
        __asm _emit 0x37
        cmp eax, 2
        ; Exact mapped bytes 74 32: je 0x5877b674
        __asm _emit 0x74
        __asm _emit 0x32
        movzx eax, word ptr [esi + 5eh]
        test al, 0fh
        ; Exact mapped bytes 74 0D: je 0x5877b657
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 1e8h]
        and eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 29: jmp 0x5877b680
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [esi + 1e8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1fch]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5877b694
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [esi + 1e8h]
        add eax, 8
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esi + 1e8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1fch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [esi + 0a8h]
        xor eax, 0aaaaaaaah
        xor ecx, 0aaaaaaaah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 238h]
        ; Exact mapped bytes E8 E8 30 00 00: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi + 7ah]
        movzx eax, word ptr [esi + 58h]
        mov ecx, dword ptr [esi + 228h]
        xor edx, 0aah
        push edx
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 C8 30 00 00: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 7ah]
        movzx edx, word ptr [esi + 5ah]
        movzx eax, word ptr [esi + 58h]
        xor ecx, 0aah
        xor edx, 0aah
        xor eax, 0aah
        push ecx
        mov ecx, dword ptr [esi + 22ch]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 9C 30 00 00: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 7ah]
        movzx edx, word ptr [esi + 5ch]
        movzx eax, word ptr [esi + 5ah]
        xor ecx, 0aah
        push ecx
        movzx ecx, word ptr [esi + 58h]
        xor edx, 0aah
        xor eax, 0aah
        xor ecx, 0aah
        add edx, eax
        add edx, ecx
        mov ecx, dword ptr [esi + 230h]
        push edx
        ; Exact mapped bytes E8 64 30 00 00: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 1a4h]
        mov ecx, ebp
        mov edx, 7
        mov ebx, 0d00ffh
        mov edi, 0e6907fh
        ; Exact mapped bytes 66 83 79 02 03: cmp word ptr [ecx + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x03
        ; Exact mapped bytes 75 78: jne 0x5877b7d2
        __asm _emit 0x75
        __asm _emit 0x78
        movzx eax, word ptr [ecx]
        add eax, -0ah
        cmp eax, 1fh
        ; Exact mapped bytes 77 6D: ja 0x5877b7d2
        __asm _emit 0x77
        __asm _emit 0x6d
        movzx eax, byte ptr [eax + 5877be30h]
        ; Exact mapped bytes FF 24 85 10 BE 77 58: jmp dword ptr [eax*4 + 0x5877be10]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xbe
        __asm _emit 0x77
        __asm _emit 0x58
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], 0ffffh
        ; Exact mapped bytes EB 50: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], 0ff00h
        ; Exact mapped bytes EB 41: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], 0ff6612h
        ; Exact mapped bytes EB 32: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], 96f0h
        ; Exact mapped bytes EB 23: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], 0ff2483h
        ; Exact mapped bytes EB 14: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], ebx
        ; Exact mapped bytes EB 09: jmp 0x5877b7d2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 23ch]
        mov dword ptr [eax + 60h], edi
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 0F 85 75 FF FF FF: jne 0x5877b753
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 23ch]
        mov eax, dword ptr [eax + 6ch]
        lea edx, [esi + 0dch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5877b823
        __asm _emit 0x74
        __asm _emit 0x32
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x5877b823
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5877b81b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5877b81b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5877b800
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5877b81f
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5877b820
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [esi + 26ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 270h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 274h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 278h]
        xor ebx, ebx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, ebp
        mov byte ptr [esp + 13h], bl
        lea edi, [ebx + 7]
        lea ebp, [ebx + 1]
        movzx ecx, word ptr [edx + 2]
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 6A: jne 0x5877b8d4
        __asm _emit 0x75
        __asm _emit 0x6a
        movzx eax, word ptr [edx]
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 61: je 0x5877b8d4
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 66 83 F8 1A: cmp ax, 0x1a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1a
        ; Exact mapped bytes 74 54: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 66 83 F8 1B: cmp ax, 0x1b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1b
        ; Exact mapped bytes 74 4E: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 F8 1C: cmp ax, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1c
        ; Exact mapped bytes 74 48: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 F8 1D: cmp ax, 0x1d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1d
        ; Exact mapped bytes 74 42: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 F8 1E: cmp ax, 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 74 3C: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 66 83 F8 1F: cmp ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 74 36: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 F8 20: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 74 30: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 F8 21: cmp ax, 0x21
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x21
        ; Exact mapped bytes 74 2A: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 83 F8 22: cmp ax, 0x22
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x22
        ; Exact mapped bytes 74 24: je 0x5877b8cd
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 26: cmp ax, 0x26
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x26
        ; Exact mapped bytes 74 17: je 0x5877b8c6
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 83 F8 27: cmp ax, 0x27
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x27
        ; Exact mapped bytes 74 11: je 0x5877b8c6
        __asm _emit 0x74
        __asm _emit 0x11
        xor ebx, ebx
        ; Exact mapped bytes 66 83 F8 28: cmp ax, 0x28
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        setne bl
        dec ebx
        and ebx, 3
        add ebx, ebp
        ; Exact mapped bytes EB 3A: jmp 0x5877b900
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ebx, 3
        ; Exact mapped bytes EB 33: jmp 0x5877b900
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ebx, 2
        ; Exact mapped bytes EB 2C: jmp 0x5877b900
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 26: jne 0x5877b900
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 3A 05: cmp word ptr [edx], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x05
        ; Exact mapped bytes 75 07: jne 0x5877b8e7
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [esp + 13h], 1
        ; Exact mapped bytes EB 19: jmp 0x5877b900
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 13: jne 0x5877b900
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 66 83 3A 18: cmp word ptr [edx], 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x18
        ; Exact mapped bytes 74 0B: je 0x5877b8fe
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 3B C9: cmp cx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc9
        ; Exact mapped bytes 75 08: jne 0x5877b900
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 3A 29: cmp word ptr [edx], 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x29
        ; Exact mapped bytes 75 02: jne 0x5877b900
        __asm _emit 0x75
        __asm _emit 0x02
        mov ebx, ebp
        add edx, 4
        sub edi, ebp
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x5877b860
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        dec eax
        mov edi, 3
        cmp eax, edi
        ; Exact mapped bytes 0F 87 70 02 00 00: ja 0x5877bb8c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 50 BE 77 58: jmp dword ptr [eax*4 + 0x5877be50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xbe
        __asm _emit 0x77
        __asm _emit 0x58
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 17: jle 0x5877b948
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5877b948
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x5877b94a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 26ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877b97f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3ch
        ; Exact mapped bytes 0F 8E C3 01 00 00: jle 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x5877bb56
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 119h
        ; Exact mapped bytes 7E 17: jle 0x5877b9d7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5877b9d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 464h]
        ; Exact mapped bytes EB 02: jmp 0x5877b9d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 26ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877ba0e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 11ah
        ; Exact mapped bytes 0F 8E 31 01 00 00: jle 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 468h]
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x5877bb56
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 11bh
        ; Exact mapped bytes 7E 17: jle 0x5877ba69
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5877ba69
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 46ch]
        ; Exact mapped bytes EB 02: jmp 0x5877ba6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 26ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877baa0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 11ch
        ; Exact mapped bytes 0F 8E 9F 00 00 00: jle 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5877bb54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 470h]
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x5877bb56
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 17: jle 0x5877baf8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5877baf8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x5877bafa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 26ch]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877bb2f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3ch
        ; Exact mapped bytes 7E 17: jle 0x5877bb54
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5877bb54
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes EB 02: jmp 0x5877bb56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 270h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x5877bb8c
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        cmp byte ptr [esp + 13h], 1
        ; Exact mapped bytes 75 14: jne 0x5877bba7
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [esi + 274h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 278h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 14: je 0x5877bbc0
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 26ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 270h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        shr eax, 1
        cmp eax, 50h
        ; Exact mapped bytes 74 16: je 0x5877bbe3
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 54h
        ; Exact mapped bytes 74 11: je 0x5877bbe3
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 20ch]
        mov edx, 0fh
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 40: jmp 0x5877bc23
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [esi + 238h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [esi + 228h]
        mov edx, edi
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebp
        ; Exact mapped bytes 75 EE: jne 0x5877bc00
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esi + 220h]
        mov edx, ebx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edx, 0fh
        mov eax, dword ptr [esi + 208h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c0h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x5877bdfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x5877bdfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esi + 0b4h], 10000000h
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5877bced
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 5eh], 0fh
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5877bced
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 26h
        ; Exact mapped bytes 7E 16: jle 0x5877bc87
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5877bc87
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 980h
        ; Exact mapped bytes EB 02: jmp 0x5877bc89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 210h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877bcbe
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
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
        mov eax, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 71 DD FF FF: call 0x58779a40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 240h], eax
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x5877be0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [esi + 0a4h]
        test al, 1
        ; Exact mapped bytes 74 77: je 0x5877bd6e
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x5877bd1a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5877bd1a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5877bd1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 210h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877bd51
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
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
        mov eax, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 1E DE FF FF: call 0x58779b80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov dword ptr [esi + 240h], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        and eax, 0fffffffeh
        cmp eax, 2
        ; Exact mapped bytes 75 70: jne 0x5877bde6
        __asm _emit 0x75
        __asm _emit 0x70
        test byte ptr [esi + 5eh], 0fh
        ; Exact mapped bytes 75 6A: jne 0x5877bde6
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x5877bd9f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5877bd9f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5877bda1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 210h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5877bdd6
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
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
        mov esi, dword ptr [esi + 210h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov esi, dword ptr [esi + 210h]
        pop edi
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov esi, dword ptr [esi + 210h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
