// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FCC70 .. +0x1DDB bytes.
extern "C" __declspec(naked) void FUN_586fcc70_586FCC70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d64bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3c0h
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
        ; Exact mapped bytes E8 44 EA E6 FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3b00h
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 88h], 0
        push 54h
        ; Exact mapped bytes E8 27 43 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 34: je 0x586fcd21
        __asm _emit 0x74
        __asm _emit 0x34
        push 191h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 7E D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        push 4bh
        push 0
        push 0
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 04 56 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x56
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fcd28
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 144h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [edx + 12ch], eax
        push 54h
        ; Exact mapped bytes E8 B9 42 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 34: je 0x586fcd8f
        __asm _emit 0x74
        __asm _emit 0x34
        push 190h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 7D D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        push 4ah
        push 0
        push 0
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 96 55 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fcd96
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 130h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 150h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 DF 87 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 154h], eax
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 53 90 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 68h
        ; Exact mapped bytes E8 0F 42 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 4F: je 0x586fce54
        __asm _emit 0x74
        __asm _emit 0x4f
        push 192h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 7D D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 193h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 7C D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 61 97 F1 FF: call 0x586165b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x97
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fce5b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 160h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [edx + 160h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 160h]
        mov dword ptr [ebp - 164h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 AA 86 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 EE 8E D8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 16ch], eax
        push 4ah
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B2 8F D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 2E 41 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 4C: je 0x586fcf32
        __asm _emit 0x74
        __asm _emit 0x4c
        push 3
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 7B D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        push 2
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 7B D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        push 0
        push 0ffffff38h
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B3 8D F1 FF: call 0x58615ce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fcf39
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 178h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [edx + 184h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [ebp - 17ch], edx
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 1F 90 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 60h
        ; Exact mapped bytes E8 8B 40 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 1E: je 0x586fcfa7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push 0
        push 0
        push 0
        push 400h
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CE 52 D8 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fcfae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 180h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [edx + 11ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 184h], edx
        push 54h
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 9A 8E D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 16 40 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 46: je 0x586fd044
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 7B D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 18ch], ecx
        push 40h
        push 0
        push 400h
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E1 52 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd04b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 190h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [edx + 120h], eax
        push 58h
        ; Exact mapped bytes E8 96 3F 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 34: je 0x586fd0b2
        __asm _emit 0x74
        __asm _emit 0x34
        push 20h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 7A D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 40h
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 03 B9 0C 00: call 0x587c89b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd0b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ecx + 124h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 19ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 EF 8C D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 1a0h], eax
        push 55h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 73 8D D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 5ch
        ; Exact mapped bytes E8 EF 3E 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3e
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 32: je 0x586fd157
        __asm _emit 0x74
        __asm _emit 0x32
        push 9
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 79 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 1a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CE 3C E9 FF: call 0x58590e20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd15e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1a8h]
        mov dword ptr [ecx + 128h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 1ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 FA 8D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 1b0h], eax
        push 55h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 CE 8C D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 4A 3E 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3e
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 46: je 0x586fd210
        __asm _emit 0x74
        __asm _emit 0x46
        push 1dh
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 78 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x78
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 1b8h], edx
        push 40h
        push 0
        push 400h
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A5 B7 0C 00: call 0x587c89b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd217
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + 190h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 1c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 41 8D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 AD 3D 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 46: je 0x586fd2ad
        __asm _emit 0x74
        __asm _emit 0x46
        push 1eh
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 78 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x78
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 1c8h], edx
        push 40h
        push 0
        push 400h
        mov eax, dword ptr [ebp - 1c4h]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 08 B7 0C 00: call 0x587c89b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd2b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [eax + 194h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 1d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 A4 8C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 10 3D 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 46: je 0x586fd34a
        __asm _emit 0x74
        __asm _emit 0x46
        push 1fh
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 77 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x77
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 1d8h], edx
        push 40h
        push 0
        push 400h
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 6B B6 0C 00: call 0x587c89b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd351
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1dch]
        mov dword ptr [eax + 198h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 1e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 07 8C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 70 3C 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 5A: je 0x586fd3fe
        __asm _emit 0x74
        __asm _emit 0x5a
        push 8
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 77 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x77
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ech], edx
        push 40h
        push 0
        push 36ah
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E7 E8 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586fd405
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f0h]
        mov dword ptr [edx + 19ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 1f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 53 8B D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 1f8h], ecx
        push 55h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 27 8A D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 A0 3B 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 5C: je 0x586fd4d0
        __asm _emit 0x74
        __asm _emit 0x5c
        push 6
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 76 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], eax
        push 40h
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 18 E8 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fd4da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 208h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [eax + 1a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 20ch], eax
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 7B 8A D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 210h], edx
        push 55h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 4F 89 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 C8 3A 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 5F: je 0x586fd5b1
        __asm _emit 0x74
        __asm _emit 0x5f
        push 7
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 75 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x75
        __asm _emit 0xd8
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
        push 40h
        push 0
        push 36ah
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 37 E7 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fd5bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 220h]
        mov dword ptr [ecx + 1a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 224h], ecx
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 9A 89 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1a4h]
        mov dword ptr [ebp - 228h], eax
        push 55h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 6E 88 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E7 39 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 60: je 0x586fd693
        __asm _emit 0x74
        __asm _emit 0x60
        push 10h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 74 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 230h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 234h], edx
        push 40h
        push 0
        push 36ah
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 234h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 55 E6 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fd69d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 238h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 238h]
        mov dword ptr [edx + 1b0h], eax
        push 0ach
        ; Exact mapped bytes E8 3E 39 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 60: je 0x586fd73c
        __asm _emit 0x74
        __asm _emit 0x60
        push 11h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 73 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 240h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 244h], edx
        push 40h
        push 0
        push 36ah
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AC E5 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fd746
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 248h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 248h]
        mov dword ptr [edx + 1b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1b0h]
        mov dword ptr [ebp - 24ch], edx
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 0F 88 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1b4h]
        mov dword ptr [ebp - 250h], ecx
        push 0
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 F3 87 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x87
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1b0h]
        mov dword ptr [ebp - 254h], eax
        push 55h
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 C7 86 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1b4h]
        mov dword ptr [ebp - 258h], edx
        push 55h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 AB 86 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fd7e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D DD 00 00 00: jge 0x586fd8cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 0B 38 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 4D: je 0x586fd85c
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 6C 79 94 58: mov ecx, dword ptr [0x5894796c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A2 E9 FF: call 0x58597a70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 A1 72 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x72
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 40h
        push 0
        push 0fah
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 BC 8F D8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fd866
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 264h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [eax + edx*4 + 1a8h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1a8h]
        mov dword ptr [ebp - 268h], ecx
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 E7 86 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1a8h]
        mov dword ptr [ebp - 26ch], ecx
        push 59h
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 B7 85 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x586fd7df
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1a8h]
        mov dword ptr [ebp - 270h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 B9 7C 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 1a8h]
        mov dword ptr [ebp - 274h], edx
        push 101h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 91 7C 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 40000000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 40000000h
        mov dword ptr [ebp - 1ch], 68h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fd95f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 19 06 00 00: jge 0x586fdf82
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 91 36 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 6D: je 0x586fd9f6
        __asm _emit 0x74
        __asm _emit 0x6d
        push 24h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 71 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x71
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 280h], edx
        push 3e8h
        push 5
        imul eax, dword ptr [ebp - 14h], 50h
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [eax + ecx + 95h]
        push edx
        mov eax, dword ptr [ebp - 278h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 F2 E2 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fda00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 284h]
        mov dword ptr [eax + edx*4 + 0bch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 288h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 6A 7B 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 28ch], ecx
        push 4bh
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 1A 84 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 93 35 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x35
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 44: je 0x586fdacb
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 70 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 19h
        imul edx, dword ptr [ebp - 14h], 50h
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax + 0a0h]
        push ecx
        push 5
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 AD CE 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fdad5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 294h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + edx*4 + 0dch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 298h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 95 7A 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 29ch], ecx
        push 100h
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 02 7A 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 2a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 42 82 D8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 2a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 C2 82 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 2a8h], ecx
        push 7d0h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 DF 82 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 2ach], ecx
        push 4bh
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 BF 82 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 38 34 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 44: je 0x586fdc26
        __asm _emit 0x74
        __asm _emit 0x44
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 6E D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        push 2ch
        imul edx, dword ptr [ebp - 14h], 50h
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax + 0a0h]
        push ecx
        push 5
        mov edx, dword ptr [ebp - 2b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 52 CD 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fdc30
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b4h]
        mov dword ptr [eax + edx*4 + 0fch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2b8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 3A 79 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2bch], ecx
        push 100h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 A7 78 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 E7 80 D8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 67 81 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2c8h], ecx
        push 7d0h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 84 81 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 2cch], ecx
        push 4bh
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 64 81 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 DD 32 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 2E: je 0x586fdd6b
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        push 35h
        imul edx, dword ptr [ebp - 14h], 50h
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [edx + eax + 0a0h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 ED 93 FB FF: call 0x586b7150
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fdd75
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + ecx*4 + 164h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 2d4h], eax
        push 41ah
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 C5 80 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 2d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 B5 81 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 2dch], eax
        push 4bh
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 85 80 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 01 32 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 4B: je 0x586fde64
        __asm _emit 0x74
        __asm _emit 0x4b
        imul ecx, dword ptr [ebp - 14h], 5
        add ecx, 0f3h
        push ecx
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 6C D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        push 3e9h
        push 0
        mov edx, dword ptr [ebp - 1ch]
        add edx, 94h
        push edx
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 C4 44 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fde6e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 2e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + eax*4 + 1e8h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1e8h]
        mov dword ptr [ebp - 2e8h], edx
        push 4bh
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 CF 7F D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1e8h]
        mov dword ptr [ebp - 2ech], edx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 0F 80 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8C A1 00 00 00: jl 0x586fdf7d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 2f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 E4 7F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 2f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 C4 7F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 2f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 A4 7F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 2fch], edx
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 84 7F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1e8h]
        mov dword ptr [ebp - 300h], edx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 64 7F D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D4 F9 FF FF: jmp 0x586fd956
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fdf94
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x586fe035
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5F 30 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 48: je 0x586fe003
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0bh
        push ecx
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 6B D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        push 3e9h
        imul edx, dword ptr [ebp - 14h], 0ch
        add edx, 2
        push edx
        push 109h
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 25 43 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe00d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 308h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + eax*4 + 1c4h], edx
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x586fdf8b
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 C8 2F 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 3D: je 0x586fe08f
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0eh
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 6A D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        push 3e9h
        push 2
        push 11bh
        mov eax, dword ptr [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 99 42 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe099
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 310h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 310h]
        mov dword ptr [edx + ecx + 1c4h], eax
        mov dword ptr [ebp - 14h], 4
        ; Exact mapped bytes EB 09: jmp 0x586fe0d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x586fe179
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 20 2F 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 4D: je 0x586fe147
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 14h]
        add edx, 0bh
        push edx
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 6A D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        push 3e9h
        mov eax, dword ptr [ebp - 14h]
        sub eax, 4
        imul ecx, eax, 0ch
        add ecx, 2
        push ecx
        push 12dh
        mov edx, dword ptr [ebp - 314h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E1 41 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe151
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 318h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 318h]
        mov dword ptr [eax + edx*4 + 1c4h], ecx
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x586fe0ca
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 84 2E 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 3D: je 0x586fe1d3
        __asm _emit 0x74
        __asm _emit 0x3d
        push 12h
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 69 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x69
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        push 3e9h
        push 2
        push 11bh
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 55 41 D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe1dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 320h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 320h]
        mov dword ptr [ecx + eax + 1c4h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fe217
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 43: jge 0x586fe260
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 324h], eax
        push 4bh
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 43 7C D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 328h], eax
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 83 7C D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x586fe20e
        __asm _emit 0xeb
        __asm _emit 0xae
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 1e4h], 0
        push 0ach
        ; Exact mapped bytes E8 90 2D 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 61: je 0x586fe2eb
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 14h]
        add edx, 0ch
        push edx
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 68 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 334h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        push ecx
        mov edx, dword ptr [ebp - 334h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 FD D9 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe2f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 338h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 134h], edx
        push 0ach
        ; Exact mapped bytes E8 E6 2C 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 62: je 0x586fe396
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 14h]
        add eax, 0ch
        push eax
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 67 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x67
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 340h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 344h], edx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 33ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov eax, dword ptr [ebp - 344h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 52 D9 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe3a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 348h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 348h]
        mov dword ptr [edx + 138h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fe3d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x586fe4af
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 1F 2C 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 61: je 0x586fe45c
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 14h]
        add edx, 0ch
        push edx
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 66 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x66
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 354h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8C D8 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe466
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 358h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 358h]
        mov dword ptr [edx + ecx*4 + 13ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 13ch]
        mov dword ptr [ebp - 35ch], eax
        push 0
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 E7 7A D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x586fe3c8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5ch
        ; Exact mapped bytes E8 4E 2B 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 1B: je 0x586fe4e7
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 31 6A DC FF: call 0x584c4f10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe4f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 360h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 360h]
        mov dword ptr [eax + 15ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 15ch]
        mov dword ptr [ebp - 364h], eax
        push 0
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 64 7A D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 D0 2A 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 3F: je 0x586fe589
        __asm _emit 0x74
        __asm _emit 0x3f
        push 1ch
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 65 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x65
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        push 4bh
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 319h
        push ecx
        mov edx, dword ptr [ebp - 368h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 1F FA 0B 00: call 0x587bdfa0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe593
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 36ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 36ch]
        mov dword ptr [edx + 18ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 370h], edx
        push 101h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 DF 6F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        push 20h
        ; Exact mapped bytes E8 2B 2A 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 2D: je 0x586fe61c
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 64 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        mov eax, dword ptr [ebp - 374h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 7C CE 0B 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe626
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 378h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 378h]
        mov dword ptr [edx + 0b8h], eax
        push 54h
        ; Exact mapped bytes E8 B8 29 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 3D: je 0x586fe69f
        __asm _emit 0x74
        __asm _emit 0x3d
        push 1a5h
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 64 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x64
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        push 55h
        push 6
        push 0bch
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 89 3C D8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe6a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 380h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 380h]
        mov dword ptr [ecx + 1b8h], edx
        push 0fch
        ; Exact mapped bytes E8 32 29 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 3D: je 0x586fe725
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0cdh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 63 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x63
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        push 1ah
        push 0cah
        push 4
        mov eax, dword ptr [ebp - 384h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 53 C2 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe72f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 388h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [eax + 1c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c0h]
        mov dword ptr [ebp - 38ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 43 6E 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c0h]
        mov dword ptr [ebp - 390h], edx
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 B7 76 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c0h]
        mov dword ptr [ebp - 394h], ecx
        push 56h
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 DB 76 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 54 28 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 4F: je 0x586fe815
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0cch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 62 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x62
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c0h]
        mov dword ptr [ebp - 39ch], eax
        push 1ah
        push 0cah
        push 4
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 63 C1 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc1
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe81f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 3a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3a0h]
        mov dword ptr [ecx + 1bch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1bch]
        mov dword ptr [ebp - 3a4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 53 6D 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1bch]
        mov dword ptr [ebp - 3a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 C7 75 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xff
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ach], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 208h], 0
        push 94h
        ; Exact mapped bytes E8 41 27 13 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x27
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 41: je 0x586fe91a
        __asm _emit 0x74
        __asm _emit 0x41
        push 10101h
        push 0
        push 40ff40h
        push 190h
        push 3e8h
        push 32h
        push 24eh
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 BE 19 0C 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586fe924
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 3ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [edx + 20ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 3b0h], edx
        push 0eh
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 91 0A DA FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 3b4h], ecx
        push 12ch
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 22 85 DB FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 3bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 20ch]
        ; Exact mapped bytes E8 15 61 E3 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        lea edx, [eax*8 + 5]
        mov dword ptr [ebp - 3b8h], edx
        mov eax, dword ptr [ebp - 3b8h]
        push eax
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 96 84 DB FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 3c0h], edx
        push 0
        push 0fefefeh
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 E5 4E E3 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 3c4h], ecx
        push 40h
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 89 74 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 3c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 CD 73 D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 3cch], edx
        push 1
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 B1 74 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x74
        __asm _emit 0xd8
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
