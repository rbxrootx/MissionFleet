// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869E3D0 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_5869e3d0_5869E3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x5869e509
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 75 29: jne 0x5869e417
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A FD FF FF: call 0x5869e180
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5869e412
        __asm _emit 0x74
        __asm _emit 0x18
        push 1eh
        push 0
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 30 06 96 58: mov ecx, dword ptr [0x58960630]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F A8 F7 FF: call 0x58618c90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5869e504
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 75 13: jne 0x5869e435
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x5869e504
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x5869e504
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80011034h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 E5 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe5
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E8 08 28 1B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 4B: je 0x5869e4bb
        __asm _emit 0x74
        __asm _emit 0x4b
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 66 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x66
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2B D9 11 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 65 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes EB 49: jmp 0x5869e504
        __asm _emit 0xeb
        __asm _emit 0x49
        push 6
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 65 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E0 D8 11 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0x11
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 65 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x5869e6d1
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x5869e5ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 75 39: jne 0x5869e557
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28ch], 0
        ; Exact mapped bytes 75 2B: jne 0x5869e555
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b052ch
        ; Exact mapped bytes E8 BC 3A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 6A E3 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6E: jmp 0x5869e5c5
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 75 2D: jne 0x5869e58f
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b0558h
        ; Exact mapped bytes E8 84 3A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 6A E3 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x5869e5c5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 75 2B: jne 0x5869e5c5
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b0580h
        ; Exact mapped bytes E8 4C 3A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 6A E3 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x5869e6d1
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 15: jne 0x5869e5e5
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 5A E3 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5a
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x5869e6d1
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 63h
        ; Exact mapped bytes 75 0E: jne 0x5869e5f9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 03 00 00: call 0x5869e9c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5869e6d1
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 64h
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5869e6d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80011034h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 E3 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe3
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E8 49 26 1B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 4B: je 0x5869e67a
        __asm _emit 0x74
        __asm _emit 0x4b
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 64 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6C D7 11 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 64 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        nop
        ; Exact mapped bytes EB 49: jmp 0x5869e6c3
        __asm _emit 0xeb
        __asm _emit 0x49
        push 6
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 63 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 21 D7 11 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0x11
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 63 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        nop
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
