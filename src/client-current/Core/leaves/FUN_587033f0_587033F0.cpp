// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587033F0 .. +0x2DF bytes.
extern "C" __declspec(naked) void FUN_587033f0_587033F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 26 D9 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5870343c
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 35 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5870343c
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 35 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 9B D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x5870343c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 35 3D DD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 93 15 D8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 32 43 FB FF: call 0x586b77c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 93 22 D9 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 3D DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 42: je 0x587034f5
        __asm _emit 0x74
        __asm _emit 0x42
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED DB E5 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 15 D8 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 76 25: jbe 0x587034f5
        __asm _emit 0x76
        __asm _emit 0x25
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 DB E5 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 D7 FF FF: call 0x58700c70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5870350a
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 25 D9 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x25
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58703521
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 B7 FE E1 FF: call 0x585233d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 6
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x587035e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
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
        ; Exact mapped bytes E8 69 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x587035e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
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
        ; Exact mapped bytes E8 4E 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 73: je 0x587035e1
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 5
        ; Exact mapped bytes 74 5C: je 0x587035e1
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 45: je 0x587035e1
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 3C DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 2E: je 0x587035e1
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 3B DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3b
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 10h
        ; Exact mapped bytes 74 17: je 0x587035e1
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 3B DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3b
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 7C: jne 0x5870365d
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 40 FE E1 FF: call 0x58523440
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 7B 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 21 FE E1 FF: call 0x58523440
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 72 1D: jb 0x58703640
        __asm _emit 0x72
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 73 1F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5870365b
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 2ch], eax
        push -64h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 56 1F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6C: jmp 0x587036c9
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0F 7B 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 3e8h
        idiv ecx
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587036ae
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 34h], ecx
        push -64h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 05 1F 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x587036c9
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0dch]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E8 1E 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
