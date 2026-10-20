// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868AA30 .. +0x18DE bytes.
extern "C" __declspec(naked) void FUN_5868aa30_5868AA30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888a4dfh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2f0h
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
        ; Exact mapped bytes E8 B4 51 FF FF: call 0x5867fc30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0224h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 738h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0f6h
        mov dword ptr [ebp - 18h], 0fffffffch
        push 54h
        ; Exact mapped bytes E8 56 65 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x65
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 41: je 0x5868aaff
        __asm _emit 0x74
        __asm _emit 0x41
        push 321h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 A0 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        push 7d0h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 26 78 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x78
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868ab06
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ecx + 0d4h], edx
        push 58h
        ; Exact mapped bytes E8 DB 64 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3E: je 0x5868ab77
        __asm _emit 0x74
        __asm _emit 0x3e
        push 32h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 9F DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        push 801h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9E BC DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868ab7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [edx + 0e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 148h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 F7 A9 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa9
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 14ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 6B B2 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 150h], eax
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 5F 49 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x49
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 154h], edx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 D3 B2 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb2
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 EF 63 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3E: je 0x5868ac63
        __asm _emit 0x74
        __asm _emit 0x3e
        push 31h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 9E DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 802h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B2 BB DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868ac6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 15ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [edx + 0dch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 160h], edx
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 AE 48 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 164h], ecx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 22 B2 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb2
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 3E 63 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3E: je 0x5868ad14
        __asm _emit 0x74
        __asm _emit 0x3e
        push 33h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 9D DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 01 BB DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868ad1b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 16ch]
        mov dword ptr [ecx + 0e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 170h], ecx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 FD 47 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x47
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 71 B1 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb1
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 8D 62 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3E: je 0x5868adc5
        __asm _emit 0x74
        __asm _emit 0x3e
        push 30h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 9D DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 834h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 50 BA DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xba
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868adcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 17ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [eax + 0e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 180h], eax
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 4C 47 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 184h], edx
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C0 B0 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DC 61 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x61
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 41: je 0x5868ae79
        __asm _emit 0x74
        __asm _emit 0x41
        push 35ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 9C DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        push 898h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AC 74 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x74
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868ae80
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18ch]
        mov dword ptr [edx + 0d8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 190h], edx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 28 B0 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb0
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 44 61 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x61
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x5868af0e
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2fh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 9B DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 07 B9 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868af15
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [edx + 0ech], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 19ch], edx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 03 46 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 AF 60 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x60
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3E: je 0x5868afa3
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 9B DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 62 99 EA FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868afaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [edx + 0f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes E8 5C 9D EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 25 60 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x60
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 63: je 0x5868b052
        __asm _emit 0x74
        __asm _emit 0x63
        push 2eh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 9A DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b0h], eax
        push 834h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 93 0C E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868b059
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [edx + 0f4h], eax
        push 54h
        ; Exact mapped bytes E8 88 5F 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5f
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3B: je 0x5868b0c7
        __asm _emit 0x74
        __asm _emit 0x3b
        push 322h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 9A DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        push 7d0h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5E 72 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x72
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868b0ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + 0f8h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5868b0fc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 7F 03 00 00: jge 0x5868b485
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0fch], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 110h], 0
        push 58h
        ; Exact mapped bytes E8 D9 5E 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 3C: je 0x5868b177
        __asm _emit 0x74
        __asm _emit 0x3c
        push 13h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 99 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 834h
        mov eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 14h], 2ah
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9E B6 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868b17e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + edx*4 + 6c0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 6c0h]
        mov dword ptr [ebp - 1c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 92 43 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x43
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 3B 5E 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 61: je 0x5868b23a
        __asm _emit 0x74
        __asm _emit 0x61
        push 1eh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 98 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x98
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d4h], eax
        push 834h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        imul edx, dword ptr [ebp - 14h], 2ah
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AB 0A E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868b241
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d8h]
        mov dword ptr [eax + edx*4 + 6e8h], ecx
        push 0ach
        ; Exact mapped bytes E8 99 5D 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5d
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 68: je 0x5868b2e3
        __asm _emit 0x74
        __asm _emit 0x68
        push 1ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 98 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x98
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], eax
        push 834h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        imul edx, dword ptr [ebp - 14h], 2ah
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 2]
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        push ecx
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 05 0A E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b2ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e8h]
        mov dword ptr [edx + ecx*4 + 67ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 67ch]
        mov dword ptr [ebp - 1ech], eax
        push 0
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 60 AC DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xac
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CC 5C 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 45: je 0x5868b393
        __asm _emit 0x74
        __asm _emit 0x45
        push 219h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 97 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x97
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 834h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        imul edx, dword ptr [ebp - 14h], 2ah
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 95 6F DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b39d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 1f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + eax*4 + 6d4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 6d4h]
        mov dword ptr [ebp - 1f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 B0 AB DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xab
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 1C 5C 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 42: je 0x5868b440
        __asm _emit 0x74
        __asm _emit 0x42
        push 11h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 96 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        push 7d1h
        mov eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 14h], 2ah
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 C8 94 EA FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b44a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 200h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 200h]
        mov dword ptr [eax + edx*4 + 6ach], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 6ach]
        ; Exact mapped bytes E8 B1 98 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x98
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6E FC FF FF: jmp 0x5868b0f3
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 39h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 96 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 690h], eax
        push 3ah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 96 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 694h], eax
        push 0ach
        ; Exact mapped bytes E8 49 5B 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5b
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 6E: je 0x5868b53f
        __asm _emit 0x74
        __asm _emit 0x6e
        push 19h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 95 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20ch], ecx
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 A9 07 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b549
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 210h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 210h]
        mov dword ptr [eax + 728h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5868b57a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x5868b63d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 76 5A 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 43: je 0x5868b5e7
        __asm _emit 0x74
        __asm _emit 0x43
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 95 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4bh
        push ecx
        push 3
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 91 F3 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b5f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 218h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 218h]
        mov dword ptr [eax + edx*4 + 70ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 70ch]
        mov dword ptr [ebp - 21ch], ecx
        push 834h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 49 A8 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa8
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x5868b571
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5868b64f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D BE 00 00 00: jge 0x5868b717
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 A1 59 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x59
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 48: je 0x5868b6c1
        __asm _emit 0x74
        __asm _emit 0x48
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 94 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x94
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        imul eax, dword ptr [ebp - 14h], 0ah
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 44h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0c8h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 B7 F2 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b6cb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 224h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + ecx*4 + 71ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 71ch]
        mov dword ptr [ebp - 228h], eax
        push 834h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 6F A7 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x5868b646
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 E3 58 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 44: je 0x5868b77b
        __asm _emit 0x74
        __asm _emit 0x44
        push 20h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 93 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 80h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 66h
        push edx
        push 2
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 FD F1 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b785
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 230h]
        mov dword ptr [eax + 704h], ecx
        push 0fch
        ; Exact mapped bytes E8 56 58 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 43: je 0x5868b807
        __asm _emit 0x74
        __asm _emit 0x43
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 92 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 70h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 400h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 71 F1 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b811
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 238h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 238h]
        mov dword ptr [ecx + 700h], edx
        push 0fch
        ; Exact mapped bytes E8 CA 57 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x57
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 43: je 0x5868b893
        __asm _emit 0x74
        __asm _emit 0x43
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 92 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x92
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 32h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 E5 F0 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b89d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 240h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 240h]
        mov dword ptr [edx + 708h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 700h]
        mov dword ptr [ebp - 244h], edx
        push 834h
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 A5 A5 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 704h]
        mov dword ptr [ebp - 248h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 86 A5 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 708h]
        mov dword ptr [ebp - 24ch], eax
        push 834h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 67 A5 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E0 56 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x56
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 6D: je 0x5868b9a7
        __asm _emit 0x74
        __asm _emit 0x6d
        push 15h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 91 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 258h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 74h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 80h
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        push ecx
        mov edx, dword ptr [ebp - 258h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 41 03 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868b9b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 25ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 25ch]
        mov dword ptr [ecx + 730h], edx
        push 0ach
        ; Exact mapped bytes E8 2A 56 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x56
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 6E: je 0x5868ba5e
        __asm _emit 0x74
        __asm _emit 0x6e
        push 14h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 90 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 268h], ecx
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 8A 02 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868ba68
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 26ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 26ch]
        mov dword ptr [eax + 734h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 730h]
        mov dword ptr [ebp - 270h], eax
        push 101h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 0A 9B 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 734h]
        mov dword ptr [ebp - 274h], edx
        push 101h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 EB 9A 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 730h]
        mov dword ptr [ebp - 278h], ecx
        push 0
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 5F A3 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 734h]
        mov dword ptr [ebp - 27ch], eax
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 43 A3 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa3
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 FC 54 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x54
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 6D: je 0x5868bb8b
        __asm _emit 0x74
        __asm _emit 0x6d
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 8F DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 284h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 288h], edx
        push 834h
        mov eax, dword ptr [ebp + 10h]
        add eax, 73h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b8h
        push ecx
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 5D 01 E4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bb95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 28ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28ch]
        mov dword ptr [ecx + 72ch], edx
        push 322h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 8F DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 78 E9 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x78
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 322h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 8F DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 DE EF FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 294h]
        push ecx
        push 32h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 A1 FF FF: call 0x58685df0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 198h
        ; Exact mapped bytes E8 F1 53 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 1A: je 0x5868bc43
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 588b010ch
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 15 AB 12 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xab
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bc4d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 298h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 298h]
        mov dword ptr [eax + 73ch], ecx
        push 54h
        ; Exact mapped bytes E8 91 53 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 2C: je 0x5868bcb5
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 3eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2bh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 73 66 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bcbf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 29ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 29ch]
        mov dword ptr [eax + 758h], ecx
        push 54h
        ; Exact mapped bytes E8 1F 53 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 2C: je 0x5868bd27
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 3ah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 01 66 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bd31
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 2a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 754h], ecx
        push 54h
        ; Exact mapped bytes E8 AD 52 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x52
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 2C: je 0x5868bd99
        __asm _emit 0x74
        __asm _emit 0x2c
        push 834h
        mov edx, dword ptr [ebp + 10h]
        add edx, 55h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2bh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 8F 65 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bda3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 2a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + 740h], ecx
        push 54h
        ; Exact mapped bytes E8 3B 52 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x52
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 2E: je 0x5868be0d
        __asm _emit 0x74
        __asm _emit 0x2e
        push 7dah
        mov edx, dword ptr [ebp + 10h]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10eh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 1B 65 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868be17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a8h]
        mov dword ptr [edx + ecx + 744h], eax
        push 54h
        ; Exact mapped bytes E8 BE 51 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 2F: je 0x5868be8b
        __asm _emit 0x74
        __asm _emit 0x2f
        push 7d9h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 41h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10eh
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 9D 64 DF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x64
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868be95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 2ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + edx + 744h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 2b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 6E 36 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x36
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 2b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 49 36 E1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x36
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 2b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 81 96 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 CA 50 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x50
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 41: je 0x5868bf91
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 8B DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 57h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 58h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E7 E9 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868bf9b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + eax + 74ch], edx
        push 0fch
        ; Exact mapped bytes E8 37 50 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x50
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 41: je 0x5868c024
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 8A DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 57h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 67h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 54 E9 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868c02e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 2c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c8h]
        mov dword ptr [eax + edx + 74ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 74ch]
        mov dword ptr [ebp - 2cch], edx
        push 0
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 65 9E DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 74ch]
        mov dword ptr [ebp - 2d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 40 9E DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9e
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 59 4F 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4f
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 41: je 0x5868c102
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 8A DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 37h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 2d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 76 E8 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868c10c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 2d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d8h]
        mov dword ptr [edx + 75ch], eax
        push 0fch
        ; Exact mapped bytes E8 CF 4E 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 41: je 0x5868c18c
        __asm _emit 0x74
        __asm _emit 0x41
        push 21h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 89 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5ah
        push edx
        push 3
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 EC E7 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe7
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868c196
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 2e0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [eax + 760h], ecx
        push 74h
        ; Exact mapped bytes E8 48 4E 1A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 4A: je 0x5868c21c
        __asm _emit 0x74
        __asm _emit 0x4a
        push 3d6h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 89 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x89
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 17h
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 1
        push 3ch
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 3C 78 E7 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5868c226
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e8h]
        mov dword ptr [ecx + 764h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 75ch]
        mov dword ptr [ebp - 2ech], ecx
        push 834h
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 1C 9C DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 760h]
        mov dword ptr [ebp - 2f0h], eax
        push 834h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 FD 9B DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 74ch]
        mov dword ptr [ebp - 2f4h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 D5 9B DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 74ch]
        mov dword ptr [ebp - 2f8h], ecx
        push 834h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 AD 9B DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 764h]
        mov dword ptr [ebp - 2fch], eax
        push 834h
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 8E 9B DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0xdf
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
