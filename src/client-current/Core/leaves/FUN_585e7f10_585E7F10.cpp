// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7F10 .. +0x5A9 bytes.
extern "C" __declspec(naked) void FUN_585e7f10_585E7F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 45 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 CA E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 69 05 00 00: je 0x585e84a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 6
        ; Exact mapped bytes 0F 87 77 02 00 00: ja 0x585e81cd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 24 8D BC 84 5E 58: jmp dword ptr [ecx*4 + 0x585e84bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 21 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 44 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 CA E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0ach], eax
        push 588ac9fch
        ; Exact mapped bytes E8 5D A0 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
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
        ; Exact mapped bytes E9 07 02 00 00: jmp 0x585e81cd
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 21 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x21
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 44 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D CA E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0b8h], eax
        push 588aca18h
        ; Exact mapped bytes E8 FA 9F F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        push edx
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x585e81cd
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 20 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 44 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A CA E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0c4h], eax
        push 588aca44h
        ; Exact mapped bytes E8 97 9F F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9f
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x585e81cd
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 20 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 43 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x43
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 C9 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc9
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 110h], eax
        push 588aca64h
        ; Exact mapped bytes E8 34 9F F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9f
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
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
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x585e81cd
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 20 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 43 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x43
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 54 C9 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc9
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0d8h], eax
        push 588aca88h
        ; Exact mapped bytes E8 D1 9E F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 7E: jmp 0x585e81cd
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 588acaa8h
        ; Exact mapped bytes E8 97 9E F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 5E: jmp 0x585e81cd
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 1F EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 42 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 C8 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 0e4h], eax
        push 588acac8h
        ; Exact mapped bytes E8 51 9E F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
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
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB C7 FE FF: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x585e8205
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 0ech], ecx
        push 0ffff00h
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 CE D2 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585e822f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 20f14h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0ffffh
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 A2 D2 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 C8 E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 61 3B 1D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 C8 E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 88h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 7
        ; Exact mapped bytes 0F 85 01 02 00 00: jne 0x585e84a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 67 FA FF: call 0x5858ea90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x585e82fc
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 22: jne 0x585e82dc
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 220dch]
        mov dword ptr [ebp - 100h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 17 68 FA FF: call 0x5858eaf0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x585e82fc
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 220dch]
        mov dword ptr [ebp - 104h], ecx
        push 2
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 F5 67 FA FF: call 0x5858eaf0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x585e842f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 41 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB C6 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 0F: jne 0x585e8334
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp - 0a4h], 4bh
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x585e841d
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 41 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D C6 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc6
        __asm _emit 0xe9
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
        cmp edx, 2
        ; Exact mapped bytes 75 0F: jne 0x585e8362
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp - 0a0h], 7dh
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x585e8411
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 40 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x40
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F C6 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc6
        __asm _emit 0xe9
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
        cmp ecx, 3
        ; Exact mapped bytes 75 0C: jne 0x585e838d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 0c8h
        ; Exact mapped bytes EB 78: jmp 0x585e8405
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 40 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x40
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 C6 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 0C: jne 0x585e83b8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 0fah
        ; Exact mapped bytes EB 41: jmp 0x585e83f9
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 40 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 C6 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc6
        __asm _emit 0xe9
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
        cmp edx, 5
        ; Exact mapped bytes 75 0C: jne 0x585e83e3
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 0fah
        ; Exact mapped bytes EB 0A: jmp 0x585e83ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0fah
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 7D FA FF: call 0x58590180
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7A: jmp 0x585e84a9
        __asm _emit 0xeb
        __asm _emit 0x7a
        push 2710h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 7D FA FF: call 0x58590180
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 E5 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 5C: jne 0x585e84a9
        __asm _emit 0x75
        __asm _emit 0x5c
        push 1
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 7C FA FF: call 0x58590130
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 06: je 0x585e8467
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 22: jne 0x585e8489
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 220dch]
        mov dword ptr [ebp - 108h], eax
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 AA 72 F9 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x585e84a9
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 220dch]
        mov dword ptr [ebp - 10ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 88 72 F9 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9D 8B 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8b
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
