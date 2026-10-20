// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E21C0 .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_586e21c0_586E21C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 318h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 30ch], ecx
        push 300h
        push 0
        lea eax, [ebp - 304h]
        push eax
        ; Exact mapped bytes E8 24 AC 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 9C DA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9c
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 11: jmp 0x586e2213
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 23 9F DA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        cmp dword ptr [ebp - 308h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x586e22e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 25 9F DA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9f
        __asm _emit 0xda
        __asm _emit 0xff
        movzx ecx, word ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x586e22de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 4F DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4f
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 7
        ; Exact mapped bytes 75 3C: jne 0x586e228a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 30ch]
        add eax, 298h
        push eax
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 9B 7E DC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7e
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        add ecx, 198h
        push ecx
        push 588b273ch
        lea edx, [ebp - 304h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        ; Exact mapped bytes EB 2D: jmp 0x586e22b7
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 6B 7E DC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7e
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 30ch]
        add eax, 198h
        push eax
        push 588b274ch
        lea ecx, [ebp - 304h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 30ch]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 310h], eax
        lea ecx, [ebp - 304h]
        push ecx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 15 6D 06 00: call 0x58748ff0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x586e22e3
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F FF FF FF: jmp 0x586e2202
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x586e2395
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 4E DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 1
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x586e2395
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 4E DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x586e2395
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 4E DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 3
        ; Exact mapped bytes 74 60: je 0x586e2395
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 46 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x586e2395
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 46 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA 9D DA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9d
        __asm _emit 0xda
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 8]
        cmp eax, edx
        ; Exact mapped bytes 75 37: jne 0x586e2395
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 8D 4E DF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        push 588b2754h
        ; Exact mapped bytes E8 7D FC E3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 314h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 314h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 DC 69 DF FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x69
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B1 EC 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
