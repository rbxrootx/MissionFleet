// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727EF0 .. +0x1A19 bytes.
extern "C" __declspec(naked) void FUN_58727ef0_58727EF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e9b5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30ch
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 A3 D5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4284h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x58727f6a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes EB 50: jmp 0x58727fba
        __asm _emit 0xeb
        __asm _emit 0x50
        push 198h
        ; Exact mapped bytes E8 90 90 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x58727f9a
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b4118h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1B 84 05 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58727fa1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [edx + 60h], eax
        push 198h
        ; Exact mapped bytes E8 40 90 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x58727fea
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b412ch
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CB 83 05 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58727ff1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [edx + 64h], eax
        push 54h
        ; Exact mapped bytes E8 F3 8F 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 41: je 0x58728062
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 150h], edx
        push 4bh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 E6 CA D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xca
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C3 A2 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58728069
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 158h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [edx + 68h], eax
        push 54h
        ; Exact mapped bytes E8 7B 8F 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 41: je 0x587280da
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 15ch], edx
        push 4ch
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 6E CA D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xca
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4B A2 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x587280e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 164h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [edx + 6ch], eax
        push 54h
        ; Exact mapped bytes E8 03 8F 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x58728152
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 168h], edx
        push 4dh
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 F6 C9 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D3 A1 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58728159
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 170h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [edx + 70h], eax
        push 54h
        ; Exact mapped bytes E8 8B 8E 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 41: je 0x587281ca
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 174h], edx
        push 4eh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 7E C9 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5B A1 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x587281d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 17ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [edx + 74h], eax
        push 54h
        ; Exact mapped bytes E8 13 8E 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 41: je 0x58728242
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 180h], edx
        push 61h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 06 C9 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E3 A0 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58728249
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 188h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 188h]
        mov dword ptr [edx + 78h], eax
        push 54h
        ; Exact mapped bytes E8 9B 8D 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 41: je 0x587282ba
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 18ch], edx
        push 60h
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 8E C8 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6B A0 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x587282c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 194h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 198h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 BA D2 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 19ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 9E D2 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 1a0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 82 D2 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1a4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 66 D2 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 1a8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 4A D2 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 61 DB D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 48 DB D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 64 8C 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 41: je 0x587283f1
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1b4h], ecx
        push 65h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 57 C7 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 34 9F D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587283f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ecx + 80h], edx
        push 54h
        ; Exact mapped bytes E8 E9 8B 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 53: je 0x5872847e
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1c0h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 DC C6 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 1c8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 1c4h]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A7 9E D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58728485
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [eax + 84h], ecx
        push 54h
        ; Exact mapped bytes E8 5C 8B 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 41: je 0x587284f9
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1d0h], eax
        push 67h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 4F C6 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 2C 9E D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58728500
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d8h]
        mov dword ptr [eax + 88h], ecx
        push 54h
        ; Exact mapped bytes E8 E1 8A 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 53: je 0x58728586
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1dch], eax
        push 66h
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 D4 C5 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1e4h], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9F 9D D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5872858d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e8h]
        mov dword ptr [edx + 8ch], eax
        push 54h
        ; Exact mapped bytes E8 54 8A 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 41: je 0x58728601
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ech], edx
        push 63h
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 47 C5 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 24 9D D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58728608
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1f4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [edx + 90h], eax
        push 54h
        ; Exact mapped bytes E8 D9 89 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 56: je 0x58728691
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1f8h], edx
        push 62h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 CC C4 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 200h], ecx
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 97 9C D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872869b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 204h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 208h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 D7 CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 20ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 B8 CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 210h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 99 CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 214h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 7A CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 218h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 5B CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 21ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 3C CE 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 220h], ecx
        push 1
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 50 D7 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 224h], eax
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 34 D7 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 18 D7 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd7
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 34 88 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 47: je 0x5872882d
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 22ch], ecx
        push 68h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 21 C3 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 FB 9A D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728837
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 234h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 238h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 3B CD 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 23ch], eax
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 4F D6 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 6B 87 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 29: je 0x587288d8
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2dh
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 40 DF D5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587288e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 240h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 240h]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        push 70h
        ; Exact mapped bytes E8 EF 86 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 49: je 0x58728974
        __asm _emit 0x74
        __asm _emit 0x49
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        mov edx, dword ptr [ebp + 14h]
        add edx, 1fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fah
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 13h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3bh
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
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 44 9A D5 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9a
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872897e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 244h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 244h]
        mov dword ptr [eax + 0a4h], ecx
        push 70h
        ; Exact mapped bytes E8 60 86 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 49: je 0x58728a03
        __asm _emit 0x74
        __asm _emit 0x49
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        mov edx, dword ptr [ebp + 14h]
        add edx, 31h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fah
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3bh
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
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 B5 99 D5 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728a0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 248h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 248h]
        mov dword ptr [eax + 0a8h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58728a3e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x58728ae5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 B2 85 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 4B: je 0x58728ab3
        __asm _emit 0x74
        __asm _emit 0x4b
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B C0 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 86h
        push eax
        imul ecx, dword ptr [ebp - 14h], 2dh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 0c8h]
        push eax
        push 7
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 C5 1E 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728abd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 250h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 250h]
        mov dword ptr [edx + ecx*4 + 0ach], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x58728a35
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58728af7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58728b9f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F9 84 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 4C: je 0x58728b6d
        __asm _emit 0x74
        __asm _emit 0x4c
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 BF D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov edx, dword ptr [ebp + 14h]
        add edx, 92h
        push edx
        imul eax, dword ptr [ebp - 14h], 2dh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0c8h]
        push edx
        push 7
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 0B 1E 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728b77
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 258h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 258h]
        mov dword ptr [ecx + eax*4 + 0b4h], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58728aee
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 5E 84 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 50: je 0x58728c0c
        __asm _emit 0x74
        __asm _emit 0x50
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        mov eax, dword ptr [ebp + 14h]
        add eax, 0d1h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c3h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 0c5h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1fh
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
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 AC 97 D5 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x97
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728c16
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 25ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 25ch]
        mov dword ptr [ecx + 0bch], edx
        push 0fch
        ; Exact mapped bytes E8 C5 83 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 46: je 0x58728c9b
        __asm _emit 0x74
        __asm _emit 0x46
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E BE D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 0c2h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0efh
        push ecx
        push 7
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 DD 1C 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728ca5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 264h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 264h]
        mov dword ptr [edx + 0c0h], eax
        push 0fch
        ; Exact mapped bytes E8 36 83 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 47: je 0x58728d2b
        __asm _emit 0x74
        __asm _emit 0x47
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF BD D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xbd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0cdh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0efh
        push edx
        push 7
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 4D 1C 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728d35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 26ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 26ch]
        mov dword ptr [eax + 0c4h], ecx
        push 70h
        ; Exact mapped bytes E8 A9 82 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 4F: je 0x58728dc0
        __asm _emit 0x74
        __asm _emit 0x4f
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        mov edx, dword ptr [ebp + 14h]
        add edx, 101h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c3h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0f5h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1fh
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
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 F8 95 D5 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728dca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 270h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [eax + 0c8h], ecx
        push 0fch
        ; Exact mapped bytes E8 11 82 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 46: je 0x58728e4f
        __asm _emit 0x74
        __asm _emit 0x46
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA BC D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbc
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp + 14h]
        add edx, 0f5h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0efh
        push eax
        push 7
        mov ecx, dword ptr [ebp - 274h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 29 1B 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728e59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 278h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 278h]
        mov dword ptr [ecx + 0cch], edx
        push 0fch
        ; Exact mapped bytes E8 82 81 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 46: je 0x58728ede
        __asm _emit 0x74
        __asm _emit 0x46
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B BC D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbc
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 102h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0efh
        push ecx
        push 7
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 9A 1A 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728ee8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + 0d0h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58728f19
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x58728fcd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 DA 80 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 5B: je 0x58728f9b
        __asm _emit 0x74
        __asm _emit 0x5b
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        imul edx, dword ptr [ebp - 14h], 0dh
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 133h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c3h
        push edx
        imul eax, dword ptr [ebp - 14h], 0dh
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax + 127h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4ah
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
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 1D 94 D5 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x58728fa5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 284h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + ecx*4 + 0d4h], eax
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x58728f10
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58728fdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58729087
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 11 80 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 4C: je 0x58729055
        __asm _emit 0x74
        __asm _emit 0x4c
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA BA D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        imul edx, dword ptr [ebp - 14h], 0dh
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 128h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0bbh
        push edx
        push 2
        mov eax, dword ptr [ebp - 288h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 23 19 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872905f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 28ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28ch]
        mov dword ptr [ecx + eax*4 + 0e4h], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58728fd6
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58729099
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58729141
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 57 7F 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 4C: je 0x5872910f
        __asm _emit 0x74
        __asm _emit 0x4c
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 BA D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        imul ecx, dword ptr [ebp - 14h], 0dh
        mov edx, dword ptr [ebp + 14h]
        lea eax, [edx + ecx + 128h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0c8h
        push ecx
        push 1
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 69 18 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58729119
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 294h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + edx*4 + 0ech], ecx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58729090
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 2
        ; Exact mapped bytes EB 09: jmp 0x58729153
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x587291fa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 9D 7E 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 4B: je 0x587291c8
        __asm _emit 0x74
        __asm _emit 0x4b
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 B9 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        imul eax, dword ptr [ebp - 14h], 0dh
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax + 128h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bch
        push eax
        push 3
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 B0 17 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587291d2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 29ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + ecx*4 + 0ech], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x5872914a
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5872920c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x587292b4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E4 7D 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 4C: je 0x58729282
        __asm _emit 0x74
        __asm _emit 0x4c
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D B8 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        imul edx, dword ptr [ebp - 14h], 0dh
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 128h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0ceh
        push edx
        push 6
        mov eax, dword ptr [ebp - 2a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F6 16 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872928c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 2a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a4h]
        mov dword ptr [ecx + eax*4 + 0fch], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58729203
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587292c6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x5872936e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 2A 7D 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 4C: je 0x5872933c
        __asm _emit 0x74
        __asm _emit 0x4c
        push 2eh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 B7 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        imul ecx, dword ptr [ebp - 14h], 0dh
        mov edx, dword ptr [ebp + 14h]
        lea eax, [edx + ecx + 128h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 2a8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 3C 16 09 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58729346
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 2ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + edx*4 + 10ch], ecx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x587292bd
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 8C 7C 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 78: je 0x58729406
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2b0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 29 B7 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2bch], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 160h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d4h
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 E2 28 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x28
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58729410
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 2c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c0h]
        mov dword ptr [ecx + 11ch], edx
        push 0ach
        ; Exact mapped bytes E8 CB 7B 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 78: je 0x587294c7
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2c4h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 68 B6 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2cch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 160h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0efh
        push edx
        mov eax, dword ptr [ebp - 2c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 21 28 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x28
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587294d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 2d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d4h]
        mov dword ptr [edx + 120h], eax
        push 0ach
        ; Exact mapped bytes E8 0A 7B 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 77: je 0x58729587
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2d8h], edx
        push 11h
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 A7 B5 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], ecx
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 160h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 10ah
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 61 27 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x27
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58729591
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 2e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [eax + 124h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 2ech], eax
        push 5
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 74 62 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x62
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 2f0h], edx
        push 1
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 58 62 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 2f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 3C 62 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x62
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58729617
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x587296e6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 DC 79 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 55: je 0x58729693
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2f8h], ecx
        push 12h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 79 B4 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb4
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        push 40h
        imul edx, dword ptr [ebp - 14h], 0eh
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 192h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp - 2fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 85 D1 D5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872969d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 300h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 300h]
        mov dword ptr [ecx + eax*4 + 128h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 128h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 70 5E D7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5e
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x5872960e
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 14 79 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 48: je 0x5872974e
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 9696h
        mov eax, dword ptr [ebp + 14h]
        add eax, 1cch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 192h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3bh
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8A 6B 09 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58729758
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 308h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 308h]
        mov dword ptr [eax + edx + 138h], ecx
        push 94h
        ; Exact mapped bytes E8 7A 78 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 4A: je 0x587297ea
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 969696h
        mov edx, dword ptr [ebp + 14h]
        add edx, 1cch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 11eh
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 192h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 49h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 EE 6A 09 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587297f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 30ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ecx + eax + 138h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5872982e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 35: jge 0x58729869
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 138h]
        mov dword ptr [ebp - 310h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 9C 5B D7 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x5b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 138h]
        ; Exact mapped bytes E8 5A 29 00 00: call 0x5872c1c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BC: jmp 0x58729825
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 314h], eax
        push 0ffffh
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 2F 33 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x33
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 318h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 07 33 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 148h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 C6 D5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
