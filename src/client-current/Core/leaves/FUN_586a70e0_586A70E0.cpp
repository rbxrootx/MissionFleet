// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A70E0 .. +0xD01 bytes.
extern "C" __declspec(naked) void FUN_586a70e0_586A70E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b0f7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 178h
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
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 48 B1 DD FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b0a70h
        mov dword ptr [ebp - 80h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 80h], 0ah
        mov dword ptr [ebp - 1ch], 23h
        mov dword ptr [ebp - 18h], 10h
        push 54h
        ; Exact mapped bytes E8 9B 9E 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x586a7199
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8C B1 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a71a0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 DB E3 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 52 EC DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0E 9E 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3E: je 0x586a7244
        __asm _emit 0x74
        __asm _emit 0x3e
        push 98h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A D9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        movzx ecx, word ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E1 B0 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a724b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + 64h], edx
        push 54h
        ; Exact mapped bytes E8 99 9D 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 26: je 0x586a72a1
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 84 B0 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a72a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D3 E2 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 4A EB DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 06 9D 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 26: je 0x586a7334
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F1 AF DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a733b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 40 E2 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 B7 EA DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 70 9C 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 6D: je 0x586a7411
        __asm _emit 0x74
        __asm _emit 0x6d
        push 21h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F D7 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 104h
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D4 48 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7418
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0e8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 63 E1 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 AC 9B 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9b
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 40: je 0x586a74a8
        __asm _emit 0x74
        __asm _emit 0x40
        push 2ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B D6 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 8ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 103h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CD 34 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a74af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0f4h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 0bb8h
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 91 E9 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 0D 9B 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9b
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 2B: je 0x586a7532
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d7h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E3 F2 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7539
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 74h], ecx
        push 54h
        ; Exact mapped bytes E8 AB 9A 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 2E: je 0x586a7597
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0aah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d7h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8E AD DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a759e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 100h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DD DF 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 54 E8 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 108h], edx
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A8 DF 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 10ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 1F E8 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 16 7F DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 114h], edx
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 FD 7E DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 118h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 41 DF 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 8D 99 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 52: je 0x586a76d9
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e0h
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1a4h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c6h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0ech]
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
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DC AC DD FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a76e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 120h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 68 E7 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 E4 98 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 42: je 0x586a7772
        __asm _emit 0x74
        __asm _emit 0x42
        push 20h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 D3 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 23h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A3 F0 DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7779
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 128h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 9F 7D DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 130h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E0 DD 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 2C 98 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 2C: je 0x586a7814
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 1eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c4h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 11 AB DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xab
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a781b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8D E6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a7866
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 0F 8D AF 03 00 00: jge 0x586a7c1f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 8A 97 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 49: je 0x586a78d3
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
        ; Exact mapped bytes E8 36 D2 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 4
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 49h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 64h]
        push edx
        push 4
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A2 30 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586a78da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 140h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 8ch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [edx + ecx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 4A E5 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 148h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 4C DC 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 95 96 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4F: je 0x586a79d4
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
        ; Exact mapped bytes E8 3B D1 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov edx, dword ptr [ebp - 14h]
        shl edx, 4
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 49h]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 28h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A4 2F 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a79de
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 150h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 154h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 43 E4 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 158h], edx
        push 101h
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 45 DB 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 91 95 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 4E: je 0x586a7ad7
        __asm _emit 0x74
        __asm _emit 0x4e
        push 23h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A D0 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 48h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 28h
        push ecx
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 41 ED DD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7ae1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 160h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + edx*4 + 0e4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 164h], ecx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 2C 7A DF FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 168h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 36 E3 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe3
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 B2 94 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x94
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 5E: je 0x586a7bc6
        __asm _emit 0x74
        __asm _emit 0x5e
        push 0b7h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 CF DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 7eh]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 9c4h
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 92 BE E5 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7bd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + ecx*4 + 110h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 67 E2 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3E FC FF FF: jmp 0x586a785d
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 DE 93 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 49: je 0x586a7c85
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e2h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2ah
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 33 A7 DD FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7c8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 178h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [eax + 13ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 B0 E1 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe1
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a7ce3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x586a7dbd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 10 93 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 57: je 0x586a7d61
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0ffffffh
        imul eax, dword ptr [ebp - 14h], 0bh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 9ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0f2h
        push eax
        imul ecx, dword ptr [ebp - 14h], 0bh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 8ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ah
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
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 57 A6 DD FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7d6b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 180h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + edx*4 + 140h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 140h]
        mov dword ptr [ebp - 184h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C9 E0 DD FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x586a7cda
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 08 00 00: call 0x586a8600
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
