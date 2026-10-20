// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B6E60 .. +0x1029 bytes.
extern "C" __declspec(naked) void FUN_585b6e60_585B6E60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 194h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 17: je 0x585b6e96
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 F6 91 19 00: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x91
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 DB B0 19 00: call 0x58751f70
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dach]
        ; Exact mapped bytes E8 AC EC 1B 00: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        ; Exact mapped bytes E8 9E 5B 1C 00: call 0x5877ca50
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0db4h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 73 5A 0F 00: call 0x586ac940
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5a
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dbch]
        ; Exact mapped bytes E8 84 23 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 4
        ; Exact mapped bytes 75 4B: jne 0x585b6f2f
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 6E 23 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 74 35: je 0x585b6f2f
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 58 23 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 74 1F: je 0x585b6f2f
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dbch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x585b6fd3
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 23 23 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 4
        ; Exact mapped bytes 75 48: jne 0x585b6f8d
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        ; Exact mapped bytes E8 0D 23 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 74 32: je 0x585b6f8d
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dbch]
        ; Exact mapped bytes E8 F7 22 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 1C: je 0x585b6f8d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0db4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0db4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 46: jmp 0x585b6fd3
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dbch]
        ; Exact mapped bytes E8 C5 22 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 30: jne 0x585b6fd3
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 AF 22 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 1A: jne 0x585b6fd3
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dbch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 51 ED FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 90 11 00: call 0x586d0000
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 0F 84 28 0D 00 00: je 0x585b7d1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 24h], edx
        push 1bch
        push 200h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 06 E6 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 28h], edx
        push 1bch
        push 200h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DF E5 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 2ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 EF EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xef
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 30h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 11 EF EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xef
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 25 E0 EE FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585b70af
        __asm _emit 0x74
        __asm _emit 0x20
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 47ch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E4 EE EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1E: jmp 0x585b70cd
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov dword ptr [ebp - 0ch], 0ffffff4ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 47ch]
        mov dword ptr [ebp - 38h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C4 EE EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 F3 D8 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, 2
        shl edx, 1
        movzx eax, word ptr [eax + edx + 18h]
        push eax
        ; Exact mapped bytes E8 F1 92 FF FF: call 0x585b03f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C1 D9 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 42 FB EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 48h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 53 EE EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 52 E4 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 62 D8 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 18h]
        push edx
        ; Exact mapped bytes E8 60 92 FF FF: call 0x585b03f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 30 D9 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B1 FA EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 5ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C2 ED EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C1 E3 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 E5 D7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 18h]
        push edx
        ; Exact mapped bytes E8 E3 91 FF FF: call 0x585b03f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, eax
        ; Exact mapped bytes E8 59 FE F1 FF: call 0x584d7070
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 7C 4B: jl 0x585b7267
        __asm _emit 0x7c
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 AD D7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 18h]
        push edx
        ; Exact mapped bytes E8 AB 91 FF FF: call 0x585b03f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 6
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 7B D8 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 FC F9 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x585b7294
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 E3 F9 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 4D EC EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 78h], eax
        push 101h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 03 E3 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 7ch], edx
        push 80h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 7A E2 1F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe2
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 588h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 30 09 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 0C: movsx eax, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0c
        add eax, 1bch
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 19 09 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 50 0A: movsx edx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x0a
        add edx, 200h
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 03 E3 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 588h]
        ; Exact mapped bytes E8 C6 D6 EC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 DE 80 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x80
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 92 E4 ED FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x585b7407
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 7F E4 ED FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x585b7407
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 588h]
        mov dword ptr [ebp - 94h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F8 EB EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 3E E4 ED FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, word ptr [eax + 4]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 D7 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 7A F8 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 AC E1 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe1
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x585b7424
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 3D F8 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 A1 E3 ED FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x585b7526
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 8E E3 ED FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x585b7526
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 3D 4C ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 90 07 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        add esi, eax
        mov dword ptr [ebp - 0ach], esi
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 1D F5 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 60 07 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 48 06: movsx ecx, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x06
        add esi, ecx
        mov dword ptr [ebp - 0b0h], esi
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 4B E1 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe1
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 E1 E2 ED FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 4]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 D5 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 3D F7 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x585b7543
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 1E F7 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        mov dword ptr [ebp - 0c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 31 EA EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xea
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585b7572
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 63 D4 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd4
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 83 7F 04 00 00: jae 0x585b7a14
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 5D 06 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 4E: movsx edx, word ptr [eax + ecx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x4e
        add edx, 1bch
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 3E 06 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 21 E0 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 87 4A ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 DA 05 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 44 50 4E: movsx eax, word ptr [eax + edx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x4e
        add esi, eax
        mov dword ptr [ebp - 0d8h], esi
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 63 F3 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 A6 05 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add esi, edx
        mov dword ptr [ebp - 0dch], esi
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 8D DF 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 F8 49 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x49
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 3
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 508h]
        ; Exact mapped bytes E8 ED F2 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 2E DF 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 0D 00 00: call 0x585b8430
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 D5 D2 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 26ch]
        shr edx, cl
        and edx, 1
        ; Exact mapped bytes 74 09: je 0x585b7729
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x585b7730
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2c4h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 B0 DF ED FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 30: movsx esi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 A2 04 ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 94 48 8E 00 00 00: movsx edx, word ptr [eax + ecx*2 + 0x8e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, edx
        ; Exact mapped bytes 66 89 75 F2: mov word ptr [ebp - 0xe], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0eh]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 F1 E6 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 B5 58 ED FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 74 0F: je 0x585b77c6
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x585b789e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x585b796b
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 4C 58 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, word ptr [eax + 4]
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax + 3]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 D2 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 31 F4 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2c4h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E3 57 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 4]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [ecx + edx + 5]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 D2 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 C8 F3 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x585b79ac
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 74 57 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        add eax, 3
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 D1 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 5D F3 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 0F 57 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        add eax, 4
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 D1 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 F8 F2 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x585b79ac
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 138h], edx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 D5 F2 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 13ch], edx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 B5 F2 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 140h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C4 E5 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 144h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 A4 E5 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 A2 DB 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdb
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 55 FB FF FF: jmp 0x585b7569
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x585b7a1f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 83 86 00 00 00: jae 0x585b7aaf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        mov dword ptr [ebp - 14ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 47 E5 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 150h], ecx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 27 E5 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 154h], ecx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 D7 F1 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf1
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 158h], ecx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 B7 F1 EC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf1
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x585b7a16
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 80 FF FF: call 0x585afb70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 D0 FF FF: call 0x585b4b10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 E6 FF FF: call 0x585b61b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0db8h]
        ; Exact mapped bytes E8 8A 8A FF FF: call 0x585b0560
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x585b7b08
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 88 45 ED FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 E5 E3 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 54 FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2C: jmp 0x585b7b34
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 5A 45 ED FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 B7 E3 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 54 FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 85 FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x585b7b84
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ach]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ach]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x585b7c0b
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ach]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ach]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5b4h]
        mov dword ptr [ebp - 164h], edx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 0E E3 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5bch]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 F2 E2 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5c4h]
        mov dword ptr [ebp - 16ch], eax
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 D6 E2 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e10h]
        push edx
        ; Exact mapped bytes E8 16 CA F2 FF: call 0x584e4630
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xca
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x585b7d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5a0h]
        push ecx
        ; Exact mapped bytes E8 FC C9 F2 FF: call 0x584e4630
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x585b7d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 84 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x585b7c8f
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a0h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a0h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x585b7d16
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a0h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a0h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5a8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5a8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5b0h]
        mov dword ptr [ebp - 170h], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 03 E2 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5b8h]
        mov dword ptr [ebp - 174h], ecx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 E7 E1 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5c0h]
        mov dword ptr [ebp - 178h], eax
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 CB E1 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x585b7e71
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 47ch]
        mov dword ptr [ebp - 17ch], edx
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 59 E2 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 52 FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 08 00 00: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5a4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5a4h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5a0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5a0h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ach]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5ach]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5a8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5a8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5b4h]
        mov dword ptr [ebp - 180h], ecx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 15 E1 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5b0h]
        mov dword ptr [ebp - 184h], eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 F9 E0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5bch]
        mov dword ptr [ebp - 188h], edx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 DD E0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5b8h]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 C1 E0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5c4h]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 A5 E0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5c0h]
        mov dword ptr [ebp - 194h], edx
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 89 E0 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0dbch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 87 FF FF: call 0x585b0600
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 10 00 00: call 0x585b8f80
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
