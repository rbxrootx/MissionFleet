// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58775B50 .. +0x1514 bytes.
extern "C" __declspec(naked) void FUN_58775b50_58775B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3f4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 188h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B EE D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 0F 84 45 0E 00 00: je 0x587769cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 4D EE D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 32 0E 00 00: je 0x587769cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 3A EE D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x58775d0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 3F 72 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        push 100h
        push 0
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 29 72 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 6B EE D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 358h], ecx
        push 588b55fch
        ; Exact mapped bytes E8 E5 C3 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc3
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3e8h], eax
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov eax, dword ptr [ebp - 3e8h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 1a0h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 4A 04 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0xff
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 A7 71 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push 0
        lea eax, [ebp - 184h]
        push eax
        ; Exact mapped bytes E8 91 71 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 D3 ED D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0b4h]
        cdq
        mov dword ptr [ebp - 3f4h], eax
        mov dword ptr [ebp - 3f0h], edx
        lea ecx, [ebp - 3f4h]
        push ecx
        push 80h
        lea edx, [ebp - 184h]
        push edx
        ; Exact mapped bytes E8 F8 BA FB FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 184h]
        push eax
        push 588b5620h
        ; Exact mapped bytes E8 24 C3 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc3
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 0F B1 D3 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0xd3
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 1a4h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 98 03 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 45: jmp 0x58775d50
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 1a8h], eax
        push 588b5644h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 73 03 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 1ach], edx
        push 588b5648h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 51 03 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 1b4h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 F3 EC D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 1b0h], eax
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 18 03 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 4D EC D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 37 EC D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 D6 C3 DA FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc3
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov edx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [edx + 0b4h]
        ; Exact mapped bytes E8 0C 44 D3 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        push 588b564ch
        push 80h
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        ; Exact mapped bytes E8 F2 AF D3 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xaf
        __asm _emit 0xd3
        __asm _emit 0xff
        add esp, 14h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 79 46 E5 FF: call 0x585ca4a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x46
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 81 7A D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 1cch], edx
        push 1
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 79 00 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e8h]
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 43 46 E5 FF: call 0x585ca4d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x46
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        mov ecx, dword ptr [ebp - 1d0h]
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 1B 7A D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 1d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 13 00 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 1e0h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 76 EB D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xeb
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, word ptr [eax + 40h]
        mov dword ptr [ebp - 1dch], edx
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 BA 79 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x79
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 1e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 BB FF D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 1ech], edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 05 48 E7 FF: call 0x585ea750
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 5D 79 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x79
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 1f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 55 FF D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e8h]
        mov dword ptr [ebp - 1f8h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 CF 47 E7 FF: call 0x585ea780
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 F7 78 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x78
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 1fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 EF FE D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 52 EA D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 42h]
        mov dword ptr [ebp - 200h], ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 96 78 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 208h], ecx
        push 1
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 97 FE D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 4A F0 D2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 20ch]
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 42 78 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x78
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 214h], eax
        push 1
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 43 FE D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 21ch], edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 96 96 D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 EE 77 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 220h], edx
        push 1
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 EF FD D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 228h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 A2 EF D2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        mov edx, dword ptr [ebp - 224h]
        push edx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 8A DF D8 FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdf
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 230h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 6D EF D2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov edx, dword ptr [ebp - 22ch]
        push edx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 05 E0 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 238h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 D8 95 D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x95
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 80 DF D8 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 240h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 83 D7 D4 FF: call 0x584c3930
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0xff
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 23ch], eax
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 F3 76 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x76
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 248h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 66 D7 D4 FF: call 0x584c3950
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 BE 76 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x76
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 24ch], eax
        push 1
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 B6 FC D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 254h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 00 B2 DC FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 250h], eax
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 50 76 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x76
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 258h], edx
        push 1
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 48 FC D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 260h], edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 22 E7 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 78h]
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 E7 75 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x75
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 5A B1 DC FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 264h], eax
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 4A DE D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xde
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 270h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 AD E6 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 26ch], edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 C2 DD D8 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 96 F4 D1 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x587764cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 83 F4 D1 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf4
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x587764cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 6D F4 D1 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 278h], eax
        mov ecx, dword ptr [ebp - 190h]
        movzx edx, word ptr [ecx + 4]
        add edx, 2
        push edx
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F E7 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 97 08 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 27ch], edx
        mov eax, dword ptr [ebp - 190h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 B0 FC D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 280h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 CE FC D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 284h], ecx
        push 1
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 AF FA D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 190h]
        movzx edx, word ptr [ecx + 9ah]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 64 74 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x74
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 28ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 65 FA D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 290h], eax
        mov ecx, dword ptr [ebp - 190h]
        movzx edx, word ptr [ecx + 98h]
        push edx
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 1A 74 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x74
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 294h], ecx
        push 1
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 1B FA D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x5877657f
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 298h], eax
        push 0
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 79 07 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 29ch], edx
        push 0ddddddh
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 D7 FB D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 2a4h], ecx
        push 588b5654h
        ; Exact mapped bytes E8 CB BA DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xba
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2a0h], eax
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 60 FB D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 2a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 81 F9 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 2ach], eax
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 62 F9 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 46 F2 D1 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 05 03 00 00: je 0x58776897
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 33 F2 D1 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 EF 02 00 00: je 0x58776897
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 1D F2 D1 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 194h]
        movzx edx, word ptr [ecx + 4]
        add edx, 2
        push edx
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF E4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 67 06 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 2b8h], edx
        mov eax, dword ptr [ebp - 194h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 80 FA D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 2bch], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 9E FA D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 2c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 7F F8 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 194h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 35 72 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 2c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 36 F8 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 2cch], eax
        push 1
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 17 F8 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 2d4h], edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 CA BF E9 FF: call 0x586126b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 C2 71 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 2d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 C3 F7 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 2e0h], ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 F6 B9 DE FF: call 0x58562130
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb9
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 6E 71 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 2e4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 1F F8 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 D3 8F D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x58776892
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 C0 8F D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 E3 C0 DE FF: call 0x58562880
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 64h
        sub edx, dword ptr [eax]
        imul esi, edx
        mov eax, esi
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 ED E8 D2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 198h]
        ; Exact mapped bytes 7C 5C: jl 0x58776827
        __asm _emit 0x7c
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 2e8h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 71 D9 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 44 8F D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        mov ecx, dword ptr [ebp - 2ech]
        push ecx
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 EC D8 D8 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6B: jmp 0x58776892
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 2f8h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 6C E8 D2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 04 D9 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 300h], eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 D7 8E D3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov ecx, dword ptr [ebp - 2fch]
        push ecx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 7F D8 D8 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x587769a8
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 304h], eax
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 AD 03 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 308h], edx
        push 1
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 0E F6 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 30ch], ecx
        push 0ddddddh
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 EC F7 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 314h], eax
        push 588b567ch
        ; Exact mapped bytes E8 E0 B6 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb6
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 310h], eax
        mov ecx, dword ptr [ebp - 310h]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 75 F7 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 318h], eax
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 96 F5 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 31ch], edx
        push 0
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 77 F5 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 320h], ecx
        push 0
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 58 F5 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 324h], eax
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 E9 F5 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 328h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 C9 F5 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1B 05 00 00: jmp 0x58776ee8
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 32ch], ecx
        push 588b56a4h
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 B1 F6 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 330h], eax
        push 588b56a8h
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 8F F6 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 338h], edx
        push 588b56ach
        ; Exact mapped bytes E8 C3 B5 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 334h], eax
        mov eax, dword ptr [ebp - 334h]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 58 F6 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 33ch], edx
        push 588b56cch
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 36 F6 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 344h], ecx
        push 588b56d0h
        ; Exact mapped bytes E8 6A B5 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 340h], eax
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 FF F5 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 348h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 1D F6 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 350h], eax
        push 588b56ech
        ; Exact mapped bytes E8 11 B5 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 34ch]
        push ecx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 A6 F5 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 354h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 C4 F5 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 3a4h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 A2 F5 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 35ch], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 80 F5 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 360h], eax
        push 0
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 61 F3 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 364h], edx
        push 0
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 42 F3 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 368h], ecx
        push 0
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 23 F3 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 36ch], eax
        push 0
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 04 F3 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 370h], edx
        push 0
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 E5 F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 374h], eax
        push 0
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 BD F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 378h], eax
        push 0
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 95 F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 37ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 6D F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 380h], ecx
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 45 F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 384h], eax
        push 0
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 26 F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 388h], edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 07 F2 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 38ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 E8 F1 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 390h], eax
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 79 44 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 394h], edx
        push 0
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 5A 44 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 398h], eax
        push 0
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 82 F1 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 39ch], eax
        push 0
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 5A F1 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 3a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 3B F1 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 3ech], eax
        push 0
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 13 F1 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 3a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 EB F0 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 3ach], edx
        push 0
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 9C D2 D8 FF: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 3b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 AD D1 D8 FF: call 0x58503fe0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd1
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 3b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 0E D3 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 3b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 EF D2 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 3bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 D0 D2 D8 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 3c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 B4 FD D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 3c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 98 FD D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 3c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 A9 F0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 19ch], 0
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 38: je 0x58776f33
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 DA DA D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xda
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58776f33
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 CB DA D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 0A: jne 0x58776f33
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 1
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 0F 85 15 01 00 00: jne 0x58777055
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 A4 00 00: call 0x58781350
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58776f8c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 3d0h], edx
        push 588b5708h
        ; Exact mapped bytes E8 85 B0 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3cch], eax
        mov eax, dword ptr [ebp - 3cch]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 1A F1 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x58777055
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 188h]
        movzx edx, word ptr [ecx + 13ch]
        cmp edx, 0a9h
        ; Exact mapped bytes 74 1F: je 0x58776fc0
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x58776fc0
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 92 E3 FF: call 0x585b0270
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x92
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 3A: je 0x58776ffa
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 3d8h], edx
        push 588b5728h
        ; Exact mapped bytes E8 14 B0 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3d4h], eax
        mov eax, dword ptr [ebp - 3d4h]
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 A9 F0 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5877701d
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 3dch], edx
        push 588b574ch
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 84 F0 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 3e4h], ecx
        push 588b5750h
        ; Exact mapped bytes E8 B7 AF DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaf
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3e0h], eax
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 4C F0 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F0 9F 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
