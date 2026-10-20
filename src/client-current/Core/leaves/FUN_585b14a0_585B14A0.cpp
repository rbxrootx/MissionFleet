// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B14A0 .. +0x38C bytes.
extern "C" __declspec(naked) void FUN_585b14a0_585B14A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885346h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 60h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 83 3D 78 24 96 58 00: cmp dword ptr [0x58962478], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 50: jne 0x585b1521
        __asm _emit 0x75
        __asm _emit 0x50
        push 198h
        ; Exact mapped bytes E8 29 FB 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 16: je 0x585b1504
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588ab1a0h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B1 EE 1C 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585b150b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 89 0D 78 24 96 58: mov dword ptr [0x58962478], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 7C 24 96 58 00: cmp dword ptr [0x5896247c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 7B: jne 0x585b15a5
        __asm _emit 0x75
        __asm _emit 0x7b
        push 54h
        ; Exact mapped bytes E8 D3 FA 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 37: je 0x585b157b
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        ; Exact mapped bytes 8B 0D 78 24 96 58: mov ecx, dword ptr [0x58962478]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 35 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x35
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], edx
        push 7ff8h
        push 0
        push 0
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AA 0D ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b1582
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes A3 7C 24 96 58: mov dword ptr [0x5896247c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 7C 24 96 58: mov ecx, dword ptr [0x5896247c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 3F 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3f
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 7C 24 96 58: mov ecx, dword ptr [0x5896247c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 4A F1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0ffh
        ; Exact mapped bytes 0F 8C D2 00 00 00: jl 0x585b1694
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 24 96 58 00: cmp dword ptr [0x58962480], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x585b1694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 B2 FF FF: call 0x585ac880
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 71 34 00 00: call 0x585b4a50
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 09 78 00 00: call 0x585b8df0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 71 BC FF FF: call 0x585ad260
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 82 58 0D 00 00: mov ax, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, al
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 17 55 00 00: call 0x585b6b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 0db4h]
        ; Exact mapped bytes E8 D9 34 00 00: call 0x585b4af0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0da8h]
        ; Exact mapped bytes E8 6A 42 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x585b1648
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0da8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0da8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0dach]
        mov dword ptr [ebp - 5ch], edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 80 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x80
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0eh]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 03 5A 1C 00: call 0x58777070
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5a
        __asm _emit 0x1c
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 47 ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 80 24 96 58 01 00 00 00: mov dword ptr [0x58962480], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 52 47 ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x585b181d
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 83 3D 80 24 96 58 00: cmp dword ptr [0x58962480], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x585b16ac
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x585b16b7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, 0ffh
        sub edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 7C 11: jl 0x585b16d1
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 4F: jmp 0x585b1720
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 14h], 40h
        ; Exact mapped bytes 7C 10: jl 0x585b16e7
        __asm _emit 0x7c
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 33: jmp 0x585b171a
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7C 0D: jl 0x585b16fa
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x585b1714
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 7C 08: jl 0x585b1708
        __asm _emit 0x7c
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 06: jmp 0x585b170e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7F 1D: jg 0x585b1749
        __asm _emit 0x7f
        __asm _emit 0x1d
        ; Exact mapped bytes 83 3D 80 24 96 58 00: cmp dword ptr [0x58962480], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x585b1749
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 1048h], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 1048h], 0
        ; Exact mapped bytes 74 32: je 0x585b1787
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D 80 24 96 58 00: cmp dword ptr [0x58962480], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x585b1769
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 09: jmp 0x585b1772
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes 8B 0D 7C 24 96 58: mov ecx, dword ptr [0x5896247c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 3D 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x585b181d
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C 24 96 58: mov ecx, dword ptr [0x5896247c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 52 ED FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x52
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 7C 24 96 58 00: cmp dword ptr [0x5896247c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x585b17d3
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 7C 24 96 58: mov ecx, dword ptr [0x5896247c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x585b17c2
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b17c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes C7 05 7C 24 96 58 00 00 00 00: mov dword ptr [0x5896247c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 24 96 58 00: cmp dword ptr [0x58962478], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x585b1813
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 15 78 24 96 58: mov edx, dword ptr [0x58962478]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x585b1802
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585b1809
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes C7 05 78 24 96 58 00 00 00 00: mov dword ptr [0x58962478], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 80 24 96 58 00 00 00 00: mov dword ptr [0x58962480], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
