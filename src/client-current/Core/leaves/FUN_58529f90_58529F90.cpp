// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58529F90 .. +0x312B bytes.
extern "C" __declspec(naked) void FUN_58529f90_58529F90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588826f5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 59ch
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
        push 68h
        ; Exact mapped bytes E8 45 70 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1D: je 0x58529fef
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 36 39 02 00: call 0x5854d920
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58529ff6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 3b4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes 89 15 6C 06 96 58: mov dword ptr [0x5896066c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 1ch
        ; Exact mapped bytes E8 EB 6F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x5852a039
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2C 69 03 00: call 0x58560960
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a040
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 3b8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes 89 0D 58 8C 94 58: mov dword ptr [0x58948c58], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        push 4
        ; Exact mapped bytes E8 A1 6F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0D: je 0x5852a083
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B2 47 02 00: call 0x5854e830
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a08a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 3bch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3bch]
        ; Exact mapped bytes A3 7C 75 94 58: mov dword ptr [0x5894757c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 5a8h], 0
        push 0
        push 80h
        push 4
        push 0
        push 0
        push 40000000h
        push 588a69b0h
        ; Exact mapped bytes E8 35 92 28 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 3b0h], eax
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3b0h]
        push ecx
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 8
        ; Exact mapped bytes E8 18 6F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0D: je 0x5852a10c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C9 A0 FD FF: call 0x585041d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a113
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3c0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes A3 6C 79 94 58: mov dword ptr [0x5894796c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CC 6E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 16: je 0x5852a161
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a69bch
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 54 62 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x62
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a168
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 3c4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 89 15 30 07 96 58: mov dword ptr [0x58960730], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 76 6E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 16: je 0x5852a1b7
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a69dch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 FE 61 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x61
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a1be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 3c8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes 89 0D 70 75 94 58: mov dword ptr [0x58947570], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 20 6E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 16: je 0x5852a20d
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a69f8h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A8 61 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x61
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a214
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 3cch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3cch]
        ; Exact mapped bytes A3 34 07 96 58: mov dword ptr [0x58960734], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CB 6D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 16: je 0x5852a262
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a18h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 53 61 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x61
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a269
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 3d0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes 89 15 38 07 96 58: mov dword ptr [0x58960738], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 75 6D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 16: je 0x5852a2b8
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a30h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 FD 60 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a2bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 3d4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes 89 0D 3C 07 96 58: mov dword ptr [0x5896073c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 1F 6D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 16: je 0x5852a30e
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a48h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A7 60 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a315
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 3d8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes A3 EC 06 96 58: mov dword ptr [0x589606ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CA 6C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 16: je 0x5852a363
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a58h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 52 60 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a36a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 3dch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 89 15 F0 06 96 58: mov dword ptr [0x589606f0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 74 6C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 16: je 0x5852a3b9
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a6ch
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FC 5F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a3c0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 3e0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 89 0D 94 06 96 58: mov dword ptr [0x58960694], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 1E 6C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 16: je 0x5852a40f
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a6a80h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A6 5F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852a416
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 3e4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes A3 BC 06 96 58: mov dword ptr [0x589606bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C9 6B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 19: je 0x5852a467
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        push 0
        push 588a6a94h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 51 5F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a471
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 3e8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 89 15 A4 06 96 58: mov dword ptr [0x589606a4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 6A 6B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a4cf
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6aa4h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E9 5E 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a4d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 3ech], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes 89 0D C0 06 96 58: mov dword ptr [0x589606c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 138h
        ; Exact mapped bytes E8 02 6B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 13: je 0x5852a52e
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 1A 74 24 00: call 0x58771940
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a538
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 3f0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes A3 1C 07 96 58: mov dword ptr [0x5896071c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 A4 6A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov dword ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a595
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ab8h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 23 5E 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a59f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 3f4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes 89 15 88 07 96 58: mov dword ptr [0x58960788], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 3C 6A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a5fd
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6acch
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 BB 5D 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a607
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 3f8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes 89 0D A0 07 96 58: mov dword ptr [0x589607a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 D4 69 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x69
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov dword ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a665
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6adch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 53 5D 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a66f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 3fch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3fch]
        ; Exact mapped bytes A3 98 06 96 58: mov dword ptr [0x58960698], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 6D 69 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x69
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a6cc
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6af0h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 EC 5C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a6d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 400h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 400h]
        ; Exact mapped bytes 89 15 9C 06 96 58: mov dword ptr [0x5896069c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 05 69 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x69
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a734
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b04h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 84 5C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a73e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 404h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes 89 0D 80 07 96 58: mov dword ptr [0x58960780], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 9D 68 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov dword ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a79c
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b18h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 1C 5C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a7a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 408h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 408h]
        ; Exact mapped bytes A3 84 07 96 58: mov dword ptr [0x58960784], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 36 68 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a803
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b2ch
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 B5 5B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a80d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 40ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 89 15 8C 07 96 58: mov dword ptr [0x5896078c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CE 67 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x67
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov dword ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a86b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b44h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 4D 5B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a875
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 410h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 89 0D 94 07 96 58: mov dword ptr [0x58960794], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 66 67 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x67
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a8d3
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b58h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 E5 5A 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a8dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 414h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes A3 98 07 96 58: mov dword ptr [0x58960798], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 FF 66 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x66
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov dword ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a93a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b6ch
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 7E 5A 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a944
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 418h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 418h]
        ; Exact mapped bytes 89 15 F4 06 96 58: mov dword ptr [0x589606f4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 97 66 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x66
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov dword ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852a9a2
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b80h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 16 5A 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852a9ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 41ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes 89 0D F8 06 96 58: mov dword ptr [0x589606f8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 2F 66 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x66
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov dword ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852aa0a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6b90h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 AE 59 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x59
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852aa14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 420h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 420h]
        ; Exact mapped bytes A3 20 07 96 58: mov dword ptr [0x58960720], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C8 65 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x65
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov dword ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852aa71
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ba4h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 47 59 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852aa7b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 424h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 424h]
        ; Exact mapped bytes 89 15 24 07 96 58: mov dword ptr [0x58960724], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 60 65 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x65
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov dword ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 1C: je 0x5852aad9
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6bbch
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DF 58 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852aae3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 428h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes 89 0D 54 07 96 58: mov dword ptr [0x58960754], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 F8 64 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov dword ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ab41
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6bd0h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 77 58 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ab4b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 42ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 42ch]
        ; Exact mapped bytes A3 58 07 96 58: mov dword ptr [0x58960758], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 91 64 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov dword ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 1C: je 0x5852aba8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6be4h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 10 58 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852abb2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 430h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 430h]
        ; Exact mapped bytes 89 15 5C 07 96 58: mov dword ptr [0x5896075c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 29 64 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ac10
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6bf8h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 A8 57 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ac1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 434h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes 89 0D 40 07 96 58: mov dword ptr [0x58960740], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C1 63 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x63
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ac78
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c08h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 40 57 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ac82
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 438h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 438h]
        ; Exact mapped bytes A3 44 07 96 58: mov dword ptr [0x58960744], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 5A 63 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x63
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 1C: je 0x5852acdf
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c18h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D9 56 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ace9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 43ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 89 15 48 07 96 58: mov dword ptr [0x58960748], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 F2 62 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov dword ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ad47
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c2ch
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 71 56 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ad51
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 440h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes 89 0D 4C 07 96 58: mov dword ptr [0x5896074c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 8A 62 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov dword ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 1C: je 0x5852adaf
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c40h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 09 56 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852adb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 444h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 444h]
        ; Exact mapped bytes A3 50 07 96 58: mov dword ptr [0x58960750], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 23 62 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ae16
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c54h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 A2 55 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x55
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ae20
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 448h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 448h]
        ; Exact mapped bytes 89 15 0C 07 96 58: mov dword ptr [0x5896070c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 BB 61 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov dword ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ae7e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c68h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 3A 55 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x55
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ae88
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 44ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes 89 0D 10 07 96 58: mov dword ptr [0x58960710], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 53 61 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov dword ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 1C: je 0x5852aee6
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c78h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 D2 54 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852aef0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 450h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 450h]
        ; Exact mapped bytes A3 14 07 96 58: mov dword ptr [0x58960714], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 EC 60 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov dword ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 1C: je 0x5852af4d
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6c8ch
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 6B 54 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852af57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 454h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 454h]
        ; Exact mapped bytes 89 15 18 07 96 58: mov dword ptr [0x58960718], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 84 60 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov dword ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 1C: je 0x5852afb5
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ca0h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 03 54 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852afbf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 458h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes 89 0D 60 07 96 58: mov dword ptr [0x58960760], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 1C 60 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov dword ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b01d
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6cb0h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 9B 53 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x53
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b027
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov edx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 45ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 45ch]
        ; Exact mapped bytes A3 6C 07 96 58: mov dword ptr [0x5896076c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 0ch
        ; Exact mapped bytes E8 B8 5F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov dword ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 13: je 0x5852b078
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 70 B6 26 00: call 0x587966e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b082
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 460h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 460h]
        ; Exact mapped bytes 89 15 70 07 96 58: mov dword ptr [0x58960770], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 59 5F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov dword ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b0e0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6cc4h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 D8 52 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x52
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b0ea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 464h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes 89 0D A4 07 96 58: mov dword ptr [0x589607a4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 F1 5E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov dword ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b148
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6cd8h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 70 52 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b152
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 468h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 468h]
        ; Exact mapped bytes A3 A8 07 96 58: mov dword ptr [0x589607a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 8A 5E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov dword ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b1af
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ce8h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 09 52 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x52
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b1b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov ecx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 46ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes 89 15 C4 06 96 58: mov dword ptr [0x589606c4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 22 5E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov dword ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b217
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6cf8h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 A1 51 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x51
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b221
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 470h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes 89 0D CC 06 96 58: mov dword ptr [0x589606cc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 D0 06 96 58 00 00 00 00: mov dword ptr [0x589606d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 198h
        ; Exact mapped bytes E8 B0 5D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov dword ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b289
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d10h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 2F 51 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x51
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b293
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 474h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 474h]
        ; Exact mapped bytes A3 D4 06 96 58: mov dword ptr [0x589606d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 49 5D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov dword ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b2f0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d24h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 C8 50 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b2fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 478h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 478h]
        ; Exact mapped bytes 89 15 D8 06 96 58: mov dword ptr [0x589606d8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 E1 5C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov dword ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b358
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d38h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 60 50 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b362
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 47ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes 89 0D 7C 07 96 58: mov dword ptr [0x5896077c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 79 5C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov dword ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b3c0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d4ch
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 F8 4F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b3ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 480h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 480h]
        ; Exact mapped bytes A3 E8 06 96 58: mov dword ptr [0x589606e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 12 5C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov dword ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b427
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d60h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 91 4F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b431
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 484h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 484h]
        ; Exact mapped bytes 89 15 90 07 96 58: mov dword ptr [0x58960790], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 AA 5B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov dword ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b48f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d70h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 29 4F 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4f
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b499
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 488h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes 89 0D 28 07 96 58: mov dword ptr [0x58960728], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 42 5B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov dword ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b4f7
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d84h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 C1 4E 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b501
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 48ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 48ch]
        ; Exact mapped bytes A3 2C 07 96 58: mov dword ptr [0x5896072c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 DB 5A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov dword ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b55e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6d98h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 5A 4E 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b568
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 490h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 490h]
        ; Exact mapped bytes 89 15 FC 06 96 58: mov dword ptr [0x589606fc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 73 5A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov dword ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b5c6
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6dach
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 F2 4D 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b5d0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 494h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes 89 0D 48 24 96 58: mov dword ptr [0x58962448], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 0B 5A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov dword ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b62e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6dbch
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 8A 4D 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b638
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 498h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 498h]
        ; Exact mapped bytes A3 9C 07 96 58: mov dword ptr [0x5896079c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 A4 59 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x59
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov dword ptr [ebp - 4], 3ah
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b695
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6dcch
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 23 4D 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b69f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 49ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes 89 15 78 07 96 58: mov dword ptr [0x58960778], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 3C 59 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x59
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov dword ptr [ebp - 4], 3bh
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b6fd
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ddch
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 BB 4C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b707
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 4a0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes 89 0D B0 06 96 58: mov dword ptr [0x589606b0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 D4 58 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov dword ptr [ebp - 4], 3ch
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b765
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6df4h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 53 4C 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b76f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov edx, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 4a4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes A3 B4 06 96 58: mov dword ptr [0x589606b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 6D 58 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov dword ptr [ebp - 4], 3dh
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b7cc
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e08h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 EC 4B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b7d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov ecx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 4a8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes 89 15 B0 07 96 58: mov dword ptr [0x589607b0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 05 58 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov dword ptr [ebp - 4], 3eh
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b834
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e18h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 84 4B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b83e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 4ach], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes 89 0D B4 07 96 58: mov dword ptr [0x589607b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 9D 57 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov dword ptr [ebp - 4], 3fh
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b89c
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e28h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 1C 4B 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4b
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b8a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov edx, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 4b0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes A3 B8 07 96 58: mov dword ptr [0x589607b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 36 57 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        mov dword ptr [ebp - 4], 40h
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b903
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e38h
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 B5 4A 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b90d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp - 4b4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes 89 15 BC 07 96 58: mov dword ptr [0x589607bc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 CE 56 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x56
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 4], 41h
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b96b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e48h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 4D 4A 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b975
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [ebp - 4b8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes 89 0D C0 07 96 58: mov dword ptr [0x589607c0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 66 56 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x56
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 228h], eax
        mov dword ptr [ebp - 4], 42h
        cmp dword ptr [ebp - 228h], 0
        ; Exact mapped bytes 74 1C: je 0x5852b9d3
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e58h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 E5 49 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x49
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852b9dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov edx, dword ptr [ebp - 22ch]
        mov dword ptr [ebp - 4bch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4bch]
        ; Exact mapped bytes A3 C4 07 96 58: mov dword ptr [0x589607c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 FF 55 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 230h], eax
        mov dword ptr [ebp - 4], 43h
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 74 1C: je 0x5852ba3a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e70h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 7E 49 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x49
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ba44
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 4c0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes 89 15 D0 07 96 58: mov dword ptr [0x589607d0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 97 55 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x55
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 238h], eax
        mov dword ptr [ebp - 4], 44h
        cmp dword ptr [ebp - 238h], 0
        ; Exact mapped bytes 74 1C: je 0x5852baa2
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6e8ch
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 16 49 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x49
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852baac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [ebp - 4c4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4c4h]
        ; Exact mapped bytes 89 0D CC 07 96 58: mov dword ptr [0x589607cc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 2F 55 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x55
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 240h], eax
        mov dword ptr [ebp - 4], 45h
        cmp dword ptr [ebp - 240h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bb0a
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ea0h
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 AE 48 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bb14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov edx, dword ptr [ebp - 244h]
        mov dword ptr [ebp - 4c8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes A3 68 20 96 58: mov dword ptr [0x58962068], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C8 54 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 248h], eax
        mov dword ptr [ebp - 4], 46h
        cmp dword ptr [ebp - 248h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bb71
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6eb0h
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 47 48 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x48
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bb7b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov ecx, dword ptr [ebp - 24ch]
        mov dword ptr [ebp - 4cch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4cch]
        ; Exact mapped bytes 89 15 64 75 94 58: mov dword ptr [0x58947564], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 60 54 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 250h], eax
        mov dword ptr [ebp - 4], 47h
        cmp dword ptr [ebp - 250h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bbd9
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ec0h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 DF 47 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bbe3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [ebp - 4d0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes 89 0D D4 07 96 58: mov dword ptr [0x589607d4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 F8 53 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x53
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 258h], eax
        mov dword ptr [ebp - 4], 48h
        cmp dword ptr [ebp - 258h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bc41
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ed4h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 77 47 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bc4b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 25ch], 0
        mov edx, dword ptr [ebp - 25ch]
        mov dword ptr [ebp - 4d4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4d4h]
        ; Exact mapped bytes A3 D8 07 96 58: mov dword ptr [0x589607d8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 91 53 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 260h], eax
        mov dword ptr [ebp - 4], 49h
        cmp dword ptr [ebp - 260h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bca8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6ee8h
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 10 47 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bcb2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 264h], 0
        mov ecx, dword ptr [ebp - 264h]
        mov dword ptr [ebp - 4d8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes 89 15 DC 07 96 58: mov dword ptr [0x589607dc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 29 53 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x53
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 268h], eax
        mov dword ptr [ebp - 4], 4ah
        cmp dword ptr [ebp - 268h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bd10
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6efch
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 A8 46 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bd1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 26ch], 0
        mov eax, dword ptr [ebp - 26ch]
        mov dword ptr [ebp - 4dch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes 89 0D E0 07 96 58: mov dword ptr [0x589607e0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 C1 52 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x52
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 270h], eax
        mov dword ptr [ebp - 4], 4bh
        cmp dword ptr [ebp - 270h], 0
        ; Exact mapped bytes 74 1C: je 0x5852bd78
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 588a6f10h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 40 46 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bd82
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 274h], 0
        mov edx, dword ptr [ebp - 274h]
        mov dword ptr [ebp - 4e0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes A3 E4 07 96 58: mov dword ptr [0x589607e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        push 24h
        ; Exact mapped bytes E8 9B 52 30 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x52
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4e4h], eax
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes 89 0D 5C 8C 94 58: mov dword ptr [0x58948c5c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852bdce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x5852beb2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 10h], 0e84h
        cmp dword ptr [eax + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x5852be9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 10h], 0e84h
        add ecx, 588f4fd0h
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5852be8c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 198h
        ; Exact mapped bytes E8 F2 51 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x51
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 4], 4ch
        cmp dword ptr [ebp - 278h], 0
        ; Exact mapped bytes 74 25: je 0x5852be50
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 0
        imul edx, dword ptr [ebp - 10h], 0e84h
        add edx, 588f4fd0h
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 68 45 25 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 27ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852be5a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 27ch], 0
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [ebp - 4e8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4e8h]
        mov dword ptr [ebp - 4ech], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes A1 5C 8C 94 58: mov eax, dword ptr [0x58948c5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4ech]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB 0F: jmp 0x5852be9b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes A1 5C 8C 94 58: mov eax, dword ptr [0x58948c5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [eax + edx*4], 0
        ; Exact mapped bytes EB 10: jmp 0x5852bead
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 5C 8C 94 58: mov edx, dword ptr [0x58948c5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x5852bdc5
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852bec4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 7D 43: jge 0x5852bf10
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, 800h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4 + 589607e8h], 0
        mov ecx, 800h
        shl ecx, 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4 + 589607e8h], 0
        mov eax, 800h
        shl eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + ecx*4 + 589607e8h], 0
        ; Exact mapped bytes EB AB: jmp 0x5852bebb
        __asm _emit 0xeb
        __asm _emit 0xab
        push 20h
        ; Exact mapped bytes E8 ED 50 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 280h], eax
        mov dword ptr [ebp - 4], 4dh
        cmp dword ptr [ebp - 280h], 0
        ; Exact mapped bytes 74 2D: je 0x5852bf5d
        __asm _emit 0x74
        __asm _emit 0x2d
        push 23h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 8B F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        mov edx, dword ptr [ebp - 4f0h]
        push edx
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 3B F5 28 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bf67
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 284h], 0
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [ebp - 4f4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes 89 0D FC 1F 96 58: mov dword ptr [0x58961ffc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 77 50 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 288h], eax
        mov dword ptr [ebp - 4], 4eh
        cmp dword ptr [ebp - 288h], 0
        ; Exact mapped bytes 74 2D: je 0x5852bfd3
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2eh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 8A F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        mov edx, dword ptr [ebp - 4f8h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 C5 F4 28 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852bfdd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 28ch], 0
        mov eax, dword ptr [ebp - 28ch]
        mov dword ptr [ebp - 4fch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes 89 0D 00 20 96 58: mov dword ptr [0x58962000], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 01 50 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 290h], eax
        mov dword ptr [ebp - 4], 4fh
        cmp dword ptr [ebp - 290h], 0
        ; Exact mapped bytes 74 2D: je 0x5852c049
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 8A F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 500h], eax
        mov edx, dword ptr [ebp - 500h]
        push edx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 DF 19 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c053
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 294h], 0
        mov eax, dword ptr [ebp - 294h]
        mov dword ptr [ebp - 504h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes 89 0D 04 20 96 58: mov dword ptr [0x58962004], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 8B 4F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 298h], eax
        mov dword ptr [ebp - 4], 50h
        cmp dword ptr [ebp - 298h], 0
        ; Exact mapped bytes 74 2D: je 0x5852c0bf
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 89 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x89
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 508h], eax
        mov edx, dword ptr [ebp - 508h]
        push edx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 69 19 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c0c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 29ch], 0
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [ebp - 50ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 50ch]
        ; Exact mapped bytes 89 0D 08 20 96 58: mov dword ptr [0x58962008], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 15 4F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2a0h], eax
        mov dword ptr [ebp - 4], 51h
        cmp dword ptr [ebp - 2a0h], 0
        ; Exact mapped bytes 74 2D: je 0x5852c135
        __asm _emit 0x74
        __asm _emit 0x2d
        push 16h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 89 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x89
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 510h], eax
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 F3 18 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c13f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a4h], 0
        mov eax, dword ptr [ebp - 2a4h]
        mov dword ptr [ebp - 514h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 514h]
        ; Exact mapped bytes 89 0D 0C 20 96 58: mov dword ptr [0x5896200c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 9F 4E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2a8h], eax
        mov dword ptr [ebp - 4], 52h
        cmp dword ptr [ebp - 2a8h], 0
        ; Exact mapped bytes 74 2D: je 0x5852c1ab
        __asm _emit 0x74
        __asm _emit 0x2d
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 88 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        mov edx, dword ptr [ebp - 518h]
        push edx
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 7D 18 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c1b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ach], 0
        mov eax, dword ptr [ebp - 2ach]
        mov dword ptr [ebp - 51ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 51ch]
        ; Exact mapped bytes 89 0D 10 20 96 58: mov dword ptr [0x58962010], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 20h
        ; Exact mapped bytes E8 29 4E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b0h], eax
        mov dword ptr [ebp - 4], 53h
        cmp dword ptr [ebp - 2b0h], 0
        ; Exact mapped bytes 74 2D: je 0x5852c221
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 88 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 520h], eax
        mov edx, dword ptr [ebp - 520h]
        push edx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 07 18 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c22b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b4h], 0
        mov eax, dword ptr [ebp - 2b4h]
        mov dword ptr [ebp - 524h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes 89 0D 14 20 96 58: mov dword ptr [0x58962014], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 0bch
        ; Exact mapped bytes E8 B0 4D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b8h], eax
        mov dword ptr [ebp - 4], 54h
        cmp dword ptr [ebp - 2b8h], 0
        ; Exact mapped bytes 74 25: je 0x5852c292
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        push 11ch
        push 11fh
        push 0
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 96 A9 0E 00: call 0x58616c20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c29c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2bch], 0
        mov edx, dword ptr [ebp - 2bch]
        mov dword ptr [ebp - 528h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 528h]
        ; Exact mapped bytes A3 30 06 96 58: mov dword ptr [0x58960630], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 9C F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 9A F5 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 9B F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        push 3a98h
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 9B F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 0b8ch
        ; Exact mapped bytes E8 08 4D 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4d
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2c0h], eax
        mov dword ptr [ebp - 4], 55h
        cmp dword ptr [ebp - 2c0h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c334
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 14 FA 1B 00: call 0x586ebd40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfa
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c33e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c4h], 0
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [ebp - 52ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes 89 15 40 06 96 58: mov dword ptr [0x58960640], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 9A F5 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 9A F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 39d0h
        ; Exact mapped bytes 8B 0D 40 06 96 58: mov ecx, dword ptr [0x58960640]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 9A F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 84h
        ; Exact mapped bytes E8 72 4C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2c8h], eax
        mov dword ptr [ebp - 4], 56h
        cmp dword ptr [ebp - 2c8h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c3ca
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0e8h
        push 0fbh
        push 0
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 CE 1A 02 00: call 0x5854de90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c3d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2cch], 0
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [ebp - 530h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes 89 0D 60 20 96 58: mov dword ptr [0x58962060], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 7fbch
        ; Exact mapped bytes 8B 0D 60 20 96 58: mov ecx, dword ptr [0x58962060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 9A F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 60 20 96 58: mov ecx, dword ptr [0x58962060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 9B F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 2ch
        ; Exact mapped bytes E8 EC 4B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2d0h], eax
        mov dword ptr [ebp - 4], 57h
        cmp dword ptr [ebp - 2d0h], 0
        ; Exact mapped bytes 74 13: je 0x5852c444
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 C4 00 F9 FF: call 0x584bc500
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c44e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d4h], 0
        mov edx, dword ptr [ebp - 2d4h]
        mov dword ptr [ebp - 534h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 534h]
        ; Exact mapped bytes A3 B8 06 96 58: mov dword ptr [0x589606b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 6ch
        ; Exact mapped bytes E8 91 4B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2d8h], eax
        mov dword ptr [ebp - 4], 58h
        cmp dword ptr [ebp - 2d8h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c4ab
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 9D 03 20 00: call 0x5872c840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c4b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2dch], 0
        mov ecx, dword ptr [ebp - 2dch]
        mov dword ptr [ebp - 538h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 538h]
        ; Exact mapped bytes 89 15 54 8C 94 58: mov dword ptr [0x58948c54], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        push 0ae4h
        ; Exact mapped bytes E8 26 4B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2e0h], eax
        mov dword ptr [ebp - 4], 59h
        cmp dword ptr [ebp - 2e0h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c516
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 C2 4E 06 00: call 0x585913d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c520
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e4h], 0
        mov eax, dword ptr [ebp - 2e4h]
        mov dword ptr [ebp - 53ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 53ch]
        ; Exact mapped bytes 89 0D 14 06 96 58: mov dword ptr [0x58960614], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 9A F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 44ch
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 99 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 30ch
        ; Exact mapped bytes E8 9D 4A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2e8h], eax
        mov dword ptr [ebp - 4], 5ah
        cmp dword ptr [ebp - 2e8h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c59f
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 C9 24 0C 00: call 0x585eea60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c5a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ech], 0
        mov edx, dword ptr [ebp - 2ech]
        mov dword ptr [ebp - 540h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 540h]
        ; Exact mapped bytes A3 2C 06 96 58: mov dword ptr [0x5896062c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 99 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 22118h
        ; Exact mapped bytes E8 25 4A 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2f0h], eax
        mov dword ptr [ebp - 4], 5bh
        cmp dword ptr [ebp - 2f0h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c617
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 51 D0 08 00: call 0x585b9660
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 2f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c621
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f4h], 0
        mov ecx, dword ptr [ebp - 2f4h]
        mov dword ptr [ebp - 544h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 544h]
        ; Exact mapped bytes 89 15 10 06 96 58: mov dword ptr [0x58960610], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 99 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 104ch
        ; Exact mapped bytes E8 AC 49 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x49
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2f8h], eax
        mov dword ptr [ebp - 4], 5ch
        cmp dword ptr [ebp - 2f8h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c690
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 38 22 07 00: call 0x5859e8c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c69a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2fch], 0
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [ebp - 548h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes 89 0D 0C 06 96 58: mov dword ptr [0x5896060c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 98 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 12dch
        ; Exact mapped bytes E8 33 49 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x49
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 300h], eax
        mov dword ptr [ebp - 4], 5dh
        cmp dword ptr [ebp - 300h], 0
        ; Exact mapped bytes 74 22: je 0x5852c70c
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 0
        push 0
        push 29ch
        push 1eh
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 0C DA 0E 00: call 0x5861a110
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 304h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c716
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 304h], 0
        mov edx, dword ptr [ebp - 304h]
        mov dword ptr [ebp - 54ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 54ch]
        ; Exact mapped bytes A3 20 06 96 58: mov dword ptr [0x58960620], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 98 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 48h
        ; Exact mapped bytes E8 BB 48 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 308h], eax
        mov dword ptr [ebp - 4], 5eh
        cmp dword ptr [ebp - 308h], 0
        ; Exact mapped bytes 74 13: je 0x5852c775
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 03 08 FE FF: call 0x5850cf70
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c77f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 30ch], 0
        mov ecx, dword ptr [ebp - 30ch]
        mov dword ptr [ebp - 550h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 550h]
        ; Exact mapped bytes 89 15 24 06 96 58: mov dword ptr [0x58960624], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 90ch
        ; Exact mapped bytes E8 5C 48 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 310h], eax
        mov dword ptr [ebp - 4], 5fh
        cmp dword ptr [ebp - 310h], 0
        ; Exact mapped bytes 74 22: je 0x5852c7e3
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 0
        push 0
        push 0fffffea2h
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 75 A2 0C 00: call 0x585f6a50
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c7ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 314h], 0
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [ebp - 554h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes 89 0D 28 06 96 58: mov dword ptr [0x58960628], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 97 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 7ch
        ; Exact mapped bytes E8 E3 47 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x47
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 318h], eax
        mov dword ptr [ebp - 4], 60h
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c859
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 5F DE 1C 00: call 0x586fa6b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xde
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c863
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 31ch], 0
        mov edx, dword ptr [ebp - 31ch]
        mov dword ptr [ebp - 558h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 558h]
        ; Exact mapped bytes A3 68 06 96 58: mov dword ptr [0x58960668], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 320h
        ; Exact mapped bytes E8 79 47 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x47
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 320h], eax
        mov dword ptr [ebp - 4], 61h
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 74 22: je 0x5852c8c6
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 0
        push 0
        push 258h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 22 B3 14 00: call 0x58677be0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 324h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c8d0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 324h], 0
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ebp - 55ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes 89 15 34 06 96 58: mov dword ptr [0x58960634], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 96 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 140h
        ; Exact mapped bytes E8 FD 46 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 328h], eax
        mov dword ptr [ebp - 4], 62h
        cmp dword ptr [ebp - 328h], 0
        ; Exact mapped bytes 74 1F: je 0x5852c93f
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push -2dh
        push 0
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 89 E8 19 00: call 0x586cb1c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c949
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 32ch], 0
        mov eax, dword ptr [ebp - 32ch]
        mov dword ptr [ebp - 560h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes 89 0D 3C 06 96 58: mov dword ptr [0x5896063c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 96 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 19ch
        ; Exact mapped bytes E8 84 46 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 330h], eax
        mov dword ptr [ebp - 4], 63h
        cmp dword ptr [ebp - 330h], 0
        ; Exact mapped bytes 74 22: je 0x5852c9bb
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 0
        push 0
        push 23ah
        push 0ah
        push 0
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 CD 53 0D 00: call 0x58601d80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 334h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852c9c5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 334h], 0
        mov edx, dword ptr [ebp - 334h]
        mov dword ptr [ebp - 564h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 564h]
        ; Exact mapped bytes A3 38 06 96 58: mov dword ptr [0x58960638], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 95 F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x95
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        push 8ch
        ; Exact mapped bytes E8 09 46 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 338h], eax
        mov dword ptr [ebp - 4], 64h
        cmp dword ptr [ebp - 338h], 0
        ; Exact mapped bytes 74 1F: je 0x5852ca33
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 95 BD F8 FF: call 0x584b87c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ca3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 33ch], 0
        mov ecx, dword ptr [ebp - 33ch]
        mov dword ptr [ebp - 568h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 568h]
        ; Exact mapped bytes 89 15 18 06 96 58: mov dword ptr [0x58960618], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 1ch
        ; Exact mapped bytes E8 A1 45 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x45
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 340h], eax
        mov dword ptr [ebp - 4], 65h
        cmp dword ptr [ebp - 340h], 0
        ; Exact mapped bytes 74 1A: je 0x5852ca96
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push 200h
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 52 E4 F8 FF: call 0x584baee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852caa0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 344h], 0
        mov eax, dword ptr [ebp - 344h]
        mov dword ptr [ebp - 56ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 56ch]
        ; Exact mapped bytes 89 0D 1C 06 96 58: mov dword ptr [0x5896061c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 7ch
        ; Exact mapped bytes E8 3E 45 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x45
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 348h], eax
        mov dword ptr [ebp - 4], 66h
        cmp dword ptr [ebp - 348h], 0
        ; Exact mapped bytes 74 1F: je 0x5852cafe
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 4A B4 FB FF: call 0x584e7f40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cb08
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 34ch], 0
        mov edx, dword ptr [ebp - 34ch]
        mov dword ptr [ebp - 570h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 570h]
        ; Exact mapped bytes A3 70 06 96 58: mov dword ptr [0x58960670], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 18h
        ; Exact mapped bytes E8 D7 44 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 350h], eax
        mov dword ptr [ebp - 4], 67h
        cmp dword ptr [ebp - 350h], 0
        ; Exact mapped bytes 74 13: je 0x5852cb59
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 8F 4B 03 00: call 0x585616e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 354h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cb63
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 354h], 0
        mov ecx, dword ptr [ebp - 354h]
        mov dword ptr [ebp - 574h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 574h]
        ; Exact mapped bytes 89 15 74 06 96 58: mov dword ptr [0x58960674], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 138h
        ; Exact mapped bytes E8 78 44 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 358h], eax
        mov dword ptr [ebp - 4], 68h
        cmp dword ptr [ebp - 358h], 0
        ; Exact mapped bytes 74 13: je 0x5852cbb8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 00 E5 00 00: call 0x5853b0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 35ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cbc2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 35ch], 0
        mov eax, dword ptr [ebp - 35ch]
        mov dword ptr [ebp - 578h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 578h]
        ; Exact mapped bytes 89 0D 78 06 96 58: mov dword ptr [0x58960678], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 370h
        ; Exact mapped bytes E8 19 44 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 360h], eax
        mov dword ptr [ebp - 4], 69h
        cmp dword ptr [ebp - 360h], 0
        ; Exact mapped bytes 74 2B: je 0x5852cc2f
        __asm _emit 0x74
        __asm _emit 0x2b
        push 3a34h
        push 298h
        push 380h
        push 68h
        push 80h
        push 0
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 29 42 1C 00: call 0x586f0e50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x42
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 364h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cc39
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 364h], 0
        mov edx, dword ptr [ebp - 364h]
        mov dword ptr [ebp - 57ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 57ch]
        ; Exact mapped bytes A3 D0 20 96 58: mov dword ptr [0x589620d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE B3 1C 00: call 0x586f8010
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb3
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 AD 1C 00: call 0x586f7a10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xad
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        push 284h
        ; Exact mapped bytes E8 8C 43 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 368h], eax
        mov dword ptr [ebp - 4], 6ah
        cmp dword ptr [ebp - 368h], 0
        ; Exact mapped bytes 74 2B: je 0x5852ccbc
        __asm _emit 0x74
        __asm _emit 0x2b
        push 2710h
        push 20ch
        push 35ch
        push 0fffffdf4h
        push 52h
        push 0
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 7C BA 18 00: call 0x586b8730
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xba
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 36ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ccc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 36ch], 0
        mov ecx, dword ptr [ebp - 36ch]
        mov dword ptr [ebp - 580h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 580h]
        ; Exact mapped bytes 89 15 48 06 96 58: mov dword ptr [0x58960648], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 138h
        ; Exact mapped bytes E8 15 43 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 370h], eax
        mov dword ptr [ebp - 4], 6bh
        cmp dword ptr [ebp - 370h], 0
        ; Exact mapped bytes 74 2E: je 0x5852cd36
        __asm _emit 0x74
        __asm _emit 0x2e
        push 3a66h
        push 0fah
        push 1f4h
        push 96h
        push 106h
        push 0
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 82 46 F5 FF: call 0x584813b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cd40
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 374h], 0
        mov eax, dword ptr [ebp - 374h]
        mov dword ptr [ebp - 584h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes 89 0D 4C 06 96 58: mov dword ptr [0x5896064c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 1ch
        ; Exact mapped bytes E8 9E 42 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 378h], eax
        mov dword ptr [ebp - 4], 6ch
        cmp dword ptr [ebp - 378h], 0
        ; Exact mapped bytes 74 13: je 0x5852cd92
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 C6 82 05 00: call 0x58585050
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cd9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 37ch], 0
        mov edx, dword ptr [ebp - 37ch]
        mov dword ptr [ebp - 588h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 588h]
        ; Exact mapped bytes A3 50 06 96 58: mov dword ptr [0x58960650], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0a0h
        ; Exact mapped bytes E8 40 42 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 380h], eax
        mov dword ptr [ebp - 4], 6dh
        cmp dword ptr [ebp - 380h], 0
        ; Exact mapped bytes 74 28: je 0x5852ce05
        __asm _emit 0x74
        __asm _emit 0x28
        push 1388h
        push 0
        push 0
        push 0fah
        push 2eeh
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 C3 3A 1A 00: call 0x586d08c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ce0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 384h], 0
        mov ecx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 58ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 58ch]
        ; Exact mapped bytes 89 15 54 06 96 58: mov dword ptr [0x58960654], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0b8h
        ; Exact mapped bytes E8 CC 41 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 388h], eax
        mov dword ptr [ebp - 4], 6eh
        cmp dword ptr [ebp - 388h], 0
        ; Exact mapped bytes 74 2B: je 0x5852ce7c
        __asm _emit 0x74
        __asm _emit 0x2b
        push 2ee0h
        push 254h
        push 300h
        push 54h
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 DC 03 26 00: call 0x5878d250
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852ce86
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 38ch], 0
        mov eax, dword ptr [ebp - 38ch]
        mov dword ptr [ebp - 590h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 590h]
        ; Exact mapped bytes 89 0D 58 06 96 58: mov dword ptr [0x58960658], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0efch
        ; Exact mapped bytes E8 55 41 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 390h], eax
        mov dword ptr [ebp - 4], 6fh
        cmp dword ptr [ebp - 390h], 0
        ; Exact mapped bytes 74 13: je 0x5852cedb
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 FD 7F FC FF: call 0x584f4ed0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cee5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 394h], 0
        mov edx, dword ptr [ebp - 394h]
        mov dword ptr [ebp - 594h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 594h]
        ; Exact mapped bytes A3 2C 7C 94 58: mov dword ptr [0x58947c2c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 A1 FC FF: call 0x584f7070
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 98 FC FF: call 0x584f6810
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        push 20h
        ; Exact mapped bytes E8 E3 40 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x40
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 398h], eax
        mov dword ptr [ebp - 4], 70h
        cmp dword ptr [ebp - 398h], 0
        ; Exact mapped bytes 74 2D: je 0x5852cf67
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 7B F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 598h], eax
        mov ecx, dword ptr [ebp - 598h]
        push ecx
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 C1 0A 04 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cf71
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 39ch], 0
        mov edx, dword ptr [ebp - 39ch]
        mov dword ptr [ebp - 59ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 59ch]
        ; Exact mapped bytes A3 18 20 96 58: mov dword ptr [0x58962018], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x5852d087
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 3C 32 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3c
        __asm _emit 0x32
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 6D: je 0x5852d01a
        __asm _emit 0x74
        __asm _emit 0x6d
        push 30h
        ; Exact mapped bytes E8 50 40 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x40
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3a0h], eax
        mov dword ptr [ebp - 4], 71h
        cmp dword ptr [ebp - 3a0h], 0
        ; Exact mapped bytes 74 22: je 0x5852cfef
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [edx + 58903568h]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 19 62 29 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x62
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 3a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852cff9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a4h], 0
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 5a0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 5a0h]
        ; Exact mapped bytes 89 15 38 73 94 58: mov dword ptr [0x58947338], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes EB 6B: jmp 0x5852d085
        __asm _emit 0xeb
        __asm _emit 0x6b
        push 30h
        ; Exact mapped bytes E8 E3 3F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3a8h], eax
        mov dword ptr [ebp - 4], 72h
        cmp dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes 74 22: je 0x5852d05c
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 AC 61 29 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x61
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 3ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5852d066
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3ach], 0
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [ebp - 5a4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 5a4h]
        ; Exact mapped bytes 89 0D 38 73 94 58: mov dword ptr [0x58947338], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes EB 0A: jmp 0x5852d091
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 38 73 94 58 00 00 00 00: mov dword ptr [0x58947338], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 5A 00 00: call 0x58532b50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
