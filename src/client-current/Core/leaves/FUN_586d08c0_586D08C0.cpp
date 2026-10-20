// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D08C0 .. +0x50C bytes.
extern "C" __declspec(naked) void FUN_586d08c0_586D08C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c2a2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
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
        ; Exact mapped bytes E8 64 19 DB FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x19
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b2204h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d092e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 6E: jge 0x586d09a2
        __asm _emit 0x7d
        __asm _emit 0x6e
        push 54h
        ; Exact mapped bytes E8 C9 06 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 37: je 0x586d0982
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 14h]
        add edx, 192h
        push edx
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 41 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A3 19 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x19
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0989
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + edx*4 + 60h], ecx
        ; Exact mapped bytes EB 83: jmp 0x586d0925
        __asm _emit 0xeb
        __asm _emit 0x83
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 44h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EF 4B 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 48h], edx
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D0 4B 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 4ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B2 4B 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 50h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 23 4B 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 54h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 04 4B 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 58h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E6 4A 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0a6d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 0F 01 00 00: jge 0x586d0b86
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10ch
        ; Exact mapped bytes E8 83 05 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 4F: je 0x586d0ae0
        __asm _emit 0x74
        __asm _emit 0x4f
        push 646464h
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 14h], 32h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 5ah]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0f6h
        push edx
        imul eax, dword ptr [ebp - 14h], 32h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 38h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 F2 DF FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0ae7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [edx + ecx*4 + 6ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CB 52 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 64h], eax
        push 17h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 34 BC E1 FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 68h], eax
        push 3ch
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 AD B5 DD FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 100h
        ; Exact mapped bytes E8 F4 04 16 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + ecx*4 + 8ch], eax
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        push eax
        ; Exact mapped bytes E8 92 C2 17 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 DE FE FF FF: jmp 0x586d0a64
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 3E DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], eax
        push 0ach
        ; Exact mapped bytes E8 5E 04 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 68: je 0x586d0c1e
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        push 25h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 3E DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], edx
        movzx eax, word ptr [ebp - 16h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 9bh
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C7 B0 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0c25
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 84h], eax
        push 0ach
        ; Exact mapped bytes E8 BF 03 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 73: je 0x586d0cc8
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        push 24h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 3E DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0cdh
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1D B0 DF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0ccf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 88h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 13 00 00: call 0x586d2070
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 93 52 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 50 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x50
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0d1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 20: jge 0x586d0d40
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 53 52 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586d0d11
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0d52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 20: jge 0x586d0d78
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 1B 52 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x586d0d49
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 FC 51 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E0 51 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
