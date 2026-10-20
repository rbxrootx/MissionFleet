// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858F840 .. +0x2D0 bytes.
extern "C" __declspec(naked) void FUN_5858f840_5858F840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 0dh]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0dh], cl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [eax + 14h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 51 71 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858f87f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 C8 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5E: je 0x5858f8e3
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 C6 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 71 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 44 C6 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 26 C6 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5858f8da
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858f8e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 91: jmp 0x5858f874
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 4]
        add ecx, 74h
        ; Exact mapped bytes E8 D2 70 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858f8fe
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 C7 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5E: je 0x5858f962
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D 70 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C5 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5858f959
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858f960
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 91: jmp 0x5858f8f3
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 50 70 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858f980
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 C7 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5E: je 0x5858f9e4
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 52 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 70 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 43 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 25 C5 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x5858f9db
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858f9e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 91: jmp 0x5858f975
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 81 20 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 74h
        ; Exact mapped bytes E8 76 20 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 68 20 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 94h
        ; Exact mapped bytes E8 5A 20 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0dh]
        cmp ecx, 1
        ; Exact mapped bytes 0F 8E CA 00 00 00: jle 0x5858faf1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0dh]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 8F B4 00 00 00: jg 0x5858faf1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 58 6F EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 81 05 00: call 0x585e7b90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 01 F8 FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 6F EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 85 5E 15 00: call 0x586e5900
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 6F EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 D2 F2 F1 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 C4 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc4
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858faba
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 79 C6 EF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 31: je 0x5858faf1
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 F0 FF FF: call 0x5858ead0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2710h
        ; Exact mapped bytes 74 15: je 0x5858fae4
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 06 00 00: call 0x58590180
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD 88 1D 00: call 0x587683e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 72 A7 FF FF: call 0x5858a260
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BE: jmp 0x5858faaf
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0dh]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 7E 06: jle 0x5858fb09
        __asm _emit 0x7e
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x5858fb0e
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 05: jmp 0x5858fb0e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
    }
}
