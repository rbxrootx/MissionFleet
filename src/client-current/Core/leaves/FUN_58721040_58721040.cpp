// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58721040 .. +0x958 bytes.
extern "C" __declspec(naked) void FUN_58721040_58721040() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e4ceh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18ch
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
        ; Exact mapped bytes E8 E4 11 D6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4078h
        push 198h
        ; Exact mapped bytes E8 5E FF 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x587210cc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b4060h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E9 F2 05 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587210d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [edx + 60h], eax
        push 58h
        ; Exact mapped bytes E8 17 FF 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 35: je 0x58721132
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 68h], edx
        push 0ah
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C0 39 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E3 56 D6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58721139
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 74h], edx
        push 101h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 4E 44 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DB E3 D7 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 84 FE 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 62: je 0x587211f2
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 2D 39 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 38 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F3 AA DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587211f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 68h], ecx
        push 0ach
        ; Exact mapped bytes E8 E8 FD 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 6E: je 0x5872129a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8B 38 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 38 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4B AA DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xaa
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587212a1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 80h], ecx
        push 0ach
        ; Exact mapped bytes E8 3D FD 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 6E: je 0x58721345
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0a4h], eax
        push 2
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 E0 37 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ach], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 37 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A0 A9 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa9
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5872134c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [eax + 84h], ecx
        push 0ach
        ; Exact mapped bytes E8 92 FC 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 6E: je 0x587213f0
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0b8h], eax
        push 4
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 35 37 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 36 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F5 A8 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa8
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x587213f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + 6ch], ecx
        push 0ach
        ; Exact mapped bytes E8 EA FB 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 6E: je 0x58721498
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0cch], eax
        push 5
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 8D 36 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 36 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4D A8 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa8
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5872149f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 70h], ecx
        push 0ach
        ; Exact mapped bytes E8 42 FB 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6E: je 0x58721540
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0e0h], eax
        push 6
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E5 35 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 35 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A5 A7 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa7
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58721547
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0f0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + 74h], ecx
        push 0ach
        ; Exact mapped bytes E8 9A FA 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 6E: je 0x587215e8
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0f4h], eax
        push 7
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 3D 35 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 34 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x34
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 FD A6 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa6
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x587215ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 104h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + 7ch], ecx
        push 0ach
        ; Exact mapped bytes E8 F2 F9 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 6E: je 0x58721690
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 108h], eax
        push 8
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 95 34 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], ecx
        push 19h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 34 D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 55 A6 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa6
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58721697
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 118h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 F7 B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 120h], edx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 DE B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 C5 B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 AC B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 93 B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 130h], ecx
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 7A B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 134h], eax
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 5E B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 138h], edx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 42 B4 E2 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 144h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 13ch], eax
        push 3
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 2D 33 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        push 1
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 63 B0 DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 148h], edx
        push 3
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 EB 32 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x32
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 1
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 21 B0 DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 15ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 154h], ecx
        push 3
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 A9 32 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x32
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 1
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 DF AF DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 160h], eax
        push 9
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 6A 32 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x32
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 1
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A0 AF DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 16ch], edx
        push 9
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 2B 32 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x32
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        push 1
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 61 AF DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 180h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 178h], ecx
        push 9
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 EC 31 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x31
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 1
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 22 AF DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 184h], eax
        push 9
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 AD 31 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x31
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        push 1
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 E3 AE DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xae
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 190h], edx
        push 9
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 6E 31 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x31
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 1
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 A4 AE DA FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xae
        __asm _emit 0xda
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
