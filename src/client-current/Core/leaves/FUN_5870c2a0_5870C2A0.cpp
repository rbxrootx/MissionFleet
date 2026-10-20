// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870C2A0 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_5870c2a0_5870C2A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x5870c402
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x5870c3e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 20f4h]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 74 0C: je 0x5870c2e2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 20f4h], 0
        ; Exact mapped bytes 75 07: jne 0x5870c2e9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x5870c490
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 F6 20 00 00: mov cx, word ptr [eax + 0x20f6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 20f6h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 BC DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5870c3c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0fb1h
        ; Exact mapped bytes 7F 26: jg 0x5870c350
        __asm _emit 0x7f
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 0fb1h
        ; Exact mapped bytes 74 3A: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp - 0ch], 403h
        ; Exact mapped bytes 74 31: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 0ch], 7d8h
        ; Exact mapped bytes 74 28: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 0bd2h
        ; Exact mapped bytes 74 1F: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes EB 3E: jmp 0x5870c38e
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp - 0ch], 139fh
        ; Exact mapped bytes 74 14: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 0ch], 1787h
        ; Exact mapped bytes 74 0B: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 1b71h
        ; Exact mapped bytes 74 02: je 0x5870c36d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5870c38e
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 7E AE DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 3e8h
        push 0
        push 133h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 35 54 DD FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x5870c3c7
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes E8 5D AE DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 33ch
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 33ch
        push ecx
        push 133h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FA 53 DD FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x53
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x5870c3e2
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 22 AE DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 72h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8F C9 DC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x5870c3fd
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 75 0E: jne 0x5870c3fd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x5870c48e
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 70: jne 0x5870c478
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 2D: jne 0x5870c440
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b3ec0h
        ; Exact mapped bytes E8 D3 5B E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5b
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes E8 B3 8B DC FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8b
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x5870c476
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 75 2B: jne 0x5870c476
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b3eech
        ; Exact mapped bytes E8 9B 5B E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5b
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes E8 7B 8B DC FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8b
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x5870c48e
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x5870c48e
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 7B DC FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7b
        __asm _emit 0xdc
        __asm _emit 0xff
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
