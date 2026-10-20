// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859D070 .. +0xB7A bytes.
extern "C" __declspec(naked) void FUN_5859d070_5859D070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 154h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 98h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        movzx edx, word ptr [ecx + 2]
        test edx, edx
        ; Exact mapped bytes 0F 84 D2 07 00 00: je 0x5859d871
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 27 C6 F9 FF: call 0x585396e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        movzx edx, word ptr [ecx + 2]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        sub eax, 1
        mov dword ptr [ebp - 0bch], eax
        cmp dword ptr [ebp - 0bch], 3
        ; Exact mapped bytes 0F 87 DE 00 00 00: ja 0x5859d1ca
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 24 8D EC DB 59 58: jmp dword ptr [ecx*4 + 0x5859dbec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0x59
        __asm _emit 0x58
        movzx edx, word ptr [ebp - 8ah]
        push edx
        movzx eax, word ptr [ebp - 8ch]
        push eax
        movzx ecx, word ptr [ebp - 8eh]
        push ecx
        push 588ab06ch
        ; Exact mapped bytes E8 D5 4E F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x5859d1ca
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8ah]
        push eax
        movzx ecx, word ptr [ebp - 8ch]
        push ecx
        push 588ab090h
        ; Exact mapped bytes E8 A2 4E F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 66: jmp 0x5859d1ca
        __asm _emit 0xeb
        __asm _emit 0x66
        movzx eax, word ptr [ebp - 8ah]
        push eax
        movzx ecx, word ptr [ebp - 8ch]
        push ecx
        push 588ab0b0h
        ; Exact mapped bytes E8 72 4E F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 36: jmp 0x5859d1ca
        __asm _emit 0xeb
        __asm _emit 0x36
        movzx eax, word ptr [ebp - 8ah]
        push eax
        movzx ecx, word ptr [ebp - 8ch]
        push ecx
        movzx edx, word ptr [ebp - 8eh]
        push edx
        push 588ab0d0h
        ; Exact mapped bytes E8 3A 4E F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 1C 13 00: call 0x586cee00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 FF 04 00 00: jne 0x5859d6f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 124h], eax
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 CD 8C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d22f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, 1
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 19h
        ; Exact mapped bytes 0F 8D 7A 03 00 00: jge 0x5859d5b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d257
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a4h]
        add edx, 1
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 2
        ; Exact mapped bytes 7D 32: jge 0x5859d292
        __asm _emit 0x7d
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 98h]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 150h], ecx
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 51 8C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x5859d248
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 1D 8C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 EC 8B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4 + 3bch]
        mov dword ptr [ebp - 0c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 C6 8B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d336
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a4h]
        add ecx, 1
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 2
        ; Exact mapped bytes 7D 29: jge 0x5859d368
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + edx*4 + 420h]
        mov dword ptr [ebp - 0cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 7B 8B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x5859d327
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        mov ecx, dword ptr [ebp - 9ch]
        movzx edx, byte ptr [eax + ecx + 0fch]
        test edx, edx
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x5859d49f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        mov edx, dword ptr [ecx + 38h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 74 F2 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5859d3f8
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + eax*4 + 3bch]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        mov edx, dword ptr [ecx + 38h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 03 F2 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 3B 8B EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5859d437
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4 + 3bch]
        mov dword ptr [ebp - 0dch], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 77 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 FA 8A EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 D8 23 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 A7 23 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x5859d5b1
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [edx + 18h]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 73 F2 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5859d50f
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4 + 3bch]
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [edx + 18h]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 02 F2 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 24 8A EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5859d54e
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + edx*4 + 3bch]
        mov dword ptr [ebp - 0f4h], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 75 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 E3 89 EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 98h]
        lea edx, [ecx + eax*8 + 2f4h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 C1 22 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 98h]
        lea edx, [ecx + eax*8 + 2f4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 90 22 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6A FC FF FF: jmp 0x5859d220
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        movzx ecx, word ptr [eax]
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 551h
        ; Exact mapped bytes 7F 5A: jg 0x5859d62f
        __asm _emit 0x7f
        __asm _emit 0x5a
        cmp dword ptr [ebp - 0a0h], 551h
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5859d6a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 379h
        ; Exact mapped bytes 7F 2D: jg 0x5859d61e
        __asm _emit 0x7f
        __asm _emit 0x2d
        cmp dword ptr [ebp - 0a0h], 379h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5859d684
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 1b1h
        ; Exact mapped bytes 74 53: je 0x5859d660
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [ebp - 0a0h], 281h
        ; Exact mapped bytes 74 59: je 0x5859d672
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5859d6ee
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 411h
        ; Exact mapped bytes 74 6C: je 0x5859d696
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x5859d6ee
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 609h
        ; Exact mapped bytes 74 7F: je 0x5859d6ba
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [ebp - 0a0h], 719h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5859d6cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 829h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5859d6de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5859d6ee
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 A1 F8 FF FF: call 0x5859cf10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7C: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3F F7 FF FF: call 0x5859cdc0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6A: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DD F5 FF FF: call 0x5859cc70
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 6B F4 FF FF: call 0x5859cb10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B9 F5 FF FF: call 0x5859cc70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 34: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 47 F4 FF FF: call 0x5859cb10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 35 F4 FF FF: call 0x5859cb10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x5859d6ee
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 83 F5 FF FF: call 0x5859cc70
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5859d86c
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + 160h]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 CE 87 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d72e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b4h]
        add eax, 1
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 19h
        ; Exact mapped bytes 0F 8D 31 01 00 00: jge 0x5859d86c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d756
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a8h]
        add ecx, 1
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 2
        ; Exact mapped bytes 7D 32: jge 0x5859d791
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 52 87 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x5859d747
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ebp - 98h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 1E 87 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ebp - 98h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 10ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 ED 86 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + eax*4 + 3bch]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 C7 86 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d835
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a8h]
        add eax, 1
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 2
        ; Exact mapped bytes 7D 29: jge 0x5859d867
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4 + 420h]
        mov dword ptr [ebp - 114h], eax
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 7C 86 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x5859d826
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x5859d71f
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x5859d9f7
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 15 13 00: call 0x586cee00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + 160h]
        mov dword ptr [ebp - 118h], edx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 43 86 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d8b9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 19h
        ; Exact mapped bytes 0F 8D 31 01 00 00: jge 0x5859d9f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d8e1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ach]
        add ecx, 1
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 2
        ; Exact mapped bytes 7D 32: jge 0x5859d91c
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [ebp - 98h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C7 85 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x5859d8d2
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 98h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 120h], eax
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 93 85 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 98h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 13ch], edx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 62 85 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + eax*4 + 3bch]
        mov dword ptr [ebp - 128h], edx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 3C 85 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859d9c0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ach]
        add eax, 1
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp - 0ach], 2
        ; Exact mapped bytes 7D 29: jge 0x5859d9f2
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0ach]
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + ecx*4 + 420h]
        mov dword ptr [ebp - 12ch], eax
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 F1 84 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x5859d9b1
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x5859d8aa
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5859da12
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0b0h]
        add ecx, 1
        mov dword ptr [ebp - 0b0h], ecx
        cmp dword ptr [ebp - 0b0h], 9
        ; Exact mapped bytes 0F 8D AF 01 00 00: jge 0x5859dbce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0b0h], 0e84h
        movzx eax, word ptr [edx + 588f4f90h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        movzx ecx, word ptr [edx]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 84 01 00 00: jne 0x5859dbc9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0b0h], 0e84h
        movzx eax, word ptr [edx + 588f4f90h]
        cmp eax, 0a9h
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x5859dbc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [edx + 18h]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 6D F2 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x5859dad3
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + 808h]
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        mov ecx, dword ptr [eax + 18h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 FC F1 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 60 84 EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x5859db14
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 0b0h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 154h], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 70 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 1D 84 EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        mov ecx, dword ptr [eax + 38h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 6C F2 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x5859db86
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 80ch]
        mov ecx, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 144h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        mov edx, dword ptr [ecx + 38h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 FB F1 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AD 83 EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x5859dbc7
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14ch], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 6F EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 6A 83 EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5859dbce
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 35 FE FF FF: jmp 0x5859da03
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 97 9C FF FF: call 0x58597870
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6C 34 29 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
