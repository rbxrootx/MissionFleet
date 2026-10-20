// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856F120 .. +0x110E bytes.
extern "C" __declspec(naked) void FUN_5856f120_5856F120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 274h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1c4h], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 8000h
        ; Exact mapped bytes 75 71: jne 0x5856f1b9
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1f8h], ecx
        cmp dword ptr [ebp - 1f8h], 80000002h
        ; Exact mapped bytes 74 0E: je 0x5856f16e
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 1f8h], 80000003h
        ; Exact mapped bytes 74 3C: je 0x5856f1a8
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 46: jmp 0x5856f1b4
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 1A 00 00: call 0x58570c20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 0ch], 80020010h
        ; Exact mapped bytes 75 20: jne 0x5856f1a6
        __asm _emit 0x75
        __asm _emit 0x20
        push 589604e0h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        push 589604e0h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 6B 15 00 00: call 0x58570710
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5856f1b4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 3D FA FF FF: call 0x5856ebf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 60 10 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, 8001h
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x5856f26e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1fch], eax
        cmp dword ptr [ebp - 1fch], 8001000fh
        ; Exact mapped bytes 74 79: je 0x5856f25d
        __asm _emit 0x74
        __asm _emit 0x79
        cmp dword ptr [ebp - 1fch], 80010109h
        ; Exact mapped bytes 74 02: je 0x5856f1f2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 77: jmp 0x5856f269
        __asm _emit 0xeb
        __asm _emit 0x77
        mov dword ptr [ebp - 1c0h], 0
        mov dword ptr [ebp - 1bch], 10060000h
        mov dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 8B 0D 28 D2 8F 58: mov ecx, dword ptr [0x588fd228]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], ecx
        ; Exact mapped bytes 8B 15 2C D2 8F 58: mov edx, dword ptr [0x588fd22c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        xor edx, 55h
        mov dword ptr [ebp - 1b0h], edx
        mov dword ptr [ebp - 0ech], 0
        push 0
        push 0d8h
        lea eax, [ebp - 1c0h]
        push eax
        push 80010109h
        push 0
        push 80020010h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 36 D7 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5856f269
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F8 18 00 00: call 0x58570b60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AB 0F 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 8002h
        ; Exact mapped bytes 0F 85 98 0F 00 00: jne 0x58570219
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1c8h], ecx
        cmp dword ptr [ebp - 1c8h], 8002b111h
        ; Exact mapped bytes 77 31: ja 0x5856f2ca
        __asm _emit 0x77
        __asm _emit 0x31
        cmp dword ptr [ebp - 1c8h], 8002b111h
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x5856f43a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1c8h], 80020a00h
        ; Exact mapped bytes 0F 84 09 0C 00 00: je 0x5856fec2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1c8h], 8002b101h
        ; Exact mapped bytes 74 31: je 0x5856f2f6
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E9 4F 0F 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1c8h]
        add edx, 7ffd4eeeh
        mov dword ptr [ebp - 1c8h], edx
        cmp dword ptr [ebp - 1c8h], 3
        ; Exact mapped bytes 0F 87 30 0F 00 00: ja 0x58570219
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes FF 24 85 30 02 57 58: jmp dword ptr [eax*4 + 0x58570230]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x57
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x5856f429
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], edx
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 66 F2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 2F: je 0x5856f363
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 1e8h]
        and ecx, 0ffffh
        or ecx, 30000h
        mov dword ptr [ebp - 1cch], ecx
        push 0
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F0 12 00 00: call 0x58570650
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5856f3a0
        __asm _emit 0xeb
        __asm _emit 0x3d
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 34: je 0x5856f3a0
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 75 2B: jne 0x5856f3a0
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 1dch]
        and eax, 0ffffh
        or eax, 40000h
        mov dword ptr [ebp - 1cch], eax
        push 0
        mov ecx, dword ptr [ebp - 1cch]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 B1 12 00 00: call 0x58570650
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 2D: je 0x5856f3d6
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 1dch]
        and edx, 0ffffh
        or edx, 20000h
        mov dword ptr [ebp - 1cch], edx
        push 0
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 7B 12 00 00: call 0x58570650
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 2D: je 0x5856f40c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 200h]
        and ecx, 0ffffh
        or ecx, 10000h
        mov dword ptr [ebp - 1cch], ecx
        push 0
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 45 12 00 00: call 0x58570650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 FA 10 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 18 00 00: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5856f435
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 BC F7 FF FF: call 0x5856ebf0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF 0D 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x5856f5d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 1
        ; Exact mapped bytes 75 18: jne 0x5856f46b
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + 184h], ecx
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x5856f5cf
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        cmp ecx, 2
        ; Exact mapped bytes 75 24: jne 0x5856f49b
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [ecx + 188h], eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 10 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x5856f5cf
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        cmp eax, 3
        ; Exact mapped bytes 75 24: jne 0x5856f4cb
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + 18ch], edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 10 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x5856f5cf
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 4
        ; Exact mapped bytes 75 24: jne 0x5856f4fb
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + 190h], ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 10 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x5856f5cf
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x5856f5cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ech], edx
        mov dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856f52f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1d4h]
        add eax, 1
        mov dword ptr [ebp - 1d4h], eax
        cmp dword ptr [ebp - 1d4h], 3
        ; Exact mapped bytes 7D 5D: jge 0x5856f595
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 1d4h]
        mov edx, dword ptr [ebp - 1c4h]
        cmp dword ptr [edx + ecx*4 + 178h], -1
        ; Exact mapped bytes 75 45: jne 0x5856f593
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        mov edx, dword ptr [ebp - 1d4h]
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + edx*4 + 178h], ecx
        mov ecx, dword ptr [ebp - 1ech]
        add ecx, 18h
        push ecx
        push 18h
        imul edx, dword ptr [ebp - 1d4h], 18h
        mov eax, dword ptr [ebp - 1c4h]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 F2 4B 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4b
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 02: jmp 0x5856f595
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8B: jmp 0x5856f520
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 16: jne 0x5856f5b9
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1ech]
        add eax, 18h
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 5D 07 00: call 0x585e53b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5d
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 1ech]
        add ecx, 18h
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 16 17 00: call 0x586e0c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x5856f784
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1f0h], eax
        cmp dword ptr [ebp - 1f0h], 1
        ; Exact mapped bytes 74 1F: je 0x5856f608
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 1f0h], 2
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x5856f698
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1f0h], 3
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x5856f70f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x5856f784
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 47: jne 0x5856f65d
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF F8 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        push 588a9aach
        ; Exact mapped bytes E8 BF 29 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 244h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 7F 5E 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 11 00 00: call 0x58570830
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 588a9ac8h
        ; Exact mapped bytes E8 89 29 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 26ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 26ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 0C 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 11 00 00: call 0x58570860
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x5856f784
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3C: jne 0x5856f6e2
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F F8 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        push 588a9ae4h
        ; Exact mapped bytes E8 2F 29 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 270h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 EF 5D 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 588a9b08h
        ; Exact mapped bytes E8 04 29 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 214h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 214h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 0C 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 75: jmp 0x5856f784
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3C: jne 0x5856f759
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 F7 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        push 588a9b2ch
        ; Exact mapped bytes E8 B8 28 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 78 5D 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 588a9b50h
        ; Exact mapped bytes E8 8D 28 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 220h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 0B 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 90 0A 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 1
        ; Exact mapped bytes 74 3A: je 0x5856f7cf
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        cmp ecx, 5
        ; Exact mapped bytes 74 2E: je 0x5856f7cf
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 224h], edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 22 17 00: call 0x586e1a40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x5856f801
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        cmp eax, 5
        ; Exact mapped bytes 75 26: jne 0x5856f801
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 204h], ecx
        mov edx, dword ptr [ebp - 204h]
        add edx, 18h
        push edx
        mov eax, dword ptr [ebp - 204h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 23 17 00: call 0x586e1bc0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 13 0A 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 83 02 00 00: je 0x5856fa96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        cmp eax, 2
        ; Exact mapped bytes 75 54: jne 0x5856f873
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 1c4h]
        cmp dword ptr [eax + 188h], edx
        ; Exact mapped bytes 75 3F: jne 0x5856f873
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 1c4h]
        mov edx, dword ptr [ecx + 188h]
        push edx
        push 2
        push 589604e0h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 25 17 00: call 0x586e1e40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 0C 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + 188h], 0ffffffffh
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x5856fa1a
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 3
        ; Exact mapped bytes 75 54: jne 0x5856f8d3
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 1c4h]
        cmp dword ptr [edx + 18ch], ecx
        ; Exact mapped bytes 75 3F: jne 0x5856f8d3
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 1c4h]
        mov ecx, dword ptr [eax + 18ch]
        push ecx
        push 3
        push 589604e0h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 25 17 00: call 0x586e1e40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 0C 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + 18ch], 0ffffffffh
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x5856fa1a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        cmp ecx, 4
        ; Exact mapped bytes 75 54: jne 0x5856f933
        __asm _emit 0x75
        __asm _emit 0x54
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 1c4h]
        cmp dword ptr [ecx + 190h], eax
        ; Exact mapped bytes 75 3F: jne 0x5856f933
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 1c4h]
        mov eax, dword ptr [edx + 190h]
        push eax
        push 4
        push 589604e0h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 25 17 00: call 0x586e1e40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 0B 17 00: call 0x586e0500
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [ecx + 190h], 0ffffffffh
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x5856fa1a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        cmp eax, 5
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x5856fa1a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1f4h], ecx
        mov dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856f967
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1d0h]
        add edx, 1
        mov dword ptr [ebp - 1d0h], edx
        cmp dword ptr [ebp - 1d0h], 3
        ; Exact mapped bytes 0F 8D A6 00 00 00: jge 0x5856fa1a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [ebp - 1c4h]
        cmp dword ptr [eax + edx*4 + 178h], ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5856fa15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1f4h]
        add ecx, 18h
        push ecx
        imul edx, dword ptr [ebp - 1d0h], 18h
        mov eax, dword ptr [ebp - 1c4h]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 28 12 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x12
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x5856fa15
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 1f4h]
        add edx, 18h
        push edx
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 25 17 00: call 0x586e1fc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [edx + ecx*4 + 178h], 0ffffffffh
        push 18h
        push 0
        imul eax, dword ptr [ebp - 1d0h], 18h
        mov ecx, dword ptr [ebp - 1c4h]
        lea edx, [ecx + eax + 130h]
        push edx
        ; Exact mapped bytes E8 00 D4 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x5856fa1a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x5856f958
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 12 00 00: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC F4 10 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 F4 FF FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        push 588a9b74h
        ; Exact mapped bytes E8 A1 25 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 228h], eax
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 16 CD F7 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x5856fa96
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 5A 07 00: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 58 07 00: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7E 07 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        cmp eax, 1
        ; Exact mapped bytes 74 3A: je 0x5856fae1
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 5
        ; Exact mapped bytes 74 2E: je 0x5856fae1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 230h], eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 23 17 00: call 0x586e1e40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x5856fb13
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        cmp ecx, 5
        ; Exact mapped bytes 75 26: jne 0x5856fb13
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 208h], edx
        mov eax, dword ptr [ebp - 208h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 24 17 00: call 0x586e1fc0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 01 07 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 0F 84 56 03 00 00: je 0x5856fe7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0eh]
        mov dword ptr [ebp - 1e0h], ecx
        mov edx, dword ptr [ebp - 1e0h]
        sub edx, 2
        mov dword ptr [ebp - 1e0h], edx
        cmp dword ptr [ebp - 1e0h], 3
        ; Exact mapped bytes 0F 87 22 02 00 00: ja 0x5856fd70
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes FF 24 85 40 02 57 58: jmp dword ptr [eax*4 + 0x58570240]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x57
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3C: jne 0x5856fba5
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C F3 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        push 588a9b90h
        ; Exact mapped bytes E8 6C 24 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 234h], eax
        push 999999h
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 2C 59 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 588a9bb0h
        ; Exact mapped bytes E8 41 24 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 23ch], eax
        push 999999h
        mov eax, dword ptr [ebp - 23ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 07 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x5856fd70
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3C: jne 0x5856fc1f
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 F3 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        push 588a9bd0h
        ; Exact mapped bytes E8 F2 23 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 240h], eax
        push 999999h
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 B2 58 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 588a9bf4h
        ; Exact mapped bytes E8 C7 23 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 248h], eax
        push 999999h
        mov eax, dword ptr [ebp - 248h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 07 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x5856fd70
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3C: jne 0x5856fc99
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 F2 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        push 588a9c18h
        ; Exact mapped bytes E8 78 23 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24ch], eax
        push 999999h
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 38 58 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 588a9c3ch
        ; Exact mapped bytes E8 4D 23 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 254h], eax
        push 999999h
        mov eax, dword ptr [ebp - 254h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 06 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x5856fd70
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 3A D1 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd1
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 64h
        push 0
        lea edx, [ebp - 0e8h]
        push edx
        ; Exact mapped bytes E8 27 D1 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 18h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 85 44 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1ch]
        push edx
        push 588a9c60h
        ; Exact mapped bytes E8 E4 22 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x22
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        push eax
        push 64h
        lea eax, [ebp - 0e8h]
        push eax
        ; Exact mapped bytes E8 D2 10 F4 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 29: jne 0x5856fd58
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 F1 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        push 999999h
        lea edx, [ebp - 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 79 57 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 999999h
        lea eax, [ebp - 0e8h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 05 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        ; Exact mapped bytes E8 04 14 2E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov dword ptr [ebp - 1e4h], 0
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x5856fe79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 65h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 64 D0 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 1d8h], 64h
        ; Exact mapped bytes 7F 30: jg 0x5856fde8
        __asm _emit 0x7f
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 18h]
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 B7 CA 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes EB 3D: jmp 0x5856fe25
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 64h
        mov edx, dword ptr [ebp - 1e4h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 18h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 8C CA 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1e4h]
        add eax, 64h
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        sub ecx, 64h
        mov dword ptr [ebp - 1d8h], ecx
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 29: jne 0x5856fe5c
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 F0 FF FF: call 0x5856eef0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        push 999999h
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 75 56 25 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 999999h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 04 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x5856fd8f
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 42: jmp 0x5856febd
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 260h], eax
        cmp dword ptr [ebp - 260h], 1
        ; Exact mapped bytes 74 02: je 0x5856fe92
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x5856febd
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 588a9c84h
        ; Exact mapped bytes E8 54 21 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 264h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 04 17 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 03 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ah]
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x5856fede
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 C7 01 00 00: jne 0x585700a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ah]
        and ecx, 0ffh
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x58570004
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        and eax, 0ff0000h
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 34: jne 0x5856ff3b
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 99 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5856ff3b
        __asm _emit 0x74
        __asm _emit 0x25
        push 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ah]
        and ecx, 0ff00h
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 CE 0A 00: call 0x5861ce00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x5856ff83
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        and eax, 0ff0000h
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 32: jne 0x5856ff83
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 99 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x5856ff83
        __asm _emit 0x75
        __asm _emit 0x23
        push 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ah]
        and ecx, 0ff00h
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 97 F4 FF: call 0x584b96a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x5856ffb1
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 3C 07 00: call 0x585e3c20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x5856ffff
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x5856ffdf
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 46 08 00: call 0x585f45e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x5856ffff
        __asm _emit 0xeb
        __asm _emit 0x20
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 F4 16 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x585700a5
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ah]
        and edx, 0ff00h
        cmp edx, 800h
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x585700a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 5F: je 0x58570089
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0eh]
        mov dword ptr [ebp - 20ch], edx
        cmp dword ptr [ebp - 20ch], 0
        ; Exact mapped bytes 74 0B: je 0x5857004b
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 20ch], 1
        ; Exact mapped bytes 74 24: je 0x5857006d
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes EB 3C: jmp 0x58570087
        __asm _emit 0xeb
        __asm _emit 0x3c
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 F4 16 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf4
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x58570087
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A FF 16 00: call 0x586dffb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x585700a5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 800h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 3B 07 00: call 0x585e3c20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ah]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x58570150
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x58570150
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 98 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x585700f6
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 800h
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D CD 0A 00: call 0x5861ce00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x5857014b
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 97 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5857011e
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 800h
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 95 F4 FF: call 0x584b96a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5857014b
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 20: je 0x5857014b
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 F3 16 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x58570219
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ah]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x58570219
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0eh]
        test eax, eax
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x58570219
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        and edx, 0ff0000h
        shr edx, 10h
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x585701ae
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 97 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x585701ae
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 800h
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 CC 0A 00: call 0x5861ce00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6B: jmp 0x58570219
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        and eax, 0ff0000h
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 28: jne 0x585701ec
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 97 FB FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x585701ec
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 800h
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 94 F4 FF: call 0x584b96a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58570219
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 20: je 0x58570219
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 F2 16 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf2
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 28 0E 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
