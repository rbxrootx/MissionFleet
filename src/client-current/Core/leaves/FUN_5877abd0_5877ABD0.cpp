// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877ABD0 .. +0x2E5 bytes.
extern "C" __declspec(naked) void FUN_5877abd0_5877ABD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0c8h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 78: jne 0x5877ac67
        __asm _emit 0x75
        __asm _emit 0x78
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 0cch], edx
        push 505050h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 C7 B4 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 0d4h], edx
        push 588b58dch
        ; Exact mapped bytes E8 B3 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        push 505050h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 9F 69 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x5877ad48
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        push 0
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 9C 21 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + 40ch], 1
        push 588b58f8h
        ; Exact mapped bytes E8 5F 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        push 588b5918h
        ; Exact mapped bytes E8 4C 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        push 588b5938h
        ; Exact mapped bytes E8 39 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        push 588b5960h
        ; Exact mapped bytes E8 26 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp + ecx*4 - 0b8h]
        mov dword ptr [ebp - 0d8h], edx
        push 588b5984h
        ; Exact mapped bytes E8 03 73 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + ecx + 11ch]
        mov dword ptr [ebp - 0e0h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 B9 68 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 9C D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 9C D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov edx, dword ptr [ebp + 14h]
        sub edx, ecx
        cmp edx, 1
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x5877aea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 4F: jne 0x5877adcc
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx + ecx + 11ch]
        mov dword ptr [ebp - 0e8h], eax
        push 588b599ch
        ; Exact mapped bytes E8 4E 72 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x72
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        push 505050h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 3A 68 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x5877aea5
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        push 0
        lea eax, [ebp - 0a4h]
        push eax
        ; Exact mapped bytes E8 34 20 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 40ch], 1
        push 588b59b4h
        ; Exact mapped bytes E8 F7 71 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        push 588b59d0h
        ; Exact mapped bytes E8 E4 71 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov dword ptr [ebp - 0bch], 588b579bh
        mov dword ptr [ebp - 0b8h], 588b579eh
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp + edx*4 - 0c4h]
        mov dword ptr [ebp - 0ech], eax
        push 588b59f0h
        ; Exact mapped bytes E8 AD 71 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        lea ecx, [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 0f4h], edx
        push 0ffffffh
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 5C 67 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A1 61 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
