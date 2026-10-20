// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860ADA0 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_5860ada0_5860ADA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5860ae64
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 15 C4 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        push 1c5h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7B DF EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 E4 EA FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E1 C1 05 00: call 0x58666ff0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 C1 EC FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E7 23 05 00: call 0x5865d210
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0f230h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x5860b068
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 FA 01 00 00: jne 0x5860b068
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 74 1B: je 0x5860aea0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x5860af78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 30: jne 0x5860aed6
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 45 C3 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 588adf40h
        ; Exact mapped bytes E8 38 71 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push 28h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A0 DE EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5860af73
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 20: jne 0x5860aefc
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 0F C3 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        push 0
        push 1c6h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 77 DE EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 77: jmp 0x5860af73
        __asm _emit 0xeb
        __asm _emit 0x77
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 20: jne 0x5860af22
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 E9 C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 0
        push 0
        push 1c8h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 51 DE EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x5860af73
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 20: jne 0x5860af48
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 C3 C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 0
        push 0
        push 1c7h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2B DE EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x5860af73
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes E8 A3 C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 588adf64h
        ; Exact mapped bytes E8 96 70 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 50h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 FE DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x5860b068
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 30: jne 0x5860afae
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 6D C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 588adf88h
        ; Exact mapped bytes E8 60 70 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x70
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C8 DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x5860b068
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 2C: jne 0x5860afe0
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes E8 37 C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        push 0
        push 0
        push 1c6h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 96 DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5860b068
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 28: jne 0x5860b00e
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes E8 05 C2 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        push 0
        push 0
        push 1c8h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 65 DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5A: jmp 0x5860b068
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 29: jne 0x5860b03d
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 D7 C1 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        push 0
        push 0
        push 1c7h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 36 DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x5860b068
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes E8 AE C1 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 588adfach
        ; Exact mapped bytes E8 A1 6F F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6f
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        push 28h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 09 DD EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 8D 54 EC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D2 5F 22 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5f
        __asm _emit 0x22
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
