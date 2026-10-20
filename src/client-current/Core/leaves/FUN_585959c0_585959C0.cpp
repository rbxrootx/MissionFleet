// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585959C0 .. +0x308 bytes.
extern "C" __declspec(naked) void FUN_585959c0_585959C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 05: jne 0x585959d4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EC 02 00 00: jmp 0x58595cc0
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 5C 02 00 00: jne 0x58595c3a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585959f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 0F 8D 3B 02 00 00: jge 0x58595c35
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 7f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes 0F 85 1E 02 00 00: jne 0x58595c30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 3B F5 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        imul edx, dword ptr [ebp - 4], 0e84h
        movzx eax, byte ptr [edx + 588f4f92h]
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x58595aec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58595aea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x58595a54
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 66 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58595aea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 64 EF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FF D8 F2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 40: jne 0x58595ac1
        __asm _emit 0x75
        __asm _emit 0x40
        imul edx, dword ptr [ebp - 4], 0e84h
        movzx eax, byte ptr [edx + 588f4f92h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 6B F6 FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58595adc
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CC D8 F2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, dword ptr [ebp - 4], 0e84h
        movzx ecx, byte ptr [eax + 588f4f92h]
        cmp edx, ecx
        ; Exact mapped bytes 74 1B: je 0x58595adc
        __asm _emit 0x74
        __asm _emit 0x1b
        imul edx, dword ptr [ebp - 4], 0e84h
        movzx eax, word ptr [edx + 588f4f90h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 2C 00 00: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58595ae5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 05: jmp 0x58595aea
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x58595a49
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58595af3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58595c12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 4], 0e84h
        movzx edx, byte ptr [ecx + 588f4f92h]
        shl edx, 8
        imul eax, dword ptr [ebp - 4], 0e84h
        movzx ecx, byte ptr [eax + 588f4f93h]
        or edx, ecx
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 34h], 80h
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 10h], 588ab02ch
        lea edx, [ebp - 0ch]
        push edx
        push 0f003fh
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58595b7c
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588aaf97h
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 4
        lea ecx, [ebp - 14h]
        push ecx
        push 4
        push 0
        push 588ab054h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x58595bda
        __asm _emit 0x74
        __asm _emit 0x41
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588ab05ch
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea eax, [ebp - 14h]
        push eax
        push 4
        push 0
        push 588ab064h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, word ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 92 13 00: call 0x586ceec0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC DC F9 FF: call 0x585338e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 8B FE FF: call 0x5857e7b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58595c2e
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 D9 15 F4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 43 31 F4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58595c35
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B2 FD FF FF: jmp 0x585959e7
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58595cc0
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 02: jne 0x58595c42
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7E: jmp 0x58595cc0
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 75 63: jne 0x58595cab
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x58595ca9
        __asm _emit 0x74
        __asm _emit 0x58
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 16: jne 0x58595c6d
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 3C: jmp 0x58595ca9
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 36: jne 0x58595ca9
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes A1 F8 1F 96 58: mov eax, dword ptr [0x58961ff8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes A1 64 20 96 58: mov eax, dword ptr [0x58962064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 30h], eax
        push 1
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 15: jmp 0x58595cc0
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 0ch], 0eeach
        ; Exact mapped bytes 75 0C: jne 0x58595cc0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0ad8h], edx
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
