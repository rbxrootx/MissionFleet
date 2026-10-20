// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A4520 .. +0x33E bytes.
extern "C" __declspec(naked) void FUN_588a4520() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        mov ebx, ecx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E6 02 00 00: jne 0x588a4816
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebx + 0f0h]
        test edi, edi
        ; Exact mapped bytes 0F 84 C7 02 00 00: je 0x588a4806
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 D5 DF EA FF: call 0x58752520
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x588a4806
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        cmp ebp, dword ptr [ebx + 0ach]
        ; Exact mapped bytes 0F 85 06 01 00 00: jne 0x588a466b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF 9E 00 00 00 00: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x588a4640
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0a8h]
        test esi, esi
        ; Exact mapped bytes 75 4C: jne 0x588a45c9
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 B5 E4 EA FF: call 0x58752a40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 66 8B 43 26: mov ax, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        movzx ecx, ax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 F0 CF E8 FF: call 0x58731590
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x588a4632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DE E4 F7 FF: call 0x58822a90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 FC CF E8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 75 17: jne 0x588a45f0
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 D5 CF E8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 02 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        mov ecx, esi
        ; Exact mapped bytes 74 15: je 0x588a4610
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        ; Exact mapped bytes E8 DE D6 F7 FF: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 B5 CF E8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 C9 D6 F7 FF: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E E0 EA FF: call 0x58752680
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe0
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, esi
        ; Exact mapped bytes 74 0C: je 0x588a4632
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 1E E6 EA FF: call 0x58752c50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 85 CF E8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a4h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 DC CC F7 FF: call 0x58821330
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [edi + 0a8h]
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 EA E5 EA FF: call 0x58752c50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ebx + 0b0h]
        ; Exact mapped bytes 75 1F: jne 0x588a4692
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BF 87 AC 00 00 00: movsx eax, word ptr [edi + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 70h]
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edx
        ; Exact mapped bytes E8 53 4B F1 FF: call 0x587b91e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ebx + 0b4h]
        ; Exact mapped bytes 75 56: jne 0x588a46f0
        __asm _emit 0x75
        __asm _emit 0x56
        movzx eax, word ptr [edi + 9eh]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 70h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 204h]
        push ecx
        mov ecx, dword ptr [eax + 0a0h]
        push edx
        mov edx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 65 5B F1 FF: call 0x587ba250
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ebx + 0b8h]
        ; Exact mapped bytes 75 45: jne 0x588a473d
        __asm _emit 0x75
        __asm _emit 0x45
        movzx eax, word ptr [edi + 9eh]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x588a47fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 70h]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 5B F1 FF: call 0x587ba2d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ebx + 0bch]
        ; Exact mapped bytes 75 17: jne 0x588a475c
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [edi + 70h]
        mov eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 B9 4A F1 FF: call 0x587b9210
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4a
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x588a47fc
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ebx + 0c0h]
        ; Exact mapped bytes 75 2B: jne 0x588a478f
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [edi + 70h]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, edx
        lea esi, [eax + 1]
        nop
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x588a4770
        __asm _emit 0x75
        __asm _emit 0xf9
        push edi
        sub eax, esi
        push eax
        push edx
        push 12ch
        ; Exact mapped bytes E8 6A 73 EC FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x73
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 5D EC FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 6D: jmp 0x588a47fc
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp ebp, dword ptr [ebx + 0c4h]
        ; Exact mapped bytes 75 3B: jne 0x588a47d2
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 00: cmp word ptr [0x58a0b4a8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 5B: jne 0x588a47fc
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 66 83 BF 80 00 00 00 03: cmp word ptr [edi + 0x80], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 51: jne 0x588a47fc
        __asm _emit 0x75
        __asm _emit 0x51
        mov edx, dword ptr [edi + 7ch]
        mov eax, dword ptr [edi + 78h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        ; Exact mapped bytes E8 42 4B F1 FF: call 0x587b9300
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0f230h
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 2A: jmp 0x588a47fc
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp ebp, dword ptr [ebx + 0c8h]
        ; Exact mapped bytes 75 28: jne 0x588a4802
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebx + 0cch]
        push 190h
        push 1f4h
        ; Exact mapped bytes E8 A1 EA 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp ebp, dword ptr [ebx + 0c8h]
        pop esi
        pop ebp
        ; Exact mapped bytes 74 09: je 0x588a480f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f230h
        ; Exact mapped bytes 75 F3: jne 0x588a4810
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebx + 0cch]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebx + 0f0h]
        add ecx, 78h
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 61 F1 FF: call 0x587ba960
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
