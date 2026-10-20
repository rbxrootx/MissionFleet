// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771F30 .. +0x1D67 bytes.
extern "C" __declspec(naked) void FUN_58771f30_58771F30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588903bah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 370h
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
        mov dword ptr [ebp - 10h], ecx
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 02 D1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b5778h
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, 1f4h
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        mov eax, 320h
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        push 54h
        ; Exact mapped bytes E8 56 F0 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3B: je 0x58771ff9
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0f2h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 2B D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        movzx ecx, word ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C 03 D1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58772000
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 174h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 7B 35 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 C7 EF 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3B: je 0x58772088
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 2A D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9D 02 D1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877208f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 17ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 180h], edx
        push 0dch
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 7C 34 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 38 EF 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 3B: je 0x58772117
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 2A D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0E 02 D1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877211e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 188h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 18ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 5D 34 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A9 EE 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3E: je 0x587721a9
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0f3h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 29 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7C 01 D1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x587721b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 194h]
        mov dword ptr [ecx + 64h], edx
        push 0ach
        ; Exact mapped bytes E8 31 EE 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 66: je 0x58772249
        __asm _emit 0x74
        __asm _emit 0x66
        push 4
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 28 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bdh
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9C 9A D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58772250
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ecx + 10ch], edx
        push 0ach
        ; Exact mapped bytes E8 8E ED 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6C: je 0x587722f2
        __asm _emit 0x74
        __asm _emit 0x6c
        push 1bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 28 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        push 15h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 27 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F3 99 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x587722f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 1b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1b4h]
        mov dword ptr [eax + 11ch], ecx
        push 0ach
        ; Exact mapped bytes E8 E5 EC 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 68: je 0x58772397
        __asm _emit 0x74
        __asm _emit 0x68
        push 1ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 27 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 149h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1bch]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 4E 99 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877239e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 1c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + 114h], ecx
        push 0ach
        ; Exact mapped bytes E8 40 EC 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 68: je 0x5877243c
        __asm _emit 0x74
        __asm _emit 0x68
        push 1dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 26 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 149h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 92h
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A9 98 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x98
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58772443
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [eax + 118h], ecx
        push 0ach
        ; Exact mapped bytes E8 9B EB 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 66: je 0x587724df
        __asm _emit 0x74
        __asm _emit 0x66
        push 0
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 26 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 149h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 61h
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 06 98 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x587724e6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [eax + 110h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 1e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 8F 30 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 1ech], edx
        push 101h
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 70 30 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 1f0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 51 30 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 9D EA 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 2B: je 0x587725a2
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ech
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 28h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 73 42 D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x587725a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + 7ch], edx
        push 58h
        ; Exact mapped bytes E8 3B EA 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 2C: je 0x58772605
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 127h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 10 42 D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877260c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + 78h], eax
        push 54h
        ; Exact mapped bytes E8 D8 E9 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 47: je 0x58772683
        __asm _emit 0x74
        __asm _emit 0x47
        push 132h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 24 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x24
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 0F BF 4D E8: movsx ecx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe8
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 14ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A2 FC D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x5877268a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [ecx + 124h], edx
        push 54h
        ; Exact mapped bytes E8 57 E9 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4D: je 0x58772710
        __asm _emit 0x74
        __asm _emit 0x4d
        push 131h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 24 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 0F BF 45 E8: movsx eax, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe8
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 18 FC D0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877271a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 208h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [eax + 120h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 20ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 58 2E 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 210h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 C9 2D 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 82 E8 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 6E: je 0x58772806
        __asm _emit 0x74
        __asm _emit 0x6e
        push 31h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 23 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x23
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 21ch], ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 1eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 165h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2dh
        push ecx
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E2 94 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772810
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 220h]
        mov dword ptr [ecx + 128h], edx
        push 0ach
        ; Exact mapped bytes E8 CB E7 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 6E: je 0x587728bd
        __asm _emit 0x74
        __asm _emit 0x6e
        push 32h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 22 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 22ch], ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 1eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 165h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 7ch
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov edx, dword ptr [ebp - 22ch]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 2B 94 D5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587728c7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 230h]
        mov dword ptr [ecx + 12ch], edx
        push 70h
        ; Exact mapped bytes E8 17 E7 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 4D: je 0x58772950
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 188h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 178h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12h
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 68 FA D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877295a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 234h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [ecx + 130h], edx
        push 70h
        ; Exact mapped bytes E8 84 E6 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 4D: je 0x587729e3
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 19bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 18ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12h
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D5 F9 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587729ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 238h]
        mov dword ptr [ecx + 134h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 23ch], ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 52 34 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 240h], ecx
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 30 34 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 AC E5 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 4D: je 0x58772abb
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 20 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 42h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 11h
        push edx
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0fa0h
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 9D 0F D9 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772ac5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 248h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 248h]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 24ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 7D 33 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x33
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 F9 E4 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 4D: je 0x58772b6e
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 1F D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 59h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 11h
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0fa0h
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 EA 0E D9 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772b78
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 254h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 258h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 CA 32 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x32
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 46 E4 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 4D: je 0x58772c21
        __asm _emit 0x74
        __asm _emit 0x4d
        push 9
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 1F D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 42h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0fa0h
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 37 0E D9 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772c2b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 264h], ecx
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 14 32 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x32
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 90 E3 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 48: je 0x58772cd2
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 61h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ceh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 11h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
        push eax
        ; Exact mapped bytes 8B 0D 34 20 96 58: mov ecx, dword ptr [0x58962034]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 E6 F6 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772cdc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 268h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 268h]
        mov dword ptr [ecx + 0b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 26ch], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 66 31 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 E2 E2 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 48: je 0x58772d80
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ceh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 21h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 32h
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 38 F6 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772d8a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 270h]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 274h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 B8 30 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x30
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 68h
        ; Exact mapped bytes E8 34 E2 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 1D: je 0x58772e03
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 65 DA FF FF: call 0x58770860
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772e0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 278h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 27ch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 35 30 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 AE E1 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 41: je 0x58772ead
        __asm _emit 0x74
        __asm _emit 0x41
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 1C D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 34h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        push 6
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 CB 7A 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772eb7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 284h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 284h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 288h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 8B 2F D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 28ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 9C 26 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 290h], edx
        push 0
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 10 2F D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 C9 E0 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 44: je 0x58772f95
        __asm _emit 0x74
        __asm _emit 0x44
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 1B D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 96h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E3 79 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58772f9f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 298h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [edx + 0c0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 29ch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 A3 2E D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 2a0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 B4 25 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 28 2E D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2e
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 E4 DF 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 4C: je 0x58773082
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0eeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15fh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 37h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 36 F3 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877308c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a8h]
        mov dword ptr [eax + 0f0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 2ach], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 B6 2D D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 2F DF 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 49: je 0x58773134
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 19 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x19
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0eah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 93h
        push eax
        push 7
        mov ecx, dword ptr [ebp - 2b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 44 78 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877313e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b4h]
        mov dword ptr [ecx + 0f8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 2b8h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 04 2D D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2d
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 7D DE 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 49: je 0x587731e6
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 19 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 93h
        push ecx
        push 7
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 92 77 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587731f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c0h]
        mov dword ptr [edx + 0fch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 2c4h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 52 2C D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 CE DD 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 4D: je 0x58773299
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 15fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 118h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 37h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 1F F1 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587732a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 2c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c8h]
        mov dword ptr [edx + 0f4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 2cch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 9F 2B D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 18 DD 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 4A: je 0x5877334c
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 17 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 129h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 93h
        push edx
        push 7
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 2C 76 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773356
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 2d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2d4h]
        mov dword ptr [eax + 100h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 2d8h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 EC 2A D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 65 DC 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 49: je 0x587733fe
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 17 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 136h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 89h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 7A 75 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773408
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 2e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e0h]
        mov dword ptr [ecx + 108h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 2e4h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 3A 2A D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 B3 DB 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xdb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 49: je 0x587734b0
        __asm _emit 0x74
        __asm _emit 0x49
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 16 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 136h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 93h
        push ecx
        push 7
        mov edx, dword ptr [ebp - 2e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C8 74 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587734ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 2ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + 104h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 2f0h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 88 29 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 04 DB 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 4E: je 0x58773564
        __asm _emit 0x74
        __asm _emit 0x4e
        push 141414h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 23h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d2h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 87h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 54 EE D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877356e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 2f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 2f8h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 D4 28 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 4D DA 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 44: je 0x58773611
        __asm _emit 0x74
        __asm _emit 0x44
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 14 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 62h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4eh
        push edx
        push 4
        mov eax, dword ptr [ebp - 2fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 67 73 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877361b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 300h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 300h]
        mov dword ptr [eax + 0d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 304h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 27 28 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 308h], eax
        push 101h
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 38 1F 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 30ch], edx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 AC 27 D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 65 D9 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 47: je 0x587736fc
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 14 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 62h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 80h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 7C 72 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773706
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 314h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 318h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 3C 27 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 31ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 4D 1E 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 320h], ecx
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 C1 26 D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58773792
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 0F 8D C2 02 00 00: jge 0x58773a5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 5E D8 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 46: je 0x58773802
        __asm _emit 0x74
        __asm _emit 0x46
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 13 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 4bh
        push eax
        imul ecx, dword ptr [ebp - 1ch], 32h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 64h]
        push eax
        push 6
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 76 71 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877380c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 328h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 328h]
        mov dword ptr [edx + ecx*4 + 0c8h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0c8h]
        mov dword ptr [ebp - 32ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 2E 26 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x26
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c8h]
        mov dword ptr [ebp - 330h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 3B 1D 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c8h]
        mov dword ptr [ebp - 334h], ecx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 AB 25 D1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x25
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 64 D7 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 4C: je 0x58773902
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 12 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        imul edx, dword ptr [ebp - 1ch], 0eh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 94h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4eh
        push edx
        push 3
        mov eax, dword ptr [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 76 70 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5877390c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 33ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 33ch]
        mov dword ptr [ecx + eax*4 + 0e0h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 340h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 2E 25 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x25
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 A7 D6 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 4F: je 0x587739c2
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 11 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        imul ecx, dword ptr [ebp - 1ch], 0eh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 94h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 85h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 B6 6F 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587739cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 348h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 348h]
        mov dword ptr [eax + edx*4 + 0e8h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e8h]
        mov dword ptr [ebp - 34ch], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 6E 24 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x24
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 350h], edx
        push 101h
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 7B 1B 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e8h]
        mov dword ptr [ebp - 354h], edx
        push 101h
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 58 1B 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2B FD FF FF: jmp 0x58773789
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 9C D5 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 46: je 0x58773ac4
        __asm _emit 0x74
        __asm _emit 0x46
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 10 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 87h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ch
        push ecx
        push 3
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 B4 6E 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773ace
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 35ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 35ch]
        mov dword ptr [edx + 0d8h], eax
        push 0fch
        ; Exact mapped bytes E8 0D D5 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 47: je 0x58773b54
        __asm _emit 0x74
        __asm _emit 0x47
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 0F D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b0h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3ch
        push edx
        push 3
        mov eax, dword ptr [ebp - 360h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 24 6E 04 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773b5e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 364h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 364h]
        mov dword ptr [eax + 0dch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 368h], eax
        push 101h
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 14 1A 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 36ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 F5 19 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 370h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 A6 22 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x22
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 374h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 87 22 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 20h
        ; Exact mapped bytes E8 03 D4 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 2D: je 0x58773c44
        __asm _emit 0x74
        __asm _emit 0x2d
        push 7
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 0E D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        mov eax, dword ptr [ebp - 378h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 54 78 04 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58773c4e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 37ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 37ch]
        mov dword ptr [edx + 138h], eax
        mov ecx, 0a9h
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 3C 01 00 00: mov word ptr [edx + 0x13c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
