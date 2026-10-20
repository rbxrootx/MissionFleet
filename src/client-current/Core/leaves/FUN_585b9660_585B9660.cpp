// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B9660 .. +0x479F bytes.
extern "C" __declspec(naked) void FUN_585b9660_585B9660() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885a6fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 7a0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C1 8B EC FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 588ada1ch
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 63 FF FF FF: call 0x585b9630
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 106f4h
        ; Exact mapped bytes E8 71 04 EF FF: call 0x584a9b50
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0xef
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0dch
        push 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 10af0h
        push ecx
        ; Exact mapped bytes E8 17 37 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x37
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        push 1c8h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 1091ch
        push edx
        ; Exact mapped bytes E8 FE 36 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x36
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x585b9727
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 7D 14: jge 0x585b9741
        __asm _emit 0x7d
        __asm _emit 0x14
        imul ecx, dword ptr [ebp - 30h], 38h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx + 2205ch], 0
        ; Exact mapped bytes EB DD: jmp 0x585b971e
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10730h], 0
        push 8
        ; Exact mapped bytes E8 AF 78 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 234h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 74 10: je 0x585b977b
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 0A F9 18 00: call 0x58749080
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf9
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9782
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5cch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 5cch]
        mov dword ptr [edx + 280h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + 278h], 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 58h], 100h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 5ch], 0
        push 10h
        ; Exact mapped bytes E8 2F 78 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0D: je 0x585b97f2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C3 FD FF FF: call 0x585b95b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b97f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2e8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [eax + 20f2ch], ecx
        push 10h
        ; Exact mapped bytes E8 E8 77 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 0D: je 0x585b9839
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 BC FD FF FF: call 0x585b95f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9840
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 2ech], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2ech]
        mov dword ptr [eax + 20f30h], ecx
        push 84h
        ; Exact mapped bytes E8 9E 77 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x77
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 3C: je 0x585b98b2
        __asm _emit 0x74
        __asm _emit 0x3c
        push 26h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D B2 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        push 5208h
        push 0d0h
        push 12fh
        mov edx, dword ptr [ebp - 2f0h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 20h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A3 DF F2 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b98b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 2f4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 2f4h]
        mov dword ptr [ecx + eax + 10dd8h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10dd8h]
        mov dword ptr [ebp - 2f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 AA BC 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        mov dword ptr [ebp - 2fch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 E2 B1 F0 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 300h], edx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 ED C4 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 84h
        ; Exact mapped bytes E8 A6 76 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 3C: je 0x585b99aa
        __asm _emit 0x74
        __asm _emit 0x3c
        push 27h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 B1 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        push 5208h
        push 17bh
        push 16eh
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 20h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AB DE F2 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b99b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 308h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + eax + 10dd8h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 30ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 B2 BB 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbb
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 310h], edx
        push 101h
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 EA B0 F0 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov dword ptr [ebp - 314h], edx
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 F5 C3 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 B1 75 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x585b9aee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax + 10dd8h]
        ; Exact mapped bytes E8 32 26 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 12h
        mov dword ptr [ebp - 318h], eax
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        ; Exact mapped bytes E8 22 CF EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        add eax, 2
        mov dword ptr [ebp - 31ch], eax
        push 28h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C B0 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb0
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        push 5209h
        mov ecx, dword ptr [ebp - 318h]
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 0
        push 2eeh
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 67 9F F4 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9af5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 324h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [eax + 10de0h], ecx
        push 50h
        ; Exact mapped bytes E8 EC 74 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 1B: je 0x585b9b43
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 52 AE 1F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9b4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 328h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 328h]
        mov dword ptr [ecx + 10d24h], edx
        mov dword ptr [ebp - 2ch], 31h
        push 54h
        ; Exact mapped bytes E8 90 74 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 39: je 0x585b9bbd
        __asm _emit 0x74
        __asm _emit 0x39
        push 68ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C AF EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xaf
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        push 2ee0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 68 87 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9bc4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 330h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + edx + 10da4h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10da4h]
        mov dword ptr [ebp - 334h], edx
        push 101h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 9F B9 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10da4h]
        mov dword ptr [ebp - 338h], eax
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 0A C2 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 C6 73 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 51: je 0x585b9c9f
        __asm _emit 0x74
        __asm _emit 0x51
        push 68dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 AE EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 340h], ecx
        push -1
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 33ch]
        push eax
        mov ecx, dword ptr [ebp - 340h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 86 86 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9ca6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 344h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 344h]
        mov dword ptr [ecx + eax + 10da4h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10da4h]
        mov dword ptr [ebp - 348h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 BD B8 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10da4h]
        mov dword ptr [ebp - 34ch], edx
        push 0
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 28 C1 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E1 72 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x72
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 54: je 0x585b9d87
        __asm _emit 0x74
        __asm _emit 0x54
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 AD EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xad
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10da4h]
        mov dword ptr [ebp - 354h], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 2
        push ecx
        push 291h
        push 8
        mov edx, dword ptr [ebp - 350h]
        push edx
        mov eax, dword ptr [ebp - 354h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 EE 0B 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b9d8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 358h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 358h]
        mov dword ptr [ecx + eax + 10dach], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10dach]
        mov dword ptr [ebp - 35ch], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 A5 C0 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 1E 72 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x72
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 5A: je 0x585b9e56
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 AC EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10dach]
        mov dword ptr [ebp - 364h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 2
        push edx
        push 291h
        push 8
        mov eax, dword ptr [ebp - 360h]
        push eax
        mov ecx, dword ptr [ebp - 364h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 22 0B 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585b9e60
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 368h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 368h]
        mov dword ptr [edx + ecx + 10dc0h], eax
        push 0fch
        ; Exact mapped bytes E8 72 71 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x71
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 5A: je 0x585b9f02
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B AC EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 36ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 370h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 2
        push edx
        push 363h
        push 8
        mov eax, dword ptr [ebp - 36ch]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 76 0A 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585b9f0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 374h]
        mov dword ptr [ecx + eax + 10dach], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 378h], edx
        push 2ee1h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 24 BF EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 9D 70 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 5A: je 0x585b9fd7
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 AB EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 380h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 2
        push eax
        push 363h
        push 8
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov edx, dword ptr [ebp - 380h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 A1 09 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585b9fe1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 384h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 384h]
        mov dword ptr [edx + ecx + 10dc0h], eax
        push 0fch
        ; Exact mapped bytes E8 F1 6F 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6f
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 5A: je 0x585ba083
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A AA EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 38ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 2
        push edx
        push 1e8h
        push 3
        mov eax, dword ptr [ebp - 388h]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 F5 08 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba08d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 390h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 390h]
        mov dword ptr [ecx + eax + 10dach], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 394h], edx
        push 2ee1h
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 A5 BD EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 1E 6F 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6f
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 59: je 0x585ba155
        __asm _emit 0x74
        __asm _emit 0x59
        push 2bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 A9 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 39ch], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 2
        push eax
        push 1e8h
        push 3
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 23 08 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba15f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 3a0h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3a0h]
        mov dword ptr [edx + ecx + 10dc0h], eax
        push 0fch
        ; Exact mapped bytes E8 74 6E 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 5A: je 0x585ba200
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D A9 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 3a8h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 2
        push edx
        push 0a0h
        push 8
        mov eax, dword ptr [ebp - 3a4h]
        push eax
        mov ecx, dword ptr [ebp - 3a8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 78 07 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba20a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 3ach], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [edx + ecx + 10dach], eax
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10dach]
        mov dword ptr [ebp - 3b0h], ecx
        push 2ee1h
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 26 BC EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 9F 6D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 5A: je 0x585ba2d5
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 A8 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3b4h], eax
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 3b8h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 2
        push eax
        push 0a0h
        push 8
        mov ecx, dword ptr [ebp - 3b4h]
        push ecx
        mov edx, dword ptr [ebp - 3b8h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 A3 06 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba2df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 3bch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 3bch]
        mov dword ptr [eax + edx + 10dc0h], ecx
        push 0fch
        ; Exact mapped bytes E8 F3 6C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 5A: je 0x585ba381
        __asm _emit 0x74
        __asm _emit 0x5a
        push 22h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C A7 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10da4h]
        mov dword ptr [ebp - 3c4h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 19h
        push eax
        push 3ach
        push 8
        mov ecx, dword ptr [ebp - 3c0h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 F7 05 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba38b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 3c8h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 3c8h]
        mov dword ptr [edx + ecx + 10dach], eax
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10dach]
        mov dword ptr [ebp - 3cch], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 A5 BA EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 1E 6C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 5A: je 0x585ba456
        __asm _emit 0x74
        __asm _emit 0x5a
        push 22h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 A6 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 3d4h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 23h
        push edx
        push 3ach
        push 8
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        mov ecx, dword ptr [ebp - 3d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 22 05 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba460
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 3d8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 3d8h]
        mov dword ptr [eax + 10dd0h], ecx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585ba491
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 4
        ; Exact mapped bytes 0F 8D AC 00 00 00: jge 0x585ba547
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 10dach]
        mov dword ptr [ebp - 3dch], edx
        push 101h
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 F2 B0 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 10dach]
        mov dword ptr [ebp - 3e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 62 B9 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 10dc0h]
        mov dword ptr [ebp - 3e4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 AF B0 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 10dc0h]
        mov dword ptr [ebp - 3e8h], edx
        push -1
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 5F B9 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 10dc0h]
        mov dword ptr [ebp - 3ech], edx
        push 0
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 FF B8 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x585ba488
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 B3 6A 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6a
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 3A: je 0x585ba5a1
        __asm _emit 0x74
        __asm _emit 0x3a
        push 32h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C A5 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        push 35h
        push 8ch
        push 6
        mov eax, dword ptr [ebp - 3f0h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D7 03 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba5ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 3f4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 3f4h]
        mov dword ptr [eax + 20fc8h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20fc8h]
        mov dword ptr [ebp - 3f8h], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 97 B8 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20fc8h]
        mov dword ptr [ebp - 3fch], edx
        push 101h
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 A8 AF 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xaf
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 F1 69 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x69
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 3A: je 0x585ba663
        __asm _emit 0x74
        __asm _emit 0x3a
        push 32h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A A4 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        push 34h
        push 291h
        push 4
        mov eax, dword ptr [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 15 03 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba66d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 404h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 404h]
        mov dword ptr [eax + 20fcch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20fcch]
        mov dword ptr [ebp - 408h], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 D5 B7 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20fcch]
        mov dword ptr [ebp - 40ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 E6 AE 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 2F 69 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x69
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 3A: je 0x585ba725
        __asm _emit 0x74
        __asm _emit 0x3a
        push 32h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 A3 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        push 46h
        push 398h
        push 2
        mov eax, dword ptr [ebp - 410h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 53 02 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba72f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 414h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [eax + 20fc4h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20fc4h]
        mov dword ptr [ebp - 418h], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 13 B7 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20fc4h]
        mov dword ptr [ebp - 41ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 24 AE 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 6D 68 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 3A: je 0x585ba7e7
        __asm _emit 0x74
        __asm _emit 0x3a
        push 32h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 A3 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        push 35h
        push 1c7h
        push 2
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 91 01 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba7f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 424h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 424h]
        mov dword ptr [edx + ecx + 20fa8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 428h], ecx
        push 2ee1h
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 3F B6 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 B8 67 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 3A: je 0x585ba89c
        __asm _emit 0x74
        __asm _emit 0x3a
        push 32h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 A2 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 42ch], eax
        push 35h
        push 1ech
        push 2
        mov edx, dword ptr [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 DC 00 20 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba8a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 430h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 430h]
        mov dword ptr [eax + edx + 20fa8h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 434h], ecx
        push 2ee1h
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 8A B5 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20fb0h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20fb4h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 20fb8h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20fbch], 0
        push 54h
        ; Exact mapped bytes E8 D3 66 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x66
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 3A: je 0x585ba981
        __asm _emit 0x74
        __asm _emit 0x3a
        push 68h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC A1 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        push 2ee0h
        push 5ah
        push 5
        mov eax, dword ptr [ebp - 438h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 A7 79 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ba98b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 43ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 43ch]
        mov dword ptr [edx + ecx + 20fd8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fd8h]
        mov dword ptr [ebp - 440h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 D5 AB 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fd8h]
        mov dword ptr [ebp - 444h], edx
        push 0
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 40 B4 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 FC 65 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x65
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 3D: je 0x585baa5b
        __asm _emit 0x74
        __asm _emit 0x3d
        push 6ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 A0 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        push 2ee0h
        push 8ch
        push 5
        mov eax, dword ptr [ebp - 448h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 CD 78 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585baa65
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 44ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 44ch]
        mov dword ptr [ecx + eax + 20fd8h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fd8h]
        mov dword ptr [ebp - 450h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 FB AA 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xaa
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fd8h]
        mov dword ptr [ebp - 454h], edx
        push 0
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 66 B3 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 22 65 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x65
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 3A: je 0x585bab32
        __asm _emit 0x74
        __asm _emit 0x3a
        push 67h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B A0 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        push 2ee0h
        push 5ah
        push 5
        mov eax, dword ptr [ebp - 458h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 F6 77 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x77
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bab3c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 45ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 45ch]
        mov dword ptr [edx + ecx + 20fd0h], eax
        push 54h
        ; Exact mapped bytes E8 99 64 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 3D: je 0x585babbe
        __asm _emit 0x74
        __asm _emit 0x3d
        push 69h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 9F EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        push 2ee0h
        push 8ch
        push 5
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 6A 77 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x77
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585babc8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 464h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 464h]
        mov dword ptr [edx + ecx + 20fd0h], eax
        push 80h
        ; Exact mapped bytes E8 0A 64 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 3A: je 0x585bac4a
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0fh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 9E EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        push 2ee0h
        push 6eh
        push 5
        mov ecx, dword ptr [ebp - 468h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 EE 11 FB FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x11
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bac54
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 46ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 46ch]
        mov dword ptr [eax + edx + 20fe8h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fe8h]
        mov dword ptr [ebp - 470h], edx
        push 28h
        push 1
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 8D 18 FB FF: call 0x5856c530
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20fe8h]
        mov dword ptr [ebp - 474h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 474h]
        ; Exact mapped bytes E8 E5 A8 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe8h]
        mov dword ptr [ebp - 478h], ecx
        push 0
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 50 B1 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 80h
        ; Exact mapped bytes E8 09 63 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x63
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 3D: je 0x585bad4e
        __asm _emit 0x74
        __asm _emit 0x3d
        push 11h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 9D EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 47ch], eax
        push 2ee0h
        push 0a0h
        push 5
        mov edx, dword ptr [ebp - 47ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 EA 10 FB FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bad58
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 480h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 480h]
        mov dword ptr [eax + edx + 20fe8h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe8h]
        mov dword ptr [ebp - 484h], ecx
        push 28h
        push 1
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 89 17 FB FF: call 0x5856c530
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe8h]
        mov dword ptr [ebp - 488h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 E1 A7 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe8h]
        mov dword ptr [ebp - 48ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 4C B0 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 80h
        ; Exact mapped bytes E8 05 62 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 3A: je 0x585bae4f
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0eh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 9C EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        push 2ee0h
        push 6eh
        push 5
        mov edx, dword ptr [ebp - 490h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E9 0F FB FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bae59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 494h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 494h]
        mov dword ptr [ecx + eax + 20fe0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20fe0h]
        mov dword ptr [ebp - 498h], eax
        push 28h
        push 1
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 88 16 FB FF: call 0x5856c530
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        mov dword ptr [ebp - 49ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 E0 A6 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fe0h]
        mov dword ptr [ebp - 4a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 4B AF EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xaf
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 80h
        ; Exact mapped bytes E8 04 61 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 3D: je 0x585baf53
        __asm _emit 0x74
        __asm _emit 0x3d
        push 10h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 9B EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4a4h], eax
        push 2ee0h
        push 0a0h
        push 5
        mov eax, dword ptr [ebp - 4a4h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 E5 0E FB FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585baf5d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 4a8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4a8h]
        mov dword ptr [ecx + eax + 20fe0h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fe0h]
        mov dword ptr [ebp - 4ach], edx
        push 28h
        push 1
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes E8 84 15 FB FF: call 0x5856c530
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fe0h]
        mov dword ptr [ebp - 4b0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 DC A5 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 20fe0h]
        mov dword ptr [ebp - 4b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes E8 47 AE EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20fe8h]
        mov dword ptr [ebp - 4b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 C2 37 FE FF: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20fe8h]
        mov dword ptr [ebp - 4bch], eax
        push 0
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 9D 37 FE FF: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        mov dword ptr [ebp - 4c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 78 37 FE FF: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        mov dword ptr [ebp - 4c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4c4h]
        ; Exact mapped bytes E8 53 37 FE FF: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 6C 5F 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 69: je 0x585bb117
        __asm _emit 0x74
        __asm _emit 0x69
        push 8
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 9A EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4cch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4d0h], eax
        push 2ee0h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp - 4c8h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 4cch]
        push edx
        mov eax, dword ptr [ebp - 4d0h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 D1 0B F1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb121
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 4d4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4d4h]
        mov dword ptr [ecx + eax + 20ff0h], edx
        push 0ach
        ; Exact mapped bytes E8 B1 5E 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 6C: je 0x585bb1d5
        __asm _emit 0x74
        __asm _emit 0x6c
        push 8
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 99 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4d8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4dch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e0h], ecx
        push 2ee0h
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 4d8h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4dch]
        push eax
        mov ecx, dword ptr [ebp - 4e0h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 13 0B F1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb1df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 4e4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4e4h]
        mov dword ptr [ecx + eax + 20ff0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20ff0h]
        mov dword ptr [ebp - 4e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 4e8h]
        ; Exact mapped bytes E8 81 A3 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20ff0h]
        mov dword ptr [ebp - 4ech], eax
        push 101h
        mov ecx, dword ptr [ebp - 4ech]
        ; Exact mapped bytes E8 59 A3 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20ff0h]
        mov dword ptr [ebp - 4f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 C4 AB EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20ff0h]
        mov dword ptr [ebp - 4f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes E8 9F AB EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 80h
        ; Exact mapped bytes E8 58 5D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 24: je 0x585bb2e6
        __asm _emit 0x74
        __asm _emit 0x24
        push 2ee0h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E2 EF 14 00: call 0x5870a2c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb2f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 4f8h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4f8h]
        mov dword ptr [eax + 10dd4h], ecx
        push 918h
        ; Exact mapped bytes E8 EB 5C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 13: je 0x585bb342
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 86 2E F5 FF: call 0x5850e1c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb34c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 4fch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4fch]
        mov dword ptr [eax + 21e24h], ecx
        push 10h
        ; Exact mapped bytes E8 92 5C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 13: je 0x585bb39b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 FD 50 F9 FF: call 0x58550490
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb3a5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov edx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 500h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 500h]
        mov dword ptr [eax + 21e28h], ecx
        push 50h
        ; Exact mapped bytes E8 39 5C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 27: je 0x585bb408
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d24h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 90 95 1F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb412
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 504h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 504h]
        mov dword ptr [edx + 10d28h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10d28h]
        mov dword ptr [ebp - 508h], edx
        push 2ee0h
        mov ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes E8 30 AA EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bb463
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 8D A0 00 00 00: jge 0x585bb50d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 90 5B 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 51: je 0x585bb4db
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 130h
        push ecx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 96 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 50ch], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d28h]
        mov dword ptr [ebp - 510h], eax
        push 40h
        push 46h
        push 0
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 4D 6E EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb4e5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 514h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 514h]
        mov dword ptr [edx + ecx*4 + 10d2ch], eax
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x585bb45a
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 F0 5A 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5a
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 55: je 0x585bb57f
        __asm _emit 0x74
        __asm _emit 0x55
        push 132h
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 95 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10d28h]
        mov dword ptr [ebp - 51ch], edx
        push 40h
        push 57h
        push 6eh
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        push 0
        push 5f5e0ffh
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 D9 84 F4 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb589
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 520h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 520h]
        mov dword ptr [eax + 10d34h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10d2ch]
        mov dword ptr [ebp - 524h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 E0 9F 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10d2ch]
        mov dword ptr [ebp - 528h], eax
        push 0
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 4B A8 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10d34h]
        mov dword ptr [ebp - 52ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 9C 9F 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10d34h]
        mov dword ptr [ebp - 530h], ecx
        push 0
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 10 A8 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 50h
        ; Exact mapped bytes E8 CC 59 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 27: je 0x585bb675
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d28h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 23 93 1F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x93
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb67f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 534h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 534h]
        mov dword ptr [edx + 10d38h], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bb6b0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 7A: jge 0x585bb730
        __asm _emit 0x7d
        __asm _emit 0x7a
        push 58h
        ; Exact mapped bytes E8 47 59 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 2B: je 0x585bb6fe
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 1e0h
        push 34dh
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d38h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 1A B1 EC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb708
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 538h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 538h]
        mov dword ptr [eax + edx*4 + 10d3ch], ecx
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x585bb6a7
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bb742
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 7A: jge 0x585bb7c2
        __asm _emit 0x7d
        __asm _emit 0x7a
        push 54h
        ; Exact mapped bytes E8 B5 58 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 2B: je 0x585bb790
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 1e0h
        push 33eh
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10d38h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 98 6B EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb79a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 53ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 53ch]
        mov dword ptr [ecx + eax*4 + 10d44h], edx
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x585bb739
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bb7d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 7A: jge 0x585bb854
        __asm _emit 0x7d
        __asm _emit 0x7a
        push 54h
        ; Exact mapped bytes E8 23 58 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x58
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 2B: je 0x585bb822
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 1e0h
        push 34dh
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10d38h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 06 6B EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb82c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 540h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 540h]
        mov dword ptr [edx + ecx*4 + 10d4ch], eax
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x585bb7cb
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 A9 57 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x57
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 6C: je 0x585bb8dd
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 21e24h]
        ; Exact mapped bytes E8 61 06 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 544h], eax
        push 4ah
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 8E 92 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 548h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d38h]
        mov dword ptr [ebp - 54ch], eax
        push 40h
        push 244h
        push 377h
        mov ecx, dword ptr [ebp - 548h]
        push ecx
        mov edx, dword ptr [ebp - 54ch]
        push edx
        push 0
        push 98967fh
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 7B 81 F4 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bb8e7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 550h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 550h]
        mov dword ptr [ecx + 10d54h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10d4ch]
        mov dword ptr [ebp - 554h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 82 9C 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10d3ch]
        mov dword ptr [ebp - 558h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 5A 9C 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 10d3ch]
        mov dword ptr [ebp - 55ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes E8 32 9C 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 10d44h]
        mov dword ptr [ebp - 560h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes E8 0A 9C 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 10d4ch]
        mov dword ptr [ebp - 564h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 564h]
        ; Exact mapped bytes E8 E2 9B 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + 21ab1h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21ab4h], 0
        push 54h
        ; Exact mapped bytes E8 18 56 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x56
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 47: je 0x585bba49
        __asm _emit 0x74
        __asm _emit 0x47
        push 19h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 91 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 568h], eax
        push 2710h
        mov eax, dword ptr [ebp + 10h]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 200h
        push ecx
        mov edx, dword ptr [ebp - 568h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 DF 68 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bba53
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 56ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 56ch]
        mov dword ptr [edx + 10d98h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10d98h]
        mov dword ptr [ebp - 570h], edx
        push 101h
        mov ecx, dword ptr [ebp - 570h]
        ; Exact mapped bytes E8 1F 9B 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10d98h]
        mov dword ptr [ebp - 574h], ecx
        push 0
        mov ecx, dword ptr [ebp - 574h]
        ; Exact mapped bytes E8 93 A3 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d98h]
        mov dword ptr [ebp - 578h], eax
        push 0
        mov ecx, dword ptr [ebp - 578h]
        ; Exact mapped bytes E8 17 A4 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa4
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10d9ch], 0
        push 54h
        ; Exact mapped bytes E8 27 55 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x55
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 46: je 0x585bbb39
        __asm _emit 0x74
        __asm _emit 0x46
        push 1ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 90 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 57ch], eax
        push 2710h
        mov edx, dword ptr [ebp + 10h]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 160h
        push eax
        mov ecx, dword ptr [ebp - 57ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 EF 67 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbb43
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov eax, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 580h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 580h]
        mov dword ptr [ecx + 10da0h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10da0h]
        mov dword ptr [ebp - 584h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 2F 9A 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10da0h]
        mov dword ptr [ebp - 588h], eax
        push 0
        mov ecx, dword ptr [ebp - 588h]
        ; Exact mapped bytes E8 A3 A2 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa2
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10da0h]
        mov dword ptr [ebp - 58ch], edx
        push 0
        mov ecx, dword ptr [ebp - 58ch]
        ; Exact mapped bytes E8 27 A3 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 50h
        ; Exact mapped bytes E8 43 54 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 1F: je 0x585bbbf6
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 A2 8D 1F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbc00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 590h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 590h]
        mov dword ptr [ecx + 106e8h], edx
        push 1dbch
        ; Exact mapped bytes E8 DB 53 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x53
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 25: je 0x585bbc64
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 300h
        push 400h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 B4 7E FC FF: call 0x58583b10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbc6e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 594h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 594h]
        mov dword ptr [ecx + 106fch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 598h], ecx
        push 0
        mov ecx, dword ptr [ebp - 598h]
        ; Exact mapped bytes E8 37 A1 EC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 59ch], eax
        push 0f4240h
        push 0f4240h
        mov ecx, dword ptr [ebp - 59ch]
        ; Exact mapped bytes E8 33 A3 20 00: call 0x587c6000
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 106fch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 90 1F 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10720h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10728h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10724h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 1071ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10724h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10724h], edx
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10728h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10728h], edx
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 8D EC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 26ch], eax
        push 20h
        ; Exact mapped bytes E8 A4 52 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x52
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 2D: je 0x585bbda3
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 8C EC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5a0h], eax
        mov edx, dword ptr [ebp - 5a0h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 F5 F6 1F 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbdad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 5a4h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 5a4h]
        mov dword ptr [ecx + 264h], edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 66 2A 03 00: call 0x585ee840
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
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
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 1065ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21e44h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 2bch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 2c0h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 2c4h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 2c8h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 58ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10d5ch], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10d60h], 40000000h
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + 5ach], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 598h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 5a8h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bbea3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 0F 8D CC 01 00 00: jge 0x585bc079
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4 + 29ch], 0
        push 58h
        ; Exact mapped bytes E8 3F 51 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x51
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 22: je 0x585bbefd
        __asm _emit 0x74
        __asm _emit 0x22
        push 2ed6h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 1B A9 EC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbf07
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov ecx, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 5a8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 5a8h]
        mov dword ptr [eax + edx*4 + 2e4h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 2e4h]
        mov dword ptr [ebp - 5ach], ecx
        push 101h
        mov ecx, dword ptr [ebp - 5ach]
        ; Exact mapped bytes E8 63 96 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 2e4h]
        mov dword ptr [ebp - 5b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5b0h]
        ; Exact mapped bytes E8 D3 9E EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 8F 50 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x50
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 58: je 0x585bbfe3
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 24h]
        add edx, 2b8h
        push edx
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 8B EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5b4h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 2e4h]
        mov dword ptr [ebp - 5b8h], edx
        push 2ed6h
        push 0ah
        push -2
        mov eax, dword ptr [ebp - 5b4h]
        push eax
        mov ecx, dword ptr [ebp - 5b8h]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 45 63 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bbfed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 5bch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 5bch]
        mov dword ptr [ecx + eax*4 + 304h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 304h]
        mov dword ptr [ebp - 5c0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 5c0h]
        ; Exact mapped bytes E8 7D 95 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x95
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 304h]
        mov dword ptr [ebp - 5c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 5c4h]
        ; Exact mapped bytes E8 ED 9D EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 2e4h]
        mov dword ptr [ebp - 5c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 5c8h]
        ; Exact mapped bytes E8 6D 9E EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 21 FE FF FF: jmp 0x585bbe9a
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10d64h], 0ffffff9ch
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10670h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10674h], 0
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + 10688h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 106a0h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10694h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10698h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10684h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 106ach], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 106bch], 30h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 106b8h], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 106c0h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10de4h], 6
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10690h], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20de8h], 1
        push 0a0h
        ; Exact mapped bytes E8 C1 4E 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 13: je 0x585bc16c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 CC 47 F9 FF: call 0x58550930
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc176
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 6bch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 6bch]
        mov dword ptr [ecx + 20e74h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10ae4h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bc1b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 0F 8D B2 00 00 00: jge 0x585bc270
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3F 4E 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 3F: je 0x585bc21a
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 28h]
        add edx, 74h
        push edx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 89 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5d0h], eax
        push 40h
        push 26fh
        push 0
        mov eax, dword ptr [ebp - 5d0h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 0E 61 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc224
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov edx, dword ptr [ebp - 1e0h]
        mov dword ptr [ebp - 5d4h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 5d4h]
        mov dword ptr [ecx + eax*4 + 20f00h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 20f00h]
        mov dword ptr [ebp - 5d8h], edx
        push 4a38h
        mov ecx, dword ptr [ebp - 5d8h]
        ; Exact mapped bytes E8 16 9C EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x585bc1ab
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 20f00h]
        mov dword ptr [ebp - 5dch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5dch]
        ; Exact mapped bytes E8 18 93 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x93
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 20f00h]
        mov dword ptr [ebp - 5e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5e0h]
        ; Exact mapped bytes E8 83 9B EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 3C 4D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes 74 3D: je 0x585bc31b
        __asm _emit 0x74
        __asm _emit 0x3d
        push 10101h
        push 0
        push 0ffffffh
        push 28ah
        push 1c0h
        push 27bh
        push 29h
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 7D 3A F1 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov ecx, dword ptr [ebp - 1e8h]
        mov dword ptr [ebp - 5e4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 5e4h]
        mov dword ptr [edx + 20f08h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f08h]
        mov dword ptr [ebp - 5e8h], edx
        push 4e20h
        mov ecx, dword ptr [ebp - 5e8h]
        ; Exact mapped bytes E8 1D 9B EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        mov dword ptr [ebp - 5ech], ecx
        push 41h
        mov ecx, dword ptr [ebp - 5ech]
        ; Exact mapped bytes E8 71 FD EE FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20f08h]
        mov dword ptr [ebp - 5f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 5f0h]
        ; Exact mapped bytes E8 45 9A EC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0a0h
        ; Exact mapped bytes E8 5E 4C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 74 36: je 0x585bc3f2
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0ffffh
        push 2a8h
        push 3e8h
        push 262h
        push 14h
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 16 90 20 00: call 0x587c5400
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc3fc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov eax, dword ptr [ebp - 1f0h]
        mov dword ptr [ebp - 5f4h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 5f4h]
        mov dword ptr [ecx + 20f0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 5f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes E8 A9 99 EC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 5fch], eax
        push 10101h
        mov ecx, dword ptr [ebp - 5fch]
        ; Exact mapped bytes E8 BA 9A EC FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 600h], edx
        push 0ch
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes E8 4E B0 02 00: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 604h], ecx
        push 0bb8h
        mov ecx, dword ptr [ebp - 604h]
        ; Exact mapped bytes E8 7F 92 02 00: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 608h], eax
        push 4e20h
        mov ecx, dword ptr [ebp - 608h]
        ; Exact mapped bytes E8 D0 99 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 20f18h], 0
        push 0a0h
        ; Exact mapped bytes E8 3D 4B 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 1f4h], 0
        ; Exact mapped bytes 74 36: je 0x585bc513
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0ffff00h
        push 12ch
        push 320h
        push 0b4h
        push 6eh
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 F5 8E 20 00: call 0x587c5400
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc51d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, dword ptr [ebp - 1f8h]
        mov dword ptr [ebp - 60ch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 60ch]
        mov dword ptr [edx + 20f10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f10h]
        mov dword ptr [ebp - 610h], edx
        push 0
        mov ecx, dword ptr [ebp - 610h]
        ; Exact mapped bytes E8 88 98 EC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 614h], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 614h]
        ; Exact mapped bytes E8 99 99 EC FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20f10h]
        mov dword ptr [ebp - 618h], eax
        push 5
        mov ecx, dword ptr [ebp - 618h]
        ; Exact mapped bytes E8 2D AF 02 00: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f10h]
        mov dword ptr [ebp - 61ch], edx
        push 1388h
        mov ecx, dword ptr [ebp - 61ch]
        ; Exact mapped bytes E8 5E 91 02 00: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 620h], ecx
        push 4e20h
        mov ecx, dword ptr [ebp - 620h]
        ; Exact mapped bytes E8 AF 98 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0a0h
        ; Exact mapped bytes E8 28 4A 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4a
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 3ch
        cmp dword ptr [ebp - 1fch], 0
        ; Exact mapped bytes 74 39: je 0x585bc62b
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0ffffh
        push 12ch
        push 400h
        push 0b4h
        push 28ah
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 DD 8D 20 00: call 0x587c5400
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc635
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov ecx, dword ptr [ebp - 200h]
        mov dword ptr [ebp - 624h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 624h]
        mov dword ptr [edx + 20f14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f14h]
        mov dword ptr [ebp - 628h], edx
        push 0
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 70 97 EC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x97
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f14h]
        mov dword ptr [ebp - 62ch], ecx
        push 10101h
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 81 98 EC FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 20f14h]
        mov dword ptr [ebp - 630h], eax
        push 5
        mov ecx, dword ptr [ebp - 630h]
        ; Exact mapped bytes E8 15 AE 02 00: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20f14h]
        mov dword ptr [ebp - 634h], edx
        push 1388h
        mov ecx, dword ptr [ebp - 634h]
        ; Exact mapped bytes E8 46 90 02 00: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f14h]
        mov dword ptr [ebp - 638h], ecx
        push 4e20h
        mov ecx, dword ptr [ebp - 638h]
        ; Exact mapped bytes E8 97 97 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x97
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 198h
        ; Exact mapped bytes E8 10 49 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 3dh
        cmp dword ptr [ebp - 204h], 0
        ; Exact mapped bytes 74 1C: je 0x585bc726
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588abf20h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 92 3C 1C 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc730
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ebp - 63ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 63ch]
        mov dword ptr [eax + 21e2ch], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bc761
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 0F 8D BB 00 00 00: jge 0x585bc826
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 92 48 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20ch], eax
        mov byte ptr [ebp - 4], 3eh
        cmp dword ptr [ebp - 20ch], 0
        ; Exact mapped bytes 74 4B: je 0x585bc7d3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21e2ch]
        mov dword ptr [ebp - 640h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 640h]
        ; Exact mapped bytes E8 7A 83 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 644h], eax
        push 2ee1h
        push -3
        push 0
        mov eax, dword ptr [ebp - 644h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 55 5B EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc7dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 648h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 648h]
        mov dword ptr [ecx + eax*4 + 21e30h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax*4 + 21e30h]
        mov dword ptr [ebp - 64ch], edx
        push 0
        mov ecx, dword ptr [ebp - 64ch]
        ; Exact mapped bytes E8 20 96 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x585bc758
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 21e30h]
        mov dword ptr [ebp - 650h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 650h]
        ; Exact mapped bytes E8 62 8D 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 21e30h]
        mov dword ptr [ebp - 654h], eax
        push 101h
        mov ecx, dword ptr [ebp - 654h]
        ; Exact mapped bytes E8 3A 8D 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 83 47 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x47
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 214h], eax
        mov byte ptr [ebp - 4], 3fh
        cmp dword ptr [ebp - 214h], 0
        ; Exact mapped bytes 74 3A: je 0x585bc8d1
        __asm _emit 0x74
        __asm _emit 0x3a
        push 29h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 82 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 658h], eax
        push 5ah
        push 389h
        push 2
        mov ecx, dword ptr [ebp - 658h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 A7 E0 1F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc8db
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov eax, dword ptr [ebp - 218h]
        mov dword ptr [ebp - 65ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 65ch]
        mov dword ptr [ecx + 21e38h], edx
        push 0fch
        ; Exact mapped bytes E8 00 47 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 21ch], eax
        mov byte ptr [ebp - 4], 40h
        cmp dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes 74 3A: je 0x585bc954
        __asm _emit 0x74
        __asm _emit 0x3a
        push 29h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 81 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 660h], eax
        push 5ah
        push 3b1h
        push 2
        mov eax, dword ptr [ebp - 660h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 24 E0 1F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bc95e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov edx, dword ptr [ebp - 220h]
        mov dword ptr [ebp - 664h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 664h]
        mov dword ptr [eax + 21e3ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21e38h]
        mov dword ptr [ebp - 668h], eax
        push 2ee1h
        mov ecx, dword ptr [ebp - 668h]
        ; Exact mapped bytes E8 E4 94 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x94
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e3ch]
        mov dword ptr [ebp - 66ch], edx
        push 2ee1h
        mov ecx, dword ptr [ebp - 66ch]
        ; Exact mapped bytes E8 C5 94 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x94
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20f1ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10734h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 590h], 0
        mov eax, dword ptr [ebp - 20h]
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
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 40 89 58: call dword ptr [0x588940c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 298h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21010h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21014h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21008h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 2100ch], 0
        push 0d4h
        ; Exact mapped bytes E8 9E 45 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x45
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 224h], eax
        mov byte ptr [ebp - 4], 41h
        cmp dword ptr [ebp - 224h], 0
        ; Exact mapped bytes 74 27: je 0x585bcaa3
        __asm _emit 0x74
        __asm _emit 0x27
        push 40h
        push 0
        push 0
        push 154h
        push 0b4h
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 75 2A 0F 00: call 0x586af510
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bcaad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov ecx, dword ptr [ebp - 228h]
        mov dword ptr [ebp - 670h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 670h]
        mov dword ptr [edx + 21010h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21014h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bcaeb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 8
        ; Exact mapped bytes 0F 8D F8 00 00 00: jge 0x585bcbed
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 28h]
        mov byte ptr [eax + 634h], 0
        push 12ch
        ; Exact mapped bytes E8 F8 44 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 22ch], eax
        mov byte ptr [ebp - 4], 42h
        cmp dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes 74 25: je 0x585bcb47
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 01 83 15 00: call 0x58714e40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x83
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bcb51
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        mov eax, dword ptr [ebp - 230h]
        mov dword ptr [ebp - 674h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 674h]
        mov dword ptr [edx + ecx*4 + 21ac8h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 678h], eax
        push 4a38h
        mov ecx, dword ptr [ebp - 678h]
        ; Exact mapped bytes E8 E9 92 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 67ch], eax
        push 0
        mov ecx, dword ptr [ebp - 67ch]
        ; Exact mapped bytes E8 89 92 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 680h], eax
        push 0
        mov ecx, dword ptr [ebp - 680h]
        ; Exact mapped bytes E8 C9 91 EC FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4 + 220e8h], 0
        ; Exact mapped bytes E9 F5 FE FF FF: jmp 0x585bcae2
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 10 44 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28ch], eax
        mov byte ptr [ebp - 4], 43h
        cmp dword ptr [ebp - 28ch], 0
        ; Exact mapped bytes 74 3A: je 0x585bcc44
        __asm _emit 0x74
        __asm _emit 0x3a
        push 2c7h
        ; Exact mapped bytes 8B 0D C4 06 96 58: mov ecx, dword ptr [0x589606c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 7F EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 684h], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 684h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 E4 56 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bcc4e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        mov edx, dword ptr [ebp - 238h]
        mov dword ptr [ebp - 688h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 688h]
        mov dword ptr [eax + 10718h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10718h]
        mov dword ptr [ebp - 68ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 68ch]
        ; Exact mapped bytes E8 24 89 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x89
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10718h]
        mov dword ptr [ebp - 690h], edx
        push 0
        mov ecx, dword ptr [ebp - 690h]
        ; Exact mapped bytes E8 98 91 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 54 43 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 23ch], eax
        mov byte ptr [ebp - 4], 44h
        cmp dword ptr [ebp - 23ch], 0
        ; Exact mapped bytes 74 37: je 0x585bccfd
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        ; Exact mapped bytes 8B 0D B4 06 96 58: mov ecx, dword ptr [0x589606b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 7E EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 694h], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 694h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 2B 56 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bcd07
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        mov edx, dword ptr [ebp - 240h]
        mov dword ptr [ebp - 698h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 698h]
        mov dword ptr [eax + 284h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 284h]
        mov dword ptr [ebp - 69ch], eax
        push 40h
        mov ecx, dword ptr [ebp - 69ch]
        ; Exact mapped bytes E8 FE 87 1F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 6a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 6a0h]
        ; Exact mapped bytes E8 42 90 EC FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 6a4h], ecx
        push 2af8h
        mov ecx, dword ptr [ebp - 6a4h]
        ; Exact mapped bytes E8 03 91 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 284h]
        mov dword ptr [ebp - 6a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 6a8h]
        ; Exact mapped bytes E8 07 90 EC FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 6ach], edx
        push 2af8h
        mov ecx, dword ptr [ebp - 6ach]
        ; Exact mapped bytes E8 C8 90 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 6b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 6b0h]
        ; Exact mapped bytes E8 0C 91 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20f20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20f24h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10700h], 3e8h
        push 30h
        ; Exact mapped bytes E8 02 42 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 244h], eax
        mov byte ptr [ebp - 4], 45h
        cmp dword ptr [ebp - 244h], 0
        ; Exact mapped bytes 74 22: je 0x585bce3a
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 CE 63 20 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bce44
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        mov ecx, dword ptr [ebp - 248h]
        mov dword ptr [ebp - 6b4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 6b4h]
        mov dword ptr [edx + 10d6ch], eax
        push 30h
        ; Exact mapped bytes E8 9A 41 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x41
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24ch], eax
        mov byte ptr [ebp - 4], 46h
        cmp dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes 74 22: je 0x585bcea2
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 66 63 20 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bceac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        mov ecx, dword ptr [ebp - 250h]
        mov dword ptr [ebp - 6b8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 6b8h]
        mov dword ptr [edx + 10d70h], eax
        push 30h
        ; Exact mapped bytes E8 32 41 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x41
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 254h], eax
        mov byte ptr [ebp - 4], 47h
        cmp dword ptr [ebp - 254h], 0
        ; Exact mapped bytes 74 22: je 0x585bcf0a
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 FE 62 20 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bcf14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        mov ecx, dword ptr [ebp - 258h]
        mov dword ptr [ebp - 7ach], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 7ach]
        mov dword ptr [edx + 10d74h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10d6ch]
        mov dword ptr [ecx + 10d68h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10d78h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10d7ch], 0bh
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10d80h], 14h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10d84h], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 10d88h], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10d8ch], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21004h], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 20ff8h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21000h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 10c00h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21a7ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21a80h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21974h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 294h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21a84h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 5b0h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bd027
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 7D 13: jge 0x585bd040
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + eax*4 + 5b4h], 0
        ; Exact mapped bytes EB DE: jmp 0x585bd01e
        __asm _emit 0xeb
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21ab8h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21abch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21ac0h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21ac4h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21e0ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21e14h], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21e1ch], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21ae8h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21ebch], 2
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21ec0h], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21ef4h], 0ffffffffh
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 2E FD 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 21edch
        push edx
        ; Exact mapped bytes E8 18 FD 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 70h
        ; Exact mapped bytes E8 02 3F 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3f
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 25ch], eax
        mov byte ptr [ebp - 4], 48h
        cmp dword ptr [ebp - 25ch], 0
        ; Exact mapped bytes 74 3C: je 0x585bd154
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0
        push 0
        push 0b9b9b9h
        push 28ah
        push 1c0h
        push 27bh
        push 0b4h
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 64 52 EC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd15e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ebp - 6c0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 6c0h]
        mov dword ptr [eax + 21efch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 6c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 6c4h]
        ; Exact mapped bytes E8 47 8D EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 6c8h], edx
        push 4e20h
        mov ecx, dword ptr [ebp - 6c8h]
        ; Exact mapped bytes E8 C8 8C EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 10ae8h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 21e10h], 0
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + 21018h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bd1ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0ah
        ; Exact mapped bytes 7D 3A: jge 0x585bd22e
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx*8 + 328h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*8 + 328h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        ; Exact mapped bytes EB B7: jmp 0x585bd1e5
        __asm _emit 0xeb
        __asm _emit 0xb7
        push 0a4h
        ; Exact mapped bytes E8 CC 3D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 264h], eax
        mov byte ptr [ebp - 4], 49h
        cmp dword ptr [ebp - 264h], 0
        ; Exact mapped bytes 74 1F: je 0x585bd26d
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 4B 48 F3 FF: call 0x584f1ab0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd277
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        mov ecx, dword ptr [ebp - 268h]
        mov dword ptr [ebp - 6cch], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 6cch]
        mov dword ptr [edx + 21e20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e20h]
        mov dword ptr [ebp - 6d0h], edx
        push 5208h
        mov ecx, dword ptr [ebp - 6d0h]
        ; Exact mapped bytes E8 CB 8B EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 50h
        ; Exact mapped bytes E8 47 3D 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3d
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 26ch], eax
        mov byte ptr [ebp - 4], 4ah
        cmp dword ptr [ebp - 26ch], 0
        ; Exact mapped bytes 74 21: je 0x585bd2f4
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 A4 76 1F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd2fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [ebp - 6d4h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 6d4h]
        mov dword ptr [edx + 21e84h], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bd32f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x585bd3dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C4 3C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 274h], eax
        mov byte ptr [ebp - 4], 4bh
        cmp dword ptr [ebp - 274h], 0
        ; Exact mapped bytes 74 54: je 0x585bd3aa
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 28h]
        add edx, 52h
        push edx
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 77 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x77
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 6d8h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 6dch], ecx
        push 40h
        push 227h
        push 34fh
        mov edx, dword ptr [ebp - 6d8h]
        push edx
        mov eax, dword ptr [ebp - 6dch]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 7E 4F EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd3b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 278h], 0
        mov ecx, dword ptr [ebp - 278h]
        mov dword ptr [ebp - 6e0h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 6e0h]
        mov dword ptr [eax + edx*4 + 21e88h], ecx
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x585bd326
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585bd3ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x585bd49f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 02 3C 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 27ch], eax
        mov byte ptr [ebp - 4], 4ch
        cmp dword ptr [ebp - 27ch], 0
        ; Exact mapped bytes 74 55: je 0x585bd46d
        __asm _emit 0x74
        __asm _emit 0x55
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 76 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 6e4h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 6e8h], ecx
        push 22ch
        imul edx, dword ptr [ebp - 28h], 2dh
        add edx, 35ch
        push edx
        push 2
        mov eax, dword ptr [ebp - 6e4h]
        push eax
        mov ecx, dword ptr [ebp - 6e8h]
        push ecx
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 0B D5 1F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd477
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 280h], 0
        mov edx, dword ptr [ebp - 280h]
        mov dword ptr [ebp - 6ech], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 6ech]
        mov dword ptr [ecx + eax*4 + 21e90h], edx
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x585bd3e5
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 5E 3B 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 284h], eax
        mov byte ptr [ebp - 4], 4dh
        cmp dword ptr [ebp - 284h], 0
        ; Exact mapped bytes 74 4F: je 0x585bd50b
        __asm _emit 0x74
        __asm _emit 0x4f
        push 13h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 76 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 6f0h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 6f4h], ecx
        push 40h
        push 227h
        push 335h
        mov edx, dword ptr [ebp - 6f0h]
        push edx
        mov eax, dword ptr [ebp - 6f4h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 0D 93 EC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x93
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd515
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ebp - 6f8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 6f8h]
        mov dword ptr [edx + 21e98h], eax
        push 58h
        ; Exact mapped bytes E8 C9 3A 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3a
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2e4h], eax
        mov byte ptr [ebp - 4], 4eh
        cmp dword ptr [ebp - 2e4h], 0
        ; Exact mapped bytes 74 4F: je 0x585bd5a0
        __asm _emit 0x74
        __asm _emit 0x4f
        push 12h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 75 EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 6fch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e84h]
        mov dword ptr [ebp - 700h], edx
        push 40h
        push 227h
        push 335h
        mov eax, dword ptr [ebp - 6fch]
        push eax
        mov ecx, dword ptr [ebp - 700h]
        push ecx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 78 92 EC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd5aa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ebp - 704h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 704h]
        mov dword ptr [eax + 21e9ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21ea0h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 21e88h]
        mov dword ptr [ebp - 708h], eax
        push 0
        mov ecx, dword ptr [ebp - 708h]
        ; Exact mapped bytes E8 45 88 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 70ch], edx
        push 0
        mov ecx, dword ptr [ebp - 70ch]
        ; Exact mapped bytes E8 29 88 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 21e88h]
        mov dword ptr [ebp - 710h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 710h]
        ; Exact mapped bytes E8 71 7F 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 714h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 714h]
        ; Exact mapped bytes E8 52 7F 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7f
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 9E 39 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 294h], eax
        mov byte ptr [ebp - 4], 4fh
        cmp dword ptr [ebp - 294h], 0
        ; Exact mapped bytes 74 4F: je 0x585bd6cb
        __asm _emit 0x74
        __asm _emit 0x4f
        push 78h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 74 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 718h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21e84h]
        mov dword ptr [ebp - 71ch], ecx
        push 40h
        push 227h
        push 34fh
        mov edx, dword ptr [ebp - 718h]
        push edx
        mov eax, dword ptr [ebp - 71ch]
        push eax
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 5D 4C EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd6d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
        mov ecx, dword ptr [ebp - 298h]
        mov dword ptr [ebp - 720h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 720h]
        mov dword ptr [edx + 21each], eax
        push 54h
        ; Exact mapped bytes E8 09 39 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 29ch], eax
        mov byte ptr [ebp - 4], 50h
        cmp dword ptr [ebp - 29ch], 0
        ; Exact mapped bytes 74 4F: je 0x585bd760
        __asm _emit 0x74
        __asm _emit 0x4f
        push 79h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 74 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e84h]
        mov dword ptr [ebp - 728h], edx
        push 40h
        push 227h
        push 34fh
        mov eax, dword ptr [ebp - 724h]
        push eax
        mov ecx, dword ptr [ebp - 728h]
        push ecx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 C8 4B EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd76a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [ebp - 72ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 72ch]
        mov dword ptr [eax + 21eb0h], ecx
        push 54h
        ; Exact mapped bytes E8 74 38 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x38
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2a4h], eax
        mov byte ptr [ebp - 4], 51h
        cmp dword ptr [ebp - 2a4h], 0
        ; Exact mapped bytes 74 2B: je 0x585bd7d1
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 24ah
        push 34fh
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21e84h]
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 57 4B EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd7db
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a8h], 0
        mov ecx, dword ptr [ebp - 2a8h]
        mov dword ptr [ebp - 730h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 730h]
        mov dword ptr [edx + 21eb4h], eax
        push 54h
        ; Exact mapped bytes E8 03 38 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x38
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ach], eax
        mov byte ptr [ebp - 4], 52h
        cmp dword ptr [ebp - 2ach], 0
        ; Exact mapped bytes 74 2B: je 0x585bd842
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 24ah
        push 34fh
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21e84h]
        push edx
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 E6 4A EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd84c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 0
        mov eax, dword ptr [ebp - 2b0h]
        mov dword ptr [ebp - 734h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 734h]
        mov dword ptr [ecx + 21eb8h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21each]
        mov dword ptr [ebp - 738h], ecx
        push 0
        mov ecx, dword ptr [ebp - 738h]
        ; Exact mapped bytes E8 B9 85 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21each]
        mov dword ptr [ebp - 73ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 73ch]
        ; Exact mapped bytes E8 0A 7D 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7d
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21eb4h]
        mov dword ptr [ebp - 740h], edx
        push 0
        mov ecx, dword ptr [ebp - 740h]
        ; Exact mapped bytes E8 7E 85 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21eb4h]
        mov dword ptr [ebp - 744h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 744h]
        ; Exact mapped bytes E8 CF 7C 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 220c8h], 0ffffffffh
        push 7ff5h
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 85 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 FE 36 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x36
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b4h], eax
        mov byte ptr [ebp - 4], 53h
        cmp dword ptr [ebp - 2b4h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x585bd9b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 7D ED FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes 66 89 45 CE: mov word ptr [ebp - 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xce
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 70 EC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x70
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 748h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 70 EC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x70
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 74ch], edx
        push 10eh
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 71 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x71
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 750h], eax
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 754h], eax
        movzx ecx, word ptr [ebp - 32h]
        push ecx
        mov edx, dword ptr [ebp - 748h]
        push edx
        mov eax, dword ptr [ebp - 74ch]
        push eax
        mov ecx, dword ptr [ebp - 750h]
        push ecx
        mov edx, dword ptr [ebp - 754h]
        push edx
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 77 49 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x49
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bd9bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b8h], 0
        mov eax, dword ptr [ebp - 2b8h]
        mov dword ptr [ebp - 758h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 758h]
        mov dword ptr [eax + edx + 220cch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 220cch]
        mov dword ptr [ebp - 75ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 75ch]
        ; Exact mapped bytes E8 A5 7B 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 760h], eax
        push 0
        mov ecx, dword ptr [ebp - 760h]
        ; Exact mapped bytes E8 B0 84 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CC 35 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2bch], eax
        mov byte ptr [ebp - 4], 54h
        cmp dword ptr [ebp - 2bch], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x585bdae4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 7C ED FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 1
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 6F EC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 764h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 6F EC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6f
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 768h], eax
        push 10fh
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 70 EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 76ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 770h], ecx
        movzx edx, word ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 764h]
        push eax
        mov ecx, dword ptr [ebp - 768h]
        push ecx
        mov edx, dword ptr [ebp - 76ch]
        push edx
        mov eax, dword ptr [ebp - 770h]
        push eax
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 44 48 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bdaee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c0h], 0
        mov ecx, dword ptr [ebp - 2c0h]
        mov dword ptr [ebp - 774h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 774h]
        mov dword ptr [eax + edx + 220cch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 220cch]
        mov dword ptr [ebp - 778h], ecx
        push 0
        mov ecx, dword ptr [ebp - 778h]
        ; Exact mapped bytes E8 A5 83 EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 0b0h
        ; Exact mapped bytes E8 BE 34 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2c4h], eax
        mov byte ptr [ebp - 4], 55h
        cmp dword ptr [ebp - 2c4h], 0
        ; Exact mapped bytes 74 13: je 0x585bdb6f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 89 F5 FC FF: call 0x5858d0f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bdb79
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 0
        mov edx, dword ptr [ebp - 2c8h]
        mov dword ptr [ebp - 77ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 77ch]
        mov dword ptr [eax + 220dch], ecx
        push 7ch
        ; Exact mapped bytes E8 65 34 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2cch], eax
        mov byte ptr [ebp - 4], 56h
        cmp dword ptr [ebp - 2cch], 0
        ; Exact mapped bytes 74 13: je 0x585bdbc8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 60 C2 F0 FF: call 0x584c9e20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bdbd2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d0h], 0
        mov edx, dword ptr [ebp - 2d0h]
        mov dword ptr [ebp - 780h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 780h]
        mov dword ptr [eax + 220e0h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 21f00h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 21f04h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 8A A4 1A 02 00: mov word ptr [edx + 0x21aa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E6 33 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x33
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2d4h], eax
        mov byte ptr [ebp - 4], 57h
        cmp dword ptr [ebp - 2d4h], 0
        ; Exact mapped bytes 74 40: je 0x585bdc74
        __asm _emit 0x74
        __asm _emit 0x40
        push 0c5h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 6E EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 784h], eax
        push 40h
        push 96h
        push 184h
        mov eax, dword ptr [ebp - 784h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 B4 46 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bdc7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d8h], 0
        mov edx, dword ptr [ebp - 2d8h]
        mov dword ptr [ebp - 788h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 788h]
        mov dword ptr [eax + 21a94h], ecx
        push 54h
        ; Exact mapped bytes E8 60 33 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x33
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2dch], eax
        mov byte ptr [ebp - 4], 58h
        cmp dword ptr [ebp - 2dch], 0
        ; Exact mapped bytes 74 40: je 0x585bdcfa
        __asm _emit 0x74
        __asm _emit 0x40
        push 0c6h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 6E EC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 78ch], eax
        push 40h
        push 96h
        push 184h
        mov edx, dword ptr [ebp - 78ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 2E 46 EC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bdd04
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e0h], 0
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [ebp - 790h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 790h]
        mov dword ptr [edx + 21a98h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21a94h]
        mov dword ptr [ebp - 794h], edx
        push 0
        mov ecx, dword ptr [ebp - 794h]
        ; Exact mapped bytes E8 51 82 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21a98h]
        mov dword ptr [ebp - 798h], ecx
        push 0
        mov ecx, dword ptr [ebp - 798h]
        ; Exact mapped bytes E8 35 82 EC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21a94h]
        mov dword ptr [ebp - 79ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 79ch]
        ; Exact mapped bytes E8 36 78 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 21a98h]
        mov dword ptr [ebp - 7a0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 7a0h]
        ; Exact mapped bytes E8 17 78 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 21a94h]
        mov dword ptr [ebp - 7a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 7a4h]
        ; Exact mapped bytes E8 8B 80 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 21a98h]
        mov dword ptr [ebp - 7a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 7a8h]
        ; Exact mapped bytes E8 6F 80 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F7 6F 02 00: call 0x585e4dd0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 57 32 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
