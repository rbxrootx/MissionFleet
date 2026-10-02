// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58539D50 .. +0xF56 bytes.
extern "C" __declspec(naked) void FUN_58539d50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882c79h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 49 F9 FF: call 0x584ce750
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 B4 56 90 58: mov dword ptr [0x589056b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 1c4h], 0
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [edx + 589604e0h], 0
        push 2
        ; Exact mapped bytes E8 F6 0F 00 00: call 0x5853ada0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 1E 0F 00 00: call 0x5853acd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 14h
        ; Exact mapped bytes E8 4A 72 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 13: je 0x58539de6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 72 9F 28 00: call 0x587c3d50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9f
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539df0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 184h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes 89 0D F4 1F 96 58: mov dword ptr [0x58961ff4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 C0 40 89 58: call dword ptr [0x588940c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 70 79 94 58: mov dword ptr [0x58947970], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        push 94h
        push 0
        lea eax, [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 CA 2F 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0b0h], 94h
        lea ecx, [ebp - 0b0h]
        push ecx
        ; Exact mapped bytes FF 15 34 41 89 58: call dword ptr [0x58894134]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 10h
        ; Exact mapped bytes E8 9C 71 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 4B: je 0x58539ecc
        __asm _emit 0x74
        __asm _emit 0x4b
        push 588a7298h
        push 2
        push 2
        push 0
        push 0
        push 86h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1bch], eax
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 2C C2 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539ed6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 148h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes 89 0D 1C 20 96 58: mov dword ptr [0x5896201c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 08 71 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 4B: je 0x58539f60
        __asm _emit 0x74
        __asm _emit 0x4b
        push 588a72a0h
        push 2
        push 2
        push 0
        push 0
        push 86h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 0bh
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 14ch], eax
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 98 C1 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539f6a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 150h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes 89 0D 20 20 96 58: mov dword ptr [0x58962020], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 74 70 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x70
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 28: je 0x58539fd1
        __asm _emit 0x74
        __asm _emit 0x28
        push 11h
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], eax
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 27 C1 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc1
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58539fdb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 158h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes 89 0D 24 20 96 58: mov dword ptr [0x58962024], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 03 70 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 28: je 0x5853a042
        __asm _emit 0x74
        __asm _emit 0x28
        push 11h
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 B6 C0 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a04c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 160h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes 89 0D 28 20 96 58: mov dword ptr [0x58962028], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 92 6F 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6f
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 28: je 0x5853a0b3
        __asm _emit 0x74
        __asm _emit 0x28
        push 0bh
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 45 C0 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc0
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a0bd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 168h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes 89 0D 2C 20 96 58: mov dword ptr [0x5896202c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 21 6F 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6f
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 28: je 0x5853a124
        __asm _emit 0x74
        __asm _emit 0x28
        push 11h
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 D4 BF 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a12e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 170h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes 89 0D 30 20 96 58: mov dword ptr [0x58962030], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 B0 6E 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6e
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 28: je 0x5853a195
        __asm _emit 0x74
        __asm _emit 0x28
        push 11h
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 63 BF 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a19f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 178h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes 89 0D 34 20 96 58: mov dword ptr [0x58962034], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 3F 6E 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6e
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 28: je 0x5853a206
        __asm _emit 0x74
        __asm _emit 0x28
        push 11h
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], eax
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 F2 BE 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbe
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a210
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 180h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes 89 0D 3C 20 96 58: mov dword ptr [0x5896203c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 14h
        ; Exact mapped bytes 8B 0D 3C 20 96 58: mov ecx, dword ptr [0x5896203c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 52 F6 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 10h
        ; Exact mapped bytes E8 C0 6D 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 48: je 0x5853a2a5
        __asm _emit 0x74
        __asm _emit 0x48
        push 588a72a8h
        push 2
        push 2
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 18h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], eax
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 53 BE 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbe
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a2af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 188h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes 89 0D 40 20 96 58: mov dword ptr [0x58962040], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 2F 6D 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 48: je 0x5853a336
        __asm _emit 0x74
        __asm _emit 0x48
        push 588a72b0h
        push 2
        push 2
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 14h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 C2 BD 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbd
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a340
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 190h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes 89 0D 38 20 96 58: mov dword ptr [0x58962038], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 14h
        ; Exact mapped bytes 8B 0D 38 20 96 58: mov ecx, dword ptr [0x58962038]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 51 F6 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 10h
        ; Exact mapped bytes E8 90 6C 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6c
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 45: je 0x5853a3d2
        __asm _emit 0x74
        __asm _emit 0x45
        push 588a72b8h
        push 2
        push 2
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 64h
        push 0
        push 0
        push 0
        push 14h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 26 BD 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbd
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a3dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 198h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 89 0D 48 20 96 58: mov dword ptr [0x58962048], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 14h
        ; Exact mapped bytes 8B 0D 48 20 96 58: mov ecx, dword ptr [0x58962048]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 50 F6 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xff
        push 10h
        ; Exact mapped bytes 8B 0D 48 20 96 58: mov ecx, dword ptr [0x58962048]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 51 F6 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 10h
        ; Exact mapped bytes E8 E7 6B 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 48: je 0x5853a47e
        __asm _emit 0x74
        __asm _emit 0x48
        push 588a72c0h
        push 2
        push 2
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 7A BC 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a488
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 1a0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes 89 0D 44 20 96 58: mov dword ptr [0x58962044], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 10h
        ; Exact mapped bytes E8 56 6B 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 4B: je 0x5853a512
        __asm _emit 0x74
        __asm _emit 0x4b
        push 588a72c8h
        push 2
        push 2
        push 0
        push 0
        push 80h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1c0h], eax
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 E6 BB 27 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xbb
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a51c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 1a8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes 89 0D 4C 20 96 58: mov dword ptr [0x5896204c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 70h
        ; Exact mapped bytes E8 C2 6A 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6a
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 1E: je 0x5853a579
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        ; Exact mapped bytes 8B 15 24 5F 96 58: mov edx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 AF 98 F9 FF: call 0x584d3e20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a583
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 1ach], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 89 0D 50 20 96 58: mov dword ptr [0x58962050], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 B9 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 3ch
        ; Exact mapped bytes E8 4D 6A 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6a
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 13: je 0x5853a5e3
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D5 62 24 00: call 0x587808b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a5ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 1b0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes A3 30 8C 94 58: mov dword ptr [0x58948c30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        push 1ch
        ; Exact mapped bytes E8 F2 69 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x69
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov dword ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 13: je 0x5853a63e
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 BA 94 FE FF: call 0x58523af0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a648
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 1b4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes 89 15 74 75 94 58: mov dword ptr [0x58947574], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5853a682
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b4h]
        add eax, 1
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 8
        ; Exact mapped bytes 7D 65: jge 0x5853a6f0
        __asm _emit 0x7d
        __asm _emit 0x65
        push 78h
        ; Exact mapped bytes E8 72 69 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x69
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov dword ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 13: je 0x5853a6be
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 3A 85 FE FF: call 0x58522bf0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853a6c8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 1b8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [edx*4 + 58948c34h], eax
        ; Exact mapped bytes EB 83: jmp 0x5853a673
        __asm _emit 0xeb
        __asm _emit 0x83
        push 0
        push 22bh
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 3F AB 1F 00: call 0x58735240
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        push 0
        push 1bch
        mov ecx, 58962178h
        ; Exact mapped bytes E8 2E AB 1F 00: call 0x58735240
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        push 28h
        push 0
        push 58947974h
        ; Exact mapped bytes E8 F0 26 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x26
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [edx + 58947974h], 1
        mov eax, 4
        shl eax, 0
        mov dword ptr [eax + 58947974h], 0
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ecx + 58947974h], 0
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [eax + 58947974h], 0
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ecx + 58947974h]
        or edx, 10000h
        mov eax, 4
        shl eax, 2
        mov dword ptr [eax + 58947974h], edx
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [edx + 58947974h], 0
        ; Exact mapped bytes 83 3D 54 20 96 58 00: cmp dword ptr [0x58962054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x5853a7c2
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        ; Exact mapped bytes 8B 0D 54 20 96 58: mov ecx, dword ptr [0x58962054]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC A2 F4 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa2
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5853a7c2
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 64 35 90 58 00 00 00 00: mov dword ptr [0x58903564], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ecx + 58947780h], 0
        mov edx, 4
        shl edx, 0
        mov dword ptr [edx + 58947780h], 0ah
        mov eax, 4
        shl eax, 1
        mov dword ptr [eax + 58947780h], 28h
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [edx + 5894778ch], 1770h
        mov eax, 4
        shl eax, 0
        mov dword ptr [eax + 5894778ch], 12c0h
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ecx + 5894778ch], 12c0h
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [eax + 58947798h], 24h
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ecx + 58947798h], 20h
        mov edx, 4
        shl edx, 1
        mov dword ptr [edx + 58947798h], 20h
        mov eax, 0ch
        imul ecx, eax, 0
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 0
        mov ecx, 0ch
        imul edx, ecx, 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 589477a4h], 4e20h
        mov ecx, 0ch
        imul edx, ecx, 0
        mov eax, 4
        shl eax, 1
        mov dword ptr [edx + eax + 589477a4h], 4e20h
        mov ecx, 0ch
        shl ecx, 0
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 7530h
        mov ecx, 0ch
        shl ecx, 0
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx + 589477a4h], 186a0h
        mov eax, 0ch
        shl eax, 0
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx + 589477a4h], 5dc0h
        mov edx, 0ch
        shl edx, 1
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 589477a4h], 13880h
        mov edx, 0ch
        shl edx, 1
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 589477a4h], 4e20h
        mov ecx, 0ch
        shl ecx, 1
        mov edx, 4
        shl edx, 1
        mov dword ptr [ecx + edx + 589477a4h], 0
        mov eax, 0ch
        imul ecx, eax, 3
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 8ca0h
        mov ecx, 0ch
        imul edx, ecx, 3
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 589477a4h], 8ca0h
        mov ecx, 0ch
        imul edx, ecx, 3
        mov eax, 4
        shl eax, 1
        mov dword ptr [edx + eax + 589477a4h], 2ee0h
        mov ecx, 0ch
        shl ecx, 2
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 7530h
        mov ecx, 0ch
        shl ecx, 2
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx + 589477a4h], 7530h
        mov eax, 0ch
        shl eax, 2
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx + 589477a4h], 7530h
        mov edx, 0ch
        imul eax, edx, 5
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 5
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 5
        mov edx, 4
        shl edx, 1
        mov dword ptr [ecx + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 6
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 5dc0h
        mov ecx, 0ch
        imul edx, ecx, 6
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 589477a4h], 5dc0h
        mov ecx, 0ch
        imul edx, ecx, 6
        mov eax, 4
        shl eax, 1
        mov dword ptr [edx + eax + 589477a4h], 5dc0h
        mov ecx, 0ch
        imul edx, ecx, 9
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 589477a4h], 5dc0h
        mov edx, 0ch
        imul eax, edx, 9
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx + 589477a4h], 5dc0h
        mov edx, 0ch
        imul eax, edx, 9
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx + 589477a4h], 5dc0h
        mov edx, 0ch
        imul eax, edx, 0ah
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 0ah
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 0ah
        mov edx, 4
        shl edx, 1
        mov dword ptr [ecx + edx + 589477a4h], 5dc0h
        mov eax, 0ch
        imul ecx, eax, 0bh
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 589477a4h], 7d00h
        mov ecx, 0ch
        imul edx, ecx, 0bh
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 589477a4h], 7d00h
        mov ecx, 0ch
        imul edx, ecx, 0bh
        mov eax, 4
        shl eax, 1
        mov dword ptr [edx + eax + 589477a4h], 7d00h
        mov ecx, 0ch
        imul edx, ecx, 0ch
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 589477a4h], 4e20h
        mov edx, 0ch
        imul eax, edx, 0ch
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx + 589477a4h], 4e20h
        mov edx, 0ch
        imul eax, edx, 0ch
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx + 589477a4h], 4e20h
        ; Exact mapped bytes C7 05 24 79 94 58 00 00 00 00: mov dword ptr [0x58947924], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 79 94 58 00 00 00 00: mov dword ptr [0x58947928], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 2C 79 94 58 00 00 00 00: mov dword ptr [0x5894792c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 30 79 94 58 00 00 00 00: mov dword ptr [0x58947930], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 34 79 94 58 00 00 00 00: mov dword ptr [0x58947934], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 38 79 94 58 00 00 00 00: mov dword ptr [0x58947938], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 3C 79 94 58 00 00 00 00: mov dword ptr [0x5894793c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 40 79 94 58 00 00 00 00: mov dword ptr [0x58947940], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 44 79 94 58 18 01 00 00: mov dword ptr [0x58947944], 0x118
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 48 79 94 58 4C FF FF FF: mov dword ptr [0x58947948], 0xffffff4c
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 4C 79 94 58 0A 00 00 00: mov dword ptr [0x5894794c], 0xa
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 50 79 94 58 32 00 00 00: mov dword ptr [0x58947950], 0x32
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 54 79 94 58 F0 00 00 00: mov dword ptr [0x58947954], 0xf0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 58 79 94 58 E0 01 00 00: mov dword ptr [0x58947958], 0x1e0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 77h
        mov esi, 58947780h
        mov edi, 589475a0h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 10h
        push 0
        push 58948d0ch
        ; Exact mapped bytes E8 97 21 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x21
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 1C 8D 94 58 00 00 00 00: mov dword ptr [0x58948d1c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 AE 63 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x63
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
