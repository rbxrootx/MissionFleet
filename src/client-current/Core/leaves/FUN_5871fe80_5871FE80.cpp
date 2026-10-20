// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871FE80 .. +0x54E bytes.
extern "C" __declspec(naked) void FUN_5871fe80_5871FE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0bch], ecx
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5871feb4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 3
        ; Exact mapped bytes 7D 1B: jge 0x5871fed8
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [edx + ecx*4 + 0f0h]
        ; Exact mapped bytes E8 EB 09 0A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x5871fea5
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5871fef3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0bch]
        movzx edx, word ptr [ecx + 17eh]
        cmp dword ptr [ebp - 0b8h], edx
        ; Exact mapped bytes 0F 8D A5 01 00 00: jge 0x587200b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 4A 34 DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xff
        add eax, 8ch
        push eax
        push 588b4030h
        lea eax, [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx + 188h]
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 15 34 DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        push edx
        push 588b4038h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + edx + 0f0h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 188h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 BB 33 DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x33
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        add ecx, 5890bfd0h
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 188h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 84 33 DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [eax + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul eax, edx, 0e0h
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0d4h], ecx
        push 0ffffffh
        push 1
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F2 04 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx + eax + 0f0h]
        mov dword ptr [ebp - 0dch], edx
        push 0ffffffh
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        lea ecx, [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 AA 04 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + edx + 0f0h]
        mov dword ptr [ebp - 0e0h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 75 04 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 33 FE FF FF: jmp 0x5871fee4
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587200cc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 1
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 0bch]
        movzx eax, word ptr [edx + 180h]
        cmp dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes 0F 8D 81 01 00 00: jge 0x58720266
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 61 49 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x49
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 6A DD FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 3
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        ; Exact mapped bytes E8 57 20 E0 FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        push 588b403ch
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + ecx + 0f0h]
        mov dword ptr [ebp - 0e8h], eax
        push 0ffffffh
        push 2
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 7C 03 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + edx + 0f0h]
        mov dword ptr [ebp - 0f4h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 87 48 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 5C 48 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x48
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0f0h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 F5 02 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax + edx + 0f0h]
        mov dword ptr [ebp - 0f8h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 C0 02 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 FE FF FF: jmp 0x587200bd
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + 1d0h], 0
        mov dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58720291
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0b8h]
        add edx, 1
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0bch]
        movzx ecx, word ptr [eax + 180h]
        cmp dword ptr [ebp - 0b8h], ecx
        ; Exact mapped bytes 0F 8D 0A 01 00 00: jge 0x587203b4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0bch]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 9C 47 D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x47
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 0fch], edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 69 DD FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x69
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 66 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x66
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x587203af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 66 D6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x66
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 11: jmp 0x5872031c
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 9A BD D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587203af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 AC 46 D6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 35eh]
        mov edx, dword ptr [ebp - 0c8h]
        movzx eax, word ptr [edx + 35eh]
        cmp ecx, eax
        ; Exact mapped bytes 75 5E: jne 0x587203aa
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 89 46 D6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx eax, cx
        cmp edx, eax
        ; Exact mapped bytes 75 33: jne 0x587203aa
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 74 6E DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        push 0
        push 0
        push 0
        push 2beh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 D8 89 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x89
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ecx + 1d0h], 1
        ; Exact mapped bytes EB 05: jmp 0x587203af
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x5872030b
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE FE FF FF: jmp 0x58720282
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 21 D3 FF FF: call 0x5871d6e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 86 0C 11 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
